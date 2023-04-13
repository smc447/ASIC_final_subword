/////////////////////////////////////////////////////////////
// Created by: Synopsys DC Ultra(TM) in wire load mode
// Version   : R-2020.09-SP2
// Date      : Thu Apr 13 14:53:43 2023
/////////////////////////////////////////////////////////////


module ProcDpathAluWrapper ( clk, reset, istream_msg, istream_rdy, istream_val, 
        ostream_msg, ostream_rdy, ostream_val );
  input [0:0] clk;
  input [0:0] reset;
  input [69:0] istream_msg;
  output [0:0] istream_rdy;
  input [0:0] istream_val;
  output [34:0] ostream_msg;
  input [0:0] ostream_rdy;
  output [0:0] ostream_val;


  ProcDpathAluWrapper_proc_ProcDpathAluWrapper_0 v ( .clk(clk[0]), .reset(
        reset[0]), .istream_val(istream_val[0]), .istream_rdy(istream_rdy[0]), 
        .istream_msg(istream_msg), .ostream_val(ostream_val[0]), .ostream_rdy(
        ostream_rdy[0]), .ostream_msg(ostream_msg) );
endmodule

