// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "matrixmul.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic matrixmul::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic matrixmul::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> matrixmul::ap_ST_fsm_state1 = "1";
const sc_lv<5> matrixmul::ap_ST_fsm_state2 = "10";
const sc_lv<5> matrixmul::ap_ST_fsm_state3 = "100";
const sc_lv<5> matrixmul::ap_ST_fsm_state4 = "1000";
const sc_lv<5> matrixmul::ap_ST_fsm_state5 = "10000";
const sc_lv<32> matrixmul::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<1> matrixmul::ap_const_lv1_1 = "1";
const sc_lv<32> matrixmul::ap_const_lv32_1 = "1";
const sc_lv<1> matrixmul::ap_const_lv1_0 = "0";
const sc_lv<32> matrixmul::ap_const_lv32_2 = "10";
const sc_lv<32> matrixmul::ap_const_lv32_3 = "11";
const sc_lv<32> matrixmul::ap_const_lv32_4 = "100";
const sc_lv<2> matrixmul::ap_const_lv2_0 = "00";
const sc_lv<4> matrixmul::ap_const_lv4_0 = "0000";
const sc_lv<4> matrixmul::ap_const_lv4_F = "1111";
const sc_lv<2> matrixmul::ap_const_lv2_3 = "11";
const sc_lv<2> matrixmul::ap_const_lv2_1 = "1";

matrixmul::matrixmul(sc_module_name name) : sc_module(name), mVcdFile(0) {
    matrixmul_mux_32_bkb_U0 = new matrixmul_mux_32_bkb<1,1,32,32,32,2,32>("matrixmul_mux_32_bkb_U0");
    matrixmul_mux_32_bkb_U0->din1(tmp_2_15_reg_128);
    matrixmul_mux_32_bkb_U0->din2(tmp_1_2_reg_117);
    matrixmul_mux_32_bkb_U0->din3(tmp_2_2_reg_106);
    matrixmul_mux_32_bkb_U0->din4(i_1_reg_139);
    matrixmul_mux_32_bkb_U0->dout(tmp_fu_242_p5);
    matrixmul_mux_32_bkb_U1 = new matrixmul_mux_32_bkb<1,1,32,32,32,2,32>("matrixmul_mux_32_bkb_U1");
    matrixmul_mux_32_bkb_U1->din1(tmp_2_15_reg_128);
    matrixmul_mux_32_bkb_U1->din2(tmp_1_2_reg_117);
    matrixmul_mux_32_bkb_U1->din3(tmp_2_2_reg_106);
    matrixmul_mux_32_bkb_U1->din4(i_2_reg_150);
    matrixmul_mux_32_bkb_U1->dout(tmp_1_4_fu_329_p5);

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_a_Addr_A);
    sensitive << ( a_Addr_A_orig );

    SC_METHOD(thread_a_Addr_A_orig);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( i_cast_fu_161_p1 );
    sensitive << ( i_2_cast_fu_312_p1 );

    SC_METHOD(thread_a_Clk_A);
    sensitive << ( ap_clk );

    SC_METHOD(thread_a_Din_A);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_1_4_fu_329_p5 );

    SC_METHOD(thread_a_EN_A);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_a_Rst_A);
    sensitive << ( ap_rst );

    SC_METHOD(thread_a_WEN_A);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_fu_317_p2 );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_fu_317_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_fu_317_p2 );

    SC_METHOD(thread_exitcond1_fu_230_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( i_1_reg_139 );

    SC_METHOD(thread_exitcond2_fu_166_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_94 );

    SC_METHOD(thread_exitcond_fu_317_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( i_2_reg_150 );

    SC_METHOD(thread_i_2_cast_fu_312_p1);
    sensitive << ( i_2_reg_150 );

    SC_METHOD(thread_i_3_fu_172_p2);
    sensitive << ( i_reg_94 );

    SC_METHOD(thread_i_4_fu_236_p2);
    sensitive << ( i_1_reg_139 );

    SC_METHOD(thread_i_5_fu_323_p2);
    sensitive << ( i_2_reg_150 );

    SC_METHOD(thread_i_cast_fu_161_p1);
    sensitive << ( i_reg_94 );

    SC_METHOD(thread_sel_tmp1_fu_260_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond1_fu_230_p2 );
    sensitive << ( i_1_reg_139 );

    SC_METHOD(thread_sel_tmp3_fu_192_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i_reg_94 );

    SC_METHOD(thread_sel_tmp4_fu_274_p2);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( exitcond1_fu_230_p2 );
    sensitive << ( i_1_reg_139 );

    SC_METHOD(thread_sel_tmp_fu_178_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i_reg_94 );

    SC_METHOD(thread_tmp_2_10_fu_288_p3);
    sensitive << ( tmp_1_2_reg_117 );
    sensitive << ( sel_tmp1_fu_260_p2 );
    sensitive << ( tmp_2_18_fu_254_p2 );

    SC_METHOD(thread_tmp_2_11_fu_296_p3);
    sensitive << ( tmp_1_2_reg_117 );
    sensitive << ( sel_tmp4_fu_274_p2 );
    sensitive << ( tmp_2_10_fu_288_p3 );

    SC_METHOD(thread_tmp_2_16_fu_304_p3);
    sensitive << ( tmp_2_15_reg_128 );
    sensitive << ( tmp_2_18_fu_254_p2 );
    sensitive << ( sel_tmp4_fu_274_p2 );

    SC_METHOD(thread_tmp_2_18_fu_254_p2);
    sensitive << ( tmp_fu_242_p5 );

    SC_METHOD(thread_tmp_2_1_fu_198_p3);
    sensitive << ( tmp_2_reg_58 );
    sensitive << ( sel_tmp3_fu_192_p2 );
    sensitive << ( tmp_2_5_fu_184_p3 );

    SC_METHOD(thread_tmp_2_3_fu_280_p3);
    sensitive << ( tmp_2_2_reg_106 );
    sensitive << ( sel_tmp4_fu_274_p2 );
    sensitive << ( tmp_2_4_fu_266_p3 );

    SC_METHOD(thread_tmp_2_4_fu_266_p3);
    sensitive << ( tmp_2_2_reg_106 );
    sensitive << ( sel_tmp1_fu_260_p2 );
    sensitive << ( tmp_2_18_fu_254_p2 );

    SC_METHOD(thread_tmp_2_5_fu_184_p3);
    sensitive << ( a_Dout_A );
    sensitive << ( tmp_2_reg_58 );
    sensitive << ( sel_tmp_fu_178_p2 );

    SC_METHOD(thread_tmp_2_6_fu_206_p3);
    sensitive << ( a_Dout_A );
    sensitive << ( tmp_1_reg_70 );
    sensitive << ( sel_tmp_fu_178_p2 );

    SC_METHOD(thread_tmp_2_7_fu_214_p3);
    sensitive << ( tmp_1_reg_70 );
    sensitive << ( sel_tmp3_fu_192_p2 );
    sensitive << ( tmp_2_6_fu_206_p3 );

    SC_METHOD(thread_tmp_2_9_fu_222_p3);
    sensitive << ( a_Dout_A );
    sensitive << ( tmp_2_8_reg_82 );
    sensitive << ( sel_tmp3_fu_192_p2 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( exitcond2_fu_166_p2 );
    sensitive << ( exitcond1_fu_230_p2 );
    sensitive << ( exitcond_fu_317_p2 );

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "matrixmul_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, a_Addr_A, "(port)a_Addr_A");
    sc_trace(mVcdFile, a_EN_A, "(port)a_EN_A");
    sc_trace(mVcdFile, a_WEN_A, "(port)a_WEN_A");
    sc_trace(mVcdFile, a_Din_A, "(port)a_Din_A");
    sc_trace(mVcdFile, a_Dout_A, "(port)a_Dout_A");
    sc_trace(mVcdFile, a_Clk_A, "(port)a_Clk_A");
    sc_trace(mVcdFile, a_Rst_A, "(port)a_Rst_A");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_3_fu_172_p2, "i_3_fu_172_p2");
    sc_trace(mVcdFile, i_3_reg_345, "i_3_reg_345");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond2_fu_166_p2, "exitcond2_fu_166_p2");
    sc_trace(mVcdFile, tmp_2_1_fu_198_p3, "tmp_2_1_fu_198_p3");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_2_7_fu_214_p3, "tmp_2_7_fu_214_p3");
    sc_trace(mVcdFile, tmp_2_9_fu_222_p3, "tmp_2_9_fu_222_p3");
    sc_trace(mVcdFile, i_4_fu_236_p2, "i_4_fu_236_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, tmp_2_3_fu_280_p3, "tmp_2_3_fu_280_p3");
    sc_trace(mVcdFile, exitcond1_fu_230_p2, "exitcond1_fu_230_p2");
    sc_trace(mVcdFile, tmp_2_11_fu_296_p3, "tmp_2_11_fu_296_p3");
    sc_trace(mVcdFile, tmp_2_16_fu_304_p3, "tmp_2_16_fu_304_p3");
    sc_trace(mVcdFile, i_5_fu_323_p2, "i_5_fu_323_p2");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_2_reg_58, "tmp_2_reg_58");
    sc_trace(mVcdFile, tmp_1_reg_70, "tmp_1_reg_70");
    sc_trace(mVcdFile, tmp_2_8_reg_82, "tmp_2_8_reg_82");
    sc_trace(mVcdFile, i_reg_94, "i_reg_94");
    sc_trace(mVcdFile, tmp_2_2_reg_106, "tmp_2_2_reg_106");
    sc_trace(mVcdFile, tmp_1_2_reg_117, "tmp_1_2_reg_117");
    sc_trace(mVcdFile, tmp_2_15_reg_128, "tmp_2_15_reg_128");
    sc_trace(mVcdFile, i_1_reg_139, "i_1_reg_139");
    sc_trace(mVcdFile, i_2_reg_150, "i_2_reg_150");
    sc_trace(mVcdFile, exitcond_fu_317_p2, "exitcond_fu_317_p2");
    sc_trace(mVcdFile, i_cast_fu_161_p1, "i_cast_fu_161_p1");
    sc_trace(mVcdFile, i_2_cast_fu_312_p1, "i_2_cast_fu_312_p1");
    sc_trace(mVcdFile, a_Addr_A_orig, "a_Addr_A_orig");
    sc_trace(mVcdFile, tmp_1_4_fu_329_p5, "tmp_1_4_fu_329_p5");
    sc_trace(mVcdFile, sel_tmp_fu_178_p2, "sel_tmp_fu_178_p2");
    sc_trace(mVcdFile, sel_tmp3_fu_192_p2, "sel_tmp3_fu_192_p2");
    sc_trace(mVcdFile, tmp_2_5_fu_184_p3, "tmp_2_5_fu_184_p3");
    sc_trace(mVcdFile, tmp_2_6_fu_206_p3, "tmp_2_6_fu_206_p3");
    sc_trace(mVcdFile, tmp_fu_242_p5, "tmp_fu_242_p5");
    sc_trace(mVcdFile, sel_tmp1_fu_260_p2, "sel_tmp1_fu_260_p2");
    sc_trace(mVcdFile, tmp_2_18_fu_254_p2, "tmp_2_18_fu_254_p2");
    sc_trace(mVcdFile, sel_tmp4_fu_274_p2, "sel_tmp4_fu_274_p2");
    sc_trace(mVcdFile, tmp_2_4_fu_266_p3, "tmp_2_4_fu_266_p3");
    sc_trace(mVcdFile, tmp_2_10_fu_288_p3, "tmp_2_10_fu_288_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
    mHdltvinHandle.open("matrixmul.hdltvin.dat");
    mHdltvoutHandle.open("matrixmul.hdltvout.dat");
}

matrixmul::~matrixmul() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete matrixmul_mux_32_bkb_U0;
    delete matrixmul_mux_32_bkb_U1;
}

void matrixmul::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         !esl_seteq<1,1,1>(exitcond2_fu_166_p2.read(), ap_const_lv1_0))) {
        i_1_reg_139 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_230_p2.read()))) {
        i_1_reg_139 = i_4_fu_236_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state4.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_230_p2.read()))) {
        i_2_reg_150 = ap_const_lv2_0;
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_317_p2.read()))) {
        i_2_reg_150 = i_5_fu_323_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state3.read()))) {
        i_reg_94 = i_3_reg_345.read();
    } else if ((esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1) && 
                !esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0))) {
        i_reg_94 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         !esl_seteq<1,1,1>(exitcond2_fu_166_p2.read(), ap_const_lv1_0))) {
        tmp_1_2_reg_117 = tmp_1_reg_70.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_230_p2.read()))) {
        tmp_1_2_reg_117 = tmp_2_11_fu_296_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         !esl_seteq<1,1,1>(exitcond2_fu_166_p2.read(), ap_const_lv1_0))) {
        tmp_2_15_reg_128 = tmp_2_8_reg_82.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_230_p2.read()))) {
        tmp_2_15_reg_128 = tmp_2_16_fu_304_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()) && 
         !esl_seteq<1,1,1>(exitcond2_fu_166_p2.read(), ap_const_lv1_0))) {
        tmp_2_2_reg_106 = tmp_2_reg_58.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state4.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_230_p2.read()))) {
        tmp_2_2_reg_106 = tmp_2_3_fu_280_p3.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()))) {
        i_3_reg_345 = i_3_fu_172_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state3.read()))) {
        tmp_1_reg_70 = tmp_2_7_fu_214_p3.read();
        tmp_2_8_reg_82 = tmp_2_9_fu_222_p3.read();
        tmp_2_reg_58 = tmp_2_1_fu_198_p3.read();
    }
}

void matrixmul::thread_a_Addr_A() {
    a_Addr_A = (!ap_const_lv32_2.is_01())? sc_lv<32>(): a_Addr_A_orig.read() << (unsigned short)ap_const_lv32_2.to_uint();
}

void matrixmul::thread_a_Addr_A_orig() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state5.read()))) {
        a_Addr_A_orig = i_2_cast_fu_312_p1.read();
    } else if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read()))) {
        a_Addr_A_orig = i_cast_fu_161_p1.read();
    } else {
        a_Addr_A_orig = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX";
    }
}

void matrixmul::thread_a_Clk_A() {
    a_Clk_A = ap_clk.read()? SC_LOGIC_1 : SC_LOGIC_0;
}

void matrixmul::thread_a_Din_A() {
    a_Din_A = tmp_1_4_fu_329_p5.read();
}

void matrixmul::thread_a_EN_A() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state2.read())) || 
         (esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state5.read())))) {
        a_EN_A = ap_const_logic_1;
    } else {
        a_EN_A = ap_const_logic_0;
    }
}

void matrixmul::thread_a_Rst_A() {
    a_Rst_A = ap_rst.read();
}

void matrixmul::thread_a_WEN_A() {
    if (((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_317_p2.read())))) {
        a_WEN_A = ap_const_lv4_F;
    } else {
        a_WEN_A = ap_const_lv4_0;
    }
}

void matrixmul::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read().range(0, 0);
}

void matrixmul::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read().range(1, 1);
}

void matrixmul::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read().range(2, 2);
}

void matrixmul::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read().range(3, 3);
}

void matrixmul::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read().range(4, 4);
}

void matrixmul::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state5.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_317_p2.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_CS_fsm_state1.read(), ap_const_lv1_1))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void matrixmul::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_lv1_1, ap_CS_fsm_state5.read()) && 
         !esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_317_p2.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void matrixmul::thread_exitcond1_fu_230_p2() {
    exitcond1_fu_230_p2 = (!i_1_reg_139.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(i_1_reg_139.read() == ap_const_lv2_3);
}

void matrixmul::thread_exitcond2_fu_166_p2() {
    exitcond2_fu_166_p2 = (!i_reg_94.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_94.read() == ap_const_lv2_3);
}

void matrixmul::thread_exitcond_fu_317_p2() {
    exitcond_fu_317_p2 = (!i_2_reg_150.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(i_2_reg_150.read() == ap_const_lv2_3);
}

void matrixmul::thread_i_2_cast_fu_312_p1() {
    i_2_cast_fu_312_p1 = esl_zext<32,2>(i_2_reg_150.read());
}

void matrixmul::thread_i_3_fu_172_p2() {
    i_3_fu_172_p2 = (!i_reg_94.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_reg_94.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matrixmul::thread_i_4_fu_236_p2() {
    i_4_fu_236_p2 = (!i_1_reg_139.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_1_reg_139.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matrixmul::thread_i_5_fu_323_p2() {
    i_5_fu_323_p2 = (!i_2_reg_150.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_2_reg_150.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void matrixmul::thread_i_cast_fu_161_p1() {
    i_cast_fu_161_p1 = esl_zext<32,2>(i_reg_94.read());
}

void matrixmul::thread_sel_tmp1_fu_260_p2() {
    sel_tmp1_fu_260_p2 = (!i_1_reg_139.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(i_1_reg_139.read() == ap_const_lv2_1);
}

void matrixmul::thread_sel_tmp3_fu_192_p2() {
    sel_tmp3_fu_192_p2 = (!i_reg_94.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_94.read() == ap_const_lv2_0);
}

void matrixmul::thread_sel_tmp4_fu_274_p2() {
    sel_tmp4_fu_274_p2 = (!i_1_reg_139.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(i_1_reg_139.read() == ap_const_lv2_0);
}

void matrixmul::thread_sel_tmp_fu_178_p2() {
    sel_tmp_fu_178_p2 = (!i_reg_94.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_94.read() == ap_const_lv2_1);
}

void matrixmul::thread_tmp_2_10_fu_288_p3() {
    tmp_2_10_fu_288_p3 = (!sel_tmp1_fu_260_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp1_fu_260_p2.read()[0].to_bool())? tmp_2_18_fu_254_p2.read(): tmp_1_2_reg_117.read());
}

void matrixmul::thread_tmp_2_11_fu_296_p3() {
    tmp_2_11_fu_296_p3 = (!sel_tmp4_fu_274_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_fu_274_p2.read()[0].to_bool())? tmp_1_2_reg_117.read(): tmp_2_10_fu_288_p3.read());
}

void matrixmul::thread_tmp_2_16_fu_304_p3() {
    tmp_2_16_fu_304_p3 = (!sel_tmp4_fu_274_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_fu_274_p2.read()[0].to_bool())? tmp_2_18_fu_254_p2.read(): tmp_2_15_reg_128.read());
}

void matrixmul::thread_tmp_2_18_fu_254_p2() {
    tmp_2_18_fu_254_p2 = (!ap_const_lv32_1.is_01())? sc_lv<32>(): tmp_fu_242_p5.read() << (unsigned short)ap_const_lv32_1.to_uint();
}

void matrixmul::thread_tmp_2_1_fu_198_p3() {
    tmp_2_1_fu_198_p3 = (!sel_tmp3_fu_192_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp3_fu_192_p2.read()[0].to_bool())? tmp_2_reg_58.read(): tmp_2_5_fu_184_p3.read());
}

void matrixmul::thread_tmp_2_3_fu_280_p3() {
    tmp_2_3_fu_280_p3 = (!sel_tmp4_fu_274_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_fu_274_p2.read()[0].to_bool())? tmp_2_2_reg_106.read(): tmp_2_4_fu_266_p3.read());
}

void matrixmul::thread_tmp_2_4_fu_266_p3() {
    tmp_2_4_fu_266_p3 = (!sel_tmp1_fu_260_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp1_fu_260_p2.read()[0].to_bool())? tmp_2_2_reg_106.read(): tmp_2_18_fu_254_p2.read());
}

void matrixmul::thread_tmp_2_5_fu_184_p3() {
    tmp_2_5_fu_184_p3 = (!sel_tmp_fu_178_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_fu_178_p2.read()[0].to_bool())? tmp_2_reg_58.read(): a_Dout_A.read());
}

void matrixmul::thread_tmp_2_6_fu_206_p3() {
    tmp_2_6_fu_206_p3 = (!sel_tmp_fu_178_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp_fu_178_p2.read()[0].to_bool())? a_Dout_A.read(): tmp_1_reg_70.read());
}

void matrixmul::thread_tmp_2_7_fu_214_p3() {
    tmp_2_7_fu_214_p3 = (!sel_tmp3_fu_192_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp3_fu_192_p2.read()[0].to_bool())? tmp_1_reg_70.read(): tmp_2_6_fu_206_p3.read());
}

void matrixmul::thread_tmp_2_9_fu_222_p3() {
    tmp_2_9_fu_222_p3 = (!sel_tmp3_fu_192_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp3_fu_192_p2.read()[0].to_bool())? a_Dout_A.read(): tmp_2_8_reg_82.read());
}

void matrixmul::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if (!esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_0)) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if (!esl_seteq<1,1,1>(exitcond2_fu_166_p2.read(), ap_const_lv1_0)) {
                ap_NS_fsm = ap_ST_fsm_state4;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        case 8 : 
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_fu_230_p2.read())) {
                ap_NS_fsm = ap_ST_fsm_state5;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 16 : 
            if (!esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_317_p2.read())) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state5;
            }
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

void matrixmul::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_Addr_A\" :  \"" << a_Addr_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_EN_A\" :  \"" << a_EN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_WEN_A\" :  \"" << a_WEN_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_Din_A\" :  \"" << a_Din_A.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"a_Dout_A\" :  \"" << a_Dout_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_Clk_A\" :  \"" << a_Clk_A.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"a_Rst_A\" :  \"" << a_Rst_A.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

