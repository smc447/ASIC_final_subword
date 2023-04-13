// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VProcXcel_sort2_rtl__Syms.h"
#include "VProcXcel_sort2_rtl.h"
#include "VProcXcel_sort2_rtl___024unit.h"



// FUNCTIONS
VProcXcel_sort2_rtl__Syms::VProcXcel_sort2_rtl__Syms(VProcXcel_sort2_rtl* topp, const char* namep)
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
    __Vscope_ProcXcel_sort2_rtl__proc__v.configure(this, name(), "ProcXcel_sort2_rtl.proc.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__proc__v__dmem_reqstream_trace.configure(this, name(), "ProcXcel_sort2_rtl.proc.v.dmem_reqstream_trace", "dmem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__proc__v__dmem_respstream_trace.configure(this, name(), "ProcXcel_sort2_rtl.proc.v.dmem_respstream_trace", "dmem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__proc__v__dpath__imul.configure(this, name(), "ProcXcel_sort2_rtl.proc.v.dpath.imul", "imul", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__proc__v__imem_reqstream_trace.configure(this, name(), "ProcXcel_sort2_rtl.proc.v.imem_reqstream_trace", "imem_reqstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__proc__v__imem_respstream_trace.configure(this, name(), "ProcXcel_sort2_rtl.proc.v.imem_respstream_trace", "imem_respstream_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__xcel__v.configure(this, name(), "ProcXcel_sort2_rtl.xcel.v", "v", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__xcel__v__xcel_reqstream_msg_trace.configure(this, name(), "ProcXcel_sort2_rtl.xcel.v.xcel_reqstream_msg_trace", "xcel_reqstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_ProcXcel_sort2_rtl__xcel__v__xcel_respstream_msg_trace.configure(this, name(), "ProcXcel_sort2_rtl.xcel.v.xcel_respstream_msg_trace", "xcel_respstream_msg_trace", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_ProcXcel_sort2_rtl__proc__v.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__proc__DOT__v__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__proc__v__dmem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__proc__v__dmem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__proc__v__dpath__imul.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__proc__v__imem_reqstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__proc__v__imem_respstream_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__xcel__v.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__xcel__DOT__v__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__xcel__v__xcel_reqstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP));
        __Vscope_ProcXcel_sort2_rtl__xcel__v__xcel_respstream_msg_trace.exportInsert(__Vfinal, "line_trace", (void*)(&VProcXcel_sort2_rtl::__Vdpiexp_ProcXcel_sort2_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP));
    }
}
