-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity gmul_hw is
port (
    ap_ready : OUT STD_LOGIC;
    a : IN STD_LOGIC_VECTOR (7 downto 0);
    b : IN STD_LOGIC_VECTOR (2 downto 0);
    ap_return : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of gmul_hw is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_boolean_1 : BOOLEAN := true;
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_lv32_7 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000111";
    constant ap_const_lv8_1 : STD_LOGIC_VECTOR (7 downto 0) := "00000001";
    constant ap_const_lv8_1B : STD_LOGIC_VECTOR (7 downto 0) := "00011011";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_logic_0 : STD_LOGIC := '0';

    signal tmp_fu_34_p1 : STD_LOGIC_VECTOR (0 downto 0);
    signal tmp_2_fu_54_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_1_fu_46_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal a_assign_fu_60_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_3_fu_74_p3 : STD_LOGIC_VECTOR (0 downto 0);
    signal p_1_fu_66_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_5_fu_38_p3 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_5_1_fu_82_p3 : STD_LOGIC_VECTOR (7 downto 0);


begin



    a_assign_fu_60_p2 <= (tmp_2_fu_54_p2 xor ap_const_lv8_1B);
    ap_ready <= ap_const_logic_1;
    ap_return <= (tmp_5_fu_38_p3 xor tmp_5_1_fu_82_p3);
    p_1_fu_66_p3 <= 
        a_assign_fu_60_p2 when (tmp_1_fu_46_p3(0) = '1') else 
        tmp_2_fu_54_p2;
    tmp_1_fu_46_p3 <= a(7 downto 7);
    tmp_2_fu_54_p2 <= std_logic_vector(shift_left(unsigned(a),to_integer(unsigned('0' & ap_const_lv8_1(8-1 downto 0)))));
    tmp_3_fu_74_p3 <= b(1 downto 1);
    tmp_5_1_fu_82_p3 <= 
        p_1_fu_66_p3 when (tmp_3_fu_74_p3(0) = '1') else 
        ap_const_lv8_0;
    tmp_5_fu_38_p3 <= 
        a when (tmp_fu_34_p1(0) = '1') else 
        ap_const_lv8_0;
    tmp_fu_34_p1 <= b(1 - 1 downto 0);
end behav;