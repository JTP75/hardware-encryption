############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project AES_HLS_ECE1155
set_top aes128_encrypt_block_hw
add_files AES_HLS_ECE1155/src/aes_hw.cpp
add_files AES_HLS_ECE1155/src/aes_hw.hpp
add_files AES_HLS_ECE1155/src/aes_sw.cpp
add_files AES_HLS_ECE1155/src/aes_sw.hpp
add_files -tb AES_HLS_ECE1155/src/aes_test.cpp
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
config_compile  
config_sdx -optimization_level none -target none
#source "./AES_HLS_ECE1155/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl verilog -format ip_catalog
