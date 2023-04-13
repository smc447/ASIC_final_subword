
// VT_INPUT_DELAY, VTB_OUTPUT_ASSERT_DELAY are timestamps relative to the rising edge.
`define VTB_INPUT_DELAY 1
`define VTB_OUTPUT_ASSERT_DELAY 3

// CYCLE_TIME and INTRA_CYCLE_TIME are duration of time.
`define CYCLE_TIME 4
`define INTRA_CYCLE_TIME (`VTB_OUTPUT_ASSERT_DELAY-`VTB_INPUT_DELAY)

`timescale 1ns/1ns

`define T(a0,a1,a2,a3,a4,a5) \
        t(a0,a1,a2,a3,a4,a5,`__LINE__)

// Tick one extra cycle upon an error.
`define VTB_TEST_FAIL(lineno, out, ref, port_name) \
    $display("- Timestamp      : %0d (default unit: ns)", $time); \
    $display("- Cycle number   : %0d (variable: cycle_count)", cycle_count); \
    $display("- line number    : line %0d in ProcDpathAluWrapper_imul-alu-add_tb.v.cases", lineno); \
    $display("- port name      : %s", port_name); \
    $display("- expected value : 0x%x", ref); \
    $display("- actual value   : 0x%x", out); \
    $display(""); \
    #(`CYCLE_TIME-`INTRA_CYCLE_TIME); \
    cycle_count += 1; \
    #`CYCLE_TIME; \
    cycle_count += 1; \
    $fatal;

`define CHECK(lineno, out, ref, port_name) \
  if ((|(out ^ out)) == 1'b0) ; \
  else begin \
    $display(""); \
    $display("The test bench received a value containing X/Z's! Please note"); \
    $display("that the VTB is pessmistic about X's and you should make sure"); \
    $display("all output ports of your DUT does not produce X's after reset."); \
    `VTB_TEST_FAIL(lineno, out, ref, port_name) \
  end \
  if (out != ref) begin \
    $display(""); \
    $display("The test bench received an incorrect value!"); \
    `VTB_TEST_FAIL(lineno, out, ref, port_name) \
  end

module ProcDpathAluWrapper_tb;
  // convention
  logic clk;
  logic reset;
  integer cycle_count;

  logic [69:0] istream_msg ;
  logic [0:0] istream_rdy ;
  logic [0:0] istream_val ;
  logic [34:0] ostream_msg ;
  logic [0:0] ostream_rdy ;
  logic [0:0] ostream_val ;

  task t(
    input logic [69:0] inp_istream_msg,
    input logic [0:0] ref_istream_rdy,
    input logic [0:0] inp_istream_val,
    input logic [34:0] ref_ostream_msg,
    input logic [0:0] inp_ostream_rdy,
    input logic [0:0] ref_ostream_val,
    integer lineno
  );
  begin
    istream_msg = inp_istream_msg;
    istream_val = inp_istream_val;
    ostream_rdy = inp_ostream_rdy;
    #`INTRA_CYCLE_TIME;
    `CHECK(lineno, istream_rdy, ref_istream_rdy, "istream.rdy (istream_rdy in Verilog)");
    `CHECK(lineno, ostream_msg, ref_ostream_msg, "ostream.msg (ostream_msg in Verilog)");
    `CHECK(lineno, ostream_val, ref_ostream_val, "ostream.val (ostream_val in Verilog)");
    #(`CYCLE_TIME-`INTRA_CYCLE_TIME);
    cycle_count += 1;
  end
  endtask

  // use 25% clock cycle, so #1 for setup #2 for sim #1 for hold
  always #(`CYCLE_TIME/2) clk = ~clk;

  // DUT name
  // By default we use the translated name of the Verilog component. But you can change
  // that by defining the VTB_TOP_MODULE_NAME macro through the simulator command line
  // options (e.g., for VCS you can do +define+VTB_TOP_MODULE_NAME=YourTopModuleName).
`ifdef VTB_TOP_MODULE_NAME
  `VTB_TOP_MODULE_NAME DUT
`else
  ProcDpathAluWrapper DUT
`endif
  (
    .clk(clk),
    .reset(reset),
    .istream_msg(istream_msg),
    .istream_rdy(istream_rdy),
    .istream_val(istream_val),
    .ostream_msg(ostream_msg),
    .ostream_rdy(ostream_rdy),
    .ostream_val(ostream_val)
  );

  initial begin
    assert(0 <= `VTB_INPUT_DELAY)
      else $fatal("\n=====\n\nVTB_INPUT_DELAY should >= 0\n\n=====\n");

    assert(`VTB_INPUT_DELAY < `VTB_OUTPUT_ASSERT_DELAY)
      else $fatal("\n=====\n\nVTB_OUTPUT_ASSERT_DELAY should be larger than VTB_INPUT_DELAY\n\n=====\n");

    assert(`VTB_OUTPUT_ASSERT_DELAY <= `CYCLE_TIME)
      else $fatal("\n=====\n\nVTB_OUTPUT_ASSERT_DELAY should be smaller than or equal to CYCLE_TIME\n\n=====\n");

    cycle_count = 0;
    clk   = 1'b0; // NEED TO DO THIS TO HAVE FALLING EDGE AT TIME 0
    reset = 1'b1; // TODO reset active low/high
    #(`CYCLE_TIME/2);

    // Now we are talking
    #`VTB_INPUT_DELAY;
    #`CYCLE_TIME;
    cycle_count = 1;
    #`CYCLE_TIME;
    cycle_count = 2;
    // 2 cycles plus input delay
    reset = 1'b0;

    `include "ProcDpathAluWrapper_imul-alu-add_tb.v.cases"

    $display("");
    $display("  [ passed ]");
    $display("");

    // Tick one extra cycle for better waveform
    #`CYCLE_TIME;
    cycle_count += 1;
    $finish;
  end
endmodule
