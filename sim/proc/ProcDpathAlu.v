//========================================================================
// Proc Datapath ALU
//========================================================================

`ifndef PROC_PROC_DPATH_ALU_V
`define PROC_PROC_DPATH_ALU_V

`include "vc/arithmetic.v"

module proc_ProcDpathAlu
(
  input  logic [31:0] in0,
  input  logic [31:0] in1,
  input  logic [ 6:0] fn,
  output logic [31:0] out,
  output logic        ops_eq,
  output logic        ops_lt,
  output logic        ops_ltu
);

  // number of bits needed to describe alu function 
  // (fn width minus 2, since the 2 most significant bits are used for word size)
  localparam fn_width = 7'd5;

  localparam alu_add  = 7'd0;
  localparam alu_sub  = 7'd1;
  localparam alu_sll  = 7'd2;
  localparam alu_or   = 7'd3;
  localparam alu_lt   = 7'd4;
  localparam alu_ltu  = 7'd5;
  localparam alu_and  = 7'd6;
  localparam alu_xor  = 7'd7;
  localparam alu_nor  = 7'd8;
  localparam alu_srl  = 7'd9;
  localparam alu_sra  = 7'd10;
  localparam alu_cp0  = 7'd11; // copy in0
  localparam alu_cp1  = 7'd12; // copy in1
  localparam alu_adz  = 7'd13; // special case for JALR

  // 8 bit function codes
  localparam alu_add8  = alu_add + (1 << fn_width);
  localparam alu_sub8  = alu_sub + (1 << fn_width);
  localparam alu_sll8  = alu_sll + (1 << fn_width);
  localparam alu_lt8   = alu_lt  + (1 << fn_width);
  localparam alu_max8   = alu_or  + (1 << fn_width);
  
  localparam alu_srl8  = alu_srl + (1 << fn_width);
  localparam alu_sra8  = alu_sra + (1 << fn_width);

  localparam alu_min8   = alu_and  + (1 << fn_width);
  localparam alu_swap8  = alu_xor + (1 << fn_width);

  localparam alu_kadd8  = alu_add + (1 << fn_width) + (1 << (fn_width -1));
  localparam alu_ksub8  = alu_sub + (1 << fn_width) + (1 << (fn_width -1));
  localparam alu_ksll8  = alu_sll + (1 << fn_width) + (1 << (fn_width -1)); 
  localparam alu_ukadd8 = alu_lt  + (1 << fn_width) + (1 << (fn_width -1));
  localparam alu_uksub8 = alu_ltu + (1 << fn_width) + (1 << (fn_width -1));

  localparam alu_umax8 = alu_max8 + (1<<(fn_width -1));
  localparam alu_umin8 = alu_min8 + (1<<(fn_width -1));


  //KHM8

  logic [8:0] sum_31_24 = in0[31:24] + in1[31:24];
  logic [8:0] sum_23_16 = in0[23:16] + in1[23:16];
  logic [8:0] sum_15_8  = in0[15:8]  + in1[15:8] ;
  logic [8:0] sum_7_0   = in0[7:0]   + in1[7:0]  ;

  logic [8:0] diff_31_24 = in0[31:24] - in1[31:24];
  logic [8:0] diff_23_16 = in0[23:16] - in1[23:16];
  logic [8:0] diff_15_8  = in0[15:8]  - in1[15:8] ;
  logic [8:0] diff_7_0   = in0[7:0]   - in1[7:0]  ;

  logic [16:0] sll8_31_24 =  in0[31:24] << in1[26:24];
  logic [16:0] sll8_23_16 =  in0[23:16] << in1[18:16];
  logic [16:0] sll8_15_8 =  in0[15:8] << in1[10:8];
  logic [16:0] sll8_7_0 =  in0[7:0] << in1[2:0];

  always_comb begin

    case ( fn )
      alu_add    : out = in0 + in1;                                // ADD
      alu_sub    : out = in0 - in1;                                // SUB
      alu_sll    : out = in0 << in1[4:0];                          // SLL
      alu_or     : out = in0 | in1;                                // OR
      alu_lt     : out = { 31'b0, ($signed(in0) < $signed(in1)) }; // SLT
      alu_ltu    : out = { 31'b0, (in0 < in1) };                   // SLTU
      alu_and    : out = in0 & in1;                                // AND
      alu_xor    : out = in0 ^ in1;                                // XOR
      alu_nor    : out = ~(in0 | in1);                             // NOR
      alu_srl    : out = in0 >> in1[4:0];                          // SRL
      alu_sra    : out = $signed(in0) >>> in1[4:0];                // SRA
      alu_cp0    : out = in0;                                      // CP OP0
      alu_cp1    : out = in1;                                      // CP OP1
      alu_adz    : begin
                    out = in0 + in1;
                    out[0] = 1'b0;
                  end

      // 8-bit subword functions
      alu_add8    : out = {{in0[31:24] + in1[31:24]}, {in0[23:16] + in1[23:16]}, 
                      {in0[15:8] + in1[15:8]}, {in0[7:0] + in1[7:0]}};  // ADD8
      alu_sub8    : out = {{in0[31:24] - in1[31:24]}, {in0[23:16] - in1[23:16]}, 
                      {in0[15:8] - in1[15:8]}, {in0[7:0] - in1[7:0]}};  // SUB8
      alu_sll8    : out = {{in0[31:24] << in1[26:24]}, {in0[23:16] << in1[18:16]}, 
                      {in0[15:8] << in1[10:8]}, {in0[7:0] << in1[2:0]}};
      alu_max8    : begin
                    out[31:24] = ($signed(in0[31:24]) < $signed(in1[31:24]))? in1[31:24] : in0[31:24];
                    out[23:16] = ($signed(in0[23:16]) < $signed(in1[23:16]))? in1[23:16] : in0[23:16];
                    out[15:8] = ($signed(in0[15:8]) < $signed(in1[15:8]))? in1[15:8] : in0[15:8];
                    out[7:0] = ($signed(in0[7:0]) < $signed(in1[7:0]))? in1[7:0] : in0[7:0];
                    end
       

      alu_lt8     : out = {8{($signed(in0[31:24]) < $signed(in1[31:24]))}, 8{($signed(in0[23:16]) < $signed(in1[23:16]))},
                      8{($signed(in0[15:8]) < $signed(in1[15:8]))}, 8{($signed(in0[7:0]) < $signed(in1[7:0]))}};   // SCMPLT8
      
      alu_ltu8    : out = {8{in0[31:24] < in1[31:24]}, 8{in0[23:16] < in1[23:16]},
                      8{in0[15:8] < in1[15:8]}, 8{in0[7:0] < in1[7:0]}};   // UCMPLT8
      
      alu_min8    : begin
                    out[31:24] = ($signed(in0[31:24]) > $signed(in1[31:24]))? in1[31:24] : in0[31:24];
                    out[23:16] = ($signed(in0[23:16]) > $signed(in1[23:16]))? in1[23:16] : in0[23:16];
                    out[15:8] = ($signed(in0[15:8]) > $signed(in1[15:8]))? in1[15:8] : in0[15:8];
                    out[7:0] = ($signed(in0[7:0]) > $signed(in1[7:0]))? in1[7:0] : in0[7:0];
                    end
      
      alu_swap8   : out = {in0[23:16],in0[31:24], in0[7:0], in0[15:8]};
      
      alu_srl8    : out = {{in0[31:24] >> in1[26:24]}, {in0[23:16] >> in1[18:16]}, 
                      {in0[15:8] >> in1[10:8]}, {in0[7:0] >> in1[2:0]}};
      alu_sra8    : out = {{$signed(in0[31:24]) >> in1[26:24]}, {$signed(in0[23:16]) >> in1[18:16]}, 
                      {$signed(in0[15:8]) >> in1[10:8]}, {$signed(in0[7:0]) >> in1[2:0]}};
      
      alu_kadd8   : begin
        out[31:24] = (sum_31_24[8] == sum_31_24[7])? sum_31_24[7:0] : {sum_31_24[8], 7{sum_31_24[7]}};
        out[23:16] = (sum_23_16[8] == sum_23_16[7])? sum_23_16[7:0] : {sum_23_16[8], 7{sum_23_16[7]}};
        out[15:8]  = (sum_15_8[8]  == sum_15_8[7] )? sum_15_8[7:0]  : {sum_15_8[8] , 7{sum_15_8[7] }};
        out[7: 0]  = (sum_7_0[8]   == sum_7_0[7]  )? sum_7_0[7:0]   : {sum_7_0[8]  , 7{sum_7_0[7]  }};
      end

      alu_ksub8   : begin
        out[31:24] = (diff_31_24[8] == diff_31_24[7])? diff_31_24[7:0] : {diff_31_24[8], 7{diff_31_24[7]}};
        out[23:16] = (diff_23_16[8] == diff_23_16[7])? diff_23_16[7:0] : {diff_23_16[8], 7{diff_23_16[7]}};
        out[15:8]  = (diff_15_8[8]  == diff_15_8[7] )? diff_15_8[7:0]  : {diff_15_8[8] , 7{diff_15_8[7] }};
        out[7: 0]  = (diff_7_0[8]   == diff_7_0[7]  )? diff_7_0[7:0]   : {diff_7_0[8]  , 7{diff_7_0[7]  }};
      end

      alu_ksll8 : begin
                  if($signed(sll8_31_24[7+sa:0]) > 127 ) out[31:24] = 8'h_7f;
                  else if ($signed(sll8_31_24[7+sa:0]) < -127 ) out[31:24] = 8'h_80;
                  else out[31:24] = sll8_31_24;
                  if($signed(sll8_23_16[7+sa:0]) > 127 ) out[23:16] = 8'h_7f;
                  else if ($signed(sll8_23_16[7+sa:0]) < -127 ) out[23:16] = 8'h_80;
                  else out[23:16] = sll8_23_16;
                  if($signed(sll8_15_8[7+sa:0]) > 127 ) out[15:8] = 8'h_7f;
                  else if ($signed(sll8_15_8[7+sa:0]) < -127 ) out[15:8] = 8'h_80;
                  else out[15:8] = sll8_15_8;
                  if($signed(sll8_7_0[7+sa:0]) > 127 ) out[7:0] = 8'h_7f;
                  else if ($signed(sll8_7_0[7+sa:0]) < -127 ) out[7:0] = 8'h_80;
                  else out[7:0] = sll8_7_0;
      end

      alu_ukadd8   : begin
        out[31:24] = (sum_31_24[8] == 1'b1)? 0xff : sum_31_24[7:0];
        out[23:16] = (sum_23_16[8] == 1'b1)? 0xff : sum_23_16[7:0];
        out[15:8]  = (sum_15_8[8]  == 1'b1)? 0xff : sum_15_8[7:0] ;
        out[7: 0]  = (sum_7_0[8]   == 1'b1)? 0xff : sum_7_0[7:0]  ;
      end
      
      alu_uksub8   : begin
        out[31:24] = (in0[31:24] < in1[31:24])? 8'b0 : diff_31_24[7:0];
        out[23:16] = (in0[23:16] < in1[23:16])? 8'b0 : diff_23_16[7:0];
        out[15:8]  = (in0[15: 8] < in1[15: 8])? 8'b0 : diff_15_8[7:0] ;
        out[7: 0]  = (in0[ 7: 0] < in1[ 7: 0])? 8'b0 : diff_7_0[7:0]  ;
      end

      alu_umax8   : begin
                    out[31:24] = (in0[31:24] < in1[31:24])? in1[31:24] : in0[31:24];
                    out[23:16] = (in0[23:16] < in1[23:16])? in1[23:16] : in0[23:16];
                    out[15:8] = (in0[15:8] < in1[15:8])? in1[15:8] : in0[15:8];
                    out[7:0] = (in0[7:0] < in1[7:0])? in1[7:0] : in0[7:0];
                    end
      
      alu_umin8   : begin
                    out[31:24] = (in0[31:24] > in1[31:24])? in1[31:24] : in0[31:24];
                    out[23:16] = (in0[23:16] > in1[23:16])? in1[23:16] : in0[23:16];
                    out[15:8] = (in0[15:8] > in1[15:8])? in1[15:8] : in0[15:8];
                    out[7:0] = (in0[7:0] > in1[7:0])? in1[7:0] : in0[7:0];
                    end

      //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

      default : out = 32'b0;
    endcase

  end

  // Calculate equality, zero, negative flags

  vc_EqComparator #(32) cond_eq_comp
  (
    .in0  (in0),
    .in1  (in1),
    .out  (ops_eq)
  );

  assign ops_lt = $signed(in0) < $signed(in1);
  assign ops_ltu = in0 < in1;

endmodule

`endif /* PROC_PROC_DPATH_ALU_V */

