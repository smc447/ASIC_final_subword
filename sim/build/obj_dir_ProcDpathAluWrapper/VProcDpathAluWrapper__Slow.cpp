// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcDpathAluWrapper.h for the primary calling header

#include "VProcDpathAluWrapper.h"
#include "VProcDpathAluWrapper__Syms.h"

//==========

VL_CTOR_IMP(VProcDpathAluWrapper) {
    VProcDpathAluWrapper__Syms* __restrict vlSymsp = __VlSymsp = new VProcDpathAluWrapper__Syms(this, name());
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VProcDpathAluWrapper::__Vconfigure(VProcDpathAluWrapper__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VProcDpathAluWrapper::~VProcDpathAluWrapper() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VProcDpathAluWrapper::_settle__TOP__2(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_settle__TOP__2\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->istream_rdy = vlTOPp->ostream_rdy;
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

void VProcDpathAluWrapper::_eval_initial(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_eval_initial\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VProcDpathAluWrapper::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::final\n"); );
    // Variables
    VProcDpathAluWrapper__Syms* __restrict vlSymsp = this->__VlSymsp;
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VProcDpathAluWrapper::_eval_settle(VProcDpathAluWrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_eval_settle\n"); );
    VProcDpathAluWrapper* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VProcDpathAluWrapper::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcDpathAluWrapper::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(70, istream_msg);
    istream_rdy = VL_RAND_RESET_I(1);
    istream_val = VL_RAND_RESET_I(1);
    ostream_msg = VL_RAND_RESET_Q(35);
    ostream_rdy = VL_RAND_RESET_I(1);
    ostream_val = VL_RAND_RESET_I(1);
    ProcDpathAluWrapper__DOT__v__DOT__val_reg_out = VL_RAND_RESET_I(1);
    ProcDpathAluWrapper__DOT__v__DOT__in0_reg_out = VL_RAND_RESET_I(32);
    ProcDpathAluWrapper__DOT__v__DOT__in1_reg_out = VL_RAND_RESET_I(32);
    ProcDpathAluWrapper__DOT__v__DOT__fn_reg_out = VL_RAND_RESET_I(6);
    ProcDpathAluWrapper__DOT__v__DOT__out = VL_RAND_RESET_I(32);
}
