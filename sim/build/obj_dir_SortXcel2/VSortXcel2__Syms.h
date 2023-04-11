// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VSORTXCEL2__SYMS_H_
#define _VSORTXCEL2__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VSortXcel2.h"
#include "VSortXcel2___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VSortXcel2__Vcb_line_trace_t) (VSortXcel2__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VSortXcel2__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VSortXcel2*                    TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_SortXcel2__v;
    VerilatedScope __Vscope_SortXcel2__v__xcel_reqstream_msg_trace;
    VerilatedScope __Vscope_SortXcel2__v__xcel_respstream_msg_trace;
    
    // CREATORS
    VSortXcel2__Syms(VSortXcel2* topp, const char* namep);
    ~VSortXcel2__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
