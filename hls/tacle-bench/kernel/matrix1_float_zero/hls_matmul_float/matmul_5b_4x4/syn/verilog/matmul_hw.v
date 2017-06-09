// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

(* CORE_GENERATION_INFO="matmul_hw,hls_ip_2016_4,{HLS_INPUT_TYPE=c,HLS_INPUT_FLOAT=1,HLS_INPUT_FIXED=0,HLS_INPUT_PART=xc7a100tcsg324-1,HLS_INPUT_CLOCK=10.000000,HLS_INPUT_ARCH=others,HLS_SYN_CLOCK=8.263000,HLS_SYN_LAT=57,HLS_SYN_TPT=none,HLS_SYN_MEM=0,HLS_SYN_DSP=10,HLS_SYN_FF=998,HLS_SYN_LUT=1113}" *)

module matmul_hw (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        a_0_Addr_A,
        a_0_EN_A,
        a_0_WEN_A,
        a_0_Din_A,
        a_0_Dout_A,
        a_0_Clk_A,
        a_0_Rst_A,
        a_1_Addr_A,
        a_1_EN_A,
        a_1_WEN_A,
        a_1_Din_A,
        a_1_Dout_A,
        a_1_Clk_A,
        a_1_Rst_A,
        b_0_Addr_A,
        b_0_EN_A,
        b_0_WEN_A,
        b_0_Din_A,
        b_0_Dout_A,
        b_0_Clk_A,
        b_0_Rst_A,
        b_1_Addr_A,
        b_1_EN_A,
        b_1_WEN_A,
        b_1_Din_A,
        b_1_Dout_A,
        b_1_Clk_A,
        b_1_Rst_A,
        c_Addr_A,
        c_EN_A,
        c_WEN_A,
        c_Din_A,
        c_Dout_A,
        c_Clk_A,
        c_Rst_A
);

parameter    ap_ST_fsm_state1 = 4'b1;
parameter    ap_ST_fsm_pp0_stage0 = 4'b10;
parameter    ap_ST_fsm_pp0_stage1 = 4'b100;
parameter    ap_ST_fsm_state28 = 4'b1000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv5_0 = 5'b00000;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv4_0 = 4'b0000;
parameter    ap_const_lv4_F = 4'b1111;
parameter    ap_const_lv5_10 = 5'b10000;
parameter    ap_const_lv5_1 = 5'b1;
parameter    ap_const_lv3_1 = 3'b1;
parameter    ap_const_lv3_4 = 3'b100;
parameter    ap_const_lv4_1 = 4'b1;
parameter    ap_const_lv60_0 = 60'b000000000000000000000000000000000000000000000000000000000000;
parameter    ap_const_lv4_4 = 4'b100;
parameter    ap_const_lv2_0 = 2'b00;
parameter    ap_const_lv32_3 = 32'b11;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [31:0] a_0_Addr_A;
output   a_0_EN_A;
output  [3:0] a_0_WEN_A;
output  [31:0] a_0_Din_A;
input  [31:0] a_0_Dout_A;
output   a_0_Clk_A;
output   a_0_Rst_A;
output  [31:0] a_1_Addr_A;
output   a_1_EN_A;
output  [3:0] a_1_WEN_A;
output  [31:0] a_1_Din_A;
input  [31:0] a_1_Dout_A;
output   a_1_Clk_A;
output   a_1_Rst_A;
output  [31:0] b_0_Addr_A;
output   b_0_EN_A;
output  [3:0] b_0_WEN_A;
output  [31:0] b_0_Din_A;
input  [31:0] b_0_Dout_A;
output   b_0_Clk_A;
output   b_0_Rst_A;
output  [31:0] b_1_Addr_A;
output   b_1_EN_A;
output  [3:0] b_1_WEN_A;
output  [31:0] b_1_Din_A;
input  [31:0] b_1_Dout_A;
output   b_1_Clk_A;
output   b_1_Rst_A;
output  [31:0] c_Addr_A;
output   c_EN_A;
output  [3:0] c_WEN_A;
output  [31:0] c_Din_A;
input  [31:0] c_Dout_A;
output   c_Clk_A;
output   c_Rst_A;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg a_0_EN_A;
reg a_1_EN_A;
reg b_0_EN_A;
reg b_1_EN_A;
reg c_EN_A;
reg[3:0] c_WEN_A;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
reg   [4:0] indvar_flatten_reg_174;
reg   [2:0] i_reg_185;
reg   [2:0] j_reg_196;
wire   [0:0] exitcond_flatten_fu_228_p2;
reg   [0:0] exitcond_flatten_reg_348;
wire   [0:0] ap_CS_fsm_pp0_stage0;
reg   [0:0] ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter2_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter3_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter4_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter5_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter6_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter7_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter8_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter9_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter10_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter11_exitcond_flatten_reg_348;
reg   [0:0] ap_pipeline_reg_pp0_iter12_exitcond_flatten_reg_348;
wire   [4:0] indvar_flatten_next_fu_234_p2;
reg   [4:0] indvar_flatten_next_reg_352;
reg    ap_enable_reg_pp0_iter0;
wire   [2:0] j_mid2_fu_252_p3;
reg   [2:0] j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter1_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter2_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter3_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter4_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter5_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter6_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter7_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter8_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter9_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter10_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter11_j_mid2_reg_357;
reg   [2:0] ap_pipeline_reg_pp0_iter12_j_mid2_reg_357;
wire   [2:0] tmp_mid2_v_fu_260_p3;
reg   [2:0] tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter1_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter2_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter3_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter4_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter5_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter6_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter7_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter8_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter9_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter10_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter11_tmp_mid2_v_reg_364;
reg   [2:0] ap_pipeline_reg_pp0_iter12_tmp_mid2_v_reg_364;
wire   [3:0] tmp_fu_268_p3;
reg   [3:0] tmp_reg_370;
wire   [0:0] ap_CS_fsm_pp0_stage1;
wire   [2:0] j_1_fu_318_p2;
reg   [2:0] j_1_reg_435;
reg    ap_enable_reg_pp0_iter1;
wire   [31:0] grp_fu_216_p2;
reg   [31:0] tmp_6_reg_460;
reg    ap_enable_reg_pp0_iter2;
wire   [31:0] grp_fu_222_p2;
reg   [31:0] tmp_6_2_reg_465;
reg   [31:0] ap_pipeline_reg_pp0_iter3_tmp_6_2_reg_465;
reg   [31:0] ap_pipeline_reg_pp0_iter4_tmp_6_2_reg_465;
reg   [31:0] ap_pipeline_reg_pp0_iter5_tmp_6_2_reg_465;
reg   [31:0] ap_pipeline_reg_pp0_iter6_tmp_6_2_reg_465;
reg   [31:0] ap_pipeline_reg_pp0_iter7_tmp_6_2_reg_465;
reg   [31:0] tmp_6_1_reg_470;
reg   [31:0] ap_pipeline_reg_pp0_iter3_tmp_6_1_reg_470;
reg   [31:0] ap_pipeline_reg_pp0_iter4_tmp_6_1_reg_470;
reg   [31:0] tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter3_tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter4_tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter5_tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter6_tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter7_tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter8_tmp_6_3_reg_475;
reg   [31:0] ap_pipeline_reg_pp0_iter9_tmp_6_3_reg_475;
wire   [31:0] grp_fu_207_p2;
reg   [31:0] tmp_s_reg_480;
reg    ap_enable_reg_pp0_iter4;
reg   [31:0] tmp_1_1_reg_485;
reg    ap_enable_reg_pp0_iter7;
wire   [31:0] grp_fu_212_p2;
reg   [31:0] tmp_1_2_reg_490;
reg    ap_enable_reg_pp0_iter9;
reg   [31:0] tmp_1_3_reg_495;
reg    ap_enable_reg_pp0_iter12;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter10;
reg    ap_enable_reg_pp0_iter11;
reg   [4:0] indvar_flatten_phi_fu_178_p4;
reg   [2:0] i_phi_fu_189_p4;
reg   [2:0] j_phi_fu_200_p4;
wire   [63:0] tmp_3_fu_276_p1;
wire   [63:0] tmp_2_fu_282_p1;
wire   [63:0] tmp_5_fu_293_p3;
wire   [63:0] tmp_9_cast_fu_312_p1;
wire   [63:0] tmp_10_cast_fu_343_p1;
reg   [31:0] a_0_Addr_A_orig;
reg   [31:0] b_0_Addr_A_orig;
reg   [31:0] a_1_Addr_A_orig;
reg   [31:0] b_1_Addr_A_orig;
wire   [31:0] c_Addr_A_orig;
reg   [31:0] grp_fu_207_p0;
reg   [31:0] grp_fu_207_p1;
reg   [31:0] grp_fu_212_p0;
reg   [31:0] grp_fu_212_p1;
wire   [0:0] exitcond_fu_246_p2;
wire   [2:0] i_1_fu_240_p2;
wire   [3:0] tmp_4_fu_288_p2;
wire   [3:0] tmp_2_cast_fu_303_p1;
wire   [3:0] tmp_9_fu_306_p2;
wire   [4:0] tmp_7_fu_323_p3;
wire   [5:0] tmp_2_cast3_fu_334_p1;
wire   [5:0] tmp_8_cast_fu_330_p1;
wire   [5:0] tmp_8_fu_337_p2;
wire   [0:0] ap_CS_fsm_state28;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'b1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 ap_enable_reg_pp0_iter9 = 1'b0;
#0 ap_enable_reg_pp0_iter12 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter10 = 1'b0;
#0 ap_enable_reg_pp0_iter11 = 1'b0;
end

matmul_hw_fadd_32dEe #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
matmul_hw_fadd_32dEe_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_207_p0),
    .din1(grp_fu_207_p1),
    .ce(1'b1),
    .dout(grp_fu_207_p2)
);

matmul_hw_fadd_32dEe #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
matmul_hw_fadd_32dEe_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_212_p0),
    .din1(grp_fu_212_p1),
    .ce(1'b1),
    .dout(grp_fu_212_p2)
);

matmul_hw_fmul_32eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
matmul_hw_fmul_32eOg_U3(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(a_0_Dout_A),
    .din1(b_0_Dout_A),
    .ce(1'b1),
    .dout(grp_fu_216_p2)
);

matmul_hw_fmul_32eOg #(
    .ID( 1 ),
    .NUM_STAGE( 4 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
matmul_hw_fmul_32eOg_U4(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(a_1_Dout_A),
    .din1(b_1_Dout_A),
    .ce(1'b1),
    .dout(grp_fu_222_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & ~(exitcond_flatten_fu_228_p2 == 1'b0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage1) & (exitcond_flatten_reg_348 == 1'b0))) begin
            ap_enable_reg_pp0_iter1 <= 1'b1;
        end else if ((((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0)) | ((1'b1 == ap_CS_fsm_pp0_stage1) & ~(exitcond_flatten_reg_348 == 1'b0)))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter10 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter10 <= ap_enable_reg_pp0_iter9;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter11 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter11 <= ap_enable_reg_pp0_iter10;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter12 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter12 <= ap_enable_reg_pp0_iter11;
        end else if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
            ap_enable_reg_pp0_iter12 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter9 <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            ap_enable_reg_pp0_iter9 <= ap_enable_reg_pp0_iter8;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_348 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        i_reg_185 <= tmp_mid2_v_reg_364;
    end else if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        i_reg_185 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_348 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        indvar_flatten_reg_174 <= indvar_flatten_next_reg_352;
    end else if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        indvar_flatten_reg_174 <= ap_const_lv5_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_348 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        j_reg_196 <= j_1_reg_435;
    end else if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        j_reg_196 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        ap_pipeline_reg_pp0_iter10_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter9_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter10_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter9_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter10_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter9_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter11_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter10_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter11_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter10_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter11_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter10_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter12_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter11_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter12_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter11_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter12_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter11_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_348 <= exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter1_j_mid2_reg_357 <= j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter1_tmp_mid2_v_reg_364 <= tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter2_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter2_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter1_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter2_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter1_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter3_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter2_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter3_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter2_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter3_tmp_6_2_reg_465 <= tmp_6_2_reg_465;
        ap_pipeline_reg_pp0_iter3_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter2_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter4_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter3_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter4_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter3_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter4_tmp_6_2_reg_465 <= ap_pipeline_reg_pp0_iter3_tmp_6_2_reg_465;
        ap_pipeline_reg_pp0_iter4_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter3_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter5_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter4_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter5_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter4_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter5_tmp_6_2_reg_465 <= ap_pipeline_reg_pp0_iter4_tmp_6_2_reg_465;
        ap_pipeline_reg_pp0_iter5_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter4_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter6_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter5_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter6_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter5_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter6_tmp_6_2_reg_465 <= ap_pipeline_reg_pp0_iter5_tmp_6_2_reg_465;
        ap_pipeline_reg_pp0_iter6_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter5_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter7_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter6_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter7_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter6_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter7_tmp_6_2_reg_465 <= ap_pipeline_reg_pp0_iter6_tmp_6_2_reg_465;
        ap_pipeline_reg_pp0_iter7_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter6_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter8_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter7_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter8_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter7_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter8_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter7_tmp_mid2_v_reg_364;
        ap_pipeline_reg_pp0_iter9_exitcond_flatten_reg_348 <= ap_pipeline_reg_pp0_iter8_exitcond_flatten_reg_348;
        ap_pipeline_reg_pp0_iter9_j_mid2_reg_357 <= ap_pipeline_reg_pp0_iter8_j_mid2_reg_357;
        ap_pipeline_reg_pp0_iter9_tmp_mid2_v_reg_364 <= ap_pipeline_reg_pp0_iter8_tmp_mid2_v_reg_364;
        exitcond_flatten_reg_348 <= exitcond_flatten_fu_228_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
        ap_pipeline_reg_pp0_iter3_tmp_6_1_reg_470 <= tmp_6_1_reg_470;
        ap_pipeline_reg_pp0_iter3_tmp_6_3_reg_475 <= tmp_6_3_reg_475;
        ap_pipeline_reg_pp0_iter4_tmp_6_1_reg_470 <= ap_pipeline_reg_pp0_iter3_tmp_6_1_reg_470;
        ap_pipeline_reg_pp0_iter4_tmp_6_3_reg_475 <= ap_pipeline_reg_pp0_iter3_tmp_6_3_reg_475;
        ap_pipeline_reg_pp0_iter5_tmp_6_3_reg_475 <= ap_pipeline_reg_pp0_iter4_tmp_6_3_reg_475;
        ap_pipeline_reg_pp0_iter6_tmp_6_3_reg_475 <= ap_pipeline_reg_pp0_iter5_tmp_6_3_reg_475;
        ap_pipeline_reg_pp0_iter7_tmp_6_3_reg_475 <= ap_pipeline_reg_pp0_iter6_tmp_6_3_reg_475;
        ap_pipeline_reg_pp0_iter8_tmp_6_3_reg_475 <= ap_pipeline_reg_pp0_iter7_tmp_6_3_reg_475;
        ap_pipeline_reg_pp0_iter9_tmp_6_3_reg_475 <= ap_pipeline_reg_pp0_iter8_tmp_6_3_reg_475;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0))) begin
        indvar_flatten_next_reg_352 <= indvar_flatten_next_fu_234_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (exitcond_flatten_reg_348 == 1'b0))) begin
        j_1_reg_435 <= j_1_fu_318_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_fu_228_p2 == 1'b0))) begin
        j_mid2_reg_357 <= j_mid2_fu_252_p3;
        tmp_reg_370[3 : 1] <= tmp_fu_268_p3[3 : 1];
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter7) & (ap_pipeline_reg_pp0_iter6_exitcond_flatten_reg_348 == 1'b0))) begin
        tmp_1_1_reg_485 <= grp_fu_207_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter9) & (ap_pipeline_reg_pp0_iter9_exitcond_flatten_reg_348 == 1'b0))) begin
        tmp_1_2_reg_490 <= grp_fu_212_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter12) & (ap_pipeline_reg_pp0_iter11_exitcond_flatten_reg_348 == 1'b0))) begin
        tmp_1_3_reg_495 <= grp_fu_212_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter2) & (ap_pipeline_reg_pp0_iter2_exitcond_flatten_reg_348 == 1'b0))) begin
        tmp_6_1_reg_470 <= grp_fu_216_p2;
        tmp_6_3_reg_475 <= grp_fu_222_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter2) & (ap_pipeline_reg_pp0_iter1_exitcond_flatten_reg_348 == 1'b0))) begin
        tmp_6_2_reg_465 <= grp_fu_222_p2;
        tmp_6_reg_460 <= grp_fu_216_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0) & (exitcond_flatten_fu_228_p2 == 1'b0))) begin
        tmp_mid2_v_reg_364 <= tmp_mid2_v_fu_260_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter4) & (ap_pipeline_reg_pp0_iter4_exitcond_flatten_reg_348 == 1'b0))) begin
        tmp_s_reg_480 <= grp_fu_207_p2;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            a_0_Addr_A_orig = tmp_5_fu_293_p3;
        end else if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            a_0_Addr_A_orig = tmp_3_fu_276_p1;
        end else begin
            a_0_Addr_A_orig = 'bx;
        end
    end else begin
        a_0_Addr_A_orig = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        a_0_EN_A = 1'b1;
    end else begin
        a_0_EN_A = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            a_1_Addr_A_orig = tmp_5_fu_293_p3;
        end else if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            a_1_Addr_A_orig = tmp_3_fu_276_p1;
        end else begin
            a_1_Addr_A_orig = 'bx;
        end
    end else begin
        a_1_Addr_A_orig = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        a_1_EN_A = 1'b1;
    end else begin
        a_1_EN_A = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state28)) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_start) & (ap_CS_fsm_state1 == 1'b1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state28)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            b_0_Addr_A_orig = tmp_9_cast_fu_312_p1;
        end else if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            b_0_Addr_A_orig = tmp_2_fu_282_p1;
        end else begin
            b_0_Addr_A_orig = 'bx;
        end
    end else begin
        b_0_Addr_A_orig = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        b_0_EN_A = 1'b1;
    end else begin
        b_0_EN_A = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_enable_reg_pp0_iter0)) begin
        if ((1'b1 == ap_CS_fsm_pp0_stage1)) begin
            b_1_Addr_A_orig = tmp_9_cast_fu_312_p1;
        end else if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
            b_1_Addr_A_orig = tmp_2_fu_282_p1;
        end else begin
            b_1_Addr_A_orig = 'bx;
        end
    end else begin
        b_1_Addr_A_orig = 'bx;
    end
end

always @ (*) begin
    if ((((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0)) | ((1'b1 == ap_enable_reg_pp0_iter0) & (1'b1 == ap_CS_fsm_pp0_stage1)))) begin
        b_1_EN_A = 1'b1;
    end else begin
        b_1_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter12))) begin
        c_EN_A = 1'b1;
    end else begin
        c_EN_A = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter12) & (ap_pipeline_reg_pp0_iter12_exitcond_flatten_reg_348 == 1'b0))) begin
        c_WEN_A = ap_const_lv4_F;
    end else begin
        c_WEN_A = ap_const_lv4_0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter5))) begin
        grp_fu_207_p0 = tmp_s_reg_480;
    end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter2))) begin
        grp_fu_207_p0 = tmp_6_reg_460;
    end else begin
        grp_fu_207_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter5))) begin
        grp_fu_207_p1 = ap_pipeline_reg_pp0_iter4_tmp_6_1_reg_470;
    end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter2))) begin
        grp_fu_207_p1 = ap_const_lv32_0;
    end else begin
        grp_fu_207_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter10))) begin
        grp_fu_212_p0 = tmp_1_2_reg_490;
    end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter7))) begin
        grp_fu_212_p0 = tmp_1_1_reg_485;
    end else begin
        grp_fu_212_p0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter10))) begin
        grp_fu_212_p1 = ap_pipeline_reg_pp0_iter9_tmp_6_3_reg_475;
    end else if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter7))) begin
        grp_fu_212_p1 = ap_pipeline_reg_pp0_iter7_tmp_6_2_reg_465;
    end else begin
        grp_fu_212_p1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_348 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        i_phi_fu_189_p4 = tmp_mid2_v_reg_364;
    end else begin
        i_phi_fu_189_p4 = i_reg_185;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_348 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        indvar_flatten_phi_fu_178_p4 = indvar_flatten_next_reg_352;
    end else begin
        indvar_flatten_phi_fu_178_p4 = indvar_flatten_reg_174;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten_reg_348 == 1'b0) & (1'b1 == ap_enable_reg_pp0_iter1))) begin
        j_phi_fu_200_p4 = j_1_reg_435;
    end else begin
        j_phi_fu_200_p4 = j_reg_196;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (~(ap_start == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if (~((1'b1 == ap_enable_reg_pp0_iter0) & ~(exitcond_flatten_fu_228_p2 == 1'b0) & ~(1'b1 == ap_enable_reg_pp0_iter1))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state28;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if (~((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b1 == ap_enable_reg_pp0_iter12) & ~(1'b1 == ap_enable_reg_pp0_iter11))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state28;
            end
        end
        ap_ST_fsm_state28 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign a_0_Addr_A = a_0_Addr_A_orig << ap_const_lv32_2;

assign a_0_Clk_A = ap_clk;

assign a_0_Din_A = ap_const_lv32_0;

assign a_0_Rst_A = ap_rst;

assign a_0_WEN_A = ap_const_lv4_0;

assign a_1_Addr_A = a_1_Addr_A_orig << ap_const_lv32_2;

assign a_1_Clk_A = ap_clk;

assign a_1_Din_A = ap_const_lv32_0;

assign a_1_Rst_A = ap_rst;

assign a_1_WEN_A = ap_const_lv4_0;

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[ap_const_lv32_1];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[ap_const_lv32_2];

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_CS_fsm_state28 = ap_CS_fsm[ap_const_lv32_3];

assign b_0_Addr_A = b_0_Addr_A_orig << ap_const_lv32_2;

assign b_0_Clk_A = ap_clk;

assign b_0_Din_A = ap_const_lv32_0;

assign b_0_Rst_A = ap_rst;

assign b_0_WEN_A = ap_const_lv4_0;

assign b_1_Addr_A = b_1_Addr_A_orig << ap_const_lv32_2;

assign b_1_Clk_A = ap_clk;

assign b_1_Din_A = ap_const_lv32_0;

assign b_1_Rst_A = ap_rst;

assign b_1_WEN_A = ap_const_lv4_0;

assign c_Addr_A = c_Addr_A_orig << ap_const_lv32_2;

assign c_Addr_A_orig = tmp_10_cast_fu_343_p1;

assign c_Clk_A = ap_clk;

assign c_Din_A = tmp_1_3_reg_495;

assign c_Rst_A = ap_rst;

assign exitcond_flatten_fu_228_p2 = ((indvar_flatten_phi_fu_178_p4 == ap_const_lv5_10) ? 1'b1 : 1'b0);

assign exitcond_fu_246_p2 = ((j_phi_fu_200_p4 == ap_const_lv3_4) ? 1'b1 : 1'b0);

assign i_1_fu_240_p2 = (i_phi_fu_189_p4 + ap_const_lv3_1);

assign indvar_flatten_next_fu_234_p2 = (indvar_flatten_phi_fu_178_p4 + ap_const_lv5_1);

assign j_1_fu_318_p2 = (j_mid2_reg_357 + ap_const_lv3_1);

assign j_mid2_fu_252_p3 = ((exitcond_fu_246_p2[0:0] === 1'b1) ? ap_const_lv3_0 : j_phi_fu_200_p4);

assign tmp_10_cast_fu_343_p1 = tmp_8_fu_337_p2;

assign tmp_2_cast3_fu_334_p1 = ap_pipeline_reg_pp0_iter12_j_mid2_reg_357;

assign tmp_2_cast_fu_303_p1 = j_mid2_reg_357;

assign tmp_2_fu_282_p1 = j_mid2_fu_252_p3;

assign tmp_3_fu_276_p1 = tmp_fu_268_p3;

assign tmp_4_fu_288_p2 = (tmp_reg_370 | ap_const_lv4_1);

assign tmp_5_fu_293_p3 = {{ap_const_lv60_0}, {tmp_4_fu_288_p2}};

assign tmp_7_fu_323_p3 = {{ap_pipeline_reg_pp0_iter12_tmp_mid2_v_reg_364}, {ap_const_lv2_0}};

assign tmp_8_cast_fu_330_p1 = tmp_7_fu_323_p3;

assign tmp_8_fu_337_p2 = (tmp_2_cast3_fu_334_p1 + tmp_8_cast_fu_330_p1);

assign tmp_9_cast_fu_312_p1 = tmp_9_fu_306_p2;

assign tmp_9_fu_306_p2 = (tmp_2_cast_fu_303_p1 + ap_const_lv4_4);

assign tmp_fu_268_p3 = {{tmp_mid2_v_fu_260_p3}, {1'b0}};

assign tmp_mid2_v_fu_260_p3 = ((exitcond_fu_246_p2[0:0] === 1'b1) ? i_1_fu_240_p2 : i_phi_fu_189_p4);

always @ (posedge ap_clk) begin
    tmp_reg_370[0] <= 1'b0;
end

endmodule //matmul_hw
