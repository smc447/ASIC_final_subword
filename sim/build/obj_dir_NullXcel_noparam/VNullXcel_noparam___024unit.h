// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VNullXcel_noparam.h for the primary calling header

#ifndef _VNULLXCEL_NOPARAM___024UNIT_H_
#define _VNULLXCEL_NOPARAM___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VNullXcel_noparam__Dpi.h"

//==========

class VNullXcel_noparam__Syms;

//----------

VL_MODULE(VNullXcel_noparam___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VNullXcel_noparam__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VNullXcel_noparam___024unit);  ///< Copying not allowed
  public:
    VNullXcel_noparam___024unit(const char* name = "TOP");
    ~VNullXcel_noparam___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VNullXcel_noparam__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
