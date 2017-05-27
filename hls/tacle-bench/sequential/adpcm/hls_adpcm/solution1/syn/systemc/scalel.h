// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _scalel_HH_
#define _scalel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "scalel_ilb_table.h"

namespace ap_rtl {

struct scalel : public sc_module {
    // Port declarations 9
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_in< sc_lv<15> > nbl;
    sc_in< sc_lv<5> > shift_constant;
    sc_out< sc_lv<15> > ap_return;


    // Module declarations
    scalel(sc_module_name name);
    SC_HAS_PROCESS(scalel);

    ~scalel();

    sc_trace_file* mVcdFile;

    scalel_ilb_table* ilb_table_U;
    sc_signal< sc_lv<2> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > ilb_table_address0;
    sc_signal< sc_logic > ilb_table_ce0;
    sc_signal< sc_lv<12> > ilb_table_q0;
    sc_signal< sc_lv<4> > tmp_reg_120;
    sc_signal< sc_lv<64> > tmp_s_fu_74_p1;
    sc_signal< sc_lv<1> > ap_CS_fsm_state2;
    sc_signal< sc_lv<5> > wd1_fu_54_p4;
    sc_signal< sc_lv<4> > tmp_12_fu_82_p1;
    sc_signal< sc_lv<4> > tmp_26_fu_86_p2;
    sc_signal< sc_lv<5> > tmp_37_cast_cast_fu_92_p1;
    sc_signal< sc_lv<5> > wd2_cast_cast_fu_79_p1;
    sc_signal< sc_lv<5> > tmp_27_fu_96_p2;
    sc_signal< sc_lv<12> > tmp_38_cast_fu_102_p1;
    sc_signal< sc_lv<12> > wd3_fu_106_p2;
    sc_signal< sc_lv<15> > tmp_28_fu_112_p3;
    sc_signal< sc_lv<15> > ap_return_preg;
    sc_signal< sc_lv<2> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<2> ap_ST_fsm_state1;
    static const sc_lv<2> ap_ST_fsm_state2;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<15> ap_const_lv15_0;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_ap_return();
    void thread_ilb_table_address0();
    void thread_ilb_table_ce0();
    void thread_tmp_12_fu_82_p1();
    void thread_tmp_26_fu_86_p2();
    void thread_tmp_27_fu_96_p2();
    void thread_tmp_28_fu_112_p3();
    void thread_tmp_37_cast_cast_fu_92_p1();
    void thread_tmp_38_cast_fu_102_p1();
    void thread_tmp_s_fu_74_p1();
    void thread_wd1_fu_54_p4();
    void thread_wd2_cast_cast_fu_79_p1();
    void thread_wd3_fu_106_p2();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
