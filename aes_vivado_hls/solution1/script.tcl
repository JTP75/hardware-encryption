############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project AES_HLS_ECE1155
set_top aes128_encrypt_block_hw
add_files AES_HLS_ECE1155/src/aes_sw.hpp
add_files AES_HLS_ECE1155/src/aes_sw.cpp
add_files AES_HLS_ECE1155/src/aes_hw.hpp
add_files AES_HLS_ECE1155/src/aes_hw.cpp
add_files -tb AES_HLS_ECE1155/src/aes_test.cpp -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7z020clg400-1}
create_clock -period 10 -name default
config_compile -no_signed_zeros=0 -unsafe_math_optimizations=0
config_sdx -optimization_level none -target none
config_bind -effort medium
config_schedule -effort medium -relax_ii_for_timing=0
config_export -display_name aes128_encrypt_hw -format ip_catalog -rtl vhdl
set_clock_uncertainty 12.5%
#source "./AES_HLS_ECE1155/solution1/directives.tcl"
csim_design
csynth_design
cosim_design
export_design -rtl vhdl -format ip_catalog -display_name "aes128_encrypt_hw"
