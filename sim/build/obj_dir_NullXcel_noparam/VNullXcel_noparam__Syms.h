// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VNULLXCEL_NOPARAM__SYMS_H_
#define _VNULLXCEL_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VNullXcel_noparam.h"
#include "VNullXcel_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VNullXcel_noparam__Vcb_line_trace_t) (VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VNullXcel_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VNullXcel_noparam*             TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_NullXcel_noparam__v;
    VerilatedScope __Vscope_NullXcel_noparam__v__xcel_reqstream_msg_trace;
    VerilatedScope __Vscope_NullXcel_noparam__v__xcel_respstream_msg_trace;
    
    // CREATORS
    VNullXcel_noparam__Syms(VNullXcel_noparam* topp, const char* namep);
    ~VNullXcel_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
