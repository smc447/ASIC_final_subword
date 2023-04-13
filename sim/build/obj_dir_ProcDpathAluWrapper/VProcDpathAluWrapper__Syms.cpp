// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProcDpathAluWrapper__Syms.h"
#include "VProcDpathAluWrapper.h"



// FUNCTIONS
VProcDpathAluWrapper__Syms::VProcDpathAluWrapper__Syms(VProcDpathAluWrapper* topp, const char* namep)
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
