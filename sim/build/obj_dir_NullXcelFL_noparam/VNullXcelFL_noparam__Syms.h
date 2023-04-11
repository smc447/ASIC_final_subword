// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef _VNULLXCELFL_NOPARAM__SYMS_H_
#define _VNULLXCELFL_NOPARAM__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODULE CLASSES
#include "VNullXcelFL_noparam.h"
#include "VNullXcelFL_noparam___024unit.h"

// SYMS CLASS
class VNullXcelFL_noparam__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_didInit;
    
    // SUBCELL STATE
    VNullXcelFL_noparam*           TOPp;
    
    // CREATORS
    VNullXcelFL_noparam__Syms(VNullXcelFL_noparam* topp, const char* namep);
    ~VNullXcelFL_noparam__Syms() {}
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
