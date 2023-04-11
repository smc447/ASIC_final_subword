// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VSortXcel__Syms.h"
#include "VSortXcel.h"
#include "VSortXcel___024unit.h"



// FUNCTIONS
VSortXcel__Syms::VSortXcel__Syms(VSortXcel* topp, const char* namep)
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
    // Setup scopes
    __Vscope_SortXcel__v.configure(this, name(), "SortXcel.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SortXcel__v__xcel_reqstream_msg_trace.configure(this, name(), "SortXcel.v.xcel_reqstream_msg_trace", "xcel_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_SortXcel__v__xcel_respstream_msg_trace.configure(this, name(), "SortXcel.v.xcel_respstream_msg_trace", "xcel_respstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_SortXcel__v.exportInsert(__Vfinal, "line_trace", (void*)(&VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__line_trace_TOP));
        __Vscope_SortXcel__v__xcel_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_SortXcel__v__xcel_respstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VSortXcel::__Vdpiexp_SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP));
    }
}
