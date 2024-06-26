# ==============================================================
# File generated on Tue Apr 10 18:51:54 -0500 2018
# Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2018.3 (64-bit)
# SW Build 2405991 on Thu Dec  6 23:38:27 MST 2018
# IP Build 2404404 on Fri Dec  7 01:43:56 MST 2018
# Copyright 1986-2018 Xilinx, Inc. All Rights Reserved.
# ==============================================================
add_files -tb ../src/aes_test.cpp -cflags { -Wno-unknown-pragmas}
add_files AES_HLS_ECE1155/src/aes_hw.cpp
add_files AES_HLS_ECE1155/src/aes_hw.hpp
add_files AES_HLS_ECE1155/src/aes_sw.cpp
add_files AES_HLS_ECE1155/src/aes_sw.hpp
set_part xc7z020clg400-1
create_clock -name default -period 10
set_clock_uncertainty 12.5% default
config_compile -no_signed_zeros=0
config_compile -unsafe_math_optimizations=0
config_sdx -optimization_level=none
config_sdx -target=none
config_bind -effort=medium
config_schedule -effort=medium
config_schedule -relax_ii_for_timing=0
config_export -display_name=aes128_encrypt_hw
config_export -format=ip_catalog
config_export -rtl=vhdl
