// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2016.4
// Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module logscl (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        il,
        nbl,
        ap_return
);

parameter    ap_ST_fsm_state1 = 3'b1;
parameter    ap_ST_fsm_state2 = 3'b10;
parameter    ap_ST_fsm_state3 = 3'b100;
parameter    ap_const_lv32_0 = 32'b00000000000000000000000000000000;
parameter    ap_const_lv32_1 = 32'b1;
parameter    ap_const_lv32_2 = 32'b10;
parameter    ap_const_lv32_5 = 32'b101;
parameter    ap_const_lv7_0 = 7'b0000000;
parameter    ap_const_lv32_7 = 32'b111;
parameter    ap_const_lv32_26 = 32'b100110;
parameter    ap_const_lv32_25 = 32'b100101;
parameter    ap_const_lv32_1F = 32'b11111;
parameter    ap_const_lv31_0 = 31'b0000000000000000000000000000000;
parameter    ap_const_lv31_4800 = 31'b100100000000000;
parameter    ap_const_lv15_4800 = 15'b100100000000000;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
input  [5:0] il;
input  [31:0] nbl;
output  [14:0] ap_return;

reg ap_done;
reg ap_idle;
reg ap_ready;

(* fsm_encoding = "none" *) reg   [2:0] ap_CS_fsm;
wire   [0:0] ap_CS_fsm_state1;
wire   [3:0] wl_code_table_address0;
reg    wl_code_table_ce0;
wire   [12:0] wl_code_table_q0;
wire   [30:0] nbl_assign_cast_fu_133_p2;
reg   [30:0] nbl_assign_cast_reg_176;
wire   [0:0] ap_CS_fsm_state2;
reg   [0:0] tmp_22_reg_181;
wire   [63:0] tmp_30_fu_76_p1;
wire   [3:0] tmp_12_fu_66_p4;
wire   [38:0] p_shl_fu_85_p3;
wire  signed [38:0] tmp_cast2_fu_81_p1;
wire   [38:0] tmp_s_fu_93_p2;
wire   [31:0] tmp_29_fu_99_p4;
wire  signed [31:0] wl_code_table_load_c_fu_109_p1;
wire   [30:0] tmp_7_fu_117_p4;
wire  signed [30:0] tmp_fu_113_p1;
wire   [31:0] nbl_assign_fu_127_p2;
wire   [0:0] ap_CS_fsm_state3;
wire   [30:0] p_s_fu_147_p3;
wire   [0:0] tmp_31_fu_157_p2;
wire   [14:0] tmp_23_fu_153_p1;
reg   [2:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 3'b1;
end

logscl_wl_code_tadEe #(
    .DataWidth( 13 ),
    .AddressRange( 16 ),
    .AddressWidth( 4 ))
wl_code_table_U(
    .clk(ap_clk),
    .reset(ap_rst),
    .address0(wl_code_table_address0),
    .ce0(wl_code_table_ce0),
    .q0(wl_code_table_q0)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        nbl_assign_cast_reg_176 <= nbl_assign_cast_fu_133_p2;
        tmp_22_reg_181 <= nbl_assign_fu_127_p2[ap_const_lv32_1F];
    end
end

always @ (*) begin
    if ((((1'b0 == ap_start) & (ap_CS_fsm_state1 == 1'b1)) | (1'b1 == ap_CS_fsm_state3))) begin
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
    if ((1'b1 == ap_CS_fsm_state3)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((ap_CS_fsm_state1 == 1'b1) & ~(ap_start == 1'b0))) begin
        wl_code_table_ce0 = 1'b1;
    end else begin
        wl_code_table_ce0 = 1'b0;
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
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[ap_const_lv32_0];

assign ap_CS_fsm_state2 = ap_CS_fsm[ap_const_lv32_1];

assign ap_CS_fsm_state3 = ap_CS_fsm[ap_const_lv32_2];

assign ap_return = ((tmp_31_fu_157_p2[0:0] === 1'b1) ? ap_const_lv15_4800 : tmp_23_fu_153_p1);

assign nbl_assign_cast_fu_133_p2 = ($signed(tmp_7_fu_117_p4) + $signed(tmp_fu_113_p1));

assign nbl_assign_fu_127_p2 = ($signed(tmp_29_fu_99_p4) + $signed(wl_code_table_load_c_fu_109_p1));

assign p_s_fu_147_p3 = ((tmp_22_reg_181[0:0] === 1'b1) ? ap_const_lv31_0 : nbl_assign_cast_reg_176);

assign p_shl_fu_85_p3 = {{nbl}, {ap_const_lv7_0}};

assign tmp_12_fu_66_p4 = {{il[ap_const_lv32_5 : ap_const_lv32_2]}};

assign tmp_23_fu_153_p1 = p_s_fu_147_p3[14:0];

assign tmp_29_fu_99_p4 = {{tmp_s_fu_93_p2[ap_const_lv32_26 : ap_const_lv32_7]}};

assign tmp_30_fu_76_p1 = tmp_12_fu_66_p4;

assign tmp_31_fu_157_p2 = ((p_s_fu_147_p3 > ap_const_lv31_4800) ? 1'b1 : 1'b0);

assign tmp_7_fu_117_p4 = {{tmp_s_fu_93_p2[ap_const_lv32_25 : ap_const_lv32_7]}};

assign tmp_cast2_fu_81_p1 = $signed(nbl);

assign tmp_fu_113_p1 = $signed(wl_code_table_q0);

assign tmp_s_fu_93_p2 = ($signed(p_shl_fu_85_p3) - $signed(tmp_cast2_fu_81_p1));

assign wl_code_table_address0 = tmp_30_fu_76_p1;

assign wl_code_table_load_c_fu_109_p1 = $signed(wl_code_table_q0);

endmodule //logscl
