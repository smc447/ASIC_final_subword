// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProc_noparam.h for the primary calling header

#ifndef _VPROC_NOPARAM___024UNIT_H_
#define _VPROC_NOPARAM___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VProc_noparam__Dpi.h"

//==========

class VProc_noparam__Syms;

//----------

VL_MODULE(VProc_noparam___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VProc_noparam__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProc_noparam___024unit);  ///< Copying not allowed
  public:
    VProc_noparam___024unit(const char* name = "TOP");
    ~VProc_noparam___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VProc_noparam__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
