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

