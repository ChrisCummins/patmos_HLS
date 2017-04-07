// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _matrixmul_HH_
#define _matrixmul_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "matrixmul_urem_3nbkb.h"
#include "matrixmul_urem_4ncud.h"
#include "matrixmul_mux_42_dEe.h"
#include "matrixmul_mul_32seOg.h"

namespace ap_rtl {

struct matrixmul : public sc_module {
    // Port declarations 41
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
    sc_out< sc_lv<32> > a_4_Addr_A;
    sc_out< sc_logic > a_4_EN_A;
    sc_out< sc_lv<4> > a_4_WEN_A;
    sc_out< sc_lv<32> > a_4_Din_A;
    sc_in< sc_lv<32> > a_4_Dout_A;
    sc_out< sc_logic > a_4_Clk_A;
    sc_out< sc_logic > a_4_Rst_A;
    sc_signal< sc_logic > ap_var_for_const1;
    sc_signal< sc_lv<3> > ap_var_for_const0;


    // Module declarations
    matrixmul(sc_module_name name);
    SC_HAS_PROCESS(matrixmul);

    ~matrixmul();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    matrixmul_urem_3nbkb<1,7,3,3,3>* matrixmul_urem_3nbkb_U1;
    matrixmul_urem_4ncud<1,8,4,3,3>* matrixmul_urem_4ncud_U2;
    matrixmul_mux_42_dEe<1,1,32,32,32,32,2,32>* matrixmul_mux_42_dEe_U3;
    matrixmul_mux_42_dEe<1,1,32,32,32,32,2,32>* matrixmul_mux_42_dEe_U4;
    matrixmul_mux_42_dEe<1,1,32,32,32,32,2,32>* matrixmul_mux_42_dEe_U5;
    matrixmul_mux_42_dEe<1,1,32,32,32,32,2,32>* matrixmul_mux_42_dEe_U6;
    matrixmul_mul_32seOg<1,6,32,32,32>* matrixmul_mul_32seOg_U7;
    matrixmul_mul_32seOg<1,6,32,32,32>* matrixmul_mul_32seOg_U8;
    matrixmul_mul_32seOg<1,6,32,32,32>* matrixmul_mul_32seOg_U9;
    matrixmul_mul_32seOg<1,6,32,32,32>* matrixmul_mul_32seOg_U10;
    sc_signal< sc_lv<8> > ap_CS_fsm;
    sc_signal< sc_lv<1> > ap_CS_fsm_state1;
    sc_signal< sc_lv<5> > indvar_flatten_reg_305;
    sc_signal< sc_lv<3> > i_reg_316;
    sc_signal< sc_lv<3> > j_reg_327;
    sc_signal< sc_lv<32> > reg_339;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_1441;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_1441;
    sc_signal< sc_lv<1> > tmp_3_mid2_reg_1482;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_tmp_3_mid2_reg_1482;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage3;
    sc_signal< sc_lv<32> > reg_343;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage2;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage4;
    sc_signal< sc_lv<32> > grp_fu_347_p3;
    sc_signal< sc_lv<32> > reg_354;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage5;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_382_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_pp0_stage0;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter2_exitcond_flatten_reg_1441;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter3_exitcond_flatten_reg_1441;
    sc_signal< sc_lv<5> > indvar_flatten_next_fu_388_p2;
    sc_signal< sc_lv<5> > indvar_flatten_next_reg_1445;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<1> > exitcond_fu_400_p2;
    sc_signal< sc_lv<1> > exitcond_reg_1450;
    sc_signal< sc_lv<1> > tmp_mid2_fu_412_p3;
    sc_signal< sc_lv<1> > tmp_mid2_reg_1455;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_tmp_mid2_reg_1455;
    sc_signal< sc_lv<3> > newIndex1_mid2_v_v_fu_420_p3;
    sc_signal< sc_lv<3> > newIndex1_mid2_v_v_reg_1475;
    sc_signal< sc_lv<1> > tmp_3_mid2_fu_440_p3;
    sc_signal< sc_lv<1> > tmp_mid2_5_fu_454_p3;
    sc_signal< sc_lv<1> > tmp_mid2_5_reg_1489;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter1_tmp_mid2_5_reg_1489;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter2_tmp_mid2_5_reg_1489;
    sc_signal< sc_lv<1> > ap_pipeline_reg_pp0_iter3_tmp_mid2_5_reg_1489;
    sc_signal< sc_lv<3> > j_mid2_fu_475_p3;
    sc_signal< sc_lv<3> > j_mid2_reg_1498;
    sc_signal< sc_lv<2> > tmp_22_fu_482_p1;
    sc_signal< sc_lv<2> > tmp_22_reg_1507;
    sc_signal< sc_lv<3> > j_1_fu_486_p2;
    sc_signal< sc_lv<3> > j_1_reg_1518;
    sc_signal< sc_lv<5> > tmp_1_fu_492_p3;
    sc_signal< sc_lv<5> > tmp_1_reg_1523;
    sc_signal< sc_lv<64> > tmp_11_fu_500_p1;
    sc_signal< sc_lv<64> > tmp_11_reg_1530;
    sc_signal< sc_lv<64> > tmp_20_cast_fu_518_p1;
    sc_signal< sc_lv<64> > tmp_20_cast_reg_1540;
    sc_signal< sc_lv<64> > tmp_13_fu_528_p3;
    sc_signal< sc_lv<64> > tmp_13_reg_1555;
    sc_signal< sc_lv<32> > b_copy_0_3_19_reg_1575;
    sc_signal< sc_lv<32> > b_copy_2_3_19_reg_1583;
    sc_signal< sc_lv<64> > tmp_15_fu_598_p3;
    sc_signal< sc_lv<64> > tmp_15_reg_1591;
    sc_signal< sc_lv<3> > grp_fu_469_p2;
    sc_signal< sc_lv<3> > newIndex3_mid2_v_reg_1606;
    sc_signal< sc_lv<32> > tmp_4_fu_1014_p6;
    sc_signal< sc_lv<32> > tmp_4_reg_1611;
    sc_signal< sc_lv<32> > tmp_7_fu_1027_p6;
    sc_signal< sc_lv<32> > tmp_7_reg_1616;
    sc_signal< sc_lv<32> > tmp_9_fu_1040_p6;
    sc_signal< sc_lv<32> > tmp_9_reg_1621;
    sc_signal< sc_lv<32> > tmp_10_fu_1053_p6;
    sc_signal< sc_lv<32> > tmp_10_reg_1626;
    sc_signal< sc_lv<64> > tmp_17_fu_1151_p3;
    sc_signal< sc_lv<64> > tmp_17_reg_1631;
    sc_signal< sc_lv<1> > tmp_5_fu_1171_p2;
    sc_signal< sc_lv<1> > tmp_5_reg_1646;
    sc_signal< sc_lv<1> > sel_tmp1_fu_1176_p2;
    sc_signal< sc_lv<1> > sel_tmp1_reg_1654;
    sc_signal< sc_lv<5> > tmp_21_fu_1184_p2;
    sc_signal< sc_lv<5> > tmp_21_reg_1662;
    sc_signal< sc_lv<5> > ap_pipeline_reg_pp0_iter2_tmp_21_reg_1662;
    sc_signal< sc_lv<32> > a_row_1_fu_1193_p3;
    sc_signal< sc_lv<32> > a_row_1_reg_1672;
    sc_signal< sc_lv<32> > a_row_0_2_fu_1207_p3;
    sc_signal< sc_lv<32> > a_row_1_2_fu_1233_p3;
    sc_signal< sc_lv<32> > a_row_3_2_fu_1262_p3;
    sc_signal< sc_lv<32> > a_row_3_2_reg_1693;
    sc_signal< sc_lv<32> > a_row_2_2_fu_1276_p3;
    sc_signal< sc_lv<32> > grp_fu_1214_p2;
    sc_signal< sc_lv<32> > tmp_6_reg_1703;
    sc_signal< sc_lv<32> > grp_fu_1239_p2;
    sc_signal< sc_lv<32> > tmp_11_1_reg_1708;
    sc_signal< sc_lv<32> > grp_fu_1283_p2;
    sc_signal< sc_lv<32> > tmp_11_2_reg_1713;
    sc_signal< sc_lv<32> > grp_fu_1298_p2;
    sc_signal< sc_lv<32> > tmp_11_3_reg_1718;
    sc_signal< sc_lv<32> > tmp11_fu_1302_p2;
    sc_signal< sc_lv<32> > tmp11_reg_1723;
    sc_signal< sc_lv<4> > a_2_addr_2_reg_1728;
    sc_signal< sc_lv<32> > tmp_12_3_fu_1315_p2;
    sc_signal< sc_lv<32> > tmp_12_3_reg_1733;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter3;
    sc_signal< sc_lv<5> > indvar_flatten_phi_fu_309_p4;
    sc_signal< sc_lv<3> > i_phi_fu_320_p4;
    sc_signal< sc_lv<3> > j_phi_fu_331_p4;
    sc_signal< sc_lv<64> > tmp_8_fu_505_p1;
    sc_signal< sc_lv<64> > tmp_20_fu_537_p3;
    sc_signal< sc_lv<64> > tmp_22_cast_fu_1306_p1;
    sc_signal< sc_lv<32> > a_row_0_3_fu_98;
    sc_signal< sc_lv<32> > a_row_1_3_fu_102;
    sc_signal< sc_lv<32> > a_row_2_3_fu_106;
    sc_signal< sc_lv<32> > a_row_3_1_fu_110;
    sc_signal< sc_lv<32> > b_copy_0_3_11_fu_114;
    sc_signal< sc_lv<32> > b_copy_0_3_18_fu_1007_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_8_fu_118;
    sc_signal< sc_lv<32> > b_copy_0_3_17_fu_1000_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_12_fu_122;
    sc_signal< sc_lv<32> > b_copy_0_3_16_fu_993_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_1_fu_126;
    sc_signal< sc_lv<32> > b_copy_0_3_3_fu_986_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_11_fu_130;
    sc_signal< sc_lv<32> > b_copy_1_3_18_fu_979_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_8_fu_134;
    sc_signal< sc_lv<32> > b_copy_1_3_17_fu_972_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_12_fu_138;
    sc_signal< sc_lv<32> > b_copy_1_3_16_fu_965_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_1_fu_142;
    sc_signal< sc_lv<32> > b_copy_1_3_3_fu_958_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_11_fu_146;
    sc_signal< sc_lv<32> > b_copy_2_3_18_fu_951_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_8_fu_150;
    sc_signal< sc_lv<32> > b_copy_2_3_17_fu_944_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_12_fu_154;
    sc_signal< sc_lv<32> > b_copy_2_3_16_fu_937_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_1_fu_158;
    sc_signal< sc_lv<32> > b_copy_2_3_3_fu_930_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_11_fu_162;
    sc_signal< sc_lv<32> > b_copy_3_3_18_fu_923_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_8_fu_166;
    sc_signal< sc_lv<32> > b_copy_3_3_17_fu_916_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_12_fu_170;
    sc_signal< sc_lv<32> > b_copy_3_3_16_fu_909_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_1_fu_174;
    sc_signal< sc_lv<32> > b_copy_3_3_3_fu_902_p3;
    sc_signal< sc_lv<32> > a_0_Addr_A_orig;
    sc_signal< sc_lv<32> > a_1_Addr_A_orig;
    sc_signal< sc_lv<32> > a_2_Addr_A_orig;
    sc_signal< sc_lv<32> > a_3_Addr_A_orig;
    sc_signal< sc_lv<3> > tmp_1_off_fu_370_p2;
    sc_signal< sc_lv<3> > i_1_fu_394_p2;
    sc_signal< sc_lv<1> > tmp_mid1_fu_406_p2;
    sc_signal< sc_lv<1> > tmp_fu_358_p2;
    sc_signal< sc_lv<3> > grp_fu_428_p0;
    sc_signal< sc_lv<1> > tmp_3_mid1_fu_434_p2;
    sc_signal< sc_lv<1> > tmp_3_fu_364_p2;
    sc_signal< sc_lv<1> > tmp_mid1_4_fu_448_p2;
    sc_signal< sc_lv<1> > tmp_s_fu_376_p2;
    sc_signal< sc_lv<4> > grp_fu_469_p0;
    sc_signal< sc_lv<3> > grp_fu_469_p1;
    sc_signal< sc_lv<3> > grp_fu_428_p2;
    sc_signal< sc_lv<4> > tmp_8_cast_fu_509_p1;
    sc_signal< sc_lv<4> > tmp_19_fu_512_p2;
    sc_signal< sc_lv<5> > tmp_12_fu_523_p2;
    sc_signal< sc_lv<5> > tmp_14_fu_593_p2;
    sc_signal< sc_lv<1> > sel_tmp5_fu_607_p2;
    sc_signal< sc_lv<1> > sel_tmp7_fu_619_p2;
    sc_signal< sc_lv<32> > b_copy_0_3_fu_612_p3;
    sc_signal< sc_lv<1> > sel_tmp9_fu_632_p2;
    sc_signal< sc_lv<32> > b_copy_0_3_4_fu_624_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_5_fu_645_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_6_fu_652_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_9_fu_668_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_fu_690_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_4_fu_698_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_5_fu_714_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_6_fu_722_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_9_fu_738_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_fu_762_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_4_fu_769_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_5_fu_785_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_6_fu_792_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_9_fu_808_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_fu_830_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_4_fu_838_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_5_fu_854_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_6_fu_862_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_9_fu_878_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_2_fu_846_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_7_fu_870_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_14_fu_886_p3;
    sc_signal< sc_lv<32> > b_copy_3_3_15_fu_894_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_2_fu_777_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_7_fu_800_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_14_fu_815_p3;
    sc_signal< sc_lv<32> > b_copy_2_3_15_fu_823_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_2_fu_706_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_7_fu_730_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_14_fu_746_p3;
    sc_signal< sc_lv<32> > b_copy_1_3_15_fu_754_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_2_fu_637_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_7_fu_660_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_14_fu_675_p3;
    sc_signal< sc_lv<32> > b_copy_0_3_15_fu_683_p3;
    sc_signal< sc_lv<32> > tmp_4_fu_1014_p1;
    sc_signal< sc_lv<32> > tmp_4_fu_1014_p2;
    sc_signal< sc_lv<32> > tmp_4_fu_1014_p3;
    sc_signal< sc_lv<32> > tmp_4_fu_1014_p4;
    sc_signal< sc_lv<32> > tmp_7_fu_1027_p1;
    sc_signal< sc_lv<32> > tmp_7_fu_1027_p2;
    sc_signal< sc_lv<32> > tmp_7_fu_1027_p3;
    sc_signal< sc_lv<32> > tmp_7_fu_1027_p4;
    sc_signal< sc_lv<32> > tmp_9_fu_1040_p1;
    sc_signal< sc_lv<32> > tmp_9_fu_1040_p2;
    sc_signal< sc_lv<32> > tmp_9_fu_1040_p3;
    sc_signal< sc_lv<32> > tmp_9_fu_1040_p4;
    sc_signal< sc_lv<32> > tmp_10_fu_1053_p1;
    sc_signal< sc_lv<32> > tmp_10_fu_1053_p2;
    sc_signal< sc_lv<32> > tmp_10_fu_1053_p3;
    sc_signal< sc_lv<32> > tmp_10_fu_1053_p4;
    sc_signal< sc_lv<5> > tmp_16_fu_1146_p2;
    sc_signal< sc_lv<3> > tmp_18_fu_1160_p1;
    sc_signal< sc_lv<5> > tmp_19_cast_fu_1163_p3;
    sc_signal< sc_lv<5> > tmp_8_cast6_fu_1181_p1;
    sc_signal< sc_lv<32> > a_row_0_1_fu_1200_p3;
    sc_signal< sc_lv<32> > grp_fu_1214_p1;
    sc_signal< sc_lv<32> > a_row_1_1_fu_1227_p3;
    sc_signal< sc_lv<32> > grp_fu_1239_p1;
    sc_signal< sc_lv<32> > sel_tmp_fu_1255_p3;
    sc_signal< sc_lv<32> > a_row_2_1_fu_1269_p3;
    sc_signal< sc_lv<32> > grp_fu_1283_p1;
    sc_signal< sc_lv<32> > tmp12_fu_1311_p2;
    sc_signal< sc_lv<1> > ap_CS_fsm_state23;
    sc_signal< sc_lv<8> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<8> ap_ST_fsm_state1;
    static const sc_lv<8> ap_ST_fsm_pp0_stage0;
    static const sc_lv<8> ap_ST_fsm_pp0_stage1;
    static const sc_lv<8> ap_ST_fsm_pp0_stage2;
    static const sc_lv<8> ap_ST_fsm_pp0_stage3;
    static const sc_lv<8> ap_ST_fsm_pp0_stage4;
    static const sc_lv<8> ap_ST_fsm_pp0_stage5;
    static const sc_lv<8> ap_ST_fsm_state23;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<5> ap_const_lv5_0;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<4> ap_const_lv4_0;
    static const sc_lv<4> ap_const_lv4_F;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<5> ap_const_lv5_10;
    static const sc_lv<5> ap_const_lv5_1;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<4> ap_const_lv4_4;
    static const sc_lv<59> ap_const_lv59_0;
    static const sc_lv<61> ap_const_lv61_1;
    static const sc_lv<5> ap_const_lv5_2;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<5> ap_const_lv5_3;
    static const sc_lv<32> ap_const_lv32_7;
    // Thread declarations
    void thread_ap_var_for_const1();
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
    void thread_a_4_Addr_A();
    void thread_a_4_Clk_A();
    void thread_a_4_Din_A();
    void thread_a_4_EN_A();
    void thread_a_4_Rst_A();
    void thread_a_4_WEN_A();
    void thread_a_row_0_1_fu_1200_p3();
    void thread_a_row_0_2_fu_1207_p3();
    void thread_a_row_1_1_fu_1227_p3();
    void thread_a_row_1_2_fu_1233_p3();
    void thread_a_row_1_fu_1193_p3();
    void thread_a_row_2_1_fu_1269_p3();
    void thread_a_row_2_2_fu_1276_p3();
    void thread_a_row_3_2_fu_1262_p3();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state23();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b_copy_0_3_14_fu_675_p3();
    void thread_b_copy_0_3_15_fu_683_p3();
    void thread_b_copy_0_3_16_fu_993_p3();
    void thread_b_copy_0_3_17_fu_1000_p3();
    void thread_b_copy_0_3_18_fu_1007_p3();
    void thread_b_copy_0_3_2_fu_637_p3();
    void thread_b_copy_0_3_3_fu_986_p3();
    void thread_b_copy_0_3_4_fu_624_p3();
    void thread_b_copy_0_3_5_fu_645_p3();
    void thread_b_copy_0_3_6_fu_652_p3();
    void thread_b_copy_0_3_7_fu_660_p3();
    void thread_b_copy_0_3_9_fu_668_p3();
    void thread_b_copy_0_3_fu_612_p3();
    void thread_b_copy_1_3_14_fu_746_p3();
    void thread_b_copy_1_3_15_fu_754_p3();
    void thread_b_copy_1_3_16_fu_965_p3();
    void thread_b_copy_1_3_17_fu_972_p3();
    void thread_b_copy_1_3_18_fu_979_p3();
    void thread_b_copy_1_3_2_fu_706_p3();
    void thread_b_copy_1_3_3_fu_958_p3();
    void thread_b_copy_1_3_4_fu_698_p3();
    void thread_b_copy_1_3_5_fu_714_p3();
    void thread_b_copy_1_3_6_fu_722_p3();
    void thread_b_copy_1_3_7_fu_730_p3();
    void thread_b_copy_1_3_9_fu_738_p3();
    void thread_b_copy_1_3_fu_690_p3();
    void thread_b_copy_2_3_14_fu_815_p3();
    void thread_b_copy_2_3_15_fu_823_p3();
    void thread_b_copy_2_3_16_fu_937_p3();
    void thread_b_copy_2_3_17_fu_944_p3();
    void thread_b_copy_2_3_18_fu_951_p3();
    void thread_b_copy_2_3_2_fu_777_p3();
    void thread_b_copy_2_3_3_fu_930_p3();
    void thread_b_copy_2_3_4_fu_769_p3();
    void thread_b_copy_2_3_5_fu_785_p3();
    void thread_b_copy_2_3_6_fu_792_p3();
    void thread_b_copy_2_3_7_fu_800_p3();
    void thread_b_copy_2_3_9_fu_808_p3();
    void thread_b_copy_2_3_fu_762_p3();
    void thread_b_copy_3_3_14_fu_886_p3();
    void thread_b_copy_3_3_15_fu_894_p3();
    void thread_b_copy_3_3_16_fu_909_p3();
    void thread_b_copy_3_3_17_fu_916_p3();
    void thread_b_copy_3_3_18_fu_923_p3();
    void thread_b_copy_3_3_2_fu_846_p3();
    void thread_b_copy_3_3_3_fu_902_p3();
    void thread_b_copy_3_3_4_fu_838_p3();
    void thread_b_copy_3_3_5_fu_854_p3();
    void thread_b_copy_3_3_6_fu_862_p3();
    void thread_b_copy_3_3_7_fu_870_p3();
    void thread_b_copy_3_3_9_fu_878_p3();
    void thread_b_copy_3_3_fu_830_p3();
    void thread_exitcond_flatten_fu_382_p2();
    void thread_exitcond_fu_400_p2();
    void thread_grp_fu_1214_p1();
    void thread_grp_fu_1239_p1();
    void thread_grp_fu_1283_p1();
    void thread_grp_fu_347_p3();
    void thread_grp_fu_428_p0();
    void thread_grp_fu_469_p0();
    void thread_grp_fu_469_p1();
    void thread_i_1_fu_394_p2();
    void thread_i_phi_fu_320_p4();
    void thread_indvar_flatten_next_fu_388_p2();
    void thread_indvar_flatten_phi_fu_309_p4();
    void thread_j_1_fu_486_p2();
    void thread_j_mid2_fu_475_p3();
    void thread_j_phi_fu_331_p4();
    void thread_newIndex1_mid2_v_v_fu_420_p3();
    void thread_sel_tmp1_fu_1176_p2();
    void thread_sel_tmp5_fu_607_p2();
    void thread_sel_tmp7_fu_619_p2();
    void thread_sel_tmp9_fu_632_p2();
    void thread_sel_tmp_fu_1255_p3();
    void thread_tmp11_fu_1302_p2();
    void thread_tmp12_fu_1311_p2();
    void thread_tmp_10_fu_1053_p1();
    void thread_tmp_10_fu_1053_p2();
    void thread_tmp_10_fu_1053_p3();
    void thread_tmp_10_fu_1053_p4();
    void thread_tmp_11_fu_500_p1();
    void thread_tmp_12_3_fu_1315_p2();
    void thread_tmp_12_fu_523_p2();
    void thread_tmp_13_fu_528_p3();
    void thread_tmp_14_fu_593_p2();
    void thread_tmp_15_fu_598_p3();
    void thread_tmp_16_fu_1146_p2();
    void thread_tmp_17_fu_1151_p3();
    void thread_tmp_18_fu_1160_p1();
    void thread_tmp_19_cast_fu_1163_p3();
    void thread_tmp_19_fu_512_p2();
    void thread_tmp_1_fu_492_p3();
    void thread_tmp_1_off_fu_370_p2();
    void thread_tmp_20_cast_fu_518_p1();
    void thread_tmp_20_fu_537_p3();
    void thread_tmp_21_fu_1184_p2();
    void thread_tmp_22_cast_fu_1306_p1();
    void thread_tmp_22_fu_482_p1();
    void thread_tmp_3_fu_364_p2();
    void thread_tmp_3_mid1_fu_434_p2();
    void thread_tmp_3_mid2_fu_440_p3();
    void thread_tmp_4_fu_1014_p1();
    void thread_tmp_4_fu_1014_p2();
    void thread_tmp_4_fu_1014_p3();
    void thread_tmp_4_fu_1014_p4();
    void thread_tmp_5_fu_1171_p2();
    void thread_tmp_7_fu_1027_p1();
    void thread_tmp_7_fu_1027_p2();
    void thread_tmp_7_fu_1027_p3();
    void thread_tmp_7_fu_1027_p4();
    void thread_tmp_8_cast6_fu_1181_p1();
    void thread_tmp_8_cast_fu_509_p1();
    void thread_tmp_8_fu_505_p1();
    void thread_tmp_9_fu_1040_p1();
    void thread_tmp_9_fu_1040_p2();
    void thread_tmp_9_fu_1040_p3();
    void thread_tmp_9_fu_1040_p4();
    void thread_tmp_fu_358_p2();
    void thread_tmp_mid1_4_fu_448_p2();
    void thread_tmp_mid1_fu_406_p2();
    void thread_tmp_mid2_5_fu_454_p3();
    void thread_tmp_mid2_fu_412_p3();
    void thread_tmp_s_fu_376_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif