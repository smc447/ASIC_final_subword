// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VNullXcel_noparam__Syms.h"
#include "VNullXcel_noparam.h"
#include "VNullXcel_noparam___024unit.h"



// FUNCTIONS
VNullXcel_noparam__Syms::VNullXcel_noparam__Syms(VNullXcel_noparam* topp, const char* namep)
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
    __Vscope_NullXcel_noparam__v.configure(this, name(), "NullXcel_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NullXcel_noparam__v__xcel_reqstream_msg_trace.configure(this, name(), "NullXcel_noparam.v.xcel_reqstream_msg_trace", "xcel_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_NullXcel_noparam__v__xcel_respstream_msg_trace.configure(this, name(), "NullXcel_noparam.v.xcel_respstream_msg_trace", "xcel_respstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_NullXcel_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__line_trace_TOP));
        __Vscope_NullXcel_noparam__v__xcel_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_NullXcel_noparam__v__xcel_respstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP));
    }
}
