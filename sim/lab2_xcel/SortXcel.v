//=========================================================================
// Sorting Accelerator Implementation
//=========================================================================
// Sort array in memory containing positive integers.
// Accelerator register interface:
//
//  xr0 : go/done
//  xr1 : base address of array
//  xr2 : number of elements in array
//
// Accelerator protocol involves the following steps:
//  1. Write the base address of array via xr1
//  2. Write the number of elements in array via xr2
//  3. Write the base address of stack via xr3
//  4. Tell accelerator to go by writing xr0
//  5. Wait for accelerator to finish by reading xr0, result will be 1
//

`ifndef LAB2_SORT_SORT_XCEL_V
`define LAB2_SORT_SORT_XCEL_V

`include "vc/trace.v"

`include "vc/mem-msgs.v"
`include "vc/xcel-msgs.v"
`include "vc/queues.v"
`include "vc/trace.v"

//=========================================================================
// Sorting Accelerator Implementation
//=========================================================================

module lab2_xcel_SortXcel
(
  input  logic         clk,
  input  logic         reset,

  input  xcel_req_t    xcel_reqstream_msg,
  input  logic         xcel_reqstream_val,
  output logic         xcel_reqstream_rdy,

  output xcel_resp_t   xcel_respstream_msg,
  output logic         xcel_respstream_val,
  input  logic         xcel_respstream_rdy,

  output mem_req_4B_t  mem_reqstream_msg,
  output logic         mem_reqstream_val,
  input  logic         mem_reqstream_rdy,

  input  mem_resp_4B_t mem_respstream_msg,
  input  logic         mem_respstream_val,
  output logic         mem_respstream_rdy
);

  // 4-state sim fix: force outputs to be zero if invalid

  xcel_resp_t  xcel_respstream_msg_raw;
  mem_req_4B_t mem_reqstream_msg_raw;

 assign xcel_respstream_msg = xcel_respstream_msg_raw & {33{xcel_respstream_val}};
 assign mem_reqstream_msg   = mem_reqstream_msg_raw & {78{mem_reqstream_val}};

  // Accelerator ports and queues

  logic      xcelreq_deq_val;
  logic      xcelreq_deq_rdy;
  xcel_req_t xcelreq_deq_msg;

  vc_Queue#(`VC_QUEUE_BYPASS,$bits(xcel_req_t),1) xcelreq_q
  (
    .clk     (clk),
    .reset   (reset),
    .num_free_entries(),

    .enq_val (xcel_reqstream_val),
    .enq_rdy (xcel_reqstream_rdy),
    .enq_msg (xcel_reqstream_msg),

    .deq_val (xcelreq_deq_val),
    .deq_rdy (xcelreq_deq_rdy),
    .deq_msg (xcelreq_deq_msg)
  );

  // Memory ports and queues

  logic         memresp_deq_val;
  logic         memresp_deq_rdy;
  mem_resp_4B_t memresp_deq_msg;

  logic deq_write_resp;
  assign deq_write_resp = ( memresp_deq_msg.type_ == `VC_MEM_RESP_MSG_TYPE_WRITE );

  logic memresp_read_deq_val;
  assign memresp_read_deq_val = memresp_deq_val && ( memresp_deq_msg.type_ == `VC_MEM_RESP_MSG_TYPE_READ );


  assign memresp_deq_val = mem_respstream_val;
  assign mem_respstream_rdy = memresp_deq_rdy | deq_write_resp;
  assign memresp_deq_msg = mem_respstream_msg;

  logic         mem_reqstream_enq_val;
  logic         mem_reqstream_enq_rdy;
  mem_req_4B_t mem_reqstream_enq_msg_raw;

  vc_Queue#(`VC_QUEUE_PIPE,$bits(mem_req_4B_t),1) memreq_q
  (
    .clk     (clk),
    .reset   (reset),
    .num_free_entries(),

    .enq_val (mem_reqstream_enq_val),
    .enq_rdy (mem_reqstream_enq_rdy),
    .enq_msg (mem_reqstream_enq_msg_raw),

    .deq_val (mem_reqstream_val),
    .deq_rdy (mem_reqstream_rdy),
    .deq_msg (mem_reqstream_msg_raw)
  );

  // Extra state registers

  logic [15:0] idx_i,         idx_i_in;
  logic [31:0] idx_j,         idx_j_in;
  logic [15:0] arr_low,       arr_low_in;
  logic [15:0] arr_high,      arr_high_in;
  logic [31:0] arr_val_1,     arr_val_1_in;
  logic [31:0] arr_val_2,     arr_val_2_in;
  logic [31:0] pivot,         pivot_in;
  logic [31:0] size,          size_in;
  logic [31:0] base_src,      base_src_in;
  logic [31:0] stack_src,     stack_src_in;

  // quicksort stack registers
  logic [31:0] top,           top_in;
  logic [4:0]  wr_ctr,        wr_ctr_in;

  always_ff @(posedge clk) begin
    idx_i         <= idx_i_in;
    idx_j         <= idx_j_in;
    arr_low       <= arr_low_in;
    arr_high      <= arr_high_in;
    arr_val_1     <= arr_val_1_in;
    arr_val_2     <= arr_val_2_in;
    pivot         <= pivot_in;
    size          <= size_in;
    base_src      <= base_src_in;
    stack_src     <= stack_src_in;
    top           <= top_in;
    wr_ctr        <= wr_ctr_in;
  end

  //======================================================================
  // State Update
  //======================================================================

  typedef enum logic [$clog2(13)-1:0] {
    STATE_XCFG,               // 0
    STATE_M_RD_STACK,         // 1
    STATE_M_RD_STACK_RESP,    // 2
    STATE_M_RD_PIVOT,         // 3
    STATE_M_RD_PIVOT_RESP,    // 4
    STATE_M_RD2,              // 5
    STATE_CALC,               // 6
    STATE_M_RD_I,             // 7
    STATE_M_RD_I_RESP,        // 8
    STATE_M_SWAP1,            // 9
    STATE_M_SWAP2,            // 10
    STATE_UPDATE_IJ,          // 11
    STATE_M_WR_LOW            // 12
  } state_t;

  state_t state_reg;

  logic go;

  always_ff @(posedge clk) begin

    if ( reset )
      state_reg <= STATE_XCFG;
    else begin
      state_reg <= state_reg;

      case ( state_reg )

        STATE_XCFG:
          if ( go && xcel_respstream_rdy )
            state_reg <= STATE_M_RD_PIVOT;

        STATE_M_RD_STACK:
          if ( top >= 1 && mem_reqstream_enq_rdy )
            state_reg <= STATE_M_RD_STACK_RESP;
          else if ( top < 1 && wr_ctr_in == 0 )
            state_reg <= STATE_XCFG;

        STATE_M_RD_STACK_RESP:
          if ( memresp_read_deq_val )
            state_reg <= STATE_M_RD_PIVOT;

        STATE_M_RD_PIVOT:
          if ( mem_reqstream_enq_rdy  )
            state_reg <= STATE_M_RD_PIVOT_RESP;

        STATE_M_RD_PIVOT_RESP:
          if ( memresp_read_deq_val )
            state_reg <= STATE_M_RD2;

        STATE_M_RD2:
          if ( mem_reqstream_enq_rdy )
            state_reg <= STATE_CALC;

        STATE_CALC:
          if ( memresp_read_deq_val )
            if ( arr_val_2_in < pivot && idx_i_in != idx_j )
              state_reg <= STATE_M_RD_I;
            else 
              state_reg <= STATE_UPDATE_IJ;

        STATE_M_RD_I:
          if ( mem_reqstream_enq_rdy  )
            state_reg <= STATE_M_RD_I_RESP;

        STATE_M_RD_I_RESP:
          if ( memresp_read_deq_val ) begin
            if((idx_j+ 1 >= arr_high) && (idx_i + 2 < arr_high))
              state_reg <= STATE_M_SWAP2;
            else
              state_reg <= STATE_M_SWAP1;
          end

        STATE_M_SWAP1:
          if ( mem_reqstream_enq_rdy ) begin
              state_reg <= STATE_M_SWAP2;
          end

        STATE_M_SWAP2:
          if ( mem_reqstream_enq_rdy ) begin
            if ( idx_j + 1 >= arr_high ) begin
              if( (idx_i > arr_low + 1) && (idx_i + 2 < arr_high) ) 
                state_reg <= STATE_M_WR_LOW;
                else if ((idx_i > arr_low + 1) && (idx_i + 2 >= arr_high)) begin
                  state_reg <=  STATE_M_RD_PIVOT;
                end 
                else if ((idx_i <= arr_low + 1) && (idx_i + 2 < arr_high))begin
                  state_reg <=  STATE_M_RD2;
                end

              else
                state_reg <= STATE_M_RD_STACK;
            end else 
              state_reg <=  STATE_UPDATE_IJ; 
          end

        STATE_UPDATE_IJ:
          if ( idx_j + 2 >= arr_high )
            state_reg <= STATE_M_RD_I;
          else
            state_reg <= STATE_M_RD2;
          
        STATE_M_WR_LOW:
          if ( mem_reqstream_enq_rdy ) begin
            if ( idx_i + 2 < arr_high ) begin
              state_reg <= STATE_M_RD2;
            end
            else 
              state_reg <= STATE_M_RD_STACK;
          end

        default:
          state_reg <= STATE_XCFG;
     
      endcase
    end
  end

  //======================================================================
  // State Outputs
  //======================================================================

  // Temporary
  logic [31:0] base_addr;

  always_comb begin

    xcelreq_deq_rdy = 0;
    xcel_respstream_val    = 0;
    mem_reqstream_enq_val  = 0;
    memresp_deq_rdy = 0;
    go              = 0;
    mem_reqstream_enq_msg_raw = 0;
    xcel_respstream_msg_raw = 0;

    base_src_in    = base_src;
    size_in        = size;
    idx_i_in       = idx_i;
    idx_j_in       = idx_j;
    arr_val_1_in   = arr_val_1;
    arr_val_2_in   = arr_val_2;
    top_in         = top;
    arr_high_in    = arr_high;
    arr_low_in     = arr_low;
    pivot_in       = pivot;
    stack_src_in   = stack_src;
    wr_ctr_in      = wr_ctr;

  if ( mem_respstream_val && ( memresp_deq_msg.type_ == 3'b001) && mem_respstream_rdy)
    wr_ctr_in = wr_ctr - 1;

    //--------------------------------------------------------------------
    // STATE: XCFG
    //--------------------------------------------------------------------
    // In this state we handle the accelerator configuration protocol,
    // where we write the base addresses, size, and then tell the
    // accelerator to start. We also handle responding when the
    // accelerator is done.

    if ( state_reg == STATE_XCFG ) begin
      xcelreq_deq_rdy = xcel_respstream_rdy;
      xcel_respstream_val    = xcelreq_deq_val;
      idx_i_in      = -1;
      idx_j_in      = 0;
      arr_val_1_in  = 0;
      arr_val_2_in  = 0;
      arr_low_in    = 0;
      arr_high_in   = size;
      top_in        = 0;
      wr_ctr_in     = 0;

      if ( xcelreq_deq_val ) begin

        // Send xcel response message, obviously you only want to
        // send the response message when accelerator is done

        if ( xcelreq_deq_msg.type_ == `VC_XCEL_REQ_MSG_TYPE_READ ) begin
          xcel_respstream_msg_raw.type_ = `VC_XCEL_RESP_MSG_TYPE_READ;
          xcel_respstream_msg_raw.data  = 32'b1;
        end
        else begin
          if ( xcelreq_deq_msg.addr == 0 ) begin
            go            = 1;

          end
          else if ( xcelreq_deq_msg.addr == 1 )
            base_src_in = xcelreq_deq_msg.data;

          else if ( xcelreq_deq_msg.addr == 2 )
            size_in = xcelreq_deq_msg.data;

          else if ( xcelreq_deq_msg.addr == 3 )
            stack_src_in = xcelreq_deq_msg.data;

          xcel_respstream_msg_raw.type_ = `VC_XCEL_RESP_MSG_TYPE_WRITE;
          xcel_respstream_msg_raw.data  = 0;
        end
      end
    end

    //--------------------------------------------------------------------
    // STATE: M_RD
    //--------------------------------------------------------------------
    // Memory read stage. Send memory request to read src[i].

    else if ( state_reg == STATE_M_RD_STACK) 
    begin
      if ( top >= 1 ) begin 
        mem_reqstream_enq_val = 1;
        if ( mem_reqstream_enq_rdy ) begin
          mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_READ;
          mem_reqstream_enq_msg_raw.addr  = stack_src + ((top) << 2);
          mem_reqstream_enq_msg_raw.len   = 0;

        end 
      end 
    end
    else if ( state_reg == STATE_M_RD_STACK_RESP )
    begin
      memresp_deq_rdy = 1;
      if ( memresp_read_deq_val ) begin
        arr_low_in = memresp_deq_msg.data[15:0]; 
        arr_high_in = memresp_deq_msg.data[31:16]; 
        top_in = top - 1;
        idx_i_in = memresp_deq_msg.data[15:0] - 1;
        idx_j_in = memresp_deq_msg.data[15:0];
      end
    end 
    else if ( state_reg == STATE_M_RD_PIVOT )
    begin
      mem_reqstream_enq_val = 1;
      if ( mem_reqstream_enq_rdy ) begin
        mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_READ;
        mem_reqstream_enq_msg_raw.addr  = base_src + ((arr_high - 1) << 2);
        mem_reqstream_enq_msg_raw.len   = 0;

      end
    end 
    else if ( state_reg == STATE_M_RD_PIVOT_RESP )
    begin
      memresp_deq_rdy = 1;
      if ( memresp_read_deq_val ) begin
        pivot_in = memresp_deq_msg.data; 
      end
     
    end 
    else if ( state_reg == STATE_M_RD2 )
    begin
      mem_reqstream_enq_val = 1;
      if ( mem_reqstream_enq_rdy ) begin
        mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_READ;
        mem_reqstream_enq_msg_raw.addr  = base_src + ((idx_j) << 2);
        mem_reqstream_enq_msg_raw.len   = 0;
      end
    end 
    //--------------------------------------------------------------------
    // STATE: CALC
    //--------------------------------------------------------------------
    // Wait for memory response to come back, then do accumulate.

    else if ( state_reg == STATE_CALC )
    begin
      memresp_deq_rdy = 1;
      if ( memresp_read_deq_val ) begin
        arr_val_2_in = memresp_deq_msg.data;

        if ( arr_val_2_in < pivot ) begin
          idx_i_in = idx_i + 1;
        end
      end
    end
    else if ( state_reg == STATE_M_RD_I )
    begin
      mem_reqstream_enq_val = 1;
      if ( mem_reqstream_enq_rdy ) begin
        mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_READ;
        mem_reqstream_enq_msg_raw.addr  = base_src + ((idx_i) << 2);
        mem_reqstream_enq_msg_raw.len   = 0;

      end
    end 
    else if ( state_reg == STATE_M_RD_I_RESP )
    begin
      memresp_deq_rdy = 1;
      if ( memresp_read_deq_val ) begin
        arr_val_1_in = memresp_deq_msg.data;
      end
     
    end 

    else if ( state_reg == STATE_M_SWAP1 )
    begin
      mem_reqstream_enq_val = 1;

      if ( mem_reqstream_enq_rdy ) begin
        mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_WRITE;
        mem_reqstream_enq_msg_raw.data  = arr_val_1;
        mem_reqstream_enq_msg_raw.addr  = base_src + ((idx_j ) << 2);
        mem_reqstream_enq_msg_raw.len   = 0;
        wr_ctr_in = wr_ctr + 1;
      end 
      
    end
    else if ( state_reg == STATE_M_SWAP2 )
    begin
      mem_reqstream_enq_val = 1;

      if ( mem_reqstream_enq_rdy ) begin
        mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_WRITE;
        mem_reqstream_enq_msg_raw.data  = arr_val_2;
        mem_reqstream_enq_msg_raw.addr  = base_src + ((idx_i) << 2);
        mem_reqstream_enq_msg_raw.len   = 0;
        wr_ctr_in = wr_ctr + 1;

        if ( idx_j +1 >= arr_high ) begin
             if ((idx_i > arr_low + 1) && (idx_i + 2 >= arr_high)) begin
              arr_high_in = idx_i;
              idx_i_in = arr_low - 1;
              idx_j_in = arr_low;
             end
             else if ((idx_i <= arr_low + 1) && (idx_i + 2 < arr_high))begin
              arr_low_in = idx_i + 16'b1;
              idx_j_in = idx_i + 1;
              pivot_in = arr_val_1;
             end
        end
      end
    end

    else if ( state_reg == STATE_UPDATE_IJ )
    begin
        
      if (idx_j + 2 >= arr_high) begin
        arr_val_2_in = pivot;
        idx_i_in = idx_i + 1;
        idx_j_in = idx_j + 32'b1;
      end
      else 
        idx_j_in = idx_j + 32'b1;
    end
    else if ( state_reg == STATE_M_WR_LOW )
    begin
       mem_reqstream_enq_val = 1;

      if ( mem_reqstream_enq_rdy ) begin
        mem_reqstream_enq_msg_raw.type_ = `VC_MEM_REQ_MSG_TYPE_WRITE;
        mem_reqstream_enq_msg_raw.data  = {idx_i, arr_low };
        mem_reqstream_enq_msg_raw.addr  = stack_src + ((top + 1) << 2);
        mem_reqstream_enq_msg_raw.len   = 0;
        top_in = top + 1;
        wr_ctr_in = wr_ctr + 1;

        if (idx_i + 2 < arr_high) begin
          arr_low_in = idx_i + 16'b1; 
          idx_j_in = idx_i + 1;
          pivot_in = arr_val_1;
        end
      end 
    end

  end


  //----------------------------------------------------------------------
  // Line Tracing
  //----------------------------------------------------------------------

  `ifndef SYNTHESIS

  vc_XcelReqMsgTrace xcel_reqstream_msg_trace
  (
    .clk (clk),
    .reset (reset),
    .val   (xcel_reqstream_val),
    .rdy   (xcel_reqstream_rdy),
    .msg   (xcel_reqstream_msg)
  );

  vc_XcelRespMsgTrace xcel_respstream_msg_trace
  (
    .clk (clk),
    .reset (reset),
    .val   (xcel_respstream_val),
    .rdy   (xcel_respstream_rdy),
    .msg   (xcel_respstream_msg)
  );
  
  logic [`VC_TRACE_NBITS-1:0] str;
  `VC_TRACE_BEGIN
  begin
    xcel_reqstream_msg_trace.line_trace( trace_str );

    vc_trace.append_str( trace_str, "(" );

    // ''' LAB TASK ''''''''''''''''''''''''''''''''''''''''''''''''''''''
    // Define line trace here
    // '''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''

    case ( state_reg )
      STATE_XCFG:             vc_trace.append_str( trace_str, "X   " );
      STATE_M_RD_STACK:       vc_trace.append_str( trace_str, "SCK " );
      STATE_M_RD_STACK_RESP:  vc_trace.append_str( trace_str, "SCKR" );
      STATE_M_RD_PIVOT:       vc_trace.append_str( trace_str, "RP  " );
      STATE_M_RD_PIVOT_RESP:  vc_trace.append_str( trace_str, "RPS " );
      STATE_M_RD2:            vc_trace.append_str( trace_str, "RD2 " );
      STATE_CALC:             vc_trace.append_str( trace_str, "C   " );
      STATE_M_RD_I:           vc_trace.append_str( trace_str, "RI  " );
      STATE_M_RD_I_RESP:      vc_trace.append_str( trace_str, "RIS " );
      STATE_M_SWAP1:          vc_trace.append_str( trace_str, "SW1 " );
      STATE_M_SWAP2:          vc_trace.append_str( trace_str, "SW2 " );
      STATE_UPDATE_IJ:        vc_trace.append_str( trace_str, "UIJ " );
      STATE_M_WR_LOW:         vc_trace.append_str( trace_str, "WRL " );
      default:                vc_trace.append_str( trace_str, "?   " );
    endcase

   $sformat( str, " i: %d", idx_i[2:0] );
   vc_trace.append_str( trace_str, str );

   $sformat( str, " j: %d", idx_j[2:0] );
   vc_trace.append_str( trace_str, str );

   $sformat( str, " | %d",  wr_ctr  );
   vc_trace.append_str( trace_str, str );

   $sformat( str, " rsp: %h",  memresp_deq_msg.type_  );
   vc_trace.append_str( trace_str, str );

    vc_trace.append_str( trace_str, ")" );

    xcel_respstream_msg_trace.line_trace( trace_str );
  end
  `VC_TRACE_END

  `endif /* SYNTHESIS */

endmodule

`endif /* LAB2_XCEL_SORT_XCEL_V */
