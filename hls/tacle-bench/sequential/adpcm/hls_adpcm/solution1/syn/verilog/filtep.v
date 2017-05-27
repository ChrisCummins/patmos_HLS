// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module filtep (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        rlt1,
        al1,
        rlt2,
        al2,
        ap_return
);

parameter    ap_ST_fsm_state1 = 7'b1;
parameter    ap_ST_fsm_state2 = 7'b10;
parameter    ap_ST_fsm_state3 = 7'b100;
parameter    ap_ST_fsm_state4 = 7'b1000;
parameter    ap_ST_fsm_state5 = 7'b10000;
parameter    ap_ST_fsm_state6 = 7'b100000;
parameter    ap_ST_fsm_state7 = 7'b1000000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_5 = 32'b101;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_6 = 32'b110;
parameter    ap_const_lv32_F = 32'b1111;
parameter    ap_const_lv32_2E = 32'b101110;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [31:0] rlt1;
input  [31:0] al1;
input  [31:0] rlt2;
input  [31:0] al2;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [6:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
wire   [46:0] grp_fu_56_p2;
reg   [46:0] pl_reg_116;
wire   [0:0] ap_CS_fsm_state6;
wire   [46:0] grp_fu_76_p2;
reg   [46:0] tmp_s_reg_121;
wire  signed [31:0] tmp_fu_42_p2;
wire  signed [31:0] tmp_17_fu_62_p2;
wire   [0:0] ap_CS_fsm_state7;
wire   [46:0] pl_1_fu_82_p2;
reg   [6:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 7'b1;
end

adpcm_main_mul_32cud #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 47 ))
adpcm_main_mul_32cud_U5(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_fu_42_p2),
    .din1(al1),
    .ce(1'b1),
    .dout(grp_fu_56_p2)
);

adpcm_main_mul_32cud #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 47 ))
adpcm_main_mul_32cud_U6(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(tmp_17_fu_62_p2),
    .din1(al2),
    .ce(1'b1),
    .dout(grp_fu_76_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        pl_reg_116 <= grp_fu_56_p2;
        tmp_s_reg_121 <= grp_fu_76_p2;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (ap_CS_fsm_state1 == 1'b1)) | (1'b1 == ap_CS_fsm_state7))) begin
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
    if ((1'b1 == ap_CS_fsm_state7)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (~(ap_start == 1'b0)) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_CS_fsm_state6 = ap_CS_fsm[ap_const_lv32_5];

assign ap_CS_fsm_state7 = ap_CS_fsm[ap_const_lv32_6];

assign ap_return = {{pl_1_fu_82_p2[ap_const_lv32_2E : ap_const_lv32_F]}};

assign pl_1_fu_82_p2 = (pl_reg_116 + tmp_s_reg_121);

assign tmp_17_fu_62_p2 = rlt2 << ap_const_lv32_1;

assign tmp_fu_42_p2 = rlt1 << ap_const_lv32_1;

endmodule //filtep
