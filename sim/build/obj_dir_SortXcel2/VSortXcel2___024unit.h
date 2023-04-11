// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSortXcel2.h for the primary calling header

#ifndef _VSORTXCEL2___024UNIT_H_
#define _VSORTXCEL2___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VSortXcel2__Dpi.h"

//==========

class VSortXcel2__Syms;

//----------

VL_MODULE(VSortXcel2___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VSortXcel2__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSortXcel2___024unit);  ///< Copying not allowed
  public:
    VSortXcel2___024unit(const char* name = "TOP");
    ~VSortXcel2___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VSortXcel2__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
