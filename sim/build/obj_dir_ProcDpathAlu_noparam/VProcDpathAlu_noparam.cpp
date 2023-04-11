// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathAlu_noparam.h for the primary calling header

#include "VProcDpathAlu_noparam.h"
#include "VProcDpathAlu_noparam__Syms.h"

//==========

void VProcDpathAlu_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcDpathAlu_noparam::eval\n"); );
    VProcDpathAlu_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("proc/ProcDpathAlu.v", 79, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcDpathAlu_noparam::_eval_initial_loop(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("proc/ProcDpathAlu.v", 79, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VProcDpathAlu_noparam::_combo__TOP__1(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_combo__TOP__1\n"); );
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ops_lt = VL_LTS_III(1,32,32, vlTOPp->in0, vlTOPp->in1);
    vlTOPp->ops_ltu = (vlTOPp->in0 < vlTOPp->in1);
    vlTOPp->ops_eq = (vlTOPp->in0 == vlTOPp->in1);
    if ((8U & (IData)(vlTOPp->fn))) {
        if ((4U & (IData)(vlTOPp->fn))) {
            if ((2U & (IData)(vlTOPp->fn))) {
                vlTOPp->out = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->fn))) {
                    vlTOPp->out = (vlTOPp->in0 + vlTOPp->in1);
                    vlTOPp->out = (0xfffffffeU & vlTOPp->out);
                } else {
                    vlTOPp->out = vlTOPp->in1;
                }
            }
        } else {
            vlTOPp->out = ((2U & (IData)(vlTOPp->fn))
                            ? ((1U & (IData)(vlTOPp->fn))
                                ? vlTOPp->in0 : VL_SHIFTRS_III(32,32,5, vlTOPp->in0, 
                                                               (0x1fU 
                                                                & vlTOPp->in1)))
                            : ((1U & (IData)(vlTOPp->fn))
                                ? (vlTOPp->in0 >> (0x1fU 
                                                   & vlTOPp->in1))
                                : (~ (vlTOPp->in0 | vlTOPp->in1))));
        }
    } else {
        vlTOPp->out = ((4U & (IData)(vlTOPp->fn)) ? 
                       ((2U & (IData)(vlTOPp->fn)) ? 
                        ((1U & (IData)(vlTOPp->fn))
                          ? (vlTOPp->in0 ^ vlTOPp->in1)
                          : (vlTOPp->in0 & vlTOPp->in1))
                         : ((1U & (IData)(vlTOPp->fn))
                             ? (vlTOPp->in0 < vlTOPp->in1)
                             : VL_LTS_III(32,32,32, vlTOPp->in0, vlTOPp->in1)))
                        : ((2U & (IData)(vlTOPp->fn))
                            ? ((1U & (IData)(vlTOPp->fn))
                                ? (vlTOPp->in0 | vlTOPp->in1)
                                : (vlTOPp->in0 << (0x1fU 
                                                   & vlTOPp->in1)))
                            : ((1U & (IData)(vlTOPp->fn))
                                ? (vlTOPp->in0 - vlTOPp->in1)
                                : (vlTOPp->in0 + vlTOPp->in1))));
    }
}

void VProcDpathAlu_noparam::_eval(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_eval\n"); );
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VProcDpathAlu_noparam::_change_request(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_change_request\n"); );
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VProcDpathAlu_noparam::_change_request_1(VProcDpathAlu_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_change_request_1\n"); );
    VProcDpathAlu_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VProcDpathAlu_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAlu_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((fn & 0xf0U))) {
        Verilated::overWidthError("fn");}
}
#endif  // VL_DEBUG
