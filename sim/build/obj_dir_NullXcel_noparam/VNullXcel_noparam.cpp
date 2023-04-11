// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNullXcel_noparam.h for the primary calling header

#include "VNullXcel_noparam.h"
#include "VNullXcel_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

void VNullXcel_noparam::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VNullXcel_noparam::eval\n"); );
    VNullXcel_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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
            VL_FATAL_MT("proc/NullXcel.v", 183, "",
                "Verilated model didn't converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VNullXcel_noparam::_eval_initial_loop(VNullXcel_noparam__Syms* __restrict vlSymsp) {
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
            VL_FATAL_MT("proc/NullXcel.v", 183, "",
                "Verilated model didn't DC converge\n"
                "- See DIDNOTCONVERGE in the Verilator manual");
        } else {
            __Vchange = _change_request(vlSymsp);
        }
    } while (VL_UNLIKELY(__Vchange));
}

void VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__line_trace_TOP(VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val;
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__char;
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__val;
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__14__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__16__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__18__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__20__char;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[128];
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[128];
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__str[128];
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__13__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__14__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__16__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__18__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__20__num;
    IData/*31:0*/ __Vilp;
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlTOPp->xcel_reqstream_msg 
                                                        >> 0x25U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->xcel_reqstream_msg >> 0x25U)))) {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:%x",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))),
                     32,(IData)(vlTOPp->xcel_reqstream_msg));
    } else {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:        ",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[__Vilp] 
            = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy 
        = vlTOPp->xcel_reqstream_rdy;
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val 
        = vlTOPp->xcel_reqstream_val;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy) 
         & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[__Vilp] 
                = __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__2__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy) 
             & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val)))) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__num 
                = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__char = 0x20U;
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__3__char);
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy)) 
                 & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val))) {
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__4__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__num 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__char = 0x20U;
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__5__char);
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__rdy)) 
                           & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__1__val))))) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__6__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__7__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__8__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__9__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
    __Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[0U] = 0x2829U;
    __Vilp = 1U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[__Vilp] = 0U;
        __Vilp = ((IData)(1U) + __Vilp);
    }
    vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0 = 1U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0)))
                              ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0))))) 
                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0))))))) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0 
            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0);
    }
    vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
        = trace_str[0U];
    vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0 
           - (IData)(1U));
    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1)) {
        VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0)), trace_str, 
                          (0xffU & (((0U == (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1)))
                                      ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))) 
                                    | (__Vtask_NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__append_str__10__str[
                                       (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1) 
                                                 >> 5U))] 
                                       >> (0x1fU & 
                                           VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1))))));
        vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0 
               - (IData)(1U));
        vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1 
               - (IData)(1U));
    }
    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__str[__Vilp] 
            = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy 
        = vlTOPp->xcel_respstream_rdy;
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__val 
        = vlTOPp->xcel_respstream_val;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
         & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__13__str[__Vilp] 
                = __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__13__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__13__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__13__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__13__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy) 
             & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__val)))) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__14__num 
                = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__14__char = 0x20U;
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__14__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__14__char);
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                 & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__val))) {
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__15__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__16__num 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__16__char = 0x20U;
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__16__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__16__char);
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__rdy)) 
                           & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__12__val))))) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__17__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__18__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__18__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__18__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__18__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__19__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__20__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__20__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__20__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__20__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP(VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__val;
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__23__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__25__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__27__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__29__char;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__str[128];
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__22__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__23__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__25__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__27__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__29__num;
    IData/*31:0*/ __Vilp;
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->xcel_reqstream_msg 
                          >> 0x25U))) ? ((1U & (IData)(
                                                       (vlTOPp->xcel_reqstream_msg 
                                                        >> 0x25U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->xcel_reqstream_msg >> 0x25U)))) {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:%x",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))),
                     32,(IData)(vlTOPp->xcel_reqstream_msg));
    } else {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str
                     ,"%s:%x:        ",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str,
                     5,(0x1fU & (IData)((vlTOPp->xcel_reqstream_msg 
                                         >> 0x20U))));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__str[__Vilp] 
            = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy 
        = vlTOPp->xcel_reqstream_rdy;
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__val 
        = vlTOPp->xcel_reqstream_val;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy) 
         & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__22__str[__Vilp] 
                = __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__22__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__22__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__22__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__22__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy) 
             & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__val)))) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__23__num 
                = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__23__char = 0x20U;
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__23__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__23__char);
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy)) 
                 & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__val))) {
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__24__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__25__num 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__25__char = 0x20U;
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__25__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__25__char);
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__rdy)) 
                           & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__21__val))))) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__26__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__27__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__27__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__27__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__27__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_str__28__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__29__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__29__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__29__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__append_chars__29__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VNullXcel_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::__Vdpiexp_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP\n"); );
    // Variables
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val;
    CData/*0:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char;
    CData/*7:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[128];
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num;
    WData/*4095:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[128];
    IData/*31:0*/ __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num;
    IData/*31:0*/ __Vilp;
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str 
        = ((1U & (IData)((vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
                          >> 0x20U))) ? ((1U & (IData)(
                                                       (vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
                                                        >> 0x20U)))
                                          ? 0x7772U
                                          : 0x3f3fU)
            : 0x7264U);
    if ((1U & (IData)((vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
                       >> 0x20U)))) {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:        ",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str);
    } else {
        VL_SFORMAT_X(4096,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str
                     ,"%s:%x",16,vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str,
                     32,(IData)(vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg));
    }
    __Vilp = 0U;
    while ((__Vilp <= 0x7fU)) {
        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[__Vilp] 
            = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[__Vilp];
        __Vilp = ((IData)(1U) + __Vilp);
    }
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy 
        = vlTOPp->xcel_respstream_rdy;
    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val 
        = vlTOPp->xcel_respstream_val;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = 0U;
    while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1)))
                              ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[
                                      ((IData)(1U) 
                                       + (0x7fU & (
                                                   VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                                   >> 5U)))] 
                                      << ((IData)(0x20U) 
                                          - (0x1fU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))) 
                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[
                               (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1) 
                                         >> 5U))] >> 
                               (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1))))))) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1);
    }
    if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy) 
         & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val))) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[__Vilp] 
                = __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__str[__Vilp];
            __Vilp = ((IData)(1U) + __Vilp);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
        while ((0U != (0xffU & (((0U == (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                  ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                          ((IData)(1U) 
                                           + (0x7fU 
                                              & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                 >> 5U)))] 
                                          << ((IData)(0x20U) 
                                              - (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                   (0x7fU & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                   >> (0x1fU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
        }
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
            = trace_str[0U];
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
               - (IData)(1U));
        while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
            VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                              (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__31__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                   - (IData)(1U));
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                   - (IData)(1U));
        }
        trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
    } else {
        if (((IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy) 
             & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val)))) {
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num 
                = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
            __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char = 0x20U;
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                = trace_str[0U];
            vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
            while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__num)) {
                VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__32__char);
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                       - (IData)(1U));
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
            }
            trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        } else {
            if (((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy)) 
                 & (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val))) {
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[0U] = 0x23U;
                __Vilp = 1U;
                while ((__Vilp <= 0x7fU)) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[__Vilp] = 0U;
                    __Vilp = ((IData)(1U) + __Vilp);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                while ((0U != (0xffU & (((0U == (0x1fU 
                                                 & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                          ? 0U : (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                        | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                           (0x7fU & 
                                            (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                             >> 5U))] 
                                           >> (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                }
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                       - (IData)(1U));
                while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                      (0xffU & (((0U 
                                                  == 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                                  ? 0U
                                                  : 
                                                 (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                                  ((IData)(1U) 
                                                   + 
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U)))] 
                                                  << 
                                                  ((IData)(0x20U) 
                                                   - 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                                | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__33__str[
                                                   (0x7fU 
                                                    & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                       >> 5U))] 
                                                   >> 
                                                   (0x1fU 
                                                    & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                           - (IData)(1U));
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num 
                    = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                       - (IData)(1U));
                __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char = 0x20U;
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                    = trace_str[0U];
                vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__num)) {
                    VL_ASSIGNSEL_WIII(8,(0xfffU & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__34__char);
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                           - (IData)(1U));
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                }
                trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
            } else {
                if ((1U & ((~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__rdy)) 
                           & (~ (IData)(__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_val_rdy_str__30__val))))) {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[0U] = 0x2eU;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__35__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__36__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                } else {
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[0U] = 0x78U;
                    __Vilp = 1U;
                    while ((__Vilp <= 0x7fU)) {
                        __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[__Vilp] = 0U;
                        __Vilp = ((IData)(1U) + __Vilp);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = 1U;
                    while ((0U != (0xffU & (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0))))))) {
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0);
                    }
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 
                           - (IData)(1U));
                    while (VL_LTES_III(1,32,32, 0U, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, 
                                          (0xffU & 
                                           (((0U == 
                                              (0x1fU 
                                               & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1)))
                                              ? 0U : 
                                             (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                              ((IData)(1U) 
                                               + (0x7fU 
                                                  & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                     >> 5U)))] 
                                              << ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))) 
                                            | (__Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_str__37__str[
                                               (0x7fU 
                                                & (VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1) 
                                                   >> 5U))] 
                                               >> (0x1fU 
                                                   & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1))))));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                               - (IData)(1U));
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num 
                        = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 
                           - (IData)(1U));
                    __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char = 0x20U;
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                        = trace_str[0U];
                    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = 0U;
                    while (VL_LTS_III(1,32,32, vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__num)) {
                        VL_ASSIGNSEL_WIII(8,(0xfffU 
                                             & VL_MULS_III(12,32,32, (IData)(8U), vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0)), trace_str, __Vtask_NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__append_chars__38__char);
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                            = (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 
                               - (IData)(1U));
                        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 
                            = ((IData)(1U) + vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1);
                    }
                    trace_str[0U] = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
                }
            }
        }
    }
}

void VNullXcel_noparam::line_trace(svBitVecVal* trace_str) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::line_trace\n"); );
    // Variables
    WData/*4095:0*/ trace_str__Vcvt[128];
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum==-1)) { __Vfuncnum = Verilated::exportFuncNum("line_trace"); }
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VNullXcel_noparam__Vcb_line_trace_t __Vcb = (VNullXcel_noparam__Vcb_line_trace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    VL_SET_W_SVBV(4096,trace_str__Vcvt,trace_str);(*__Vcb)((VNullXcel_noparam__Syms*)(__Vscopep->symsp()), trace_str__Vcvt);
    VL_SET_SVBV_W(4096, trace_str, trace_str__Vcvt);
}

VL_INLINE_OPT void VNullXcel_noparam::_sequent__TOP__3(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_sequent__TOP__3\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)((vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
                  >> 0x25U)) & ((IData)(vlTOPp->xcel_respstream_val) 
                                & (IData)(vlTOPp->xcel_respstream_rdy)))) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xr0 
            = (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore);
    }
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full 
        = ((~ (IData)(vlTOPp->reset)) & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next));
    if (vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) {
        vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
            = vlTOPp->xcel_reqstream_msg;
    }
    vlTOPp->xcel_respstream_val = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
        = ((0xffffffffULL & vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg) 
           | ((QData)((IData)((1U & (IData)((vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
                                             >> 0x25U))))) 
              << 0x20U));
    vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg 
        = ((0x100000000ULL & vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg) 
           | (IData)((IData)(((1U & (IData)((vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore 
                                             >> 0x25U)))
                               ? 0U : vlTOPp->NullXcel_noparam__DOT__v__DOT__xr0))));
    vlTOPp->xcel_respstream_msg = vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg;
}

VL_INLINE_OPT void VNullXcel_noparam::_combo__TOP__4(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_combo__TOP__4\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->xcel_respstream_rdy) & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->xcel_reqstream_rdy = (1U & ((~ (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                        | ((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                                           & (IData)(vlTOPp->xcel_respstream_rdy))));
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlTOPp->xcel_reqstream_rdy) & (IData)(vlTOPp->xcel_reqstream_val));
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               & (~ (((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                      & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
                     & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq))))) 
           & ((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
}

void VNullXcel_noparam::_eval(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_eval\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clk) & (~ (IData)(vlTOPp->__Vclklast__TOP__clk)))) {
        vlTOPp->_sequent__TOP__3(vlSymsp);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

VL_INLINE_OPT QData VNullXcel_noparam::_change_request(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_change_request\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    return (vlTOPp->_change_request_1(vlSymsp));
}

VL_INLINE_OPT QData VNullXcel_noparam::_change_request_1(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_change_request_1\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

#ifdef VL_DEBUG
void VNullXcel_noparam::_eval_debug_assertions() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((reset & 0xfeU))) {
        Verilated::overWidthError("reset");}
    if (VL_UNLIKELY((mem_reqstream_rdy & 0xfeU))) {
        Verilated::overWidthError("mem_reqstream_rdy");}
    if (VL_UNLIKELY((mem_respstream_msg & 0ULL))) {
        Verilated::overWidthError("mem_respstream_msg");}
    if (VL_UNLIKELY((mem_respstream_val & 0xfeU))) {
        Verilated::overWidthError("mem_respstream_val");}
    if (VL_UNLIKELY((xcel_reqstream_msg & 0ULL))) {
        Verilated::overWidthError("xcel_reqstream_msg");}
    if (VL_UNLIKELY((xcel_reqstream_val & 0xfeU))) {
        Verilated::overWidthError("xcel_reqstream_val");}
    if (VL_UNLIKELY((xcel_respstream_rdy & 0xfeU))) {
        Verilated::overWidthError("xcel_respstream_rdy");}
}
#endif  // VL_DEBUG
