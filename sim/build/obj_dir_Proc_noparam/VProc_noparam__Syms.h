// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VPROC_NOPARAM__SYMS_H_
#define _VPROC_NOPARAM__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "VProc_noparam.h"
#include "VProc_noparam___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)
typedef void (*VProc_noparam__Vcb_line_trace_t) (VProc_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);

// SYMS CLASS
class VProc_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VProc_noparam*                 TOPp;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_Proc_noparam__v;
    VerilatedScope __Vscope_Proc_noparam__v__dmem_reqstream_trace;
    VerilatedScope __Vscope_Proc_noparam__v__dmem_respstream_trace;
    VerilatedScope __Vscope_Proc_noparam__v__dpath__imul;
    VerilatedScope __Vscope_Proc_noparam__v__imem_reqstream_trace;
    VerilatedScope __Vscope_Proc_noparam__v__imem_respstream_trace;
    
    // CREATORS
    VProc_noparam__Syms(VProc_noparam* topp, const char* namep);
    ~VProc_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
