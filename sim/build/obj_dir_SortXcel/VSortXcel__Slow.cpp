// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSortXcel.h for the primary calling header

#include "VSortXcel.h"
#include "VSortXcel__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VSortXcel) {
    VSortXcel__Syms* __restrict vlSymsp = __VlSymsp = new VSortXcel__Syms(this, name());
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VSortXcel::__Vconfigure(VSortXcel__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VSortXcel::~VSortXcel() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VSortXcel::_settle__TOP__2(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_settle__TOP__2\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val 
        = ((IData)(vlTOPp->mem_respstream_val) & (0U 
                                                  == 
                                                  (7U 
                                                   & (IData)(
                                                             (vlTOPp->mem_respstream_msg 
                                                              >> 0x2cU)))));
    vlTOPp->mem_reqstream_val = vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
    vlTOPp->SortXcel__DOT__v__DOT__memresp_deq_rdy = 0U;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                vlTOPp->SortXcel__DOT__v__DOT__memresp_deq_rdy = 1U;
            } else {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        vlTOPp->SortXcel__DOT__v__DOT__memresp_deq_rdy = 1U;
                    } else {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                vlTOPp->SortXcel__DOT__v__DOT__memresp_deq_rdy = 1U;
                            } else {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        vlTOPp->SortXcel__DOT__v__DOT__memresp_deq_rdy = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->xcel_reqstream_rdy = (1U & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_rdy = 0U;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_rdy 
            = vlTOPp->xcel_respstream_rdy;
    }
    vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
        = ((IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)
            ? vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore
            : ((IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)
                ? 0ULL : vlTOPp->xcel_reqstream_msg));
    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy 
        = (1U & ((~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
                 | ((IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                    & (IData)(vlTOPp->mem_reqstream_rdy))));
    vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val 
        = ((IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
           | (IData)(vlTOPp->xcel_reqstream_val));
    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 0U;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((1U <= vlTOPp->SortXcel__DOT__v__DOT__top)) {
                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                } else {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                        } else {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                } else {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                        } else {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val = 1U;
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
    vlTOPp->SortXcel__DOT__v__DOT__arr_val_1_in = vlTOPp->SortXcel__DOT__v__DOT__arr_val_1;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__arr_val_1_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                                            vlTOPp->SortXcel__DOT__v__DOT__arr_val_1_in 
                                                = (IData)(vlTOPp->mem_respstream_msg);
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
    vlTOPp->mem_reqstream_msg[0U] = (vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[0U] 
                                     & (- (IData)((IData)(vlTOPp->mem_reqstream_val))));
    vlTOPp->mem_reqstream_msg[1U] = (vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[1U] 
                                     & (- (IData)((IData)(vlTOPp->mem_reqstream_val))));
    vlTOPp->mem_reqstream_msg[2U] = (0x3fffU & (vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[2U] 
                                                & (- (IData)((IData)(vlTOPp->mem_reqstream_val)))));
    vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->mem_reqstream_rdy) & (IData)(vlTOPp->mem_reqstream_val));
    vlTOPp->mem_respstream_rdy = ((IData)(vlTOPp->SortXcel__DOT__v__DOT__memresp_deq_rdy) 
                                  | (1U == (7U & (IData)(
                                                         (vlTOPp->mem_respstream_msg 
                                                          >> 0x2cU)))));
    vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlTOPp->xcel_reqstream_rdy) & (IData)(vlTOPp->xcel_reqstream_val));
    vlTOPp->SortXcel__DOT__v__DOT__top_in = vlTOPp->SortXcel__DOT__v__DOT__top;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__top_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->SortXcel__DOT__v__DOT__top_in 
                        = (vlTOPp->SortXcel__DOT__v__DOT__top 
                           - (IData)(1U));
                }
            } else {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            vlTOPp->SortXcel__DOT__v__DOT__top_in 
                                                                = 
                                                                ((IData)(1U) 
                                                                 + vlTOPp->SortXcel__DOT__v__DOT__top);
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
    vlTOPp->SortXcel__DOT__v__DOT__idx_j_in = vlTOPp->SortXcel__DOT__v__DOT__idx_j;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__idx_j_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->SortXcel__DOT__v__DOT__idx_j_in 
                        = (0xffffU & (IData)(vlTOPp->mem_respstream_msg));
                }
            } else {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                              > 
                                                              ((IData)(1U) 
                                                               + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                             & (((IData)(2U) 
                                                                 + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))) {
                                                            vlTOPp->SortXcel__DOT__v__DOT__idx_j_in 
                                                                = vlTOPp->SortXcel__DOT__v__DOT__arr_low;
                                                        } else {
                                                            if (
                                                                (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                  <= 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                    < (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))) {
                                                                vlTOPp->SortXcel__DOT__v__DOT__idx_j_in 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    vlTOPp->SortXcel__DOT__v__DOT__idx_j_in 
                                                        = 
                                                        ((((IData)(2U) 
                                                           + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                          >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))
                                                          ? 
                                                         ((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j)
                                                          : 
                                                         ((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j));
                                                } else {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            if (
                                                                (((IData)(2U) 
                                                                  + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                 < (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                                vlTOPp->SortXcel__DOT__v__DOT__idx_j_in 
                                                                    = 
                                                                    ((IData)(1U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i));
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
    vlTOPp->SortXcel__DOT__v__DOT__arr_low_in = vlTOPp->SortXcel__DOT__v__DOT__arr_low;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__arr_low_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->SortXcel__DOT__v__DOT__arr_low_in 
                        = (0xffffU & (IData)(vlTOPp->mem_respstream_msg));
                }
            } else {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                  > 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                    >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))))) {
                                                            if (
                                                                (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                  <= 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                    < (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))) {
                                                                vlTOPp->SortXcel__DOT__v__DOT__arr_low_in 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            if (
                                                                (((IData)(2U) 
                                                                  + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                 < (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                                vlTOPp->SortXcel__DOT__v__DOT__arr_low_in 
                                                                    = 
                                                                    (0xffffU 
                                                                     & ((IData)(1U) 
                                                                        + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)));
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
    vlTOPp->SortXcel__DOT__v__DOT__arr_high_in = vlTOPp->SortXcel__DOT__v__DOT__arr_high;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__arr_high_in 
            = (0xffffU & vlTOPp->SortXcel__DOT__v__DOT__size);
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->SortXcel__DOT__v__DOT__arr_high_in 
                        = (0xffffU & (IData)((vlTOPp->mem_respstream_msg 
                                              >> 0x10U)));
                }
            } else {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                              > 
                                                              ((IData)(1U) 
                                                               + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                             & (((IData)(2U) 
                                                                 + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))) {
                                                            vlTOPp->SortXcel__DOT__v__DOT__arr_high_in 
                                                                = vlTOPp->SortXcel__DOT__v__DOT__idx_i;
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
    vlTOPp->SortXcel__DOT__v__DOT__pivot_in = vlTOPp->SortXcel__DOT__v__DOT__pivot;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                            vlTOPp->SortXcel__DOT__v__DOT__pivot_in 
                                = (IData)(vlTOPp->mem_respstream_msg);
                        }
                    } else {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (1U 
                                                             & (~ 
                                                                (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                  > 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                    >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))))) {
                                                            if (
                                                                (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                  <= 
                                                                  ((IData)(1U) 
                                                                   + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                                 & (((IData)(2U) 
                                                                     + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                    < (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))) {
                                                                vlTOPp->SortXcel__DOT__v__DOT__pivot_in 
                                                                    = vlTOPp->SortXcel__DOT__v__DOT__arr_val_1;
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            if (
                                                                (((IData)(2U) 
                                                                  + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                 < (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                                vlTOPp->SortXcel__DOT__v__DOT__pivot_in 
                                                                    = vlTOPp->SortXcel__DOT__v__DOT__arr_val_1;
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
    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] = 0U;
    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] = 0U;
    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] = 0U;
    if ((0U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if ((1U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((1U <= vlTOPp->SortXcel__DOT__v__DOT__top)) {
                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                        = (0x3ffU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                        = ((3U & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                           | (0xfffffffcU & ((vlTOPp->SortXcel__DOT__v__DOT__stack_src 
                                              + (vlTOPp->SortXcel__DOT__v__DOT__top 
                                                 << 2U)) 
                                             << 2U)));
                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                        = ((0x1ffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                           | (3U & ((vlTOPp->SortXcel__DOT__v__DOT__stack_src 
                                     + (vlTOPp->SortXcel__DOT__v__DOT__top 
                                        << 2U)) >> 0x1eU)));
                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                        = (0xfffffffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                }
            }
        } else {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                            = (0x3ffU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                            = ((3U & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                               | (0xfffffffcU & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                  + 
                                                  (((IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high) 
                                                    - (IData)(1U)) 
                                                   << 2U)) 
                                                 << 2U)));
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                            = ((0x1ffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                               | (3U & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                         + (((IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high) 
                                             - (IData)(1U)) 
                                            << 2U)) 
                                        >> 0x1eU)));
                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                            = (0xfffffffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                    }
                } else {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                    = (0x3ffU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                    = ((3U & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                       | (0xfffffffcU 
                                          & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                              + (vlTOPp->SortXcel__DOT__v__DOT__idx_j 
                                                 << 2U)) 
                                             << 2U)));
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                    = ((0x1ffcU & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                       | (3U & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                 + 
                                                 (vlTOPp->SortXcel__DOT__v__DOT__idx_j 
                                                  << 2U)) 
                                                >> 0x1eU)));
                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                    = (0xfffffffcU 
                                       & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                            }
                        } else {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                            = (0x3ffU 
                                               & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]);
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                            = ((3U 
                                                & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                               | (0xfffffffcU 
                                                  & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                      + 
                                                      ((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                       << 2U)) 
                                                     << 2U)));
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                            = ((0x1ffcU 
                                                & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                               | (3U 
                                                  & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                      + 
                                                      ((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                       << 2U)) 
                                                     >> 0x1eU)));
                                        vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                            = (0xfffffffcU 
                                               & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                    }
                                } else {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                    = 
                                                    (0x400U 
                                                     | (0x3ffU 
                                                        & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]));
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] 
                                                    = vlTOPp->SortXcel__DOT__v__DOT__arr_val_1;
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                    = 
                                                    ((3U 
                                                      & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                                     | (0xfffffffcU 
                                                        & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                            + 
                                                            (vlTOPp->SortXcel__DOT__v__DOT__idx_j 
                                                             << 2U)) 
                                                           << 2U)));
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                    = 
                                                    ((0x1ffcU 
                                                      & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                                     | (3U 
                                                        & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                            + 
                                                            (vlTOPp->SortXcel__DOT__v__DOT__idx_j 
                                                             << 2U)) 
                                                           >> 0x1eU)));
                                                vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                    = 
                                                    (0xfffffffcU 
                                                     & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                            }
                                        } else {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                        = 
                                                        (0x400U 
                                                         | (0x3ffU 
                                                            & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]));
                                                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] 
                                                        = vlTOPp->SortXcel__DOT__v__DOT__arr_val_2;
                                                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                        = 
                                                        ((3U 
                                                          & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                                         | (0xfffffffcU 
                                                            & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                                + 
                                                                ((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                 << 2U)) 
                                                               << 2U)));
                                                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                        = 
                                                        ((0x1ffcU 
                                                          & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                                         | (3U 
                                                            & ((vlTOPp->SortXcel__DOT__v__DOT__base_src 
                                                                + 
                                                                ((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                 << 2U)) 
                                                               >> 0x1eU)));
                                                    vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                        = 
                                                        (0xfffffffcU 
                                                         & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                                = 
                                                                (0x400U 
                                                                 | (0x3ffU 
                                                                    & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]));
                                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[0U] 
                                                                = 
                                                                (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                                  << 0x10U) 
                                                                 | (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low));
                                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                                = 
                                                                ((3U 
                                                                  & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]) 
                                                                 | (0xfffffffcU 
                                                                    & ((vlTOPp->SortXcel__DOT__v__DOT__stack_src 
                                                                        + 
                                                                        (((IData)(1U) 
                                                                          + vlTOPp->SortXcel__DOT__v__DOT__top) 
                                                                         << 2U)) 
                                                                       << 2U)));
                                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U] 
                                                                = 
                                                                ((0x1ffcU 
                                                                  & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[2U]) 
                                                                 | (3U 
                                                                    & ((vlTOPp->SortXcel__DOT__v__DOT__stack_src 
                                                                        + 
                                                                        (((IData)(1U) 
                                                                          + vlTOPp->SortXcel__DOT__v__DOT__top) 
                                                                         << 2U)) 
                                                                       >> 0x1eU)));
                                                            vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U] 
                                                                = 
                                                                (0xfffffffcU 
                                                                 & vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[1U]);
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
    vlTOPp->SortXcel__DOT__v__DOT__idx_i_in = vlTOPp->SortXcel__DOT__v__DOT__idx_i;
    vlTOPp->SortXcel__DOT__v__DOT__arr_val_2_in = vlTOPp->SortXcel__DOT__v__DOT__arr_val_2;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__idx_i_in = 0xffffU;
        vlTOPp->SortXcel__DOT__v__DOT__arr_val_2_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                    vlTOPp->SortXcel__DOT__v__DOT__idx_i_in 
                        = (0xffffU & ((IData)(vlTOPp->mem_respstream_msg) 
                                      - (IData)(1U)));
                }
            } else {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if (vlTOPp->SortXcel__DOT__v__DOT__memresp_read_deq_val) {
                                    vlTOPp->SortXcel__DOT__v__DOT__arr_val_2_in 
                                        = (IData)(vlTOPp->mem_respstream_msg);
                                    if ((vlTOPp->SortXcel__DOT__v__DOT__arr_val_2_in 
                                         < vlTOPp->SortXcel__DOT__v__DOT__pivot)) {
                                        vlTOPp->SortXcel__DOT__v__DOT__idx_i_in 
                                            = (0xffffU 
                                               & ((IData)(1U) 
                                                  + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)));
                                    }
                                }
                            } else {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    if (
                                                        (((IData)(1U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                        if (
                                                            (((IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i) 
                                                              > 
                                                              ((IData)(1U) 
                                                               + (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low))) 
                                                             & (((IData)(2U) 
                                                                 + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)) 
                                                                >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high)))) {
                                                            vlTOPp->SortXcel__DOT__v__DOT__idx_i_in 
                                                                = 
                                                                (0xffffU 
                                                                 & ((IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_low) 
                                                                    - (IData)(1U)));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (((IData)(2U) 
                                                          + vlTOPp->SortXcel__DOT__v__DOT__idx_j) 
                                                         >= (IData)(vlTOPp->SortXcel__DOT__v__DOT__arr_high))) {
                                                        vlTOPp->SortXcel__DOT__v__DOT__arr_val_2_in 
                                                            = vlTOPp->SortXcel__DOT__v__DOT__pivot;
                                                        vlTOPp->SortXcel__DOT__v__DOT__idx_i_in 
                                                            = 
                                                            (0xffffU 
                                                             & ((IData)(1U) 
                                                                + (IData)(vlTOPp->SortXcel__DOT__v__DOT__idx_i)));
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
    vlTOPp->SortXcel__DOT__v__DOT__go = 0U;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U == (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    vlTOPp->SortXcel__DOT__v__DOT__go = 1U;
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__stack_src_in = vlTOPp->SortXcel__DOT__v__DOT__stack_src;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U != (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    if ((1U != (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                 >> 0x20U))))) {
                        if ((2U != (0x1fU & (IData)(
                                                    (vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                     >> 0x20U))))) {
                            if ((3U == (0x1fU & (IData)(
                                                        (vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                         >> 0x20U))))) {
                                vlTOPp->SortXcel__DOT__v__DOT__stack_src_in 
                                    = (IData)(vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg);
                            }
                        }
                    }
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__base_src_in = vlTOPp->SortXcel__DOT__v__DOT__base_src;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U != (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    if ((1U == (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                 >> 0x20U))))) {
                        vlTOPp->SortXcel__DOT__v__DOT__base_src_in 
                            = (IData)(vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg);
                    }
                }
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__size_in = vlTOPp->SortXcel__DOT__v__DOT__size;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                if ((0U != (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                             >> 0x20U))))) {
                    if ((1U != (0x1fU & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                 >> 0x20U))))) {
                        if ((2U == (0x1fU & (IData)(
                                                    (vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                                                     >> 0x20U))))) {
                            vlTOPp->SortXcel__DOT__v__DOT__size_in 
                                = (IData)(vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg);
                        }
                    }
                }
            }
        }
    }
    vlTOPp->xcel_respstream_val = 0U;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->xcel_respstream_val = vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val;
    }
    vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw = 0ULL;
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        if (vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val) {
            if ((1U & (IData)((vlTOPp->SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg 
                               >> 0x25U)))) {
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (0x100000000ULL | vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw);
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (0x100000000ULL & vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw);
            } else {
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (0xffffffffULL & vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw);
                vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
                    = (1ULL | (0x100000000ULL & vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw));
            }
        }
    }
    vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq 
        = ((IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_rdy) 
           & (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_deq_val));
    vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq 
        = ((IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) 
           & (IData)(vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_val));
    vlTOPp->SortXcel__DOT__v__DOT__wr_ctr_in = vlTOPp->SortXcel__DOT__v__DOT__wr_ctr;
    if ((((IData)(vlTOPp->mem_respstream_val) & (1U 
                                                 == 
                                                 (7U 
                                                  & (IData)(
                                                            (vlTOPp->mem_respstream_msg 
                                                             >> 0x2cU))))) 
         & (IData)(vlTOPp->mem_respstream_rdy))) {
        vlTOPp->SortXcel__DOT__v__DOT__wr_ctr_in = 
            (0x1fU & ((IData)(vlTOPp->SortXcel__DOT__v__DOT__wr_ctr) 
                      - (IData)(1U)));
    }
    if ((0U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
        vlTOPp->SortXcel__DOT__v__DOT__wr_ctr_in = 0U;
    } else {
        if ((1U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
            if ((2U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                if ((3U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                    if ((4U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                        if ((5U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                            if ((6U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                if ((7U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                    if ((8U != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                        if ((9U == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                            if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                vlTOPp->SortXcel__DOT__v__DOT__wr_ctr_in 
                                                    = 
                                                    (0x1fU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlTOPp->SortXcel__DOT__v__DOT__wr_ctr)));
                                            }
                                        } else {
                                            if ((0xaU 
                                                 == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                    vlTOPp->SortXcel__DOT__v__DOT__wr_ctr_in 
                                                        = 
                                                        (0x1fU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlTOPp->SortXcel__DOT__v__DOT__wr_ctr)));
                                                }
                                            } else {
                                                if (
                                                    (0xbU 
                                                     != (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                    if (
                                                        (0xcU 
                                                         == (IData)(vlTOPp->SortXcel__DOT__v__DOT__state_reg))) {
                                                        if (vlTOPp->SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy) {
                                                            vlTOPp->SortXcel__DOT__v__DOT__wr_ctr_in 
                                                                = 
                                                                (0x1fU 
                                                                 & ((IData)(1U) 
                                                                    + (IData)(vlTOPp->SortXcel__DOT__v__DOT__wr_ctr)));
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
    vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg 
        = (vlTOPp->SortXcel__DOT__v__DOT__xcel_respstream_msg_raw 
           & (- (QData)((IData)(vlTOPp->xcel_respstream_val))));
    vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass 
        = (((~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)) 
            & (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
           & (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq));
    vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ ((IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq) 
               & (~ (((IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full) 
                      & (IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq)) 
                     & (IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq))))) 
           & ((IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
              | (IData)(vlTOPp->SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
    vlTOPp->xcel_respstream_msg = vlTOPp->SortXcel__DOT____Vcellout__v__xcel_respstream_msg;
    vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next 
        = ((~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq)) 
           & (((IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq) 
               & (~ (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass))) 
              | (IData)(vlTOPp->SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full)));
}

void VSortXcel::_eval_initial(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_eval_initial\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VSortXcel::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::final\n"); );
    // Variables
    VSortXcel__Syms* __restrict vlSymsp = this->__VlSymsp;
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VSortXcel::_eval_settle(VSortXcel__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_eval_settle\n"); );
    VSortXcel* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VSortXcel::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSortXcel::_ctor_var_reset\n"); );
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
    SortXcel__DOT____Vcellout__v__xcel_respstream_msg = VL_RAND_RESET_Q(33);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_raw = VL_RAND_RESET_Q(33);
    SortXcel__DOT__v__DOT__xcelreq_deq_val = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__xcelreq_deq_rdy = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg = VL_RAND_RESET_Q(38);
    SortXcel__DOT__v__DOT__memresp_deq_rdy = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__memresp_read_deq_val = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__mem_reqstream_enq_val = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__mem_reqstream_enq_rdy = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, SortXcel__DOT__v__DOT__mem_reqstream_enq_msg_raw);
    SortXcel__DOT__v__DOT__idx_i = VL_RAND_RESET_I(16);
    SortXcel__DOT__v__DOT__idx_i_in = VL_RAND_RESET_I(16);
    SortXcel__DOT__v__DOT__idx_j = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__idx_j_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__arr_low = VL_RAND_RESET_I(16);
    SortXcel__DOT__v__DOT__arr_low_in = VL_RAND_RESET_I(16);
    SortXcel__DOT__v__DOT__arr_high = VL_RAND_RESET_I(16);
    SortXcel__DOT__v__DOT__arr_high_in = VL_RAND_RESET_I(16);
    SortXcel__DOT__v__DOT__arr_val_1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__arr_val_1_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__arr_val_2 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__arr_val_2_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__pivot = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__pivot_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__size = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__size_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__base_src = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__base_src_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__stack_src = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__stack_src_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__top = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__top_in = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__wr_ctr = VL_RAND_RESET_I(5);
    SortXcel__DOT__v__DOT__wr_ctr_in = VL_RAND_RESET_I(5);
    SortXcel__DOT__v__DOT__state_reg = VL_RAND_RESET_I(4);
    SortXcel__DOT__v__DOT__go = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(4096, SortXcel__DOT__v__DOT__str);
    SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore = VL_RAND_RESET_Q(38);
    SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq = VL_RAND_RESET_I(1);
    SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq = VL_RAND_RESET_I(1);
    VL_RAND_RESET_W(77, SortXcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str = VL_RAND_RESET_I(16);
    VL_RAND_RESET_W(4096, SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    SortXcel__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
