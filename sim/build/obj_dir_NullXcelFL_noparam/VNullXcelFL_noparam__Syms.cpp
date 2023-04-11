// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNullXcelFL_noparam__Syms.h"
#include "VNullXcelFL_noparam.h"
#include "VNullXcelFL_noparam___024unit.h"



// FUNCTIONS
VNullXcelFL_noparam__Syms::VNullXcelFL_noparam__Syms(VNullXcelFL_noparam* topp, const char* namep)
    // Setup locals
    : __Vm_namep(namep)
    , __Vm_didInit(false)
    // Setup submodule names
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
}
