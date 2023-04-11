// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VNullXcel_noparam.h for the primary calling header

#include "VNullXcel_noparam.h"
#include "VNullXcel_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VNullXcel_noparam) {
    VNullXcel_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VNullXcel_noparam__Syms(this, name());
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VNullXcel_noparam::__Vconfigure(VNullXcel_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VNullXcel_noparam::~VNullXcel_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VNullXcel_noparam::_initial__TOP__1(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_initial__TOP__1\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mem_reqstream_val = 0U;
    vlTOPp->mem_respstream_rdy = 0U;
}

void VNullXcel_noparam::_settle__TOP__2(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_settle__TOP__2\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->mem_reqstream_msg[0U] = 0U;
    vlTOPp->mem_reqstream_msg[1U] = 0U;
    vlTOPp->mem_reqstream_msg[2U] = 0U;
    vlTOPp->xcel_respstream_val = vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->xcel_respstream_rdy) & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full));
    vlTOPp->xcel_reqstream_rdy = (1U & ((~ (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
                                        | ((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                                           & (IData)(vlTOPp->xcel_respstream_rdy))));
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
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlTOPp->xcel_reqstream_rdy) & (IData)(vlTOPp->xcel_reqstream_val));
    vlTOPp->xcel_respstream_msg = vlTOPp->NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg;
    vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               & (~ (((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                      & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
                     & (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq))))) 
           & ((IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlTOPp->NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
}

void VNullXcel_noparam::_eval_initial(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_eval_initial\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VNullXcel_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::final\n"); );
    // Variables
    VNullXcel_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VNullXcel_noparam::_eval_settle(VNullXcel_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_eval_settle\n"); );
    VNullXcel_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VNullXcel_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VNullXcel_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, mem_reqstream_msg);
    mem_reqstream_rdy = VL_RAND_RESET_I(1);
    mem_reqstream_val = VL_RAND_RESET_I(1);
    mem_respstream_msg = VL_RAND_RESET_Q(47);
    mem_respstream_rdy = VL_RAND_RESET_I(1);
    mem_respstream_val = VL_RAND_RESET_I(1);
    xcel_reqstream_msg = VL_RAND_RESET_Q(38);
    xcel_reqstream_rdy = VL_RAND_RESET_I(1);
    xcel_reqstream_val = VL_RAND_RESET_I(1);
    xcel_respstream_msg = VL_RAND_RESET_Q(33);
    xcel_respstream_rdy = VL_RAND_RESET_I(1);
    xcel_respstream_val = VL_RAND_RESET_I(1);
    NullXcel_noparam__DOT____Vcellout__v__xcel_respstream_msg = VL_RAND_RESET_Q(33);
    NullXcel_noparam__DOT__v__DOT__xr0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    NullXcel_noparam__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_Q(38);
    NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str);
    NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str);
    NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    NullXcel_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
