// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "uppol2.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic uppol2::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic uppol2::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<8> uppol2::ap_ST_fsm_state1 = "1";
const sc_lv<8> uppol2::ap_ST_fsm_state2 = "10";
const sc_lv<8> uppol2::ap_ST_fsm_state3 = "100";
const sc_lv<8> uppol2::ap_ST_fsm_state4 = "1000";
const sc_lv<8> uppol2::ap_ST_fsm_state5 = "10000";
const sc_lv<8> uppol2::ap_ST_fsm_state6 = "100000";
const sc_lv<8> uppol2::ap_ST_fsm_state7 = "1000000";
const sc_lv<8> uppol2::ap_ST_fsm_state8 = "10000000";
const sc_lv<32> uppol2::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> uppol2::ap_const_lv1_1 = "1";
const sc_lv<32> uppol2::ap_const_lv32_5 = "101";
const sc_lv<32> uppol2::ap_const_lv32_6 = "110";
const sc_lv<2> uppol2::ap_const_lv2_0 = "00";
const sc_lv<32> uppol2::ap_const_lv32_3F = "111111";
const sc_lv<35> uppol2::ap_const_lv35_0 = "00000000000000000000000000000000000";
const sc_lv<32> uppol2::ap_const_lv32_1F = "11111";
const sc_lv<32> uppol2::ap_const_lv32_7 = "111";
const sc_lv<32> uppol2::ap_const_lv32_22 = "100010";
const sc_lv<7> uppol2::ap_const_lv7_0 = "0000000";
const sc_lv<32> uppol2::ap_const_lv32_26 = "100110";
const sc_lv<29> uppol2::ap_const_lv29_1FFFFF80 = "11111111111111111111110000000";
const sc_lv<29> uppol2::ap_const_lv29_80 = "10000000";
const sc_lv<32> uppol2::ap_const_lv32_3000 = "11000000000000";
const sc_lv<32> uppol2::ap_const_lv32_FFFFD000 = "11111111111111111101000000000000";
const sc_lv<15> uppol2::ap_const_lv15_5000 = "101000000000000";

uppol2::uppol2(sc_module_name name) : sc_module(name), mVcdFile(0) {
    adpcm_main_mul_32bkb_x_U21 = new adpcm_main_mul_32bkb<1,6,32,32,64>("adpcm_main_mul_32bkb_x_U21");
    adpcm_main_mul_32bkb_x_U21->clk(ap_clk);
    adpcm_main_mul_32bkb_x_U21->reset(ap_rst);
    adpcm_main_mul_32bkb_x_U21->din0(plt1);
    adpcm_main_mul_32bkb_x_U21->din1(grp_fu_90_p1);
    adpcm_main_mul_32bkb_x_U21->ce(ap_var_for_const0);
    adpcm_main_mul_32bkb_x_U21->dout(grp_fu_90_p2);
    adpcm_main_mul_32bkb_x_U22 = new adpcm_main_mul_32bkb<1,6,32,32,64>("adpcm_main_mul_32bkb_x_U22");
    adpcm_main_mul_32bkb_x_U22->clk(ap_clk);
    adpcm_main_mul_32bkb_x_U22->reset(ap_rst);
    adpcm_main_mul_32bkb_x_U22->din0(plt2);
    adpcm_main_mul_32bkb_x_U22->din1(grp_fu_100_p1);
    adpcm_main_mul_32bkb_x_U22->ce(ap_var_for_const0);
    adpcm_main_mul_32bkb_x_U22->dout(grp_fu_100_p2);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state7);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state8);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_ap_return);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( tmp_19_fu_246_p2 );
    sensitive << ( tmp_10_fu_242_p1 );

    SC_METHOD(thread_apl2_fu_224_p2);
    sensitive << ( tmp_cast_fu_220_p1 );
    sensitive << ( tmp_17_fu_192_p4 );

    SC_METHOD(thread_grp_fu_100_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_s_fu_82_p1 );

    SC_METHOD(thread_grp_fu_90_p1);
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( tmp_s_fu_82_p1 );

    SC_METHOD(thread_p_s_fu_235_p3);
    sensitive << ( apl2_reg_286 );
    sensitive << ( tmp_18_fu_230_p2 );

    SC_METHOD(thread_p_shl_cast3_fu_182_p1);
    sensitive << ( p_shl_fu_174_p3 );

    SC_METHOD(thread_p_shl_fu_174_p3);
    sensitive << ( al2 );

    SC_METHOD(thread_tmp_10_fu_242_p1);
    sensitive << ( p_s_fu_235_p3 );

    SC_METHOD(thread_tmp_16_fu_186_p2);
    sensitive << ( p_shl_cast3_fu_182_p1 );
    sensitive << ( tmp_22_cast3_fu_170_p1 );

    SC_METHOD(thread_tmp_17_fu_192_p4);
    sensitive << ( tmp_16_fu_186_p2 );

    SC_METHOD(thread_tmp_18_fu_230_p2);
    sensitive << ( apl2_reg_286 );
    sensitive << ( ap_CS_fsm_state8 );

    SC_METHOD(thread_tmp_19_fu_246_p2);
    sensitive << ( ap_CS_fsm_state8 );
    sensitive << ( p_s_fu_235_p3 );

    SC_METHOD(thread_tmp_1_fu_131_p4);
    sensitive << ( al1 );

    SC_METHOD(thread_tmp_22_cast3_fu_170_p1);
    sensitive << ( al2 );

    SC_METHOD(thread_tmp_25_cast_fu_202_p1);
    sensitive << ( tmp_4_fu_155_p3 );

    SC_METHOD(thread_tmp_2_fu_141_p1);
    sensitive << ( tmp_1_fu_131_p4 );

    SC_METHOD(thread_tmp_30_cast_cast_cas_fu_206_p3);
    sensitive << ( tmp_9_fu_163_p3 );

    SC_METHOD(thread_tmp_3_fu_145_p4);
    sensitive << ( wd2_1_fu_125_p2 );

    SC_METHOD(thread_tmp_4_fu_155_p3);
    sensitive << ( tmp_8_fu_118_p3 );
    sensitive << ( tmp_2_fu_141_p1 );
    sensitive << ( tmp_3_fu_145_p4 );

    SC_METHOD(thread_tmp_8_fu_118_p3);
    sensitive << ( tmp_13_reg_276 );

    SC_METHOD(thread_tmp_9_fu_163_p3);
    sensitive << ( tmp_15_reg_281 );

    SC_METHOD(thread_tmp_cast_fu_220_p1);
    sensitive << ( tmp_fu_214_p2 );

    SC_METHOD(thread_tmp_fu_214_p2);
    sensitive << ( tmp_30_cast_cast_cas_fu_206_p3 );
    sensitive << ( tmp_25_cast_fu_202_p1 );

    SC_METHOD(thread_tmp_s_fu_82_p1);
    sensitive << ( plt );

    SC_METHOD(thread_wd2_1_fu_125_p2);
    sensitive << ( wd2_cast_fu_114_p1 );

    SC_METHOD(thread_wd2_cast_fu_114_p1);
    sensitive << ( wd2_fu_106_p3 );

    SC_METHOD(thread_wd2_fu_106_p3);
    sensitive << ( al1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );

    SC_THREAD(thread_ap_var_for_const0);

    ap_CS_fsm = "00000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "uppol2_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, al1, "(port)al1");
    sc_trace(mVcdFile, al2, "(port)al2");
    sc_trace(mVcdFile, plt, "(port)plt");
    sc_trace(mVcdFile, plt1, "(port)plt1");
    sc_trace(mVcdFile, plt2, "(port)plt2");
    sc_trace(mVcdFile, ap_return, "(port)ap_return");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_s_fu_82_p1, "tmp_s_fu_82_p1");
    sc_trace(mVcdFile, grp_fu_90_p2, "grp_fu_90_p2");
    sc_trace(mVcdFile, tmp_13_reg_276, "tmp_13_reg_276");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, grp_fu_100_p2, "grp_fu_100_p2");
    sc_trace(mVcdFile, tmp_15_reg_281, "tmp_15_reg_281");
    sc_trace(mVcdFile, apl2_fu_224_p2, "apl2_fu_224_p2");
    sc_trace(mVcdFile, apl2_reg_286, "apl2_reg_286");
    sc_trace(mVcdFile, ap_CS_fsm_state7, "ap_CS_fsm_state7");
    sc_trace(mVcdFile, grp_fu_90_p1, "grp_fu_90_p1");
    sc_trace(mVcdFile, grp_fu_100_p1, "grp_fu_100_p1");
    sc_trace(mVcdFile, wd2_fu_106_p3, "wd2_fu_106_p3");
    sc_trace(mVcdFile, wd2_cast_fu_114_p1, "wd2_cast_fu_114_p1");
    sc_trace(mVcdFile, tmp_1_fu_131_p4, "tmp_1_fu_131_p4");
    sc_trace(mVcdFile, wd2_1_fu_125_p2, "wd2_1_fu_125_p2");
    sc_trace(mVcdFile, tmp_8_fu_118_p3, "tmp_8_fu_118_p3");
    sc_trace(mVcdFile, tmp_2_fu_141_p1, "tmp_2_fu_141_p1");
    sc_trace(mVcdFile, tmp_3_fu_145_p4, "tmp_3_fu_145_p4");
    sc_trace(mVcdFile, p_shl_fu_174_p3, "p_shl_fu_174_p3");
    sc_trace(mVcdFile, p_shl_cast3_fu_182_p1, "p_shl_cast3_fu_182_p1");
    sc_trace(mVcdFile, tmp_22_cast3_fu_170_p1, "tmp_22_cast3_fu_170_p1");
    sc_trace(mVcdFile, tmp_16_fu_186_p2, "tmp_16_fu_186_p2");
    sc_trace(mVcdFile, tmp_4_fu_155_p3, "tmp_4_fu_155_p3");
    sc_trace(mVcdFile, tmp_9_fu_163_p3, "tmp_9_fu_163_p3");
    sc_trace(mVcdFile, tmp_30_cast_cast_cas_fu_206_p3, "tmp_30_cast_cast_cas_fu_206_p3");
    sc_trace(mVcdFile, tmp_25_cast_fu_202_p1, "tmp_25_cast_fu_202_p1");
    sc_trace(mVcdFile, tmp_fu_214_p2, "tmp_fu_214_p2");
    sc_trace(mVcdFile, tmp_cast_fu_220_p1, "tmp_cast_fu_220_p1");
    sc_trace(mVcdFile, tmp_17_fu_192_p4, "tmp_17_fu_192_p4");
    sc_trace(mVcdFile, ap_CS_fsm_state8, "ap_CS_fsm_state8");
    sc_trace(mVcdFile, tmp_18_fu_230_p2, "tmp_18_fu_230_p2");
    sc_trace(mVcdFile, p_s_fu_235_p3, "p_s_fu_235_p3");
    sc_trace(mVcdFile, tmp_19_fu_246_p2, "tmp_19_fu_246_p2");
    sc_trace(mVcdFile, tmp_10_fu_242_p1, "tmp_10_fu_242_p1");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

uppol2::~uppol2() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    delete adpcm_main_mul_32bkb_x_U21;
    delete adpcm_main_mul_32bkb_x_U22;
}

void uppol2::thread_ap_var_for_const0() {
    ap_var_for_const0 = ap_const_logic_1;
}

void uppol2::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state7.read()))) {
        apl2_reg_286 = apl2_fu_224_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state6.read()))) {
        tmp_13_reg_276 = grp_fu_90_p2.read();
        tmp_15_reg_281 = grp_fu_100_p2.read();
    }
}

void uppol2::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read().range(0, 0);
}

void uppol2::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read().range(5, 5);
}

void uppol2::thread_ap_CS_fsm_state7() {
    ap_CS_fsm_state7 = ap_CS_fsm.read().range(6, 6);
}

void uppol2::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read().range(7, 7);
}

void uppol2::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1)) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state8.read())))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void uppol2::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void uppol2::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state8.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void uppol2::thread_ap_return() {
    ap_return = (!tmp_19_fu_246_p2.read()[0].is_01())? sc_lv<15>(): ((tmp_19_fu_246_p2.read()[0].to_bool())? ap_const_lv15_5000: tmp_10_fu_242_p1.read());
}

void uppol2::thread_apl2_fu_224_p2() {
    apl2_fu_224_p2 = (!tmp_cast_fu_220_p1.read().is_01() || !tmp_17_fu_192_p4.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp_cast_fu_220_p1.read()) + sc_biguint<32>(tmp_17_fu_192_p4.read()));
}

void uppol2::thread_grp_fu_100_p1() {
    grp_fu_100_p1 =  (sc_lv<32>) (tmp_s_fu_82_p1.read());
}

void uppol2::thread_grp_fu_90_p1() {
    grp_fu_90_p1 =  (sc_lv<32>) (tmp_s_fu_82_p1.read());
}

void uppol2::thread_p_s_fu_235_p3() {
    p_s_fu_235_p3 = (!tmp_18_fu_230_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_18_fu_230_p2.read()[0].to_bool())? ap_const_lv32_3000: apl2_reg_286.read());
}

void uppol2::thread_p_shl_cast3_fu_182_p1() {
    p_shl_cast3_fu_182_p1 = esl_zext<40,39>(p_shl_fu_174_p3.read());
}

void uppol2::thread_p_shl_fu_174_p3() {
    p_shl_fu_174_p3 = esl_concat<32,7>(al2.read(), ap_const_lv7_0);
}

void uppol2::thread_tmp_10_fu_242_p1() {
    tmp_10_fu_242_p1 = p_s_fu_235_p3.read().range(15-1, 0);
}

void uppol2::thread_tmp_16_fu_186_p2() {
    tmp_16_fu_186_p2 = (!p_shl_cast3_fu_182_p1.read().is_01() || !tmp_22_cast3_fu_170_p1.read().is_01())? sc_lv<40>(): (sc_biguint<40>(p_shl_cast3_fu_182_p1.read()) - sc_bigint<40>(tmp_22_cast3_fu_170_p1.read()));
}

void uppol2::thread_tmp_17_fu_192_p4() {
    tmp_17_fu_192_p4 = tmp_16_fu_186_p2.read().range(38, 7);
}

void uppol2::thread_tmp_18_fu_230_p2() {
    tmp_18_fu_230_p2 = (!apl2_reg_286.read().is_01() || !ap_const_lv32_3000.is_01())? sc_lv<1>(): (sc_bigint<32>(apl2_reg_286.read()) > sc_bigint<32>(ap_const_lv32_3000));
}

void uppol2::thread_tmp_19_fu_246_p2() {
    tmp_19_fu_246_p2 = (!p_s_fu_235_p3.read().is_01() || !ap_const_lv32_FFFFD000.is_01())? sc_lv<1>(): (sc_bigint<32>(p_s_fu_235_p3.read()) < sc_bigint<32>(ap_const_lv32_FFFFD000));
}

void uppol2::thread_tmp_1_fu_131_p4() {
    tmp_1_fu_131_p4 = al1.read().range(31, 5);
}

void uppol2::thread_tmp_22_cast3_fu_170_p1() {
    tmp_22_cast3_fu_170_p1 = esl_sext<40,32>(al2.read());
}

void uppol2::thread_tmp_25_cast_fu_202_p1() {
    tmp_25_cast_fu_202_p1 = esl_sext<29,28>(tmp_4_fu_155_p3.read());
}

void uppol2::thread_tmp_2_fu_141_p1() {
    tmp_2_fu_141_p1 = esl_sext<28,27>(tmp_1_fu_131_p4.read());
}

void uppol2::thread_tmp_30_cast_cast_cas_fu_206_p3() {
    tmp_30_cast_cast_cas_fu_206_p3 = (!tmp_9_fu_163_p3.read()[0].is_01())? sc_lv<29>(): ((tmp_9_fu_163_p3.read()[0].to_bool())? ap_const_lv29_1FFFFF80: ap_const_lv29_80);
}

void uppol2::thread_tmp_3_fu_145_p4() {
    tmp_3_fu_145_p4 = wd2_1_fu_125_p2.read().range(34, 7);
}

void uppol2::thread_tmp_4_fu_155_p3() {
    tmp_4_fu_155_p3 = (!tmp_8_fu_118_p3.read()[0].is_01())? sc_lv<28>(): ((tmp_8_fu_118_p3.read()[0].to_bool())? tmp_2_fu_141_p1.read(): tmp_3_fu_145_p4.read());
}

void uppol2::thread_tmp_8_fu_118_p3() {
    tmp_8_fu_118_p3 = tmp_13_reg_276.read().range(63, 63);
}

void uppol2::thread_tmp_9_fu_163_p3() {
    tmp_9_fu_163_p3 = tmp_15_reg_281.read().range(63, 63);
}

void uppol2::thread_tmp_cast_fu_220_p1() {
    tmp_cast_fu_220_p1 = esl_sext<32,29>(tmp_fu_214_p2.read());
}

void uppol2::thread_tmp_fu_214_p2() {
    tmp_fu_214_p2 = (!tmp_30_cast_cast_cas_fu_206_p3.read().is_01() || !tmp_25_cast_fu_202_p1.read().is_01())? sc_lv<29>(): (sc_biguint<29>(tmp_30_cast_cast_cas_fu_206_p3.read()) + sc_bigint<29>(tmp_25_cast_fu_202_p1.read()));
}

void uppol2::thread_tmp_s_fu_82_p1() {
    tmp_s_fu_82_p1 = esl_sext<64,32>(plt.read());
}

void uppol2::thread_wd2_1_fu_125_p2() {
    wd2_1_fu_125_p2 = (!ap_const_lv35_0.is_01() || !wd2_cast_fu_114_p1.read().is_01())? sc_lv<35>(): (sc_biguint<35>(ap_const_lv35_0) - sc_bigint<35>(wd2_cast_fu_114_p1.read()));
}

void uppol2::thread_wd2_cast_fu_114_p1() {
    wd2_cast_fu_114_p1 = esl_sext<35,34>(wd2_fu_106_p3.read());
}

void uppol2::thread_wd2_fu_106_p3() {
    wd2_fu_106_p3 = esl_concat<32,2>(al1.read(), ap_const_lv2_0);
}

void uppol2::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state6;
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state7;
            break;
        case 64 : 
            ap_NS_fsm = ap_ST_fsm_state8;
            break;
        case 128 : 
            ap_NS_fsm = ap_ST_fsm_state1;
            break;
        default : 
            ap_NS_fsm = "XXXXXXXX";
            break;
    }
}

}

