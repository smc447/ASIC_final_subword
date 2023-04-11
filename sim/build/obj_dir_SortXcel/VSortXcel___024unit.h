// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSortXcel.h for the primary calling header

#ifndef _VSORTXCEL___024UNIT_H_
#define _VSORTXCEL___024UNIT_H_  // guard

#include "verilated_heavy.h"
#include "VSortXcel__Dpi.h"

//==========

class VSortXcel__Syms;

//----------

VL_MODULE(VSortXcel___024unit) {
  public:
    
    // INTERNAL VARIABLES
  private:
    VSortXcel__Syms* __VlSymsp;  // Symbol table
  public:
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VSortXcel___024unit);  ///< Copying not allowed
  public:
    VSortXcel___024unit(const char* name = "TOP");
    ~VSortXcel___024unit();
    
    // INTERNAL METHODS
    void __Vconfigure(VSortXcel__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
