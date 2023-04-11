// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProc_noparam__Syms.h"
#include "VProc_noparam.h"
#include "VProc_noparam___024unit.h"



// FUNCTIONS
VProc_noparam__Syms::VProc_noparam__Syms(VProc_noparam* topp, const char* namep)
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
    __Vscope_Proc_noparam__v.configure(this, name(), "Proc_noparam.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Proc_noparam__v__dmem_reqstream_trace.configure(this, name(), "Proc_noparam.v.dmem_reqstream_trace", "dmem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Proc_noparam__v__dmem_respstream_trace.configure(this, name(), "Proc_noparam.v.dmem_respstream_trace", "dmem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Proc_noparam__v__dpath__imul.configure(this, name(), "Proc_noparam.v.dpath.imul", "imul", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Proc_noparam__v__imem_reqstream_trace.configure(this, name(), "Proc_noparam.v.imem_reqstream_trace", "imem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_Proc_noparam__v__imem_respstream_trace.configure(this, name(), "Proc_noparam.v.imem_respstream_trace", "imem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_Proc_noparam__v.exportInsert(__Vfinal, "line_trace", (void*)(&VProc_noparam::__Vdpiexp_Proc_noparam__DOT__v__DOT__line_trace_TOP));
        __Vscope_Proc_noparam__v__dmem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProc_noparam::__Vdpiexp_Proc_noparam__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_Proc_noparam__v__dmem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProc_noparam::__Vdpiexp_Proc_noparam__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP));
        __Vscope_Proc_noparam__v__dpath__imul.exportInsert(__Vfinal, "line_trace", (void*)(&VProc_noparam::__Vdpiexp_Proc_noparam__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP));
        __Vscope_Proc_noparam__v__imem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProc_noparam::__Vdpiexp_Proc_noparam__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_Proc_noparam__v__imem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProc_noparam::__Vdpiexp_Proc_noparam__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP));
    }
}
