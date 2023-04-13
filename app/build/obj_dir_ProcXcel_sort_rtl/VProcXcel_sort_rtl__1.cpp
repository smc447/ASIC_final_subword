// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VProcXcel_sort_rtl.h for the primary calling header

#include "VProcXcel_sort_rtl.h"
#include "VProcXcel_sort_rtl__Syms.h"

#include "verilated_dpi.h"

void VProcXcel_sort_rtl::__Vdpiexp_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::__Vdpiexp_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__val;
    CData/*0:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__rdy;
    CData/*7:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__204__char;
    CData/*7:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__206__char;
    CData/*7:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__208__char;
    CData/*7:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__210__char;
    WData/*4095:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__str[128];
    WData/*4095:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__203__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__204__num;
    WData/*4095:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__206__num;
    WData/*4095:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__208__num;
    WData/*4095:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[128];
    IData/*31:0*/ __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__210__num;
    IData/*31:0*/ __Vilp;
    VProcXcel_sort_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__str[__Vilp] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__rdy 
        = vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_respstream_rdy;
    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__val 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel_xcel_respstream_val;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__rdy) 
         & (IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__203__str[__Vilp] 
                = __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__203__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__203__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__203__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__203__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__rdy) 
             & (~ (IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__val)))) {
            __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__204__num 
                = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__204__char = 0x20U;
            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__204__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__204__char);
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__rdy)) 
                 & (IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__val))) {
                __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__205__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__206__num 
                    = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__206__char = 0x20U;
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__206__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__206__char);
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__rdy)) 
                           & (~ (IData)(__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__202__val))))) {
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__207__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__208__num 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__208__char = 0x20U;
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__208__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__208__char);
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__209__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__210__num 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__210__char = 0x20U;
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__210__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__210__char);
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VProcXcel_sort_rtl::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VProcXcel_sort_rtl__Vcb_line_trace_t __Vcb = (VProcXcel_sort_rtl__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VProcXcel_sort_rtl__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VProcXcel_sort_rtl::_sequent__TOP__1(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::_sequent__TOP__1\n"); );
    VProcXcel_sort_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    CData/*0:0*/ __Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0;
    CData/*4:0*/ __Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    CData/*0:0*/ __Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    CData/*3:0*/ __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg;
    IData/*31:0*/ __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    WData/*95:0*/ __Vtemp367[3];
    WData/*95:0*/ __Vtemp368[3];
    WData/*76:0*/ __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[3];
    // Body
    __Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 0U;
    __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg;
    __Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 0U;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U];
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U];
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U];
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1_in;
    if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U];
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U];
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U];
    }
    if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X;
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X);
    }
    if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W;
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr = 0U;
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full = 0U;
    } else {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr 
            = (1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full 
            = (1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next));
    }
    if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))) {
        __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[0U];
        __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[1U];
        __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U] 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[2U];
        __Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr;
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state));
    if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg;
    }
    if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
         & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg;
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D);
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_X;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M;
        }
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D);
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out 
            = (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D);
    }
    if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out 
            = (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D 
                       >> 0x20U));
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X;
        }
    }
    if (vlTOPp->reset) {
        __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 0U;
    } else {
        __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg;
        if ((8U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((4U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 0U;
                } else {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 0U;
                    } else {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
                                = ((((IData)(2U) + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                    < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))
                                    ? 5U : 1U);
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
                            = ((((IData)(2U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))
                                ? 7U : 5U);
                    } else {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
                                = ((((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                    >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))
                                    ? ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                         > ((IData)(1U) 
                                            + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                        & (((IData)(2U) 
                                            + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                           < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))
                                        ? 0xcU : ((
                                                   ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                    > 
                                                    ((IData)(1U) 
                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                   & (((IData)(2U) 
                                                       + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                      >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))
                                                   ? 3U
                                                   : 
                                                  ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                     <= 
                                                     ((IData)(1U) 
                                                      + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                    & (((IData)(2U) 
                                                        + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                       < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))
                                                    ? 5U
                                                    : 1U)))
                                    : 0xbU);
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 0xaU;
                        }
                    } else {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
                                = (((((IData)(1U) + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                     >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)) 
                                    & (((IData)(2U) 
                                        + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                       < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))
                                    ? 0xaU : 9U);
                        }
                    }
                }
            }
        } else {
            if ((4U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 8U;
                        }
                    } else {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
                                = (((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in 
                                     < vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot) 
                                    & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in) 
                                       != vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j))
                                    ? 7U : 0xbU);
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 6U;
                        }
                    } else {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 5U;
                        }
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 4U;
                        }
                    } else {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 3U;
                        }
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if (((1U <= vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top) 
                             & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy))) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 2U;
                        } else {
                            if (((1U > vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top) 
                                 & (0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in)))) {
                                __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 0U;
                            }
                        }
                    } else {
                        if (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__go) 
                             & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_respstream_rdy))) {
                            __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg = 3U;
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_W 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M;
        }
    }
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_wen_W) {
        __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W;
        __Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 = 1U;
        __Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W;
    }
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out 
            = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D)));
    }
    if (((IData)(vlTOPp->reset) | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                                   & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W);
    }
    if (__Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][0U] 
            = __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[0U];
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][1U] 
            = __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[1U];
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[__Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0][2U] 
            = __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile__v0[2U];
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg 
        = __Vdly__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg;
    if (__Vdlyvset__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[__Vdlyvdim0__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0] 
            = __Vdlyvval__ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile__v0;
    }
    vlTOPp->xmem___05Freqstream___05Fval = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    vlTOPp->xmem___05Freqstream___05Fmsg[0U] = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                                & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full))));
    vlTOPp->xmem___05Freqstream___05Fmsg[1U] = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                                & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full))));
    vlTOPp->xmem___05Freqstream___05Fmsg[2U] = (0x3fffU 
                                                & (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                   & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full)))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr 
        = ((IData)(vlTOPp->reset) ? 0U : (1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next)));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D;
        }
    }
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_D))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x20ffffffffULL & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | ((QData)((IData)((0x1fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))) 
              << 0x20U));
    if ((8U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
        if ((4U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
            if ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X = 0U;
            } else {
                if ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X);
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                        = (0xfffffffeU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X);
                } else {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                        = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X;
                }
            }
        } else {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                = ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X
                        : VL_SHIFTRS_III(32,32,5, vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X, 
                                         (0x1fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           >> (0x1fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))
                        : (~ (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                              | vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))));
        }
    } else {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
            = ((4U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                ? ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           ^ vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))
                    : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           < vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : VL_LTS_III(32,32,32, vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X, vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)))
                : ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                    ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           | vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           << (0x1fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)))
                    : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X))
                        ? (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           - vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X)
                        : (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                           + vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X))));
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x3f00000000ULL & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg 
        = ((0x1fffffffffULL & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg) 
           | ((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X)) 
              << 0x25U));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X 
                = (3U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy = 0U;
    if ((0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy = 1U;
            } else {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy = 1U;
                    } else {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy = 1U;
                            } else {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X 
        = ((vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out 
            * vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full_next));
    vlTOPp->stats_en = (0U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W);
    if ((1U & ((IData)(vlTOPp->reset) | (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W))))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W 
            = ((IData)(vlTOPp->reset) ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_M;
        }
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W 
                = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
                   & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)));
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr) 
              == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_F))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F 
            = ((IData)(vlTOPp->reset) ? 0x1fcU : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F);
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D;
        }
    }
    __Vtemp367[0U] = (IData)((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data)));
    __Vtemp367[1U] = ((0xfffffffcU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                                      << 2U)) | (IData)(
                                                        ((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data)) 
                                                         >> 0x20U)));
    __Vtemp367[2U] = (3U & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X 
                            >> 0x1eU));
    VL_EXTEND_WW(74,66, __Vtemp368, __Vtemp367);
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U] 
        = __Vtemp368[0U];
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U] 
        = __Vtemp368[1U];
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U] 
        = ((0xfffffc00U & (((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X))
                             ? 1U : 0U) << 0xaU)) | 
           __Vtemp368[2U]);
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 0U;
    if ((0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((1U <= vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top)) {
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
            }
        } else {
            if ((2U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                } else {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                        } else {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                } else {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                        } else {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D;
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X 
        = ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X))
            ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X
            : ((1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X))
                ? ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__dpath__DOT__qstore
                    : ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)
                        ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X))
                : ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X))
                    ? ((IData)(4U) + vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_X)
                    : 0U)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_M 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_X;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_wen_W 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full));
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M 
                = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
                   & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)));
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W));
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X 
                = (0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                            >> 7U));
        }
    }
    if ((1U & (~ (IData)(vlTOPp->reset)))) {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_X 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D;
        }
    }
    vlTOPp->commit_inst = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                           & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
            & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W))) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W));
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X = 0U;
    } else {
        if ((1U & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X 
                = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                    & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
                   & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D)));
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_proc2mngr_val 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val));
    if (((IData)(vlTOPp->reset) | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_D))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
            = ((IData)(vlTOPp->reset) ? 0U : (IData)(vlTOPp->imem___05Frespstream___05Fmsg));
    }
    vlTOPp->proc2mngr___05Fval = vlTOPp->ProcXcel_sort_rtl__DOT__proc_proc2mngr_val;
    vlTOPp->proc2mngr___05Fmsg = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                    ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore
                                    : ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                                        ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W)) 
                                  & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_proc2mngr_val))));
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D = 0U;
    } else {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_D) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D 
                = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
                    & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F))) 
                   & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)));
        }
    }
    vlTOPp->__Vtableidx1 = (((vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                              == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X) 
                             << 6U) | ((VL_LTS_III(1,32,32, vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X, vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X) 
                                        << 5U) | ((
                                                   (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X 
                                                    < vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X) 
                                                   << 4U) 
                                                  | (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X) 
                                                      << 1U) 
                                                     | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X 
        = vlTOPp->__Vtable1_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X
        [vlTOPp->__Vtableidx1];
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
           & ((((0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)) 
                & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
               | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X) 
                  & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X)))) 
              | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X) 
                 & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full))));
    if (((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D 
            = ((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 0xcU : ((0x2073U 
                                             == (0x707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                             ? 0xcU
                                             : ((0x1073U 
                                                 == 
                                                 (0x707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                 ? 0xbU
                                                 : 
                                                ((0x33U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                  ? 0U
                                                  : 
                                                 ((0x40000033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 1U
                                                   : 0U)))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = ((0x13U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                  & ((0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                     | ((0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        | (0x1073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
            = ((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 2U : 0U)));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D 
            = ((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 0U : ((0x2073U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 0U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x33U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0U
                                                     : 
                                                    ((0x40000033U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 0U
                                                      : 1U)))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D 
            = ((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 1U : 0U));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D = 0U;
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_sel_D 
            = ((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x7e002073U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 1U : ((0x2073U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 2U : (
                                                   (0x1073U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 0U)))));
    } else {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? ((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                    ? 6U : ((0x6033U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                             ? 3U : ((0x4033U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 7U : ((0x2033U 
                                               == (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 4U
                                               : ((0x3033U 
                                                   == 
                                                   (0xfe00707fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 5U
                                                   : 
                                                  ((0x40005033U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0xaU
                                                    : 
                                                   ((0x5033U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 9U
                                                     : 2U)))))))
                : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          | (0x7013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x6013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x4013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x2013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x40005013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                    ? ((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                        ? 0U : ((0x7013U == (0x707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                 ? 6U : ((0x6013U == 
                                          (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                          ? 3U : ((0x4013U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 7U
                                                   : 
                                                  ((0x2013U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 4U
                                                    : 
                                                   ((0x3013U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 5U
                                                     : 
                                                    ((0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 0xaU
                                                      : 9U)))))))
                    : (((((((((0x1013U == (0xfe00707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                              | (0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2003U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                        ? ((0x1013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                            ? 2U : ((0x37U == (0x7fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                     ? 0xcU : 0U)) : 
                       ((0x6063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 0U : ((0x5063U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                  ? 0U : ((0x7063U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 0U : (
                                                   (0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0xdU
                                                     : 0U))))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | (0x7013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x6013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (((((((((0x1013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                      ? ((0x1013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | ((0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x2003U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))
                      : ((0x6063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         & ((0x5063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            & ((0x7063U != (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               & ((0x6fU == (0x7fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                  | (0x67U == (0x707fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 0U))))
                                  : 0U)));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? 0U : ((0x6063U 
                                           == (0x707fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                           ? 0U : (
                                                   (0x5063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x7063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0U
                                                     : 
                                                    ((0x6fU 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 2U
                                                      : 
                                                     ((0x67U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 2U
                                                       : 0U))))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 0U
                                                     : 
                                                    ((0x1063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 1U
                                                      : 
                                                     ((0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 4U
                                                       : 2U)))))))
                                  : ((0x6063U == (0x707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 3U : ((0x5063U 
                                               == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 5U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 6U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 7U
                                                     : 0U))))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 0U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 2U
                                                     : 0U)))))
                                  : 0U)));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_sel_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                ? 0U : (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | (0x7013U == (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                              | (0x6013U == (0x707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x4013U == (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2013U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x40005013U == (0xfe00707fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x5013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                         ? 1U : (((((((((0x1013U == 
                                         (0xfe00707fU 
                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                        | (0x37U == 
                                           (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                       | (0x17U == 
                                          (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                      | (0x2003U == 
                                         (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                     | (0x2023U == 
                                        (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                    | (0x1063U == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                   | (0x63U == (0x707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                  | (0x4063U == (0x707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                  ? ((0x1013U == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 1U : ((0x37U 
                                               == (0x7fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 1U
                                               : ((0x17U 
                                                   == 
                                                   (0x7fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 1U
                                                   : 
                                                  ((0x2003U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 1U
                                                    : 
                                                   ((0x2023U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 1U
                                                     : 0U)))))
                                  : ((0x6063U == (0x707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                      ? 0U : ((0x5063U 
                                               == (0x707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                               ? 0U
                                               : ((0x7063U 
                                                   == 
                                                   (0x707fU 
                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                   ? 0U
                                                   : 
                                                  ((0x6fU 
                                                    == 
                                                    (0x7fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x67U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 1U
                                                     : 0U))))))));
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_sel_D 
        = ((~ ((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                     | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x7e002073U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
           & ((~ ((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        | (0x6033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
              & ((~ ((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                           | (0x7013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x6013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x4013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x2013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                 & (((((((((0x1013U == (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                           | (0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2003U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x2023U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x63U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    & ((0x1013U != (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & ((0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))))))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D 
        = (((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           & ((0x13U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
              & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                 & ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                    & ((0x2073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D 
        = (((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
            ? ((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                ? 0U : ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                         ? 2U : 0U)) : (((((((((0x7033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                               | (0x6033U 
                                                  == 
                                                  (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                              | (0x4033U 
                                                 == 
                                                 (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                             | (0x2033U 
                                                == 
                                                (0xfe00707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                            | (0x3033U 
                                               == (0xfe00707fU 
                                                   & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                           | (0x40005033U 
                                              == (0xfe00707fU 
                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                          | (0x5033U 
                                             == (0xfe00707fU 
                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                         | (0x1033U 
                                            == (0xfe00707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                         ? 0U : (((
                                                   ((((((0x13U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                                        | (0x7013U 
                                                           == 
                                                           (0x707fU 
                                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                       | (0x6013U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                      | (0x4013U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                     | (0x2013U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                    | (0x3013U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                   | (0x40005013U 
                                                      == 
                                                      (0xfe00707fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                  | (0x5013U 
                                                     == 
                                                     (0xfe00707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                                  ? 0U
                                                  : 
                                                 (((((((((0x1013U 
                                                          == 
                                                          (0xfe00707fU 
                                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                                         | (0x37U 
                                                            == 
                                                            (0x7fU 
                                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                        | (0x17U 
                                                           == 
                                                           (0x7fU 
                                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                       | (0x2003U 
                                                          == 
                                                          (0x707fU 
                                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                      | (0x2023U 
                                                         == 
                                                         (0x707fU 
                                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                     | (0x1063U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                    | (0x63U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                                                   | (0x4063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                                                   ? 
                                                  ((0x1013U 
                                                    == 
                                                    (0xfe00707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 0U
                                                    : 
                                                   ((0x37U 
                                                     == 
                                                     (0x7fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 3U
                                                     : 
                                                    ((0x17U 
                                                      == 
                                                      (0x7fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 3U
                                                      : 
                                                     ((0x2003U 
                                                       == 
                                                       (0x707fU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 0U
                                                       : 
                                                      ((0x2023U 
                                                        == 
                                                        (0x707fU 
                                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                        ? 1U
                                                        : 2U)))))
                                                   : 
                                                  ((0x6063U 
                                                    == 
                                                    (0x707fU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                    ? 2U
                                                    : 
                                                   ((0x5063U 
                                                     == 
                                                     (0x707fU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                     ? 2U
                                                     : 
                                                    ((0x7063U 
                                                      == 
                                                      (0x707fU 
                                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                      ? 2U
                                                      : 
                                                     ((0x6fU 
                                                       == 
                                                       (0x7fU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))
                                                       ? 4U
                                                       : 0U))))))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__jal_D 
        = ((~ ((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                     | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x7e002073U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
           & ((~ ((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        | (0x6033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005033U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
              & ((~ ((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                           | (0x7013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x6013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x4013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x2013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x40005013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                 & ((~ ((((((((0x1013U == (0xfe00707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                              | (0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                             | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                            | (0x2003U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x2023U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x63U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x4063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                    & ((0x6063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & ((0x5063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          & ((0x7063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                             & (0x6fU == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D 
        = (((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                  | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           & ((0x13U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
              & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                 & ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                    & ((0x2073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                       & ((0x1073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                          & ((0x33U != (0xfe00707fU 
                                        & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                             & (0x40000033U != (0xfe00707fU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
    if (((((((((0x13U == vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
              | (0x7e002073U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
             | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
            | (0x1073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
           | (0x33U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
          | (0x40000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
         | (0x2000033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = ((0x13U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               & ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                  | ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                     & (0x2073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = ((0x13U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
               & ((0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                  | ((0x7e002073U != (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                     & ((0x2073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                        & (0x1073U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D 
            = (((0x13U != vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                & ((0x1063U != (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                   & ((0x7e002073U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x2073U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))))) 
               & 1U);
    } else {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | (((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | (0x7013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x6013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x4013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x2013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x40005013U == (0xfe00707fU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (((((((((0x1013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                      ? ((0x1013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x37U != (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            & (0x17U != (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))))
                      : ((0x6063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x5063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | ((0x7063U == (0x707fU 
                                            & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               | ((0x6fU != (0x7fU 
                                             & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                                  & (0x67U == (0x707fU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D 
            = (((((((((0x7033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                      | (0x6033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                     | (0x4033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                    | (0x2033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                   | (0x3033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                  | (0x40005033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                 | (0x5033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                | (0x1033U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
               | ((~ ((((((((0x13U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x7013U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x6013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x4013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x3013U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x40005013U == (0xfe00707fU 
                                          & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x5013U == (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))) 
                  & (((((((((0x1013U == (0xfe00707fU 
                                         & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x37U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                           | (0x17U == (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                          | (0x2003U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                         | (0x2023U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                        | (0x1063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                       | (0x63U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D))) 
                      | (0x4063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))
                      ? ((0x1013U != (0xfe00707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         & ((0x37U != (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            & ((0x17U != (0x7fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                               & (0x2003U != (0x707fU 
                                              & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))
                      : ((0x6063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                         | ((0x5063U == (0x707fU & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)) 
                            | (0x7063U == (0x707fU 
                                           & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)))))));
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D = 0U;
    }
    if (vlTOPp->reset) {
        vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F = 0U;
    } else {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_F) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F = 1U;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U == (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D = 1U;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0x7c1U == (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D = 1U;
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D 
        = ((4U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
            ? ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                ? 0U : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                         ? 0U : ((0xfff00000U & ((- (IData)(
                                                            (1U 
                                                             & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                                >> 0x1fU)))) 
                                                 << 0x14U)) 
                                 | ((0xff000U & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D) 
                                    | ((0x800U & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                  >> 9U)) 
                                       | ((0x7e0U & 
                                           (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                            >> 0x14U)) 
                                          | (0x1eU 
                                             & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                >> 0x14U))))))))
            : ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                    ? (0xfffff000U & vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D)
                    : ((0xfffff000U & ((- (IData)((1U 
                                                   & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                      >> 0x1fU)))) 
                                       << 0xcU)) | 
                       ((0x800U & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                   << 4U)) | ((0x7e0U 
                                               & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                  >> 0x14U)) 
                                              | (0x1eU 
                                                 & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                    >> 7U))))))
                : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D))
                    ? ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       ((0x7e0U & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                   >> 0x14U)) | (0x1fU 
                                                 & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                    >> 7U))))
                    : ((0xfffff800U & ((- (IData)((1U 
                                                   & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                      >> 0x1fU)))) 
                                       << 0xbU)) | 
                       (0x7ffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U))))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__jal_D));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D) {
        if (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
               & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                            >> 0xfU)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
              & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
             & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 1U;
        } else {
            if (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
                   & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                >> 0xfU)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                  & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                 & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 2U;
            } else {
                if (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                       & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0xfU)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                      & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                     & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_wen_W))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D = 3U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D) {
        if (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
               & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                            >> 0x14U)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
              & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
             & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 1U;
        } else {
            if (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
                   & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                >> 0x14U)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                  & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M))) 
                 & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 2U;
            } else {
                if (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W) 
                       & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0x14U)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                      & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W))) 
                     & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_wen_W))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D = 3U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0xfc1U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                if ((0xf14U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                          >> 0x14U)))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = 0U;
                }
            }
        }
    }
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0x7c1U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D = 1U;
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0xfc1U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                if ((0xf14U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                          >> 0x14U)))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = 1U;
                }
            }
        }
    }
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D) {
        if ((0x7c0U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0x7c1U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D = 1U;
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U != (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            if ((0xfc1U == (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = 1U;
            } else {
                if ((0xf14U == (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                          >> 0x14U)))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D = 2U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D) {
        if ((0xfc0U == (0xfffU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                  >> 0x14U)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D = 1U;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D 
        = (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D 
           + vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D);
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__pc_sel_F 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X)
            ? ((7U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X))
                ? 3U : 1U) : ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D)
                               ? 2U : 0U));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F 
        = ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
            ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X
                : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D)
            : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__pc_sel_F))
                ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X
                : ((IData)(4U) + vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[0U] = 0U;
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[1U] 
        = (0xfffffffcU & ((IData)((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F))) 
                          << 2U));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[2U] 
        = ((3U & ((IData)((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F))) 
                  >> 0x1eU)) | (0xfffffffcU & ((IData)(
                                                       ((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F)) 
                                                        >> 0x20U)) 
                                               << 2U)));
}

VL_INLINE_OPT void VProcXcel_sort_rtl::_combo__TOP__3(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::_combo__TOP__3\n"); );
    VProcXcel_sort_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val 
        = ((IData)(vlTOPp->xmem___05Frespstream___05Fval) 
           & (0U == (7U & (IData)((vlTOPp->xmem___05Frespstream___05Fmsg 
                                   >> 0x2cU)))));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->xmem___05Freqstream___05Frdy) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
                 | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                    & (IData)(vlTOPp->xmem___05Freqstream___05Frdy))));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel_xcel_respstream_val = 0U;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel_xcel_respstream_val 
            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val;
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel_mem_respstream_rdy 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy) 
           | (1U == (7U & (IData)((vlTOPp->xmem___05Frespstream___05Fmsg 
                                   >> 0x2cU)))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->proc2mngr___05Frdy) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_proc2mngr_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & (((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                 & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D)) 
                & (~ (IData)(vlTOPp->mngr2proc___05Fval))) 
               | (((((((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                         & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                        & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                       & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0xfU)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                     & (1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X))) 
                    | ((((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                          & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                         & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0x14U)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                        & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)))) 
                   | (((((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D) 
                           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                          & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                         & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                      >> 0xfU)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                        & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X)) 
                      & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X)))) 
                  | (((((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D) 
                          & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X)) 
                         & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X)) 
                        & ((0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                     >> 0x14U)) == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                       & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X))) 
                      & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X)) 
                     & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X))))) 
              | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D) 
                 & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full))));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1_in 
                                                = (IData)(vlTOPp->xmem___05Frespstream___05Fmsg);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top_in 
                        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top 
                           - (IData)(1U));
                }
            } else {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top_in 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in 
                        = (0xffffU & (IData)(vlTOPp->xmem___05Frespstream___05Fmsg));
                }
            } else {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                              > 
                                                              ((IData)(1U) 
                                                               + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                             & (((IData)(2U) 
                                                                 + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))) {
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in 
                                                                = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low;
                                                        } else {
                                                            if (
                                                                (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                  <= 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                    < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))) {
                                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in 
                                                        = 
                                                        ((((IData)(2U) 
                                                           + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                          >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j)
                                                          : 
                                                         ((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j));
                                                } else {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            if (
                                                                (((IData)(2U) 
                                                                  + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                 < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in 
                        = (0xffffU & (IData)(vlTOPp->xmem___05Frespstream___05Fmsg));
                }
            } else {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                  > 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                    >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))))) {
                                                            if (
                                                                (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                  <= 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                    < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))) {
                                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            if (
                                                                (((IData)(2U) 
                                                                  + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                 < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high_in 
            = (0xffffU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size);
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high_in 
                        = (0xffffU & (IData)((vlTOPp->xmem___05Frespstream___05Fmsg 
                                              >> 0x10U)));
                }
            } else {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                              > 
                                                              ((IData)(1U) 
                                                               + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                             & (((IData)(2U) 
                                                                 + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))) {
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high_in 
                                                                = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i;
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot;
    if ((0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot_in 
                                = (IData)(vlTOPp->xmem___05Frespstream___05Fmsg);
                        }
                    } else {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                  > 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                    >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))))) {
                                                            if (
                                                                (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                  <= 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                    < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))) {
                                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot_in 
                                                                    = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            if (
                                                                (((IData)(2U) 
                                                                  + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                 < (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot_in 
                                                                    = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1;
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] = 0U;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] = 0U;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] = 0U;
    if ((0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((1U <= vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top)) {
                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                        = (0x3ffU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                        = ((3U & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                           | (0xfffffffcU & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src 
                                              + (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top 
                                                 << 2U)) 
                                             << 2U)));
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                        = ((0x1ffcU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                           | (3U & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src 
                                     + (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top 
                                        << 2U)) >> 0x1eU)));
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                        = (0xfffffffcU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                            = (0x3ffU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                            = ((3U & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                               | (0xfffffffcU & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                  + 
                                                  (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high) 
                                                    - (IData)(1U)) 
                                                   << 2U)) 
                                                 << 2U)));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                            = ((0x1ffcU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                               | (3U & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                         + (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high) 
                                             - (IData)(1U)) 
                                            << 2U)) 
                                        >> 0x1eU)));
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                            = (0xfffffffcU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                    = (0x3ffU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                    = ((3U & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                       | (0xfffffffcU 
                                          & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                              + (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j 
                                                 << 2U)) 
                                             << 2U)));
                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                    = ((0x1ffcU & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                       | (3U & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                 + 
                                                 (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j 
                                                  << 2U)) 
                                                >> 0x1eU)));
                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                    = (0xfffffffcU 
                                       & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                            }
                        } else {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                            = (0x3ffU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                            = ((3U 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                               | (0xfffffffcU 
                                                  & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                      + 
                                                      ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                       << 2U)) 
                                                     << 2U)));
                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                            = ((0x1ffcU 
                                                & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                               | (3U 
                                                  & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                      + 
                                                      ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                       << 2U)) 
                                                     >> 0x1eU)));
                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                            = (0xfffffffcU 
                                               & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                    }
                                } else {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                    = 
                                                    (0x400U 
                                                     | (0x3ffU 
                                                        & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]));
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] 
                                                    = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1;
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                    = 
                                                    ((3U 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                                     | (0xfffffffcU 
                                                        & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                            + 
                                                            (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j 
                                                             << 2U)) 
                                                           << 2U)));
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                    = 
                                                    ((0x1ffcU 
                                                      & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                                     | (3U 
                                                        & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                            + 
                                                            (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j 
                                                             << 2U)) 
                                                           >> 0x1eU)));
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                            }
                                        } else {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                        = 
                                                        (0x400U 
                                                         | (0x3ffU 
                                                            & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]));
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] 
                                                        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2;
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                        = 
                                                        ((3U 
                                                          & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                                         | (0xfffffffcU 
                                                            & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                                + 
                                                                ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                 << 2U)) 
                                                               << 2U)));
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                        = 
                                                        ((0x1ffcU 
                                                          & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                                         | (3U 
                                                            & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src 
                                                                + 
                                                                ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                 << 2U)) 
                                                               >> 0x1eU)));
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                        = 
                                                        (0xfffffffcU 
                                                         & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                                = 
                                                                (0x400U 
                                                                 | (0x3ffU 
                                                                    & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]));
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] 
                                                                = 
                                                                (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low));
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                                = 
                                                                ((3U 
                                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                                                 | (0xfffffffcU 
                                                                    & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src 
                                                                        + 
                                                                        (((IData)(1U) 
                                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top) 
                                                                         << 2U)) 
                                                                       << 2U)));
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                                = 
                                                                ((0x1ffcU 
                                                                  & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                                                 | (3U 
                                                                    & ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src 
                                                                        + 
                                                                        (((IData)(1U) 
                                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top) 
                                                                         << 2U)) 
                                                                       >> 0x1eU)));
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in = 0xffffU;
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in 
                        = (0xffffU & ((IData)(vlTOPp->xmem___05Frespstream___05Fmsg) 
                                      - (IData)(1U)));
                }
            } else {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val) {
                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in 
                                        = (IData)(vlTOPp->xmem___05Frespstream___05Fmsg);
                                    if ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in 
                                         < vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot)) {
                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)));
                                    }
                                }
                            } else {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i) 
                                                              > 
                                                              ((IData)(1U) 
                                                               + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low))) 
                                                             & (((IData)(2U) 
                                                                 + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)) 
                                                                >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high)))) {
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in 
                                                                = 
                                                                (0xffffU 
                                                                 & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low) 
                                                                    - (IData)(1U)));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (((IData)(2U) 
                                                          + vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high))) {
                                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in 
                                                            = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot;
                                                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i)));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
           & (((0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)) 
               & (~ (IData)(vlTOPp->dmem___05Frespstream___05Fval))) 
              | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M) 
                 & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel_xcel_respstream_val)))));
    vlTOPp->xmem___05Frespstream___05Frdy = vlTOPp->ProcXcel_sort_rtl__DOT__xcel_mem_respstream_rdy;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr;
    if ((((IData)(vlTOPp->xmem___05Frespstream___05Fval) 
          & (1U == (7U & (IData)((vlTOPp->xmem___05Frespstream___05Fmsg 
                                  >> 0x2cU))))) & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel_mem_respstream_rdy))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in 
            = (0x1fU & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr) 
                        - (IData)(1U)));
    }
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr)));
                                            }
                                        } else {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr)));
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr)));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               & (~ (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                      & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
                     & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq))))) 
           & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
           & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
           & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X) 
               | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D) 
                | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_dmem_respstream_rdy 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
            & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))) 
           & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_respstream_rdy 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M) 
            & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M))) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
             & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
            & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))) 
           & (0U != (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
            & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X))) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X)) 
           & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X)));
    vlTOPp->mngr2proc___05Frdy = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                                   & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
                                  & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D));
    vlTOPp->dmem___05Frespstream___05Frdy = vlTOPp->ProcXcel_sort_rtl__DOT__proc_dmem_respstream_rdy;
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_rdy = 0U;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_rdy 
            = vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_respstream_rdy;
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_dmem_reqstream_val 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
                & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
               & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D)) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_reqstream_val 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_rdy) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->dmem___05Freqstream___05Fval = vlTOPp->ProcXcel_sort_rtl__DOT__proc_dmem_reqstream_val;
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] = 0U;
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U] = 0U;
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] = 0U;
    if (vlTOPp->ProcXcel_sort_rtl__DOT__proc_dmem_reqstream_val) {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[0U];
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U] 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[1U];
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[2U];
        } else {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] 
                = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[0U]);
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U] 
                = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[1U]);
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                    ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[2U]);
        }
        if ((0U == (7U & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U] 
                          >> 0xaU)))) {
            vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U] = 0U;
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->dmem___05Freqstream___05Frdy) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_dmem_reqstream_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_D 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D)) 
                 | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D 
        = ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D) 
             & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D))) 
            & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D))) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
           & ((((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F) 
                  & (~ ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)) 
                        & ((IData)(vlTOPp->imem___05Frespstream___05Fval) 
                           & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)))))) 
                 | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D)) 
                | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X)) 
               | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M)) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W)));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_reqstream_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_reqstream_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_reqstream_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)
             ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__dpath__DOT__qstore
             : ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)
                 ? 0ULL : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg)) 
           & (- (QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_xcel_reqstream_val))));
    vlTOPp->dmem___05Freqstream___05Fmsg[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[0U];
    vlTOPp->dmem___05Freqstream___05Fmsg[1U] = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[1U];
    vlTOPp->dmem___05Freqstream___05Fmsg[2U] = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[2U];
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_F 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F)) 
                 | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_respstream_rdy 
        = (1U & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state) 
                 | ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F)) 
                    | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val 
        = (1U & (((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F)) 
                  | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F)) 
                 & (~ (IData)(vlTOPp->reset))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)
            ? vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore
            : ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0ULL : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->imem___05Frespstream___05Frdy = vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_respstream_rdy;
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_respstream_rdy) 
           & (IData)(vlTOPp->imem___05Frespstream___05Fval));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val 
        = (1U & ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)) 
                 | ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) 
                    & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__go = 0U;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U == (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__go = 1U;
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U != (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    if ((1U != (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                 >> 0x20U))))) {
                        if ((2U != (0x1fU & (IData)(
                                                    (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                     >> 0x20U))))) {
                            if ((3U == (0x1fU & (IData)(
                                                        (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                         >> 0x20U))))) {
                                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src_in 
                                    = (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg);
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U != (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    if ((1U == (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src_in 
                            = (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg);
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size_in 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U != (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    if ((1U != (0x1fU & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                 >> 0x20U))))) {
                        if ((2U == (0x1fU & (IData)(
                                                    (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                     >> 0x20U))))) {
                            vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size_in 
                                = (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw = 0ULL;
    if ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (0x100000000ULL | vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw);
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (0x100000000ULL & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw);
            } else {
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (0xffffffffULL & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw);
                vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (1ULL | (0x100000000ULL & vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw));
            }
        }
    }
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state 
        = (1U & ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state)
                  ? (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go))
                  : ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F) 
                     & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go)))));
    vlTOPp->imem___05Freqstream___05Fval = vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val;
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[0U] 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
             ? ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                 ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[0U]
                 : 0U) : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][0U]) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[1U] 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
             ? ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                 ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[1U]
                 : 0U) : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][1U]) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U] 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
             ? ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty)
                 ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[2U]
                 : 0U) : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile
            [vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr][2U]) 
           & (- (IData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->imem___05Freqstream___05Frdy) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val));
    vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg 
        = (vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw 
           & (- (QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel_xcel_respstream_val))));
    vlTOPp->imem___05Freqstream___05Fmsg[0U] = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[0U];
    vlTOPp->imem___05Freqstream___05Fmsg[1U] = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[1U];
    vlTOPp->imem___05Freqstream___05Fmsg[2U] = vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[2U];
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next 
        = ((((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
             & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq))) 
            & ((1U & ((IData)(1U) + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))) 
               == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))) 
           | ((~ ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
                  & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full))) 
              & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass 
        = (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty) 
            & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M 
        = ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
            ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M
            : ((1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
                ? (IData)(vlTOPp->dmem___05Frespstream___05Fmsg)
                : ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M))
                    ? (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg)
                    : 0U)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next 
        = (1U & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq) 
                  & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
                  ? ((IData)(1U) + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr))
                  : (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next 
        = (1U & (((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq) 
                  & (~ (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass)))
                  ? ((IData)(1U) + (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr))
                  : (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D 
        = ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_sel_D)
            ? ((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_sel_D)
                ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D
                : 0U) : ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D))
                          ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D))
                              ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W
                              : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M)
                          : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D))
                              ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X
                              : ((0U == (0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                                  >> 0xfU)))
                                  ? 0U : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                                 [(0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                            >> 0xfU))]))));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D 
        = ((2U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D))
            ? ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D))
                ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W
                : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M)
            : ((1U & (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D))
                ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X
                : ((0U == (0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                                    >> 0x14U))) ? 0U
                    : vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile
                   [(0x1fU & (vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D 
                              >> 0x14U))])));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D 
        = ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_sel_D))
            ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D
            : ((1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_sel_D))
                ? vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D
                : ((2U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_sel_D))
                    ? ((0U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D))
                        ? vlTOPp->mngr2proc___05Fmsg
                        : ((1U == (IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D))
                            ? 1U : 0U)) : 0U)));
    vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D 
        = (((QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D)) 
            << 0x20U) | (QData)((IData)(vlTOPp->ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D)));
}

void VProcXcel_sort_rtl::_eval(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::_eval\n"); );
    VProcXcel_sort_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__1(vlSymsp);
    }
    vlTOPp->_combo__TOP__3(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VProcXcel_sort_rtl::_change_request(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::_change_request\n"); );
    VProcXcel_sort_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VProcXcel_sort_rtl::_change_request_1(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::_change_request_1\n"); );
    VProcXcel_sort_rtl* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    __req |= ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val ^ vlTOPp->__Vchglast__TOP__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val));
    VL_DEBUG_IF( if(__req && ((vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val ^ vlTOPp->__Vchglast__TOP__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val))) VL_DBG_MSGF("        CHANGE: lab2_xcel/SortXcel.v:65: ProcXcel_sort_rtl.xcel.v.xcelreq_deq_val\n"); );
    // Final
    vlTOPp->__Vchglast__TOP__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val 
        = vlTOPp->ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val;
    return __req;
}

#ifdef VL_DEBUG
void VProcXcel_sort_rtl::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VProcXcel_sort_rtl::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((dmem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("dmem__reqstream__rdy");}
    if (VL_UNLIKELY((dmem___05Frespstream___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("dmem__respstream__val");}
    if (VL_UNLIKELY((imem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("imem__reqstream__rdy");}
    if (VL_UNLIKELY((imem___05Frespstream___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("imem__respstream__val");}
    if (VL_UNLIKELY((mngr2proc___05Fval & 0xfeU))) {
        Verilated::overWidthError("mngr2proc__val");}
    if (VL_UNLIKELY((proc2mngr___05Frdy & 0xfeU))) {
        Verilated::overWidthError("proc2mngr__rdy");}
    if (VL_UNLIKELY((xmem___05Freqstream___05Frdy & 0xfeU))) {
        Verilated::overWidthError("xmem__reqstream__rdy");}
    if (VL_UNLIKELY((xmem___05Frespstream___05Fval 
                     & 0xfeU))) {
        Verilated::overWidthError("xmem__respstream__val");}
}
#endif  // VL_DEBUG
