
// VT_INPUT_DELAY, VTB_OUTPUT_ASSERT_DELAY are timestamps relative to the rising edge.
`define VTB_INPUT_DELAY 1
`define VTB_OUTPUT_ASSERT_DELAY 3

// CYCLE_TIME and INTRA_CYCLE_TIME are duration of time.
`define CYCLE_TIME 4
`define INTRA_CYCLE_TIME (`VTB_OUTPUT_ASSERT_DELAY-`VTB_INPUT_DELAY)

`timescale 1ns/1ns

`define T(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25) \
        t(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12,a13,a14,a15,a16,a17,a18,a19,a20,a21,a22,a23,a24,a25,`__LINE__)

// Tick one extra cycle upon an error.
`define VTB_TEST_FAIL(lineno, out, ref, port_name) \
    $display("- Timestamp      : %0d (default unit: ns)", $time); \
    $display("- Cycle number   : %0d (variable: cycle_count)", cycle_count); \
    $display("- line number    : line %0d in ProcXcel_sort2_rtl_pmx-sim-sort2-rtl-ubmark-sort2-xcel-eval_tb.v.cases", lineno); \
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

module ProcXcel_sort2_rtl_tb;
  // convention
  logic clk;
  logic reset;
  integer cycle_count;

  logic [0:0] commit_inst ;
  logic [0:0] stats_en ;
  logic [76:0] dmem__reqstream__msg ;
  logic [0:0] dmem__reqstream__rdy ;
  logic [0:0] dmem__reqstream__val ;
  logic [46:0] dmem__respstream__msg ;
  logic [0:0] dmem__respstream__rdy ;
  logic [0:0] dmem__respstream__val ;
  logic [76:0] imem__reqstream__msg ;
  logic [0:0] imem__reqstream__rdy ;
  logic [0:0] imem__reqstream__val ;
  logic [46:0] imem__respstream__msg ;
  logic [0:0] imem__respstream__rdy ;
  logic [0:0] imem__respstream__val ;
  logic [31:0] mngr2proc__msg ;
  logic [0:0] mngr2proc__rdy ;
  logic [0:0] mngr2proc__val ;
  logic [31:0] proc2mngr__msg ;
  logic [0:0] proc2mngr__rdy ;
  logic [0:0] proc2mngr__val ;
  logic [76:0] xmem__reqstream__msg ;
  logic [0:0] xmem__reqstream__rdy ;
  logic [0:0] xmem__reqstream__val ;
  logic [46:0] xmem__respstream__msg ;
  logic [0:0] xmem__respstream__rdy ;
  logic [0:0] xmem__respstream__val ;

  task t(
    input logic [0:0] ref_commit_inst,
    input logic [0:0] ref_stats_en,
    input logic [76:0] ref_dmem__reqstream__msg,
    input logic [0:0] inp_dmem__reqstream__rdy,
    input logic [0:0] ref_dmem__reqstream__val,
    input logic [46:0] inp_dmem__respstream__msg,
    input logic [0:0] ref_dmem__respstream__rdy,
    input logic [0:0] inp_dmem__respstream__val,
    input logic [76:0] ref_imem__reqstream__msg,
    input logic [0:0] inp_imem__reqstream__rdy,
    input logic [0:0] ref_imem__reqstream__val,
    input logic [46:0] inp_imem__respstream__msg,
    input logic [0:0] ref_imem__respstream__rdy,
    input logic [0:0] inp_imem__respstream__val,
    input logic [31:0] inp_mngr2proc__msg,
    input logic [0:0] ref_mngr2proc__rdy,
    input logic [0:0] inp_mngr2proc__val,
    input logic [31:0] ref_proc2mngr__msg,
    input logic [0:0] inp_proc2mngr__rdy,
    input logic [0:0] ref_proc2mngr__val,
    input logic [76:0] ref_xmem__reqstream__msg,
    input logic [0:0] inp_xmem__reqstream__rdy,
    input logic [0:0] ref_xmem__reqstream__val,
    input logic [46:0] inp_xmem__respstream__msg,
    input logic [0:0] ref_xmem__respstream__rdy,
    input logic [0:0] inp_xmem__respstream__val,
    integer lineno
  );
  begin
    dmem__reqstream__rdy = inp_dmem__reqstream__rdy;
    dmem__respstream__msg = inp_dmem__respstream__msg;
    dmem__respstream__val = inp_dmem__respstream__val;
    imem__reqstream__rdy = inp_imem__reqstream__rdy;
    imem__respstream__msg = inp_imem__respstream__msg;
    imem__respstream__val = inp_imem__respstream__val;
    mngr2proc__msg = inp_mngr2proc__msg;
    mngr2proc__val = inp_mngr2proc__val;
    proc2mngr__rdy = inp_proc2mngr__rdy;
    xmem__reqstream__rdy = inp_xmem__reqstream__rdy;
    xmem__respstream__msg = inp_xmem__respstream__msg;
    xmem__respstream__val = inp_xmem__respstream__val;
    #`INTRA_CYCLE_TIME;
    `CHECK(lineno, commit_inst, ref_commit_inst, "commit_inst (commit_inst in Verilog)");
    `CHECK(lineno, stats_en, ref_stats_en, "stats_en (stats_en in Verilog)");
    `CHECK(lineno, dmem__reqstream__msg, ref_dmem__reqstream__msg, "dmem.reqstream.msg (dmem__reqstream__msg in Verilog)");
    `CHECK(lineno, dmem__reqstream__val, ref_dmem__reqstream__val, "dmem.reqstream.val (dmem__reqstream__val in Verilog)");
    `CHECK(lineno, dmem__respstream__rdy, ref_dmem__respstream__rdy, "dmem.respstream.rdy (dmem__respstream__rdy in Verilog)");
    `CHECK(lineno, imem__reqstream__msg, ref_imem__reqstream__msg, "imem.reqstream.msg (imem__reqstream__msg in Verilog)");
    `CHECK(lineno, imem__reqstream__val, ref_imem__reqstream__val, "imem.reqstream.val (imem__reqstream__val in Verilog)");
    `CHECK(lineno, imem__respstream__rdy, ref_imem__respstream__rdy, "imem.respstream.rdy (imem__respstream__rdy in Verilog)");
    `CHECK(lineno, mngr2proc__rdy, ref_mngr2proc__rdy, "mngr2proc.rdy (mngr2proc__rdy in Verilog)");
    `CHECK(lineno, proc2mngr__msg, ref_proc2mngr__msg, "proc2mngr.msg (proc2mngr__msg in Verilog)");
    `CHECK(lineno, proc2mngr__val, ref_proc2mngr__val, "proc2mngr.val (proc2mngr__val in Verilog)");
    `CHECK(lineno, xmem__reqstream__msg, ref_xmem__reqstream__msg, "xmem.reqstream.msg (xmem__reqstream__msg in Verilog)");
    `CHECK(lineno, xmem__reqstream__val, ref_xmem__reqstream__val, "xmem.reqstream.val (xmem__reqstream__val in Verilog)");
    `CHECK(lineno, xmem__respstream__rdy, ref_xmem__respstream__rdy, "xmem.respstream.rdy (xmem__respstream__rdy in Verilog)");
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
  ProcXcel_sort2_rtl DUT
`endif
  (
    .clk(clk),
    .reset(reset),
    .commit_inst(commit_inst),
    .stats_en(stats_en),
    .dmem__reqstream__msg(dmem__reqstream__msg),
    .dmem__reqstream__rdy(dmem__reqstream__rdy),
    .dmem__reqstream__val(dmem__reqstream__val),
    .dmem__respstream__msg(dmem__respstream__msg),
    .dmem__respstream__rdy(dmem__respstream__rdy),
    .dmem__respstream__val(dmem__respstream__val),
    .imem__reqstream__msg(imem__reqstream__msg),
    .imem__reqstream__rdy(imem__reqstream__rdy),
    .imem__reqstream__val(imem__reqstream__val),
    .imem__respstream__msg(imem__respstream__msg),
    .imem__respstream__rdy(imem__respstream__rdy),
    .imem__respstream__val(imem__respstream__val),
    .mngr2proc__msg(mngr2proc__msg),
    .mngr2proc__rdy(mngr2proc__rdy),
    .mngr2proc__val(mngr2proc__val),
    .proc2mngr__msg(proc2mngr__msg),
    .proc2mngr__rdy(proc2mngr__rdy),
    .proc2mngr__val(proc2mngr__val),
    .xmem__reqstream__msg(xmem__reqstream__msg),
    .xmem__reqstream__rdy(xmem__reqstream__rdy),
    .xmem__reqstream__val(xmem__reqstream__val),
    .xmem__respstream__msg(xmem__respstream__msg),
    .xmem__respstream__rdy(xmem__respstream__rdy),
    .xmem__respstream__val(xmem__respstream__val)
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

    `include "ProcXcel_sort2_rtl_pmx-sim-sort2-rtl-ubmark-sort2-xcel-eval_tb.v.cases"

    $display("");
    $display("  [ passed ]");
    $display("");

    // Tick one extra cycle for better waveform
    #`CYCLE_TIME;
    cycle_count += 1;
    $finish;
  end
endmodule
