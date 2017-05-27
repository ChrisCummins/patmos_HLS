// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module filtez (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        bpl_address0,
        bpl_ce0,
        bpl_q0,
        dlt_address0,
        dlt_ce0,
        dlt_q0,
        ap_return
);

parameter    ap_ST_fsm_state1 = 10'b1;
parameter    ap_ST_fsm_state2 = 10'b10;
parameter    ap_ST_fsm_state3 = 10'b100;
parameter    ap_ST_fsm_state4 = 10'b1000;
parameter    ap_ST_fsm_state5 = 10'b10000;
parameter    ap_ST_fsm_state6 = 10'b100000;
parameter    ap_ST_fsm_state7 = 10'b1000000;
parameter    ap_ST_fsm_state8 = 10'b10000000;
parameter    ap_ST_fsm_pp0_stage0 = 10'b100000000;
parameter    ap_ST_fsm_state18 = 10'b1000000000;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_8 = 32'b1000;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_7 = 32'b111;
parameter    ap_const_lv3_0 = 3'b000;
parameter    ap_const_lv64_0 = 64'b0000000000000000000000000000000000000000000000000000000000000000;
parameter    ap_const_lv3_5 = 3'b101;
parameter    ap_const_lv3_1 = 3'b1;
parameter    ap_const_lv32_E = 32'b1110;
parameter    ap_const_lv32_2D = 32'b101101;
parameter    ap_const_lv32_9 = 32'b1001;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [2:0] bpl_address0;
output   bpl_ce0;
input  [31:0] bpl_q0;
output  [2:0] dlt_address0;
output   dlt_ce0;
input  [31:0] dlt_q0;
output  [31:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[2:0] bpl_address0;
reg bpl_ce0;
reg[2:0] dlt_address0;
reg dlt_ce0;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
reg   [63:0] zl1_reg_80;
reg   [2:0] dlt_pn_rec_reg_90;
reg  signed [31:0] reg_101;
wire   [0:0] ap_CS_fsm_state2;
wire   [0:0] ap_CS_fsm_pp0_stage0;
reg    ap_enable_reg_pp0_iter1;
reg   [0:0] exitcond_reg_195;
reg  signed [31:0] reg_105;
wire   [0:0] ap_CS_fsm_state3;
wire   [63:0] grp_fu_117_p2;
wire   [0:0] ap_CS_fsm_state8;
wire   [0:0] exitcond_fu_123_p2;
reg   [0:0] ap_pipeline_reg_pp0_iter1_exitcond_reg_195;
reg   [0:0] ap_pipeline_reg_pp0_iter2_exitcond_reg_195;
reg   [0:0] ap_pipeline_reg_pp0_iter3_exitcond_reg_195;
reg   [0:0] ap_pipeline_reg_pp0_iter4_exitcond_reg_195;
reg   [0:0] ap_pipeline_reg_pp0_iter5_exitcond_reg_195;
reg   [0:0] ap_pipeline_reg_pp0_iter6_exitcond_reg_195;
reg   [0:0] ap_pipeline_reg_pp0_iter7_exitcond_reg_195;
wire   [2:0] p_01_rec_fu_129_p2;
reg   [2:0] p_01_rec_reg_199;
reg    ap_enable_reg_pp0_iter0;
wire   [63:0] grp_fu_149_p2;
reg   [63:0] tmp_44_reg_224;
wire   [63:0] zl_1_fu_155_p2;
reg    ap_enable_reg_pp0_iter8;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
reg   [2:0] dlt_pn_rec_phi_fu_94_p4;
wire   [63:0] p_01_rec_cast_fu_135_p1;
wire   [0:0] ap_CS_fsm_state18;
reg   [9:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'b1;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter8 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
end

adpcm_main_mul_32bkb #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
adpcm_main_mul_32bkb_U1(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_105),
    .din1(reg_101),
    .ce(1'b1),
    .dout(grp_fu_117_p2)
);

adpcm_main_mul_32bkb #(
    .ID( 1 ),
    .NUM_STAGE( 6 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 64 ))
adpcm_main_mul_32bkb_U2(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(reg_105),
    .din1(reg_101),
    .ce(1'b1),
    .dout(grp_fu_149_p2)
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
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & ~(1'b0 == exitcond_fu_123_p2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state8)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == exitcond_fu_123_p2))) begin
            ap_enable_reg_pp0_iter1 <= 1'b1;
        end else if (((1'b1 == ap_CS_fsm_state8) | ((1'b1 == ap_CS_fsm_pp0_stage0) & ~(1'b0 == exitcond_fu_123_p2)))) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter8 <= 1'b0;
    end else begin
        ap_enable_reg_pp0_iter8 <= ap_enable_reg_pp0_iter7;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter1) & (exitcond_reg_195 == 1'b0))) begin
        dlt_pn_rec_reg_90 <= p_01_rec_reg_199;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        dlt_pn_rec_reg_90 <= ap_const_lv3_0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_enable_reg_pp0_iter8) & (1'b0 == ap_pipeline_reg_pp0_iter7_exitcond_reg_195))) begin
        zl1_reg_80 <= zl_1_fu_155_p2;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        zl1_reg_80 <= grp_fu_117_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_pp0_stage0)) begin
        ap_pipeline_reg_pp0_iter1_exitcond_reg_195 <= exitcond_reg_195;
        exitcond_reg_195 <= exitcond_fu_123_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == 1'b1)) begin
        ap_pipeline_reg_pp0_iter2_exitcond_reg_195 <= ap_pipeline_reg_pp0_iter1_exitcond_reg_195;
        ap_pipeline_reg_pp0_iter3_exitcond_reg_195 <= ap_pipeline_reg_pp0_iter2_exitcond_reg_195;
        ap_pipeline_reg_pp0_iter4_exitcond_reg_195 <= ap_pipeline_reg_pp0_iter3_exitcond_reg_195;
        ap_pipeline_reg_pp0_iter5_exitcond_reg_195 <= ap_pipeline_reg_pp0_iter4_exitcond_reg_195;
        ap_pipeline_reg_pp0_iter6_exitcond_reg_195 <= ap_pipeline_reg_pp0_iter5_exitcond_reg_195;
        ap_pipeline_reg_pp0_iter7_exitcond_reg_195 <= ap_pipeline_reg_pp0_iter6_exitcond_reg_195;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0))) begin
        p_01_rec_reg_199 <= p_01_rec_fu_129_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state2) | ((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter1) & (exitcond_reg_195 == 1'b0)))) begin
        reg_101 <= bpl_q0;
        reg_105 <= dlt_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_pipeline_reg_pp0_iter6_exitcond_reg_195)) begin
        tmp_44_reg_224 <= grp_fu_149_p2;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (ap_CS_fsm_state1 == 1'b1)) | (1'b1 == ap_CS_fsm_state18))) begin
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
    if ((1'b1 == ap_CS_fsm_state18)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0))) begin
        bpl_address0 = p_01_rec_cast_fu_135_p1;
    end else if ((ap_CS_fsm_state1 == 1'b1)) begin
        bpl_address0 = ap_const_lv64_0;
    end else begin
        bpl_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0)) | ((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0)))) begin
        bpl_ce0 = 1'b1;
    end else begin
        bpl_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0))) begin
        dlt_address0 = p_01_rec_cast_fu_135_p1;
    end else if ((ap_CS_fsm_state1 == 1'b1)) begin
        dlt_address0 = ap_const_lv64_0;
    end else begin
        dlt_address0 = 'bx;
    end
end

always @ (*) begin
    if ((((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0)) | ((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter0)))) begin
        dlt_ce0 = 1'b1;
    end else begin
        dlt_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b1 == ap_enable_reg_pp0_iter1) & (exitcond_reg_195 == 1'b0))) begin
        dlt_pn_rec_phi_fu_94_p4 = p_01_rec_reg_199;
    end else begin
        dlt_pn_rec_phi_fu_94_p4 = dlt_pn_rec_reg_90;
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
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b1 == ap_enable_reg_pp0_iter8) & ~(1'b1 == ap_enable_reg_pp0_iter7)) & ~((1'b1 == ap_enable_reg_pp0_iter0) & ~(1'b0 == exitcond_fu_123_p2) & ~(1'b1 == ap_enable_reg_pp0_iter1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b1 == ap_enable_reg_pp0_iter0) & ~(1'b0 == exitcond_fu_123_p2) & ~(1'b1 == ap_enable_reg_pp0_iter1))) begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state18;
            end
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[ap_const_lv32_8];

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_CS_fsm_state18 = ap_CS_fsm[ap_const_lv32_9];

assign ap_CS_fsm_state2 = ap_CS_fsm[ap_const_lv32_1];

assign ap_CS_fsm_state3 = ap_CS_fsm[ap_const_lv32_2];

assign ap_CS_fsm_state8 = ap_CS_fsm[ap_const_lv32_7];

assign ap_return = {{zl1_reg_80[ap_const_lv32_2D : ap_const_lv32_E]}};

assign exitcond_fu_123_p2 = ((dlt_pn_rec_phi_fu_94_p4 == ap_const_lv3_5) ? 1'b1 : 1'b0);

assign p_01_rec_cast_fu_135_p1 = p_01_rec_fu_129_p2;

assign p_01_rec_fu_129_p2 = (dlt_pn_rec_phi_fu_94_p4 + ap_const_lv3_1);

assign zl_1_fu_155_p2 = (tmp_44_reg_224 + zl1_reg_80);

endmodule //filtez
