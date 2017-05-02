############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
############################################################
open_project hls_matmul_float
set_top matmul_hw
add_files matmul.cpp
add_files matmul.h
add_files -tb matmul_test.cpp
open_solution "matmul_1b_16x16"
set_part {xc7a100tcsg324-1} -tool vivado
create_clock -period 10 -name default
source "./hls_matmul_float/matmul_1b_16x16/directives.tcl"
csim_design -clean
csynth_design
cosim_design
export_design -rtl vhdl -format ip_catalog