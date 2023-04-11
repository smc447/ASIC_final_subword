// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNullXcelFL_noparam.h for the primary calling header

#ifndef _VNULLXCELFL_NOPARAM___024UNIT_H_
#define _VNULLXCELFL_NOPARAM___024UNIT_H_  // guard

#include "verilated.h"

//==========

class VNullXcelFL_noparam__Syms;

//----------

VL_MODULE(VNullXcelFL_noparam___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VNullXcelFL_noparam__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VNullXcelFL_noparam___024unit);  ///< Copying not allowed
  public:
    VNullXcelFL_noparam___024unit(const char* name = "TOP");
    ~VNullXcelFL_noparam___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VNullXcelFL_noparam__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
