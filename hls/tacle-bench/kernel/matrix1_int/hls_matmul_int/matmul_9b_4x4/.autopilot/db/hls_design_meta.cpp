#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("a_0_Addr_A", 32, hls_out, 0, "bram", "mem_address", 1),
	Port_Property("a_0_EN_A", 1, hls_out, 0, "bram", "mem_ce", 1),
	Port_Property("a_0_WEN_A", 4, hls_out, 0, "bram", "mem_we", 1),
	Port_Property("a_0_Din_A", 32, hls_out, 0, "bram", "mem_din", 1),
	Port_Property("a_0_Dout_A", 32, hls_in, 0, "bram", "mem_dout", 1),
	Port_Property("a_0_Clk_A", 1, hls_out, 0, "bram", "mem_clk", 1),
	Port_Property("a_0_Rst_A", 1, hls_out, 0, "bram", "mem_rst", 1),
	Port_Property("a_1_Addr_A", 32, hls_out, 1, "bram", "mem_address", 1),
	Port_Property("a_1_EN_A", 1, hls_out, 1, "bram", "mem_ce", 1),
	Port_Property("a_1_WEN_A", 4, hls_out, 1, "bram", "mem_we", 1),
	Port_Property("a_1_Din_A", 32, hls_out, 1, "bram", "mem_din", 1),
	Port_Property("a_1_Dout_A", 32, hls_in, 1, "bram", "mem_dout", 1),
	Port_Property("a_1_Clk_A", 1, hls_out, 1, "bram", "mem_clk", 1),
	Port_Property("a_1_Rst_A", 1, hls_out, 1, "bram", "mem_rst", 1),
	Port_Property("a_2_Addr_A", 32, hls_out, 2, "bram", "mem_address", 1),
	Port_Property("a_2_EN_A", 1, hls_out, 2, "bram", "mem_ce", 1),
	Port_Property("a_2_WEN_A", 4, hls_out, 2, "bram", "mem_we", 1),
	Port_Property("a_2_Din_A", 32, hls_out, 2, "bram", "mem_din", 1),
	Port_Property("a_2_Dout_A", 32, hls_in, 2, "bram", "mem_dout", 1),
	Port_Property("a_2_Clk_A", 1, hls_out, 2, "bram", "mem_clk", 1),
	Port_Property("a_2_Rst_A", 1, hls_out, 2, "bram", "mem_rst", 1),
	Port_Property("a_3_Addr_A", 32, hls_out, 3, "bram", "mem_address", 1),
	Port_Property("a_3_EN_A", 1, hls_out, 3, "bram", "mem_ce", 1),
	Port_Property("a_3_WEN_A", 4, hls_out, 3, "bram", "mem_we", 1),
	Port_Property("a_3_Din_A", 32, hls_out, 3, "bram", "mem_din", 1),
	Port_Property("a_3_Dout_A", 32, hls_in, 3, "bram", "mem_dout", 1),
	Port_Property("a_3_Clk_A", 1, hls_out, 3, "bram", "mem_clk", 1),
	Port_Property("a_3_Rst_A", 1, hls_out, 3, "bram", "mem_rst", 1),
	Port_Property("b_0_Addr_A", 32, hls_out, 4, "bram", "mem_address", 1),
	Port_Property("b_0_EN_A", 1, hls_out, 4, "bram", "mem_ce", 1),
	Port_Property("b_0_WEN_A", 4, hls_out, 4, "bram", "mem_we", 1),
	Port_Property("b_0_Din_A", 32, hls_out, 4, "bram", "mem_din", 1),
	Port_Property("b_0_Dout_A", 32, hls_in, 4, "bram", "mem_dout", 1),
	Port_Property("b_0_Clk_A", 1, hls_out, 4, "bram", "mem_clk", 1),
	Port_Property("b_0_Rst_A", 1, hls_out, 4, "bram", "mem_rst", 1),
	Port_Property("b_1_Addr_A", 32, hls_out, 5, "bram", "mem_address", 1),
	Port_Property("b_1_EN_A", 1, hls_out, 5, "bram", "mem_ce", 1),
	Port_Property("b_1_WEN_A", 4, hls_out, 5, "bram", "mem_we", 1),
	Port_Property("b_1_Din_A", 32, hls_out, 5, "bram", "mem_din", 1),
	Port_Property("b_1_Dout_A", 32, hls_in, 5, "bram", "mem_dout", 1),
	Port_Property("b_1_Clk_A", 1, hls_out, 5, "bram", "mem_clk", 1),
	Port_Property("b_1_Rst_A", 1, hls_out, 5, "bram", "mem_rst", 1),
	Port_Property("b_2_Addr_A", 32, hls_out, 6, "bram", "mem_address", 1),
	Port_Property("b_2_EN_A", 1, hls_out, 6, "bram", "mem_ce", 1),
	Port_Property("b_2_WEN_A", 4, hls_out, 6, "bram", "mem_we", 1),
	Port_Property("b_2_Din_A", 32, hls_out, 6, "bram", "mem_din", 1),
	Port_Property("b_2_Dout_A", 32, hls_in, 6, "bram", "mem_dout", 1),
	Port_Property("b_2_Clk_A", 1, hls_out, 6, "bram", "mem_clk", 1),
	Port_Property("b_2_Rst_A", 1, hls_out, 6, "bram", "mem_rst", 1),
	Port_Property("b_3_Addr_A", 32, hls_out, 7, "bram", "mem_address", 1),
	Port_Property("b_3_EN_A", 1, hls_out, 7, "bram", "mem_ce", 1),
	Port_Property("b_3_WEN_A", 4, hls_out, 7, "bram", "mem_we", 1),
	Port_Property("b_3_Din_A", 32, hls_out, 7, "bram", "mem_din", 1),
	Port_Property("b_3_Dout_A", 32, hls_in, 7, "bram", "mem_dout", 1),
	Port_Property("b_3_Clk_A", 1, hls_out, 7, "bram", "mem_clk", 1),
	Port_Property("b_3_Rst_A", 1, hls_out, 7, "bram", "mem_rst", 1),
	Port_Property("c_Addr_A", 32, hls_out, 8, "bram", "mem_address", 1),
	Port_Property("c_EN_A", 1, hls_out, 8, "bram", "mem_ce", 1),
	Port_Property("c_WEN_A", 4, hls_out, 8, "bram", "mem_we", 1),
	Port_Property("c_Din_A", 32, hls_out, 8, "bram", "mem_din", 1),
	Port_Property("c_Dout_A", 32, hls_in, 8, "bram", "mem_dout", 1),
	Port_Property("c_Clk_A", 1, hls_out, 8, "bram", "mem_clk", 1),
	Port_Property("c_Rst_A", 1, hls_out, 8, "bram", "mem_rst", 1),
};
const char* HLS_Design_Meta::dut_name = "matmul_hw";