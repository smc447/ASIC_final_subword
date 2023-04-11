// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VNULLXCELFL_NOPARAM_H_
#define _VNULLXCELFL_NOPARAM_H_  // guard

#include "verilated.h"

//==========

class VNullXcelFL_noparam__Syms;

//----------

VL_MODULE(VNullXcelFL_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mem___05Freqstream___05Frdy,0,0);
    VL_OUT8(mem___05Freqstream___05Fval,0,0);
    VL_OUT8(mem___05Frespstream___05Frdy,0,0);
    VL_IN8(mem___05Frespstream___05Fval,0,0);
    VL_OUT8(xcel___05Freqstream___05Frdy,0,0);
    VL_IN8(xcel___05Freqstream___05Fval,0,0);
    VL_IN8(xcel___05Frespstream___05Frdy,0,0);
    VL_OUT8(xcel___05Frespstream___05Fval,0,0);
    VL_OUTW(mem___05Freqstream___05Fmsg,76,0,3);
    VL_IN64(mem___05Frespstream___05Fmsg,46,0);
    VL_IN64(xcel___05Freqstream___05Fmsg,37,0);
    VL_OUT64(xcel___05Frespstream___05Fmsg,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*1:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount;
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__head;
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__istream_xfer;
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__ostream_xfer;
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__tail;
    IData/*31:0*/ NullXcelFL_noparam__DOT__xr0___05Fout;
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fraddr[1];
    QData/*37:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Frdata[1];
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwaddr[1];
    QData/*37:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwdata[1];
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwen[1];
    QData/*37:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs[2];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*37:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__wen[1];
    QData/*37:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__wdata[1];
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__waddr[1];
    QData/*37:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellout__rf__rdata[1];
    CData/*0:0*/ NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__raddr[1];
    CData/*2:0*/ __Vtablechg1[128];
    static CData/*0:0*/ __Vtable1_NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__head[128];
    static CData/*0:0*/ __Vtable1_NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__tail[128];
    static CData/*1:0*/ __Vtable1_NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VNullXcelFL_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VNullXcelFL_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VNullXcelFL_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VNullXcelFL_noparam();
    
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
    static void _eval_initial_loop(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VNullXcelFL_noparam__Syms* symsp, bool first);
  private:
    static QData _change_request(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__2(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
    static void _combo__TOP__5(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VNullXcelFL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VNullXcelFL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VNullXcelFL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__4(VNullXcelFL_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__3(VNullXcelFL_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
