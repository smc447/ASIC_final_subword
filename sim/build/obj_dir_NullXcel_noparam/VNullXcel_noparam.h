// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VNULLXCEL_NOPARAM_H_
#define _VNULLXCEL_NOPARAM_H_  // guard

#include "verilated_heavy.h"
#include "VNullXcel_noparam__Dpi.h"

//==========

class VNullXcel_noparam__Syms;

//----------

VL_MODULE(VNullXcel_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(mem_reqstream_rdy,0,0);
    VL_OUT8(mem_reqstream_val,0,0);
    VL_OUT8(mem_respstream_rdy,0,0);
    VL_IN8(mem_respstream_val,0,0);
    VL_OUT8(xcel_reqstream_rdy,0,0);
    VL_IN8(xcel_reqstream_val,0,0);
    VL_IN8(xcel_respstream_rdy,0,0);
    VL_OUT8(xcel_respstream_val,0,0);
    VL_OUTW(mem_reqstream_msg,76,0,3);
    VL_IN64(mem_respstream_msg,46,0);
    VL_IN64(xcel_reqstream_msg,37,0);
    VL_OUT64(xcel_respstream_msg,32,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    CData/*0:0*/ NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next;
    CData/*0:0*/ NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq;
    CData/*0:0*/ NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq;
    SData/*15:0*/ NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str;
    SData/*15:0*/ NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xr0;
    WData/*4095:0*/ NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[128];
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
    WData/*4095:0*/ NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[128];
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    QData/*37:0*/ NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    QData/*32:0*/ NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VNullXcel_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VNullXcel_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VNullXcel_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VNullXcel_noparam();
    
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
    static void _eval_initial_loop(VNullXcel_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VNullXcel_noparam__Syms* symsp, bool first);
    static void __Vdpiexp_NullXcel_noparam__DOT__v__DOT__line_trace_TOP(VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP(VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VNullXcel_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VNullXcel_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__4(VNullXcel_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VNullXcel_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VNullXcel_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VNullXcel_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _initial__TOP__1(VNullXcel_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VNullXcel_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VNullXcel_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
