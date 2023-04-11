// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNullXcelFL_noparam.h for the primary calling header

#include "VNullXcelFL_noparam.h"
#include "VNullXcelFL_noparam__Syms.h"

//==========

void VNullXcelFL_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNullXcelFL_noparam::eval\n"); );
    VNullXcelFL_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("NullXcelFL_noparam__pickled.v", 368, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VNullXcelFL_noparam::_eval_initial_loop(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        _eval_settle(vlSymsp);
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("NullXcelFL_noparam__pickled.v", 368, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VNullXcelFL_noparam::_combo__TOP__2(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_combo__TOP__2\n"); );
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwdata[0U] 
        = vlTOPp->xcel___05Freqstream___05Fmsg;
}

VL_INLINE_OPT void VNullXcelFL_noparam::_sequent__TOP__4(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_sequent__TOP__4\n"); );
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vdlyvdim0__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0;
    CData/*0:0*/ __Vdlyvset__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0;
    QData/*37:0*/ __Vdlyvval__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0;
    // Body
    __Vdlyvset__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0 = 0U;
    if (((IData)((vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Frdata
                  [0U] >> 0x25U)) & ((IData)(vlTOPp->xcel___05Frespstream___05Fval) 
                                     & (IData)(vlTOPp->xcel___05Frespstream___05Frdy)))) {
        vlTOPp->NullXcelFL_noparam__DOT__xr0___05Fout 
            = (IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Frdata
                      [0U]);
    }
    if (vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__wen
        [0U]) {
        __Vdlyvval__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__wdata
            [0U];
        __Vdlyvset__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0 = 1U;
        __Vdlyvdim0__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0 
            = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__waddr
            [0U];
    }
    __Vtableidx1 = (((IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount) 
                     << 5U) | (((IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__head) 
                                << 4U) | (((IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__ostream_xfer) 
                                           << 3U) | 
                                          (((IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__tail) 
                                            << 2U) 
                                           | (((IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__istream_xfer) 
                                               << 1U) 
                                              | (IData)(vlTOPp->reset))))));
    if ((1U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__head 
            = vlTOPp->__Vtable1_NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__head
            [__Vtableidx1];
    }
    if ((2U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__tail 
            = vlTOPp->__Vtable1_NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__tail
            [__Vtableidx1];
    }
    if ((4U & vlTOPp->__Vtablechg1[__Vtableidx1])) {
        vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount 
            = vlTOPp->__Vtable1_NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount
            [__Vtableidx1];
    }
    if (__Vdlyvset__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0) {
        vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs[__Vdlyvdim0__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0] 
            = __Vdlyvval__NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs__v0;
    }
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwaddr[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__tail;
    vlTOPp->xcel___05Freqstream___05Frdy = (2U > (IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount));
    vlTOPp->xcel___05Frespstream___05Fval = (0U < (IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount));
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fraddr[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__head;
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__waddr[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwaddr
        [0U];
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__raddr[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fraddr
        [0U];
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT____Vlvbound1 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT__regs
        [vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__raddr
        [0U]];
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellout__rf__rdata[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf__DOT____Vlvbound1;
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Frdata[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellout__rf__rdata
        [0U];
    vlTOPp->xcel___05Frespstream___05Fmsg = ((0xffffffffULL 
                                              & vlTOPp->xcel___05Frespstream___05Fmsg) 
                                             | ((QData)((IData)(
                                                                (1U 
                                                                 & (IData)(
                                                                           (vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Frdata
                                                                            [0U] 
                                                                            >> 0x25U))))) 
                                                << 0x20U));
    vlTOPp->xcel___05Frespstream___05Fmsg = ((0x100000000ULL 
                                              & vlTOPp->xcel___05Frespstream___05Fmsg) 
                                             | (IData)((IData)(
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Frdata
                                                                            [0U] 
                                                                            >> 0x25U)))
                                                                 ? 0U
                                                                 : vlTOPp->NullXcelFL_noparam__DOT__xr0___05Fout))));
}

VL_INLINE_OPT void VNullXcelFL_noparam::_combo__TOP__5(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_combo__TOP__5\n"); );
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__wdata[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwdata
        [0U];
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__ostream_xfer 
        = ((0U < (IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount)) 
           & (IData)(vlTOPp->xcel___05Frespstream___05Frdy));
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__istream_xfer 
        = ((IData)(vlTOPp->xcel___05Freqstream___05Fval) 
           & (2U > (IData)(vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl___05Fcount)));
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwen[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__ctrl__DOT__istream_xfer;
    vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT____Vcellinp__rf__wen[0U] 
        = vlTOPp->NullXcelFL_noparam__DOT__xcelreq_q__DOT__dpath__DOT__rf___05Fwen
        [0U];
}

void VNullXcelFL_noparam::_eval(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_eval\n"); );
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    vlTOPp->_combo__TOP__5(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VNullXcelFL_noparam::_change_request(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_change_request\n"); );
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VNullXcelFL_noparam::_change_request_1(VNullXcelFL_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_change_request_1\n"); );
    VNullXcelFL_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VNullXcelFL_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcelFL_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((mem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("mem__reqstream__rdy");}
    if (VL_UNLIKELY((mem___05Frespstream___05Fval & 0xfeU))) {
        Verilated::overWidthError("mem__respstream__val");}
    if (VL_UNLIKELY((xcel___05Freqstream___05Fval & 0xfeU))) {
        Verilated::overWidthError("xcel__reqstream__val");}
    if (VL_UNLIKELY((xcel___05Frespstream___05Frdy 
                     & 0xfeU))) {
        Verilated::overWidthError("xcel__respstream__rdy");}
}
#endif  // VL_DEBUG
