// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPROCDPATHALUWRAPPER_H_
#define _VPROCDPATHALUWRAPPER_H_  // guard

#include "verilated.h"

//==========

class VProcDpathAluWrapper__Syms;

//----------

VL_MODULE(VProcDpathAluWrapper) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(istream_rdy,0,0);
    VL_IN8(istream_val,0,0);
    VL_IN8(ostream_rdy,0,0);
    VL_OUT8(ostream_val,0,0);
    VL_INW(istream_msg,69,0,3);
    VL_OUT64(ostream_msg,34,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ ProcDpathAluWrapper__DOT__v__DOT__val_reg_out;
    CData/*5:0*/ ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out;
    IData/*31:0*/ ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out;
    IData/*31:0*/ ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out;
    IData/*31:0*/ ProcDpathAluWrapper__DOT__v__DOT__out;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VProcDpathAluWrapper__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProcDpathAluWrapper);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VProcDpathAluWrapper(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VProcDpathAluWrapper();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VProcDpathAluWrapper__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VProcDpathAluWrapper__Syms* symsp, bool first);
  private:
    static QData _change_request(VProcDpathAluWrapper__Syms* __restrict vlSymsp);
    static QData _change_request_1(VProcDpathAluWrapper__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VProcDpathAluWrapper__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VProcDpathAluWrapper__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VProcDpathAluWrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VProcDpathAluWrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VProcDpathAluWrapper__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VProcDpathAluWrapper__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
