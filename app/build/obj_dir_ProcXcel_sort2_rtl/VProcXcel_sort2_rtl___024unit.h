// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VProcXcel_sort2_rtl.h for the primary calling header

#ifndef _VPROCXCEL_SORT2_RTL___024UNIT_H_
#define _VPROCXCEL_SORT2_RTL___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VProcXcel_sort2_rtl__Dpi.h"

//==========

class VProcXcel_sort2_rtl__Syms;

//----------

VL_MODULE(VProcXcel_sort2_rtl___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VProcXcel_sort2_rtl__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProcXcel_sort2_rtl___024unit);  ///< Copying not allowed
  public:
    VProcXcel_sort2_rtl___024unit(const char* name = "TOP");
    ~VProcXcel_sort2_rtl___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VProcXcel_sort2_rtl__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
