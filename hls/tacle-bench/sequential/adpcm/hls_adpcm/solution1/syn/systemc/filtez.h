// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _filtez_HH_
#define _filtez_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "adpcm_main_mul_32bkb.h"

namespace ap_rtl {

struct filtez : public sc_module {
    // Port declarations 13
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<3> > bpl_address0;
    sc_out< sc_logic > bpl_ce0;
    sc_in< sc_lv<32> > bpl_q0;
    sc_out< sc_lv<3> > dlt_address0;
    sc_out< sc_logic > dlt_ce0;
    sc_in< sc_lv<32> > dlt_q0;
    sc_out< sc_lv<32> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    filtez(sc_module_name name);
    SC_HAS_PROCESS(filtez);

    ~filtez();

    sc_trace_file* mVcdFile;

    adpcm_main_mul_32bkb<1,6,32,32,64>* adpcm_main_mul_32bkb_U1;
    sc_signal< sc_lv<11> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > zl1_reg_86;
    sc_signal< sc_lv<3> > dlt_pn_rec_reg_96;
    sc_signal< sc_lv<64> > grp_fu_107_p2;
    sc_signal< sc_lv<3> > p_01_rec_reg_118;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<1> > exitcond1_reg_215;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter4_exitcond1_reg_215;
    sc_signal< sc_lv<32> > reg_144;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<32> > reg_149;
    sc_signal< sc_lv<64> > tmp_fu_154_p1;
    sc_signal< sc_lv<1> > ap_CS_fsm_state3;
    sc_signal< sc_lv<64> > tmp_s_fu_159_p1;
    sc_signal< sc_lv<64> > grp_fu_130_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > exitcond1_fu_164_p2;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_exitcond1_reg_215;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter2_exitcond1_reg_215;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter3_exitcond1_reg_215;
    sc_signal< sc_lv<32> > temp_reg_229;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<3> > dlt_pn_rec_phi_fu_100_p4;
    sc_signal< sc_lv<64> > p_01_rec_cast_fu_170_p1;
    sc_signal< sc_lv<64> > grp_fu_107_p0;
    sc_signal< sc_lv<64> > tmp_41_fu_176_p1;
    sc_signal< sc_lv<64> > grp_fu_107_p1;
    sc_signal< sc_lv<32> > grp_fu_130_p0;
    sc_signal< sc_lv<32> > grp_fu_130_p1;
    sc_signal< sc_lv<1> > ap_CS_fsm_state19;
    sc_signal< sc_lv<11> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<11> ap_ST_fsm_state1;
    static const sc_lv<11> ap_ST_fsm_state2;
    static const sc_lv<11> ap_ST_fsm_state3;
    static const sc_lv<11> ap_ST_fsm_state4;
    static const sc_lv<11> ap_ST_fsm_state5;
    static const sc_lv<11> ap_ST_fsm_state6;
    static const sc_lv<11> ap_ST_fsm_state7;
    static const sc_lv<11> ap_ST_fsm_state8;
    static const sc_lv<11> ap_ST_fsm_pp0_stage0;
    static const sc_lv<11> ap_ST_fsm_pp0_stage1;
    static const sc_lv<11> ap_ST_fsm_state19;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_2D;
    static const sc_lv<32> ap_const_lv32_A;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_bpl_address0();
    void thread_bpl_ce0();
    void thread_dlt_address0();
    void thread_dlt_ce0();
    void thread_dlt_pn_rec_phi_fu_100_p4();
    void thread_exitcond1_fu_164_p2();
    void thread_grp_fu_107_p0();
    void thread_grp_fu_107_p1();
    void thread_grp_fu_107_p2();
    void thread_grp_fu_130_p0();
    void thread_grp_fu_130_p1();
    void thread_p_01_rec_cast_fu_170_p1();
    void thread_tmp_41_fu_176_p1();
    void thread_tmp_fu_154_p1();
    void thread_tmp_s_fu_159_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
