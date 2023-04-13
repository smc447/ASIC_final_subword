//-------------------------------------------------------------------------
// ProcDpathAluWrapper.v
//-------------------------------------------------------------------------
// This file is generated by PyMTL SystemVerilog translation pass.

// PyMTL VerilogPlaceholder ProcDpathAluWrapper Definition
// Full name: ProcDpathAluWrapper_noparam
// At /home/ezw2/ece5745/ASIC_final_subword/sim/proc/ProcDpathAluWrapper.py

//***********************************************************
// Pickled source file of placeholder ProcDpathAluWrapper_noparam
//***********************************************************

//-----------------------------------------------------------
// Dependency of placeholder ProcDpathAluWrapper
//-----------------------------------------------------------

`ifndef PROCDPATHALUWRAPPER
`define PROCDPATHALUWRAPPER

// The source code below are included because they are specified
// as the v_libs Verilog placeholder option of component ProcDpathAluWrapper_noparam.

// If you get a duplicated def error from files included below, please
// make sure they are included either through the v_libs option or the
// explicit `include statement in the Verilog source code -- if they
// appear in both then they will be included twice!


// End of all v_libs files for component ProcDpathAluWrapper_noparam

`line 1 "proc/ProcDpathAluWrapper.v" 0
//========================================================================
// Proc Datapath ALU wrapper
//========================================================================

`ifndef PROC_PROC_DPATH_ALU_WRAPPER_V
`define PROC_PROC_DPATH_ALU_WRAPPER_V

`line 1 "vc/arithmetic.v" 0
//========================================================================
// Verilog Components: Arithmetic Components
//========================================================================

`ifndef VC_ARITHMETIC_V
`define VC_ARITHMETIC_V

//------------------------------------------------------------------------
// Adders
//------------------------------------------------------------------------

module vc_Adder
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  input  logic               cin,
  output logic [p_nbits-1:0] out,
  output logic               cout
);

  // We need to convert cin into a 32-bit value to
  // avoid verilator warnings

  assign {cout,out} = in0 + in1 + {{(p_nbits-1){1'b0}},cin};

endmodule

module vc_SimpleAdder
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic [p_nbits-1:0] out
);

  assign out = in0 + in1;

endmodule

//------------------------------------------------------------------------
// Subtractor
//------------------------------------------------------------------------

module vc_Subtractor
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic [p_nbits-1:0] out
);

  assign out = in0 - in1;

endmodule

//------------------------------------------------------------------------
// Incrementer
//------------------------------------------------------------------------

module vc_Incrementer
#(
  parameter p_nbits     = 1,
  parameter p_inc_value = 1
)(
  input  logic [p_nbits-1:0] in,
  output logic [p_nbits-1:0] out
);

  assign out = in + p_inc_value;

endmodule

//------------------------------------------------------------------------
// ZeroExtender
//------------------------------------------------------------------------

module vc_ZeroExtender
#(
  parameter p_in_nbits  = 1,
  parameter p_out_nbits = 8
)(
  input  logic [p_in_nbits-1:0]  in,
  output logic [p_out_nbits-1:0] out
);

  assign out = { {( p_out_nbits - p_in_nbits ){1'b0}}, in };

endmodule

//------------------------------------------------------------------------
// SignExtender
//------------------------------------------------------------------------

module vc_SignExtender
#(
 parameter p_in_nbits = 1,
 parameter p_out_nbits = 8
)
(
  input  logic [p_in_nbits-1:0]  in,
  output logic [p_out_nbits-1:0] out
);

  assign out = { {(p_out_nbits-p_in_nbits){in[p_in_nbits-1]}}, in };

endmodule

//------------------------------------------------------------------------
// ZeroComparator
//------------------------------------------------------------------------

module vc_ZeroComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in,
  output logic               out
);

  assign out = ( in == {p_nbits{1'b0}} );

endmodule

//------------------------------------------------------------------------
// EqComparator
//------------------------------------------------------------------------

module vc_EqComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 == in1 );

endmodule

//------------------------------------------------------------------------
// LtComparator
//------------------------------------------------------------------------

module vc_LtComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 < in1 );

endmodule

//------------------------------------------------------------------------
// GtComparator
//------------------------------------------------------------------------

module vc_GtComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 > in1 );

endmodule

//------------------------------------------------------------------------
// LeftLogicalShifter
//------------------------------------------------------------------------

module vc_LeftLogicalShifter
#(
  parameter p_nbits       = 1,
  parameter p_shamt_nbits = 1 )
(
  input  logic       [p_nbits-1:0] in,
  input  logic [p_shamt_nbits-1:0] shamt,
  output logic       [p_nbits-1:0] out
);

  assign out = ( in << shamt );

endmodule

//------------------------------------------------------------------------
// RightLogicalShifter
//------------------------------------------------------------------------

module vc_RightLogicalShifter
#(
  parameter p_nbits       = 1,
  parameter p_shamt_nbits = 1
)(
  input  logic       [p_nbits-1:0] in,
  input  logic [p_shamt_nbits-1:0] shamt,
  output logic       [p_nbits-1:0] out
);

  assign out = ( in >> shamt );

endmodule

`endif /* VC_ARITHMETIC_V */


`line 9 "proc/ProcDpathAluWrapper.v" 0
`line 1 "vc/regs.v" 0
//========================================================================
// Verilog Components: Registers
//========================================================================

// Note that we place the register output earlier in the port list since
// this is one place we might actually want to use positional port
// binding like this:
//
//  logic [p_nbits-1:0] result_B;
//  vc_Reg#(p_nbits) result_AB( clk, result_B, result_A );

`ifndef VC_REGS_V
`define VC_REGS_V

//------------------------------------------------------------------------
// Postive-edge triggered flip-flop
//------------------------------------------------------------------------

module vc_Reg
#(
  parameter p_nbits = 1
)(
  input  logic               clk, // Clock input
  output logic [p_nbits-1:0] q,   // Data output
  input  logic [p_nbits-1:0] d    // Data input
);

  always_ff @( posedge clk )
    q <= d;

endmodule

//------------------------------------------------------------------------
// Postive-edge triggered flip-flop with reset
//------------------------------------------------------------------------

module vc_ResetReg
#(
  parameter p_nbits       = 1,
  parameter p_reset_value = 0
)(
  input  logic               clk,   // Clock input
  input  logic               reset, // Sync reset input
  output logic [p_nbits-1:0] q,     // Data output
  input  logic [p_nbits-1:0] d      // Data input
);

  always_ff @( posedge clk )
    q <= reset ? p_reset_value : d;

endmodule

//------------------------------------------------------------------------
// Postive-edge triggered flip-flop with enable
//------------------------------------------------------------------------

module vc_EnReg
#(
  parameter p_nbits = 1
)(
  input  logic               clk,   // Clock input
  input  logic               reset, // Sync reset input
  output logic [p_nbits-1:0] q,     // Data output
  input  logic [p_nbits-1:0] d,     // Data input
  input  logic               en     // Enable input
);

  always_ff @( posedge clk )
    if ( en )
      q <= d;

  // Assertions

  `ifndef SYNTHESIS

  /*
  always_ff @( posedge clk )
    if ( !reset )
      `VC_ASSERT_NOT_X( en );
  */

  `endif /* SYNTHESIS */

endmodule

//------------------------------------------------------------------------
// Postive-edge triggered flip-flop with enable and reset
//------------------------------------------------------------------------

module vc_EnResetReg
#(
  parameter p_nbits       = 1,
  parameter p_reset_value = 0
)(
  input  logic               clk,   // Clock input
  input  logic               reset, // Sync reset input
  output logic [p_nbits-1:0] q,     // Data output
  input  logic [p_nbits-1:0] d,     // Data input
  input  logic               en     // Enable input
);

  always_ff @( posedge clk )
    if ( reset || en )
      q <= reset ? p_reset_value : d;

  // Assertions

  `ifndef SYNTHESIS

  /*
  always_ff @( posedge clk )
    if ( !reset )
      `VC_ASSERT_NOT_X( en );
  */

  `endif /* SYNTHESIS */

endmodule

`endif /* VC_REGS_V */


`line 10 "proc/ProcDpathAluWrapper.v" 0
`line 1 "proc/ProcDpathAlu.v" 0
//========================================================================
// Proc Datapath ALU
//========================================================================

`ifndef PROC_PROC_DPATH_ALU_V
`define PROC_PROC_DPATH_ALU_V

`line 1 "vc/arithmetic.v" 0
//========================================================================
// Verilog Components: Arithmetic Components
//========================================================================

`ifndef VC_ARITHMETIC_V
`define VC_ARITHMETIC_V

//------------------------------------------------------------------------
// Adders
//------------------------------------------------------------------------

module vc_Adder
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  input  logic               cin,
  output logic [p_nbits-1:0] out,
  output logic               cout
);

  // We need to convert cin into a 32-bit value to
  // avoid verilator warnings

  assign {cout,out} = in0 + in1 + {{(p_nbits-1){1'b0}},cin};

endmodule

module vc_SimpleAdder
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic [p_nbits-1:0] out
);

  assign out = in0 + in1;

endmodule

//------------------------------------------------------------------------
// Subtractor
//------------------------------------------------------------------------

module vc_Subtractor
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic [p_nbits-1:0] out
);

  assign out = in0 - in1;

endmodule

//------------------------------------------------------------------------
// Incrementer
//------------------------------------------------------------------------

module vc_Incrementer
#(
  parameter p_nbits     = 1,
  parameter p_inc_value = 1
)(
  input  logic [p_nbits-1:0] in,
  output logic [p_nbits-1:0] out
);

  assign out = in + p_inc_value;

endmodule

//------------------------------------------------------------------------
// ZeroExtender
//------------------------------------------------------------------------

module vc_ZeroExtender
#(
  parameter p_in_nbits  = 1,
  parameter p_out_nbits = 8
)(
  input  logic [p_in_nbits-1:0]  in,
  output logic [p_out_nbits-1:0] out
);

  assign out = { {( p_out_nbits - p_in_nbits ){1'b0}}, in };

endmodule

//------------------------------------------------------------------------
// SignExtender
//------------------------------------------------------------------------

module vc_SignExtender
#(
 parameter p_in_nbits = 1,
 parameter p_out_nbits = 8
)
(
  input  logic [p_in_nbits-1:0]  in,
  output logic [p_out_nbits-1:0] out
);

  assign out = { {(p_out_nbits-p_in_nbits){in[p_in_nbits-1]}}, in };

endmodule

//------------------------------------------------------------------------
// ZeroComparator
//------------------------------------------------------------------------

module vc_ZeroComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in,
  output logic               out
);

  assign out = ( in == {p_nbits{1'b0}} );

endmodule

//------------------------------------------------------------------------
// EqComparator
//------------------------------------------------------------------------

module vc_EqComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 == in1 );

endmodule

//------------------------------------------------------------------------
// LtComparator
//------------------------------------------------------------------------

module vc_LtComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 < in1 );

endmodule

//------------------------------------------------------------------------
// GtComparator
//------------------------------------------------------------------------

module vc_GtComparator
#(
  parameter p_nbits = 1
)(
  input  logic [p_nbits-1:0] in0,
  input  logic [p_nbits-1:0] in1,
  output logic               out
);

  assign out = ( in0 > in1 );

endmodule

//------------------------------------------------------------------------
// LeftLogicalShifter
//------------------------------------------------------------------------

module vc_LeftLogicalShifter
#(
  parameter p_nbits       = 1,
  parameter p_shamt_nbits = 1 )
(
  input  logic       [p_nbits-1:0] in,
  input  logic [p_shamt_nbits-1:0] shamt,
  output logic       [p_nbits-1:0] out
);

  assign out = ( in << shamt );

endmodule

//------------------------------------------------------------------------
// RightLogicalShifter
//------------------------------------------------------------------------

module vc_RightLogicalShifter
#(
  parameter p_nbits       = 1,
  parameter p_shamt_nbits = 1
)(
  input  logic       [p_nbits-1:0] in,
  input  logic [p_shamt_nbits-1:0] shamt,
  output logic       [p_nbits-1:0] out
);

  assign out = ( in >> shamt );

endmodule

`endif /* VC_ARITHMETIC_V */


`line 9 "proc/ProcDpathAlu.v" 0

module proc_ProcDpathAlu
(
  input  logic [31:0] in0,
  input  logic [31:0] in1,
  input  logic [ 5:0] fn,
  output logic [31:0] out,
  output logic        ops_eq,
  output logic        ops_lt,
  output logic        ops_ltu
);

  always_comb begin

    case ( fn )
      6'd0    : out = in0 + in1;                                // ADD

      //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
      // Add more alu function
      //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

      6'd1    : out = in0 - in1;                                // SUB
      6'd2    : out = in0 << in1[4:0];                          // SLL
      6'd3    : out = in0 | in1;                                // OR
      6'd4    : out = { 31'b0, ($signed(in0) < $signed(in1)) }; // SLT
      6'd5    : out = { 31'b0, (in0 < in1) };                   // SLTU
      6'd6    : out = in0 & in1;                                // AND
      6'd7    : out = in0 ^ in1;                                // XOR
      6'd8    : out = ~(in0 | in1);                             // NOR
      6'd9    : out = in0 >> in1[4:0];                          // SRL
      6'd10   : out = $signed(in0) >>> in1[4:0];                // SRA
      6'd11   : out = in0;                                      // CP OP0
      6'd12   : out = in1;                                      // CP OP1
      6'd13   : begin
                  out = in0 + in1;
                  out[0] = 1'b0;
                end
      6'd16    : out = {{in0[31:24] + in1[31:24]}, {in0[23:16] + in1[23:16]}, 
                      {in0[15:8] + in1[15:8]}, {in0[7:0] + in1[7:0]}};  // 8 BIT ADD
      6'd17    : out = {{in0[31:24] - in1[31:24]}, {in0[23:16] - in1[23:16]}, 
                      {in0[15:8] - in1[15:8]}, {in0[7:0] - in1[7:0]}};  // 8 BIT SUB

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


`line 11 "proc/ProcDpathAluWrapper.v" 0

module proc_ProcDpathAluWrapper
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [69:0] istream_msg,

  output logic        ostream_val,
  input  logic        ostream_rdy,
  output logic [34:0] ostream_msg
);

 // Input registers

  logic val_reg_out;

  vc_EnResetReg#(1) val_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (istream_val),
    .en    (ostream_rdy),
    .q     (val_reg_out)
  );

  logic [31:0] in0_reg_out;

  vc_EnReg#(32) in0_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (istream_msg[63:32]),
    .en    (ostream_rdy),
    .q     (in0_reg_out)
  );

  logic [31:0] in1_reg_out;

  vc_EnReg#(32) in1_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (istream_msg[31:0]),
    .en    (ostream_rdy),
    .q     (in1_reg_out)
  );

  logic [5:0] fn_reg_out;

  vc_EnReg#(6) fn_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (istream_msg[69:64]),
    .en    (ostream_rdy),
    .q     (fn_reg_out)
  );

  logic [31:0] out;
  logic        ops_eq;
  logic        ops_lt;
  logic        ops_ltu;

  proc_ProcDpathAlu alu
  (
    .in0     (in0_reg_out),
    .in1     (in1_reg_out),
    .fn      (fn_reg_out),
    .out     (out),
    .ops_eq  (ops_eq),
    .ops_lt  (ops_lt),
    .ops_ltu (ops_ltu)
  );

  logic[34:0] out_msg;

  assign istream_rdy = ostream_rdy;
  assign ostream_val = val_reg_out;
  assign out_msg     = {ops_eq, ops_lt, ops_ltu, out};
  assign ostream_msg = out_msg & {35{ostream_val}}; // 4-state sim fix

endmodule
`endif

`endif /* PROCDPATHALUWRAPPER */
//-----------------------------------------------------------
// Wrapper of placeholder ProcDpathAluWrapper_noparam
//-----------------------------------------------------------

`ifndef PROCDPATHALUWRAPPER_NOPARAM
`define PROCDPATHALUWRAPPER_NOPARAM

module ProcDpathAluWrapper
(
  input logic [1-1:0] clk ,
  input logic [1-1:0] reset ,
  input logic [70-1:0] istream_msg ,
  output logic [1-1:0] istream_rdy ,
  input logic [1-1:0] istream_val ,
  output logic [35-1:0] ostream_msg ,
  input logic [1-1:0] ostream_rdy ,
  output logic [1-1:0] ostream_val 
);
  proc_ProcDpathAluWrapper
  #(
  ) v
  (
    .clk( clk ),
    .reset( reset ),
    .istream_msg( istream_msg ),
    .istream_rdy( istream_rdy ),
    .istream_val( istream_val ),
    .ostream_msg( ostream_msg ),
    .ostream_rdy( ostream_rdy ),
    .ostream_val( ostream_val )
  );
endmodule

`endif /* PROCDPATHALUWRAPPER_NOPARAM */
