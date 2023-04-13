
`ifndef LAB2_PARTITION_V
`define LAB2_PARTITION_V

`include "vc/trace.v"

`include "vc/mem-msgs.v"
`include "vc/xcel-msgs.v"
`include "vc/queues.v"
`include "vc/trace.v"

//=========================================================================
// Sorting Accelerator Implementation
//=========================================================================

module lab2_xcel_Partition
(
  input  logic         clk,
  input  logic         reset,

  output mem_req_4B_t  mem_reqstream_msg,
  output logic         mem_reqstream_val,
  input  logic         mem_reqstream_rdy,

  input  mem_resp_4B_t mem_respstream_msg,
  input  logic         mem_respstream_val,
  output logic         mem_respstream_rdy
);

endmodule