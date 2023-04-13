// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VPROCXCEL_SORT_RTL_H_
#define _VPROCXCEL_SORT_RTL_H_  // guard

#include "verilated_heavy.h"
#include "VProcXcel_sort_rtl__Dpi.h"

//==========

class VProcXcel_sort_rtl__Syms;

//----------

VL_MODULE(VProcXcel_sort_rtl) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_OUT8(commit_inst,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(stats_en,0,0);
    VL_IN8(dmem___05Freqstream___05Frdy,0,0);
    VL_OUT8(dmem___05Freqstream___05Fval,0,0);
    VL_OUT8(dmem___05Frespstream___05Frdy,0,0);
    VL_IN8(dmem___05Frespstream___05Fval,0,0);
    VL_IN8(imem___05Freqstream___05Frdy,0,0);
    VL_OUT8(imem___05Freqstream___05Fval,0,0);
    VL_OUT8(imem___05Frespstream___05Frdy,0,0);
    VL_IN8(imem___05Frespstream___05Fval,0,0);
    VL_OUT8(mngr2proc___05Frdy,0,0);
    VL_IN8(mngr2proc___05Fval,0,0);
    VL_IN8(proc2mngr___05Frdy,0,0);
    VL_OUT8(proc2mngr___05Fval,0,0);
    VL_IN8(xmem___05Freqstream___05Frdy,0,0);
    VL_OUT8(xmem___05Freqstream___05Fval,0,0);
    VL_OUT8(xmem___05Frespstream___05Frdy,0,0);
    VL_IN8(xmem___05Frespstream___05Fval,0,0);
    VL_IN(mngr2proc___05Fmsg,31,0);
    VL_OUT(proc2mngr___05Fmsg,31,0);
    VL_OUTW(dmem___05Freqstream___05Fmsg,76,0,3);
    VL_IN64(dmem___05Frespstream___05Fmsg,46,0);
    VL_OUTW(imem___05Freqstream___05Fmsg,76,0,3);
    VL_IN64(imem___05Frespstream___05Fmsg,46,0);
    VL_OUTW(xmem___05Freqstream___05Fmsg,76,0,3);
    VL_IN64(xmem___05Frespstream___05Fmsg,46,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_dmem_reqstream_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_dmem_respstream_rdy;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_imem_reqstream_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_imem_respstream_rdy;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_proc2mngr_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_xcel_reqstream_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc_xcel_respstream_rdy;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel_mem_respstream_rdy;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel_xcel_respstream_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_enq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_F;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__pc_sel_F;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__reg_en_D;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_byp_sel_D;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_byp_sel_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op1_sel_D;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__op2_sel_D;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__csrr_sel_D;
        CData/*2:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imm_type_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_istream_val_D;
        CData/*3:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__alu_fn_X;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ex_result_sel_X;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__wb_result_sel_M;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_waddr_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__rf_wen_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imul_ostream_val_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__enq_ptr_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__deq_ptr_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__empty;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__state;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__next_state;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_drop_unit__DOT__istream_go;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_F;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__val_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_X;
    };
    struct {
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ostall_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_F;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stall_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__osquash_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_F;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__squash_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X;
        CData/*2:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_X;
        CData/*2:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__br_type_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__jal_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs1_en_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rs2_en_D;
        CData/*3:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__alu_fn_D;
        CData/*2:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_D;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__ex_result_sel_D;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrr_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__csrw_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mngr2proc_rdy_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_D;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_X;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_X;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_M;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_waddr_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__rf_wen_pending_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_msg_type_X;
        CData/*1:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__wb_result_sel_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_X;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__mul_X;
        CData/*2:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__dmem_reqstream_type_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__xcelreq_M;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__proc2mngr_val_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__stats_en_wen_pending_W;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__val_reg_out;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd;
        CData/*6:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_rdy;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_deq_rdy;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memresp_read_deq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_val;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_rdy;
    };
    struct {
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr;
        CData/*4:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__wr_ctr_in;
        CData/*3:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__state_reg;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__go;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__ctrl__DOT__do_bypass;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__full_next;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_enq;
        CData/*0:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__ctrl__DOT__do_deq;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__funct_str;
        SData/*11:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__type_str;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__type_str;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__type_str;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__type_str;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_i_in;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_low_in;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_high_in;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__type_str;
        SData/*15:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__type_str;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg_data;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__inst_D;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__str[128];
        WData/*76:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_queue__DOT__genblk1__DOT__dpath__DOT__qstore[3];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__proc2mngr_queue__DOT__genblk1__DOT__dpath__DOT__qstore;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_M;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__inst_W;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_F;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_next_F;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__br_target_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__jal_target_D;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_D;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imm_D;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_D;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_byp_D;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_D;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_ostream_msg_tmp_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__pc_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op1_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__op2_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__alu_result_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_X;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__ex_result_M;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_M;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__wb_result_W;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__stats_en_W;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__a_reg_out;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__b_reg_out;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imulresp_q__DOT__genblk1__DOT__dpath__DOT__qstore;
        IData/*23:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs1_str;
        IData/*23:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rs2_str;
    };
    struct {
        IData/*23:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__rd_str;
        WData/*71:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__tinyrv2__DOT__csr_str[3];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__idx_j_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_1_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__arr_val_2_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__pivot_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__size_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__base_src_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__stack_src_in;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__top_in;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__str[128];
        WData/*76:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__memreq_q__DOT__genblk1__DOT__dpath__DOT__qstore[3];
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__vc_trace__DOT__idx1;
        WData/*4095:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__str[128];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__len1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__vc_trace__DOT__idx1;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__len0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx0;
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__vc_trace__DOT__idx1;
        WData/*76:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_enq_msg[3];
        WData/*76:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_enq_msg[3];
        QData/*37:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_reqstream_enq_msg;
        QData/*37:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__xcel_queue__DOT__genblk1__DOT__dpath__DOT__qstore;
        QData/*63:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul_istream_msg_D;
        QData/*32:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_raw;
        WData/*76:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__mem_reqstream_enq_msg_raw[3];
        QData/*37:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_q__DOT__genblk1__DOT__dpath__DOT__qstore;
    };
    struct {
        WData/*76:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_queue__DOT__genblk2__DOT__dpath__DOT__qstore__DOT__rfile[2][3];
        IData/*31:0*/ ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__rf__DOT__rfile__DOT__rfile[32];
    };
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*6:0*/ __Vtableidx1;
    CData/*0:0*/ __Vclklast__TOP__clk;
    CData/*0:0*/ __Vchglast__TOP__ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcelreq_deq_val;
    QData/*37:0*/ ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__xcel_reqstream_msg;
    WData/*76:0*/ ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__imem_reqstream_msg[3];
    WData/*76:0*/ ProcXcel_sort_rtl__DOT__proc__DOT____Vcellout__v__dmem_reqstream_msg[3];
    QData/*32:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT____Vcellout__v__xcel_respstream_msg;
    QData/*37:0*/ ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT____Vcellout__xcelreq_q__deq_msg;
    static CData/*0:0*/ __Vtable1_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__ctrl__DOT__pc_redirect_X[128];
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VProcXcel_sort_rtl__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VProcXcel_sort_rtl);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VProcXcel_sort_rtl(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VProcXcel_sort_rtl();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VProcXcel_sort_rtl__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VProcXcel_sort_rtl__Syms* symsp, bool first);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_reqstream_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dmem_respstream_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__dpath__DOT__imul__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_reqstream_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__imem_respstream_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__proc__DOT__v__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_reqstream_msg_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
    static void __Vdpiexp_ProcXcel_sort_rtl__DOT__xcel__DOT__v__DOT__xcel_respstream_msg_trace__DOT__line_trace_TOP(VProcXcel_sort_rtl__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VProcXcel_sort_rtl__Syms* __restrict vlSymsp);
    static QData _change_request_1(VProcXcel_sort_rtl__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__3(VProcXcel_sort_rtl__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VProcXcel_sort_rtl__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VProcXcel_sort_rtl__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VProcXcel_sort_rtl__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
