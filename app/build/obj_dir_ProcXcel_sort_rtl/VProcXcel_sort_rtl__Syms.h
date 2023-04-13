// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPROCXCEL_SORT_RTL__SYMS_H_
#define _VPROCXCEL_SORT_RTL__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VProcXcel_sort_rtl.h"
#include "VProcXcel_sort_rtl___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VProcXcel_sort_rtl__Vcb_line_trace_t) (VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VProcXcel_sort_rtl__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VProcXcel_sort_rtl*            TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_ProcXcel_sort_rtl__proc__v;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__proc__v__dmem_reqstream_trace;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__proc__v__dmem_respstream_trace;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__proc__v__dpath__imul;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__proc__v__imem_reqstream_trace;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__proc__v__imem_respstream_trace;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__xcel__v;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__xcel__v__xcel_reqstream_msg_trace;
    VerilatedScope __Vscope_ProcXcel_sort_rtl__xcel__v__xcel_respstream_msg_trace;
    
    // CREATORS
    VProcXcel_sort_rtl__Syms(VProcXcel_sort_rtl* topp, const char* namep);
    ~VProcXcel_sort_rtl__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
