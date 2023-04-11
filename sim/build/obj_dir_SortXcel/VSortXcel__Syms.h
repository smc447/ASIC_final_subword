// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSORTXCEL__SYMS_H_
#define _VSORTXCEL__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VSortXcel.h"
#include "VSortXcel___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VSortXcel__Vcb_line_trace_t) (VSortXcel__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VSortXcel__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSortXcel*                     TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_SortXcel__v;
    VerilatedScope __Vscope_SortXcel__v__xcel_reqstream_msg_trace;
    VerilatedScope __Vscope_SortXcel__v__xcel_respstream_msg_trace;
    
    // CREATORS
    VSortXcel__Syms(VSortXcel* topp, const char* namep);
    ~VSortXcel__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
