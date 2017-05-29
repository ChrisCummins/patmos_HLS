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

    adpcm_main_mul_32bkb<1,6,32,32,64>* adpcm_main_mul_32bkb_x_U62;
    sc_signal< sc_lv<10> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<32> > grp_fu_92_p2;
    sc_signal< sc_lv<32> > reg_99;
    sc_signal< sc_lv<1> > ap_CS_fsm_state8;
    sc_signal< sc_lv<1> > ap_CS_fsm_state9;
    sc_signal< sc_lv<64> > tmp_s_fu_119_p1;
    sc_signal< sc_lv<64> > tmp_s_reg_277;
    sc_signal< sc_lv<64> > tmp_12_fu_124_p1;
    sc_signal< sc_lv<64> > tmp_14_fu_129_p1;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > grp_fu_105_p2;
    sc_signal< sc_lv<64> > tmp_13_reg_292;
    sc_signal< sc_lv<1> > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_15_reg_297;
    sc_signal< sc_lv<1> > ap_CS_fsm_state7;
    sc_signal< sc_lv<32> > grp_fu_92_p0;
    sc_signal< sc_lv<32> > tmp_30_cast_cast_fu_174_p3;
    sc_signal< sc_lv<32> > tmp_18_fu_240_p1;
    sc_signal< sc_lv<32> > grp_fu_92_p1;
    sc_signal< sc_lv<32> > grp_fu_105_p0;
    sc_signal< sc_lv<32> > grp_fu_105_p1;
    sc_signal< sc_lv<39> > p_shl_fu_145_p3;
    sc_signal< sc_lv<40> > p_shl_cast4_fu_153_p1;
    sc_signal< sc_lv<40> > tmp_22_cast2_fu_141_p1;
    sc_signal< sc_lv<40> > tmp_16_fu_157_p2;
    sc_signal< sc_lv<1> > tmp_9_fu_134_p3;
    sc_signal< sc_lv<34> > wd2_fu_183_p3;
    sc_signal< sc_lv<35> > wd2_cast_fu_191_p1;
    sc_signal< sc_lv<27> > tmp_fu_208_p4;
    sc_signal< sc_lv<35> > wd2_1_fu_202_p2;
    sc_signal< sc_lv<1> > tmp_8_fu_195_p3;
    sc_signal< sc_lv<28> > tmp_1_fu_218_p1;
    sc_signal< sc_lv<28> > tmp_2_fu_222_p4;
    sc_signal< sc_lv<28> > tmp_3_fu_232_p3;
    sc_signal< sc_lv<1> > ap_CS_fsm_state10;
    sc_signal< sc_lv<1> > tmp_19_fu_245_p2;
    sc_signal< sc_lv<32> > p_s_fu_251_p3;
    sc_signal< sc_lv<1> > tmp_20_fu_263_p2;
    sc_signal< sc_lv<15> > tmp_10_fu_259_p1;
    sc_signal< sc_lv<10> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<10> ap_ST_fsm_state1;
    static const sc_lv<10> ap_ST_fsm_state2;
    static const sc_lv<10> ap_ST_fsm_state3;
    static const sc_lv<10> ap_ST_fsm_state4;
    static const sc_lv<10> ap_ST_fsm_state5;
    static const sc_lv<10> ap_ST_fsm_state6;
    static const sc_lv<10> ap_ST_fsm_state7;
    static const sc_lv<10> ap_ST_fsm_state8;
    static const sc_lv<10> ap_ST_fsm_state9;
    static const sc_lv<10> ap_ST_fsm_state10;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_3F;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<32> ap_const_lv32_26;
    static const sc_lv<32> ap_const_lv32_FFFFFF80;
    static const sc_lv<32> ap_const_lv32_80;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<35> ap_const_lv35_0;
    static const sc_lv<32> ap_const_lv32_1F;
    static const sc_lv<32> ap_const_lv32_22;
    static const sc_lv<32> ap_const_lv32_3000;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_FFFFD000;
    static const sc_lv<15> ap_const_lv15_5000;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_grp_fu_105_p0();
    void thread_grp_fu_105_p1();
    void thread_grp_fu_92_p0();
    void thread_grp_fu_92_p1();
    void thread_grp_fu_92_p2();
    void thread_p_s_fu_251_p3();
    void thread_p_shl_cast4_fu_153_p1();
    void thread_p_shl_fu_145_p3();
    void thread_tmp_10_fu_259_p1();
    void thread_tmp_12_fu_124_p1();
    void thread_tmp_14_fu_129_p1();
    void thread_tmp_16_fu_157_p2();
    void thread_tmp_18_fu_240_p1();
    void thread_tmp_19_fu_245_p2();
    void thread_tmp_1_fu_218_p1();
    void thread_tmp_20_fu_263_p2();
    void thread_tmp_22_cast2_fu_141_p1();
    void thread_tmp_2_fu_222_p4();
    void thread_tmp_30_cast_cast_fu_174_p3();
    void thread_tmp_3_fu_232_p3();
    void thread_tmp_8_fu_195_p3();
    void thread_tmp_9_fu_134_p3();
    void thread_tmp_fu_208_p4();
    void thread_tmp_s_fu_119_p1();
    void thread_wd2_1_fu_202_p2();
    void thread_wd2_cast_fu_191_p1();
    void thread_wd2_fu_183_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
