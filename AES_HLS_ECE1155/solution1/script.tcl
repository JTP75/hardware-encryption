############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project AES_HLS_ECE1155
set_top AES_HLS
add_files AES_HLS
open_solution "solution1"
set_part {xa7z010clg225-1i}
create_clock -period 10 -name default
#source "./AES_HLS_ECE1155/solution1/directives.tcl"
#csim_design
csynth_design
#cosim_design
export_design -format ip_catalog
