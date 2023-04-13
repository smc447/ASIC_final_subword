`ifndef SYNTHESIS

//
// This is an automatically generated file from 
// dc_shell Version R-2020.09-SP2 -- Dec 03, 2020
//

// For simulation only. Do not modify.

module ProcDpathAluWrapper_svsim
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
  

  ProcDpathAluWrapper ProcDpathAluWrapper( {>>{ clk }}, {>>{ reset }}, 
        {>>{ istream_msg }}, {>>{ istream_rdy }}, {>>{ istream_val }}, 
        {>>{ ostream_msg }}, {>>{ ostream_rdy }}, {>>{ ostream_val }} );
endmodule
`endif
