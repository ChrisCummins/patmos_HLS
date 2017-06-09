// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matmul_hw_HH_
#define _matmul_hw_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matmul_hw_fadd_32fYi.h"
#include "matmul_hw_fmul_32g8j.h"

namespace ap_rtl {

struct matmul_hw : public sc_module {
    // Port declarations 69
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<32> > a_0_Addr_A;
    sc_out< sc_logic > a_0_EN_A;
    sc_out< sc_lv<4> > a_0_WEN_A;
    sc_out< sc_lv<32> > a_0_Din_A;
    sc_in< sc_lv<32> > a_0_Dout_A;
    sc_out< sc_logic > a_0_Clk_A;
    sc_out< sc_logic > a_0_Rst_A;
    sc_out< sc_lv<32> > a_1_Addr_A;
    sc_out< sc_logic > a_1_EN_A;
    sc_out< sc_lv<4> > a_1_WEN_A;
    sc_out< sc_lv<32> > a_1_Din_A;
    sc_in< sc_lv<32> > a_1_Dout_A;
    sc_out< sc_logic > a_1_Clk_A;
    sc_out< sc_logic > a_1_Rst_A;
    sc_out< sc_lv<32> > a_2_Addr_A;
    sc_out< sc_logic > a_2_EN_A;
    sc_out< sc_lv<4> > a_2_WEN_A;
    sc_out< sc_lv<32> > a_2_Din_A;
    sc_in< sc_lv<32> > a_2_Dout_A;
    sc_out< sc_logic > a_2_Clk_A;
    sc_out< sc_logic > a_2_Rst_A;
    sc_out< sc_lv<32> > a_3_Addr_A;
    sc_out< sc_logic > a_3_EN_A;
    sc_out< sc_lv<4> > a_3_WEN_A;
    sc_out< sc_lv<32> > a_3_Din_A;
    sc_in< sc_lv<32> > a_3_Dout_A;
    sc_out< sc_logic > a_3_Clk_A;
    sc_out< sc_logic > a_3_Rst_A;
    sc_out< sc_lv<32> > b_0_Addr_A;
    sc_out< sc_logic > b_0_EN_A;
    sc_out< sc_lv<4> > b_0_WEN_A;
    sc_out< sc_lv<32> > b_0_Din_A;
    sc_in< sc_lv<32> > b_0_Dout_A;
    sc_out< sc_logic > b_0_Clk_A;
    sc_out< sc_logic > b_0_Rst_A;
    sc_out< sc_lv<32> > b_1_Addr_A;
    sc_out< sc_logic > b_1_EN_A;
    sc_out< sc_lv<4> > b_1_WEN_A;
    sc_out< sc_lv<32> > b_1_Din_A;
    sc_in< sc_lv<32> > b_1_Dout_A;
    sc_out< sc_logic > b_1_Clk_A;
    sc_out< sc_logic > b_1_Rst_A;
    sc_out< sc_lv<32> > b_2_Addr_A;
    sc_out< sc_logic > b_2_EN_A;
    sc_out< sc_lv<4> > b_2_WEN_A;
    sc_out< sc_lv<32> > b_2_Din_A;
    sc_in< sc_lv<32> > b_2_Dout_A;
    sc_out< sc_logic > b_2_Clk_A;
    sc_out< sc_logic > b_2_Rst_A;
    sc_out< sc_lv<32> > b_3_Addr_A;
    sc_out< sc_logic > b_3_EN_A;
    sc_out< sc_lv<4> > b_3_WEN_A;
    sc_out< sc_lv<32> > b_3_Din_A;
    sc_in< sc_lv<32> > b_3_Dout_A;
    sc_out< sc_logic > b_3_Clk_A;
    sc_out< sc_logic > b_3_Rst_A;
    sc_out< sc_lv<32> > c_Addr_A;
    sc_out< sc_logic > c_EN_A;
    sc_out< sc_lv<4> > c_WEN_A;
    sc_out< sc_lv<32> > c_Din_A;
    sc_in< sc_lv<32> > c_Dout_A;
    sc_out< sc_logic > c_Clk_A;
    sc_out< sc_logic > c_Rst_A;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    matmul_hw(sc_module_name name);
    SC_HAS_PROCESS(matmul_hw);

    ~matmul_hw();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matmul_hw_fadd_32fYi<1,5,32,32,32>* matmul_hw_fadd_32fYi_U1;
    matmul_hw_fadd_32fYi<1,5,32,32,32>* matmul_hw_fadd_32fYi_U2;
    matmul_hw_fadd_32fYi<1,5,32,32,32>* matmul_hw_fadd_32fYi_U3;
    matmul_hw_fadd_32fYi<1,5,32,32,32>* matmul_hw_fadd_32fYi_U4;
    matmul_hw_fmul_32g8j<1,4,32,32,32>* matmul_hw_fmul_32g8j_U5;
    matmul_hw_fmul_32g8j<1,4,32,32,32>* matmul_hw_fmul_32g8j_U6;
    matmul_hw_fmul_32g8j<1,4,32,32,32>* matmul_hw_fmul_32g8j_U7;
    matmul_hw_fmul_32g8j<1,4,32,32,32>* matmul_hw_fmul_32g8j_U8;
    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<9> > indvar_flatten_reg_400;
    sc_signal< sc_lv<5> > i_reg_411;
    sc_signal< sc_lv<5> > j_reg_422;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_474_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter2_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter3_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter4_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter5_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter6_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter7_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter8_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter9_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter10_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter11_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter12_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter13_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter14_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter15_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter16_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter17_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter18_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter19_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter20_exitcond_flatten_reg_664;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter21_exitcond_flatten_reg_664;
    sc_signal< sc_lv<9> > indvar_flatten_next_fu_480_p2;
    sc_signal< sc_lv<9> > indvar_flatten_next_reg_668;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<5> > j_mid2_fu_498_p3;
    sc_signal< sc_lv<5> > j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter1_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter2_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter3_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter4_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter5_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter6_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter7_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter8_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter9_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter10_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter11_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter12_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter13_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter14_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter15_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter16_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter17_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter18_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter19_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter20_j_mid2_reg_673;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter21_j_mid2_reg_673;
    sc_signal< sc_lv<5> > tmp_mid2_v_fu_506_p3;
    sc_signal< sc_lv<5> > tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter1_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter2_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter3_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter4_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter5_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter6_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter7_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter8_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter9_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter10_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter11_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter12_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter13_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter14_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter15_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter16_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter17_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter18_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter19_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter20_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter21_tmp_mid2_v_reg_682;
    sc_signal< sc_lv<7> > tmp_fu_514_p3;
    sc_signal< sc_lv<7> > tmp_reg_688;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage2;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_lv<5> > j_1_fu_634_p2;
    sc_signal< sc_lv<5> > j_1_reg_975;
    sc_signal< sc_lv<32> > grp_fu_450_p2;
    sc_signal< sc_lv<32> > tmp_6_reg_980;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<32> > grp_fu_456_p2;
    sc_signal< sc_lv<32> > tmp_6_4_reg_995;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_4_reg_995;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_4_reg_995;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_4_reg_995;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_4_reg_995;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_4_reg_995;
    sc_signal< sc_lv<32> > grp_fu_462_p2;
    sc_signal< sc_lv<32> > tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_8_reg_1010;
    sc_signal< sc_lv<32> > grp_fu_468_p2;
    sc_signal< sc_lv<32> > tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter13_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter14_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter15_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter16_tmp_6_11_reg_1025;
    sc_signal< sc_lv<32> > tmp_6_1_reg_1040;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_1_reg_1040;
    sc_signal< sc_lv<32> > tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_5_reg_1045;
    sc_signal< sc_lv<32> > tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_9_reg_1050;
    sc_signal< sc_lv<32> > tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter13_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter14_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter15_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter16_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter17_tmp_6_12_reg_1055;
    sc_signal< sc_lv<32> > tmp_6_2_reg_1060;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_2_reg_1060;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_2_reg_1060;
    sc_signal< sc_lv<32> > tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_6_reg_1065;
    sc_signal< sc_lv<32> > tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter13_tmp_6_s_reg_1070;
    sc_signal< sc_lv<32> > tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter13_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter14_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter15_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter16_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter17_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter18_tmp_6_13_reg_1075;
    sc_signal< sc_lv<32> > tmp_6_3_reg_1080;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_3_reg_1080;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_3_reg_1080;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_3_reg_1080;
    sc_signal< sc_lv<32> > tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_7_reg_1085;
    sc_signal< sc_lv<32> > tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter13_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter14_tmp_6_10_reg_1090;
    sc_signal< sc_lv<32> > tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter2_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter3_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter4_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter5_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter6_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter7_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter8_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter9_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter10_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter11_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter12_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter13_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter14_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter15_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter16_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter17_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter18_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > ap_pipeline_reg_pp0_iter19_tmp_6_14_reg_1095;
    sc_signal< sc_lv<32> > grp_fu_433_p2;
    sc_signal< sc_lv<32> > tmp_s_reg_1100;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_lv<32> > tmp_1_1_reg_1105;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<32> > tmp_1_2_reg_1110;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter4;
    sc_signal< sc_lv<32> > tmp_1_3_reg_1115;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter6;
    sc_signal< sc_lv<32> > grp_fu_438_p2;
    sc_signal< sc_lv<32> > tmp_1_4_reg_1120;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter7;
    sc_signal< sc_lv<32> > tmp_1_5_reg_1125;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter8;
    sc_signal< sc_lv<32> > tmp_1_6_reg_1130;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter9;
    sc_signal< sc_lv<32> > tmp_1_7_reg_1135;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter11;
    sc_signal< sc_lv<32> > grp_fu_442_p2;
    sc_signal< sc_lv<32> > tmp_1_8_reg_1140;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter12;
    sc_signal< sc_lv<32> > tmp_1_9_reg_1145;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter13;
    sc_signal< sc_lv<32> > tmp_1_s_reg_1150;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter14;
    sc_signal< sc_lv<32> > tmp_1_10_reg_1155;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter16;
    sc_signal< sc_lv<32> > grp_fu_446_p2;
    sc_signal< sc_lv<32> > tmp_1_11_reg_1160;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter17;
    sc_signal< sc_lv<32> > tmp_1_12_reg_1165;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter18;
    sc_signal< sc_lv<32> > tmp_1_13_reg_1170;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter19;
    sc_signal< sc_lv<32> > tmp_1_14_reg_1175;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter21;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter5;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter10;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter15;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter20;
    sc_signal< sc_lv<9> > indvar_flatten_phi_fu_404_p4;
    sc_signal< sc_lv<5> > i_phi_fu_415_p4;
    sc_signal< sc_lv<5> > j_phi_fu_426_p4;
    sc_signal< sc_lv<64> > tmp_3_fu_522_p1;
    sc_signal< sc_lv<64> > tmp_2_fu_530_p1;
    sc_signal< sc_lv<64> > tmp_5_fu_543_p3;
    sc_signal< sc_lv<64> > tmp_13_cast_fu_564_p1;
    sc_signal< sc_lv<64> > tmp_8_fu_577_p3;
    sc_signal< sc_lv<64> > tmp_13_fu_589_p3;
    sc_signal< sc_lv<64> > tmp_10_fu_605_p3;
    sc_signal< sc_lv<64> > tmp_15_cast_fu_626_p1;
    sc_signal< sc_lv<64> > tmp_16_cast_fu_659_p1;
    sc_signal< sc_lv<32> > a_0_Addr_A_orig;
    sc_signal< sc_lv<32> > b_0_Addr_A_orig;
    sc_signal< sc_lv<32> > a_1_Addr_A_orig;
    sc_signal< sc_lv<32> > b_1_Addr_A_orig;
    sc_signal< sc_lv<32> > a_2_Addr_A_orig;
    sc_signal< sc_lv<32> > b_2_Addr_A_orig;
    sc_signal< sc_lv<32> > a_3_Addr_A_orig;
    sc_signal< sc_lv<32> > b_3_Addr_A_orig;
    sc_signal< sc_lv<32> > c_Addr_A_orig;
    sc_signal< sc_lv<32> > grp_fu_433_p0;
    sc_signal< sc_lv<32> > grp_fu_433_p1;
    sc_signal< sc_lv<32> > grp_fu_438_p0;
    sc_signal< sc_lv<32> > grp_fu_438_p1;
    sc_signal< sc_lv<32> > grp_fu_442_p0;
    sc_signal< sc_lv<32> > grp_fu_442_p1;
    sc_signal< sc_lv<32> > grp_fu_446_p0;
    sc_signal< sc_lv<32> > grp_fu_446_p1;
    sc_signal< sc_lv<1> > exitcond_fu_492_p2;
    sc_signal< sc_lv<5> > i_1_fu_486_p2;
    sc_signal< sc_lv<7> > tmp_4_fu_538_p2;
    sc_signal< sc_lv<6> > tmp_2_cast_fu_555_p1;
    sc_signal< sc_lv<6> > tmp_12_fu_558_p2;
    sc_signal< sc_lv<7> > tmp_7_fu_572_p2;
    sc_signal< sc_lv<7> > tmp_9_fu_600_p2;
    sc_signal< sc_lv<7> > tmp_2_cast3_fu_617_p1;
    sc_signal< sc_lv<7> > tmp_14_fu_620_p2;
    sc_signal< sc_lv<9> > tmp_11_fu_639_p3;
    sc_signal< sc_lv<10> > tmp_2_cast4_fu_650_p1;
    sc_signal< sc_lv<10> > tmp_12_cast_fu_646_p1;
    sc_signal< sc_lv<10> > tmp_15_fu_653_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state88;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_pp0_stage0;
    static const sc_lv<6> ap_ST_fsm_pp0_stage1;
    static const sc_lv<6> ap_ST_fsm_pp0_stage2;
    static const sc_lv<6> ap_ST_fsm_pp0_stage3;
    static const sc_lv<6> ap_ST_fsm_state88;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<9> ap_const_lv9_0;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<9> ap_const_lv9_100;
    static const sc_lv<9> ap_const_lv9_1;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<57> ap_const_lv57_0;
    static const sc_lv<6> ap_const_lv6_10;
    static const sc_lv<7> ap_const_lv7_2;
    static const sc_lv<59> ap_const_lv59_1;
    static const sc_lv<7> ap_const_lv7_3;
    static const sc_lv<7> ap_const_lv7_30;
    static const sc_lv<32> ap_const_lv32_5;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_a_0_Addr_A();
    void thread_a_0_Addr_A_orig();
    void thread_a_0_Clk_A();
    void thread_a_0_Din_A();
    void thread_a_0_EN_A();
    void thread_a_0_Rst_A();
    void thread_a_0_WEN_A();
    void thread_a_1_Addr_A();
    void thread_a_1_Addr_A_orig();
    void thread_a_1_Clk_A();
    void thread_a_1_Din_A();
    void thread_a_1_EN_A();
    void thread_a_1_Rst_A();
    void thread_a_1_WEN_A();
    void thread_a_2_Addr_A();
    void thread_a_2_Addr_A_orig();
    void thread_a_2_Clk_A();
    void thread_a_2_Din_A();
    void thread_a_2_EN_A();
    void thread_a_2_Rst_A();
    void thread_a_2_WEN_A();
    void thread_a_3_Addr_A();
    void thread_a_3_Addr_A_orig();
    void thread_a_3_Clk_A();
    void thread_a_3_Din_A();
    void thread_a_3_EN_A();
    void thread_a_3_Rst_A();
    void thread_a_3_WEN_A();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state88();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_0_Addr_A();
    void thread_b_0_Addr_A_orig();
    void thread_b_0_Clk_A();
    void thread_b_0_Din_A();
    void thread_b_0_EN_A();
    void thread_b_0_Rst_A();
    void thread_b_0_WEN_A();
    void thread_b_1_Addr_A();
    void thread_b_1_Addr_A_orig();
    void thread_b_1_Clk_A();
    void thread_b_1_Din_A();
    void thread_b_1_EN_A();
    void thread_b_1_Rst_A();
    void thread_b_1_WEN_A();
    void thread_b_2_Addr_A();
    void thread_b_2_Addr_A_orig();
    void thread_b_2_Clk_A();
    void thread_b_2_Din_A();
    void thread_b_2_EN_A();
    void thread_b_2_Rst_A();
    void thread_b_2_WEN_A();
    void thread_b_3_Addr_A();
    void thread_b_3_Addr_A_orig();
    void thread_b_3_Clk_A();
    void thread_b_3_Din_A();
    void thread_b_3_EN_A();
    void thread_b_3_Rst_A();
    void thread_b_3_WEN_A();
    void thread_c_Addr_A();
    void thread_c_Addr_A_orig();
    void thread_c_Clk_A();
    void thread_c_Din_A();
    void thread_c_EN_A();
    void thread_c_Rst_A();
    void thread_c_WEN_A();
    void thread_exitcond_flatten_fu_474_p2();
    void thread_exitcond_fu_492_p2();
    void thread_grp_fu_433_p0();
    void thread_grp_fu_433_p1();
    void thread_grp_fu_438_p0();
    void thread_grp_fu_438_p1();
    void thread_grp_fu_442_p0();
    void thread_grp_fu_442_p1();
    void thread_grp_fu_446_p0();
    void thread_grp_fu_446_p1();
    void thread_i_1_fu_486_p2();
    void thread_i_phi_fu_415_p4();
    void thread_indvar_flatten_next_fu_480_p2();
    void thread_indvar_flatten_phi_fu_404_p4();
    void thread_j_1_fu_634_p2();
    void thread_j_mid2_fu_498_p3();
    void thread_j_phi_fu_426_p4();
    void thread_tmp_10_fu_605_p3();
    void thread_tmp_11_fu_639_p3();
    void thread_tmp_12_cast_fu_646_p1();
    void thread_tmp_12_fu_558_p2();
    void thread_tmp_13_cast_fu_564_p1();
    void thread_tmp_13_fu_589_p3();
    void thread_tmp_14_fu_620_p2();
    void thread_tmp_15_cast_fu_626_p1();
    void thread_tmp_15_fu_653_p2();
    void thread_tmp_16_cast_fu_659_p1();
    void thread_tmp_2_cast3_fu_617_p1();
    void thread_tmp_2_cast4_fu_650_p1();
    void thread_tmp_2_cast_fu_555_p1();
    void thread_tmp_2_fu_530_p1();
    void thread_tmp_3_fu_522_p1();
    void thread_tmp_4_fu_538_p2();
    void thread_tmp_5_fu_543_p3();
    void thread_tmp_7_fu_572_p2();
    void thread_tmp_8_fu_577_p3();
    void thread_tmp_9_fu_600_p2();
    void thread_tmp_fu_514_p3();
    void thread_tmp_mid2_v_fu_506_p3();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
