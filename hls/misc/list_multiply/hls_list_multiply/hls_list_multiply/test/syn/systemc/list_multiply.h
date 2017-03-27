// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _list_multiply_HH_
#define _list_multiply_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "list_multiply_muxbkb.h"

namespace ap_rtl {

struct list_multiply : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<32> > a_Addr_A;
    sc_out< sc_logic > a_EN_A;
    sc_out< sc_lv<4> > a_WEN_A;
    sc_out< sc_lv<32> > a_Din_A;
    sc_in< sc_lv<32> > a_Dout_A;
    sc_out< sc_logic > a_Clk_A;
    sc_out< sc_logic > a_Rst_A;


    // Module declarations
    list_multiply(sc_module_name name);
    SC_HAS_PROCESS(list_multiply);

    ~list_multiply();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    list_multiply_muxbkb<1,1,32,32,32,2,32>* list_multiply_muxbkb_U1;
    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > tmp_2_s_reg_70;
    sc_signal< sc_lv<32> > tmp_1_s_reg_82;
    sc_signal< sc_lv<32> > tmp_2_4_reg_94;
    sc_signal< sc_lv<2> > i_reg_106;
    sc_signal< sc_lv<1> > exitcond1_fu_128_p2;
    sc_signal< sc_lv<1> > exitcond1_reg_228;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_lv<2> > i_2_fu_134_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > sel_tmp_fu_145_p2;
    sc_signal< sc_lv<1> > sel_tmp_reg_242;
    sc_signal< sc_lv<1> > sel_tmp5_fu_151_p2;
    sc_signal< sc_lv<1> > sel_tmp5_reg_248;
    sc_signal< sc_lv<32> > tmp_2_1_fu_170_p3;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<32> > tmp_2_3_fu_184_p3;
    sc_signal< sc_lv<32> > tmp_2_5_fu_191_p3;
    sc_signal< sc_lv<2> > i_3_fu_204_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state5;
    sc_signal< sc_lv<2> > i_1_reg_117;
    sc_signal< sc_lv<1> > exitcond_fu_198_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state4;
    sc_signal< sc_lv<64> > tmp_1_fu_140_p1;
    sc_signal< sc_lv<64> > tmp_4_fu_210_p1;
    sc_signal< sc_lv<32> > a_Addr_A_orig;
    sc_signal< sc_lv<32> > tmp_2_6_fu_215_p5;
    sc_signal< sc_lv<32> > tmp_2_7_fu_157_p2;
    sc_signal< sc_lv<32> > tmp_2_fu_163_p3;
    sc_signal< sc_lv<32> > tmp_2_2_fu_177_p3;
    sc_signal< sc_lv<1> > ap_CS_fsm_state6;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_pp0_stage0;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<5> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<32> ap_const_lv32_4;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_a_Addr_A();
    void thread_a_Addr_A_orig();
    void thread_a_Clk_A();
    void thread_a_Din_A();
    void thread_a_EN_A();
    void thread_a_Rst_A();
    void thread_a_WEN_A();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_128_p2();
    void thread_exitcond_fu_198_p2();
    void thread_i_2_fu_134_p2();
    void thread_i_3_fu_204_p2();
    void thread_sel_tmp5_fu_151_p2();
    void thread_sel_tmp_fu_145_p2();
    void thread_tmp_1_fu_140_p1();
    void thread_tmp_2_1_fu_170_p3();
    void thread_tmp_2_2_fu_177_p3();
    void thread_tmp_2_3_fu_184_p3();
    void thread_tmp_2_5_fu_191_p3();
    void thread_tmp_2_7_fu_157_p2();
    void thread_tmp_2_fu_163_p3();
    void thread_tmp_4_fu_210_p1();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif