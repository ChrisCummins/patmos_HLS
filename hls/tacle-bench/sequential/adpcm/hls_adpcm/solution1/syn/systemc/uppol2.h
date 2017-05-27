// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _uppol2_HH_
#define _uppol2_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "adpcm_main_mul_32bkb.h"

namespace ap_rtl {

struct uppol2 : public sc_module {
    // Port declarations 12
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<32> > al1;
    sc_in< sc_lv<32> > al2;
    sc_in< sc_lv<32> > plt;
    sc_in< sc_lv<32> > plt1;
    sc_in< sc_lv<32> > plt2;
    sc_out< sc_lv<15> > ap_return;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    uppol2(sc_module_name name);
    SC_HAS_PROCESS(uppol2);

    ~uppol2();

    sc_trace_file* mVcdFile;

    adpcm_main_mul_32bkb<1,6,32,32,64>* adpcm_main_mul_32bkb_x_U21;
    adpcm_main_mul_32bkb<1,6,32,32,64>* adpcm_main_mul_32bkb_x_U22;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > tmp_s_fu_82_p1;
    sc_signal< sc_lv<64> > grp_fu_90_p2;
    sc_signal< sc_lv<64> > tmp_7_reg_276;
    sc_signal< sc_lv<1> > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > grp_fu_100_p2;
    sc_signal< sc_lv<64> > tmp_10_reg_281;
    sc_signal< sc_lv<32> > apl2_fu_224_p2;
    sc_signal< sc_lv<32> > apl2_reg_286;
    sc_signal< sc_lv<1> > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > grp_fu_90_p1;
    sc_signal< sc_lv<32> > grp_fu_100_p1;
    sc_signal< sc_lv<34> > wd2_fu_106_p3;
    sc_signal< sc_lv<35> > wd2_cast_fu_114_p1;
    sc_signal< sc_lv<27> > tmp_1_fu_131_p4;
    sc_signal< sc_lv<35> > wd2_1_fu_125_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_118_p3;
    sc_signal< sc_lv<28> > tmp_4_fu_141_p1;
    sc_signal< sc_lv<28> > tmp_5_fu_145_p4;
    sc_signal< sc_lv<39> > p_shl_fu_174_p3;
    sc_signal< sc_lv<40> > p_shl_cast3_fu_182_p1;
    sc_signal< sc_lv<40> > tmp_20_cast3_fu_170_p1;
    sc_signal< sc_lv<40> > tmp_12_fu_186_p2;
    sc_signal< sc_lv<28> > tmp_9_fu_155_p3;
    sc_signal< sc_lv<1> > tmp_11_fu_163_p3;
    sc_signal< sc_lv<29> > tmp_6_cast_cast_cast_fu_206_p3;
    sc_signal< sc_lv<29> > tmp_4_cast_fu_202_p1;
    sc_signal< sc_lv<29> > tmp_fu_214_p2;
    sc_signal< sc_lv<32> > tmp_cast_fu_220_p1;
    sc_signal< sc_lv<32> > tmp_3_fu_192_p4;
    sc_signal< sc_lv<1> > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > tmp_13_fu_230_p2;
    sc_signal< sc_lv<32> > p_s_fu_235_p3;
    sc_signal< sc_lv<1> > tmp_14_fu_246_p2;
    sc_signal< sc_lv<15> > tmp_15_fu_242_p1;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_state2;
    static const sc_lv<8> ap_ST_fsm_state3;
    static const sc_lv<8> ap_ST_fsm_state4;
    static const sc_lv<8> ap_ST_fsm_state5;
    static const sc_lv<8> ap_ST_fsm_state6;
    static const sc_lv<8> ap_ST_fsm_state7;
    static const sc_lv<8> ap_ST_fsm_state8;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<35> ap_const_lv35_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<29> ap_const_lv29_1FFFFF80;
    static const sc_lv<29> ap_const_lv29_80;
    static const sc_lv<32> ap_const_lv32_3000;
    static const sc_lv<32> ap_const_lv32_FFFFD000;
    static const sc_lv<15> ap_const_lv15_5000;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_apl2_fu_224_p2();
    void thread_grp_fu_100_p1();
    void thread_grp_fu_90_p1();
    void thread_p_s_fu_235_p3();
    void thread_p_shl_cast3_fu_182_p1();
    void thread_p_shl_fu_174_p3();
    void thread_tmp_11_fu_163_p3();
    void thread_tmp_12_fu_186_p2();
    void thread_tmp_13_fu_230_p2();
    void thread_tmp_14_fu_246_p2();
    void thread_tmp_15_fu_242_p1();
    void thread_tmp_1_fu_131_p4();
    void thread_tmp_20_cast3_fu_170_p1();
    void thread_tmp_3_fu_192_p4();
    void thread_tmp_4_cast_fu_202_p1();
    void thread_tmp_4_fu_141_p1();
    void thread_tmp_5_fu_145_p4();
    void thread_tmp_6_cast_cast_cast_fu_206_p3();
    void thread_tmp_8_fu_118_p3();
    void thread_tmp_9_fu_155_p3();
    void thread_tmp_cast_fu_220_p1();
    void thread_tmp_fu_214_p2();
    void thread_tmp_s_fu_82_p1();
    void thread_wd2_1_fu_125_p2();
    void thread_wd2_cast_fu_114_p1();
    void thread_wd2_fu_106_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
