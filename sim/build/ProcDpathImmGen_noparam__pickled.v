//-------------------------------------------------------------------------
// ProcDpathImmGen_noparam.v
//-------------------------------------------------------------------------
// This file is generated by PyMTL SystemVerilog translation pass.

// PyMTL VerilogPlaceholder ProcDpathImmGen Definition
// At /home/ezw2/ece5745/ASIC_final_subword/sim/proc/ProcDpathImmGen.py

//***********************************************************
// Pickled source file of placeholder ProcDpathImmGen_noparam
//***********************************************************

//-----------------------------------------------------------
// Dependency of placeholder ProcDpathImmGen
//-----------------------------------------------------------

`ifndef PROCDPATHIMMGEN
`define PROCDPATHIMMGEN

// The source code below are included because they are specified
// as the v_libs Verilog placeholder option of component ProcDpathImmGen_noparam.

// If you get a duplicated def error from files included below, please
// make sure they are included either through the v_libs option or the
// explicit `include statement in the Verilog source code -- if they
// appear in both then they will be included twice!


// End of all v_libs files for component ProcDpathImmGen_noparam

`line 1 "proc/ProcDpathImmGen.v" 0
//========================================================================
// Proc Datapath Immediate Generation
//========================================================================
// Generate intermediate (imm) based on type

`ifndef PROC_PROC_DPATH_IMM_GEN_V
`define PROC_PROC_DPATH_IMM_GEN_V

module proc_ProcDpathImmGen
(
  input  logic [ 2:0] imm_type,
  input  logic [31:0] inst,
  output logic [31:0] imm
);

  always_comb begin
    case ( imm_type )
      3'd0: // I-type
        imm = { {21{inst[31]}}, inst[30:25], inst[24:21], inst[20] };

      3'd2: // B-type
        imm = { {20{inst[31]}}, inst[7], inst[30:25], inst[11:8], 1'b0 };

      //''' LAB TASK '''''''''''''''''''''''''''''''''''''''''''''''''''''
      // Add more immediate types
      //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''\/

      3'd1: // S-type
        imm = { {21{inst[31]}}, inst[30:25], inst[11:8], inst[7] };

      3'd3: // U-type
        imm = { inst[31], inst[30:20], inst[19:12], 12'b0 };

      3'd4: // J-type
        imm = { {12{inst[31]}}, inst[19:12], inst[20], inst[30:25], inst[24:21], 1'b0 };

      //''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''''/\

      default:
        imm = 32'bx;

    endcase
  end

endmodule

`endif /* PROC_DPATH_IMM_GEN_V */


`endif /* PROCDPATHIMMGEN */
//-----------------------------------------------------------
// Wrapper of placeholder ProcDpathImmGen_noparam
//-----------------------------------------------------------

`ifndef PROCDPATHIMMGEN_NOPARAM
`define PROCDPATHIMMGEN_NOPARAM

module ProcDpathImmGen_noparam
(
  input logic reset,
  input logic clk,
  output logic [32-1:0] imm ,
  input logic [3-1:0] imm_type ,
  input logic [32-1:0] inst 
);
  proc_ProcDpathImmGen
  #(
  ) v
  (
    .imm( imm ),
    .imm_type( imm_type ),
    .inst( inst )
  );
endmodule

`endif /* PROCDPATHIMMGEN_NOPARAM */

