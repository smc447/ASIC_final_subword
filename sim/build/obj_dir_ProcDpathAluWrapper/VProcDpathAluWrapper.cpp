// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathAluWrapper.h for the primary calling header

#include "VProcDpathAluWrapper.h"
#include "VProcDpathAluWrapper__Syms.h"

//==========

void VProcDpathAluWrapper::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VProcDpathAluWrapper::eval\n"); );
    VProcDpathAluWrapper__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("proc/ProcDpathAluWrapper.v", 106, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VProcDpathAluWrapper::_eval_initial_loop(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("proc/ProcDpathAluWrapper.v", 106, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

VL_INLINE_OPT void VProcDpathAluWrapper::_combo__TOP__1(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_combo__TOP__1\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->istream_rdy = vlTOPp->ostream_rdy;
}

VL_INLINE_OPT void VProcDpathAluWrapper::_sequent__TOP__3(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_sequent__TOP__3\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ostream_rdy))) {
        vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__val_reg_out 
            = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->istream_val)));
    }
    if (vlTOPp->ostream_rdy) {
        vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out 
            = (0x3fU & vlTOPp->istream_msg[2U]);
    }
    if (vlTOPp->ostream_rdy) {
        vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
            = vlTOPp->istream_msg[0U];
    }
    if (vlTOPp->ostream_rdy) {
        vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
            = vlTOPp->istream_msg[1U];
    }
    vlTOPp->ostream_val = vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__val_reg_out;
    if ((0x20U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))) {
        vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out = 0U;
    } else {
        if ((0x10U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))) {
            vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out 
                = ((8U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                    ? 0U : ((4U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                             ? 0U : ((2U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                      ? 0U : ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                               ? ((0xff000000U 
                                                   & (((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                        >> 0x18U) 
                                                       - 
                                                       (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
                                                        >> 0x18U)) 
                                                      << 0x18U)) 
                                                  | ((0xff0000U 
                                                      & (((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                           >> 0x10U) 
                                                          - 
                                                          (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
                                                           >> 0x10U)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                              >> 8U) 
                                                             - 
                                                             (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
                                                              >> 8U)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                              - vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)))))
                                               : ((0xff000000U 
                                                   & (((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                        >> 0x18U) 
                                                       + 
                                                       (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
                                                        >> 0x18U)) 
                                                      << 0x18U)) 
                                                  | ((0xff0000U 
                                                      & (((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                           >> 0x10U) 
                                                          + 
                                                          (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
                                                           >> 0x10U)) 
                                                         << 0x10U)) 
                                                     | ((0xff00U 
                                                         & (((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                              >> 8U) 
                                                             + 
                                                             (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out 
                                                              >> 8U)) 
                                                            << 8U)) 
                                                        | (0xffU 
                                                           & (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                              + vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)))))))));
        } else {
            if ((8U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))) {
                if ((4U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))) {
                    if ((2U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))) {
                        vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out = 0U;
                    } else {
                        if ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))) {
                            vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out 
                                = (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   + vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out);
                            vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out 
                                = (0xfffffffeU & vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out);
                        } else {
                            vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out 
                                = vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out;
                        }
                    }
                } else {
                    vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out 
                        = ((2U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                            ? ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                ? vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out
                                : VL_SHIFTRS_III(32,32,5, vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out, 
                                                 (0x1fU 
                                                  & vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)))
                            : ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                ? (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   >> (0x1fU & vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))
                                : (~ (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                      | vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))));
                }
            } else {
                vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out 
                    = ((4U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                        ? ((2U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                            ? ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                ? (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   ^ vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)
                                : (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   & vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))
                            : ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                ? (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   < vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)
                                : VL_LTS_III(32,32,32, vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out, vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)))
                        : ((2U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                            ? ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                ? (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   | vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)
                                : (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   << (0x1fU & vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)))
                            : ((1U & (IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out))
                                ? (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   - vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out)
                                : (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                   + vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))));
            }
        }
    }
    vlTOPp->ostream_msg = ((((QData)((IData)((vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                              == vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))) 
                             << 0x22U) | (((QData)((IData)(
                                                           VL_LTS_III(1,32,32, vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out, vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))) 
                                           << 0x21U) 
                                          | (((QData)((IData)(
                                                              (vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out 
                                                               < vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out))) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlTOPp->ProcDpathAluWrapper__DOT__v__DOT__out))))) 
                           & (- (QData)((IData)(vlTOPp->ostream_val))));
}

void VProcDpathAluWrapper::_eval(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_eval\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VProcDpathAluWrapper::_change_request(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_change_request\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VProcDpathAluWrapper::_change_request_1(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_change_request_1\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VProcDpathAluWrapper::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((istream_msg[2U] & 0xffffffc0U))) {
        Verilated::overWidthError("istream_msg");}
    if (VL_UNLIKELY((istream_val & 0xfeU))) {
        Verilated::overWidthError("istream_val");}
    if (VL_UNLIKELY((ostream_rdy & 0xfeU))) {
        Verilated::overWidthError("ostream_rdy");}
}
#endif  // VL_DEBUG
