//========================================================================
// Proc Datapath ALU wrapper
//========================================================================

`ifndef PROC_PROC_DPATH_ALU_WRAPPER_V
`define PROC_PROC_DPATH_ALU_WRAPPER_V

`include "vc/arithmetic.v"
`include "vc/regs.v"
`include "proc/ProcDpathAlu.v"

module proc_ProcDpathAluWrapper
(
  input  logic        clk,
  input  logic        reset,

  input  logic        istream_val,
  output logic        istream_rdy,
  input  logic [70:0] istream_msg,

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

  logic [6:0] fn_reg_out;

  vc_EnReg#(7) fn_reg
  (
    .clk   (clk),
    .reset (reset),
    .d     (istream_msg[70:64]),
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
