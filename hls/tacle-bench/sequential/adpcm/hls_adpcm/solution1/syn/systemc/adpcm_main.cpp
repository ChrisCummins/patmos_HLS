// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "adpcm_main.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_lv<2> adpcm_main::ap_const_lv2_0 = "00";
const sc_logic adpcm_main::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<32> adpcm_main::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_logic adpcm_main::ap_const_logic_1 = sc_dt::Log_1;

adpcm_main::adpcm_main(sc_module_name name) : sc_module(name), mVcdFile(0) {
    Block_proc_U0 = new Block_proc("Block_proc_U0");
    Block_proc_U0->ap_clk(ap_clk);
    Block_proc_U0->ap_rst(ap_rst);
    Block_proc_U0->ap_start(Block_proc_U0_ap_start);
    Block_proc_U0->ap_done(Block_proc_U0_ap_done);
    Block_proc_U0->ap_continue(Block_proc_U0_ap_continue);
    Block_proc_U0->ap_idle(Block_proc_U0_ap_idle);
    Block_proc_U0->ap_ready(Block_proc_U0_ap_ready);
    Block_proc_U0->select_r(select_r);
    Block_proc_U0->size(size);
    Block_proc_U0->dec_result_address0(Block_proc_U0_dec_result_address0);
    Block_proc_U0->dec_result_ce0(Block_proc_U0_dec_result_ce0);
    Block_proc_U0->dec_result_we0(Block_proc_U0_dec_result_we0);
    Block_proc_U0->dec_result_d0(Block_proc_U0_dec_result_d0);
    Block_proc_U0->test_data_address0(Block_proc_U0_test_data_address0);
    Block_proc_U0->test_data_ce0(Block_proc_U0_test_data_ce0);
    Block_proc_U0->test_data_q0(test_data_q0);
    Block_proc_U0->compressed_address0(Block_proc_U0_compressed_address0);
    Block_proc_U0->compressed_ce0(Block_proc_U0_compressed_ce0);
    Block_proc_U0->compressed_we0(Block_proc_U0_compressed_we0);
    Block_proc_U0->compressed_d0(Block_proc_U0_compressed_d0);
    Block_proc_U0->compressed_q0(compressed_q0);

    SC_METHOD(thread_Block_proc_U0_ap_continue);

    SC_METHOD(thread_Block_proc_U0_ap_start);
    sensitive << ( ap_start );

    SC_METHOD(thread_ap_done);
    sensitive << ( Block_proc_U0_ap_done );

    SC_METHOD(thread_ap_hs_continue);

    SC_METHOD(thread_ap_hs_done);
    sensitive << ( Block_proc_U0_ap_done );

    SC_METHOD(thread_ap_hs_ready);
    sensitive << ( Block_proc_U0_ap_ready );

    SC_METHOD(thread_ap_idle);
    sensitive << ( Block_proc_U0_ap_idle );

    SC_METHOD(thread_ap_ready);
    sensitive << ( Block_proc_U0_ap_ready );

    SC_METHOD(thread_compressed_address0);
    sensitive << ( Block_proc_U0_compressed_address0 );

    SC_METHOD(thread_compressed_ce0);
    sensitive << ( Block_proc_U0_compressed_ce0 );

    SC_METHOD(thread_compressed_d0);
    sensitive << ( Block_proc_U0_compressed_d0 );

    SC_METHOD(thread_compressed_we0);
    sensitive << ( Block_proc_U0_compressed_we0 );

    SC_METHOD(thread_dec_result_address0);
    sensitive << ( Block_proc_U0_dec_result_address0 );

    SC_METHOD(thread_dec_result_ce0);
    sensitive << ( Block_proc_U0_dec_result_ce0 );

    SC_METHOD(thread_dec_result_d0);
    sensitive << ( Block_proc_U0_dec_result_d0 );

    SC_METHOD(thread_dec_result_we0);
    sensitive << ( Block_proc_U0_dec_result_we0 );

    SC_METHOD(thread_test_data_address0);
    sensitive << ( Block_proc_U0_test_data_address0 );

    SC_METHOD(thread_test_data_ce0);
    sensitive << ( Block_proc_U0_test_data_ce0 );

    SC_METHOD(thread_test_data_d0);

    SC_METHOD(thread_test_data_we0);

    SC_THREAD(thread_hdltv_gen);
    sensitive << ( ap_clk.pos() );

    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "adpcm_main_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT__
    sc_trace(mVcdFile, test_data_address0, "(port)test_data_address0");
    sc_trace(mVcdFile, test_data_ce0, "(port)test_data_ce0");
    sc_trace(mVcdFile, test_data_d0, "(port)test_data_d0");
    sc_trace(mVcdFile, test_data_q0, "(port)test_data_q0");
    sc_trace(mVcdFile, test_data_we0, "(port)test_data_we0");
    sc_trace(mVcdFile, compressed_address0, "(port)compressed_address0");
    sc_trace(mVcdFile, compressed_ce0, "(port)compressed_ce0");
    sc_trace(mVcdFile, compressed_d0, "(port)compressed_d0");
    sc_trace(mVcdFile, compressed_q0, "(port)compressed_q0");
    sc_trace(mVcdFile, compressed_we0, "(port)compressed_we0");
    sc_trace(mVcdFile, dec_result_address0, "(port)dec_result_address0");
    sc_trace(mVcdFile, dec_result_ce0, "(port)dec_result_ce0");
    sc_trace(mVcdFile, dec_result_d0, "(port)dec_result_d0");
    sc_trace(mVcdFile, dec_result_q0, "(port)dec_result_q0");
    sc_trace(mVcdFile, dec_result_we0, "(port)dec_result_we0");
    sc_trace(mVcdFile, select_r, "(port)select_r");
    sc_trace(mVcdFile, size, "(port)size");
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, Block_proc_U0_ap_start, "Block_proc_U0_ap_start");
    sc_trace(mVcdFile, Block_proc_U0_ap_done, "Block_proc_U0_ap_done");
    sc_trace(mVcdFile, Block_proc_U0_ap_continue, "Block_proc_U0_ap_continue");
    sc_trace(mVcdFile, Block_proc_U0_ap_idle, "Block_proc_U0_ap_idle");
    sc_trace(mVcdFile, Block_proc_U0_ap_ready, "Block_proc_U0_ap_ready");
    sc_trace(mVcdFile, Block_proc_U0_dec_result_address0, "Block_proc_U0_dec_result_address0");
    sc_trace(mVcdFile, Block_proc_U0_dec_result_ce0, "Block_proc_U0_dec_result_ce0");
    sc_trace(mVcdFile, Block_proc_U0_dec_result_we0, "Block_proc_U0_dec_result_we0");
    sc_trace(mVcdFile, Block_proc_U0_dec_result_d0, "Block_proc_U0_dec_result_d0");
    sc_trace(mVcdFile, Block_proc_U0_test_data_address0, "Block_proc_U0_test_data_address0");
    sc_trace(mVcdFile, Block_proc_U0_test_data_ce0, "Block_proc_U0_test_data_ce0");
    sc_trace(mVcdFile, Block_proc_U0_compressed_address0, "Block_proc_U0_compressed_address0");
    sc_trace(mVcdFile, Block_proc_U0_compressed_ce0, "Block_proc_U0_compressed_ce0");
    sc_trace(mVcdFile, Block_proc_U0_compressed_we0, "Block_proc_U0_compressed_we0");
    sc_trace(mVcdFile, Block_proc_U0_compressed_d0, "Block_proc_U0_compressed_d0");
    sc_trace(mVcdFile, ap_hs_continue, "ap_hs_continue");
    sc_trace(mVcdFile, ap_hs_done, "ap_hs_done");
    sc_trace(mVcdFile, ap_hs_ready, "ap_hs_ready");
#endif

    }
    mHdltvinHandle.open("adpcm_main.hdltvin.dat");
    mHdltvoutHandle.open("adpcm_main.hdltvout.dat");
}

adpcm_main::~adpcm_main() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

    mHdltvinHandle << "] " << endl;
    mHdltvoutHandle << "] " << endl;
    mHdltvinHandle.close();
    mHdltvoutHandle.close();
    delete Block_proc_U0;
}

void adpcm_main::thread_Block_proc_U0_ap_continue() {
    Block_proc_U0_ap_continue = ap_const_logic_1;
}

void adpcm_main::thread_Block_proc_U0_ap_start() {
    Block_proc_U0_ap_start = ap_start.read();
}

void adpcm_main::thread_ap_done() {
    ap_done = Block_proc_U0_ap_done.read();
}

void adpcm_main::thread_ap_hs_continue() {
    ap_hs_continue = ap_const_logic_1;
}

void adpcm_main::thread_ap_hs_done() {
    ap_hs_done = Block_proc_U0_ap_done.read();
}

void adpcm_main::thread_ap_hs_ready() {
    ap_hs_ready = Block_proc_U0_ap_ready.read();
}

void adpcm_main::thread_ap_idle() {
    ap_idle = Block_proc_U0_ap_idle.read();
}

void adpcm_main::thread_ap_ready() {
    ap_ready = Block_proc_U0_ap_ready.read();
}

void adpcm_main::thread_compressed_address0() {
    compressed_address0 = Block_proc_U0_compressed_address0.read();
}

void adpcm_main::thread_compressed_ce0() {
    compressed_ce0 = Block_proc_U0_compressed_ce0.read();
}

void adpcm_main::thread_compressed_d0() {
    compressed_d0 = Block_proc_U0_compressed_d0.read();
}

void adpcm_main::thread_compressed_we0() {
    compressed_we0 = Block_proc_U0_compressed_we0.read();
}

void adpcm_main::thread_dec_result_address0() {
    dec_result_address0 = Block_proc_U0_dec_result_address0.read();
}

void adpcm_main::thread_dec_result_ce0() {
    dec_result_ce0 = Block_proc_U0_dec_result_ce0.read();
}

void adpcm_main::thread_dec_result_d0() {
    dec_result_d0 = Block_proc_U0_dec_result_d0.read();
}

void adpcm_main::thread_dec_result_we0() {
    dec_result_we0 = Block_proc_U0_dec_result_we0.read();
}

void adpcm_main::thread_test_data_address0() {
    test_data_address0 = Block_proc_U0_test_data_address0.read();
}

void adpcm_main::thread_test_data_ce0() {
    test_data_ce0 = Block_proc_U0_test_data_ce0.read();
}

void adpcm_main::thread_test_data_d0() {
    test_data_d0 = ap_const_lv32_0;
}

void adpcm_main::thread_test_data_we0() {
    test_data_we0 = ap_const_logic_0;
}

void adpcm_main::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvoutHandle << mComma << "{"  <<  " \"test_data_address0\" :  \"" << test_data_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"test_data_ce0\" :  \"" << test_data_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"test_data_d0\" :  \"" << test_data_d0.read() << "\" ";
        mHdltvinHandle << mComma << "{"  <<  " \"test_data_q0\" :  \"" << test_data_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"test_data_we0\" :  \"" << test_data_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"compressed_address0\" :  \"" << compressed_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"compressed_ce0\" :  \"" << compressed_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"compressed_d0\" :  \"" << compressed_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"compressed_q0\" :  \"" << compressed_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"compressed_we0\" :  \"" << compressed_we0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dec_result_address0\" :  \"" << dec_result_address0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dec_result_ce0\" :  \"" << dec_result_ce0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dec_result_d0\" :  \"" << dec_result_d0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"dec_result_q0\" :  \"" << dec_result_q0.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"dec_result_we0\" :  \"" << dec_result_we0.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"select_r\" :  \"" << select_r.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"size\" :  \"" << size.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_rst\" :  \"" << ap_rst.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_done\" :  \"" << ap_done.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"ap_start\" :  \"" << ap_start.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_ready\" :  \"" << ap_ready.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"ap_idle\" :  \"" << ap_idle.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

