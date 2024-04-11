-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity aes128_add_round_key is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    state_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    state_ce0 : OUT STD_LOGIC;
    state_we0 : OUT STD_LOGIC;
    state_d0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    state_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    state_address1 : OUT STD_LOGIC_VECTOR (3 downto 0);
    state_ce1 : OUT STD_LOGIC;
    state_we1 : OUT STD_LOGIC;
    state_d1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    state_q1 : IN STD_LOGIC_VECTOR (7 downto 0);
    round_key_address0 : OUT STD_LOGIC_VECTOR (3 downto 0);
    round_key_ce0 : OUT STD_LOGIC;
    round_key_q0 : IN STD_LOGIC_VECTOR (7 downto 0);
    round_key_address1 : OUT STD_LOGIC_VECTOR (3 downto 0);
    round_key_ce1 : OUT STD_LOGIC;
    round_key_q1 : IN STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of aes128_add_round_key is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (4 downto 0) := "00010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_ST_fsm_state4 : STD_LOGIC_VECTOR (4 downto 0) := "01000";
    constant ap_ST_fsm_state5 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv32_3 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000011";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv5_0 : STD_LOGIC_VECTOR (4 downto 0) := "00000";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv5_10 : STD_LOGIC_VECTOR (4 downto 0) := "10000";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv5_4 : STD_LOGIC_VECTOR (4 downto 0) := "00100";
    constant ap_const_lv4_2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_const_lv4_3 : STD_LOGIC_VECTOR (3 downto 0) := "0011";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal grp_fu_115_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal reg_127 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal grp_fu_121_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal reg_132 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal exitcond_fu_137_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal state_addr_reg_201 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_16_fu_149_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_16_reg_206 : STD_LOGIC_VECTOR (3 downto 0);
    signal state_addr_34_reg_217 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_15_3_fu_165_p2 : STD_LOGIC_VECTOR (4 downto 0);
    signal i_15_3_reg_222 : STD_LOGIC_VECTOR (4 downto 0);
    signal state_addr_35_reg_232 : STD_LOGIC_VECTOR (3 downto 0);
    signal state_addr_36_reg_242 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_reg_104 : STD_LOGIC_VECTOR (4 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal tmp_fu_143_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_1_fu_159_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_2_fu_176_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_3_fu_187_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal i_15_s_fu_153_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_15_1_fu_171_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_15_2_fu_182_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal ap_NS_fsm : STD_LOGIC_VECTOR (4 downto 0);


begin




    ap_CS_fsm_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_CS_fsm <= ap_ST_fsm_state1;
            else
                ap_CS_fsm <= ap_NS_fsm;
            end if;
        end if;
    end process;


    i_reg_104_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_reg_104 <= i_15_3_reg_222;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_104 <= ap_const_lv5_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_137_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                i_15_3_reg_222 <= i_15_3_fu_165_p2;
                    state_addr_34_reg_217(3 downto 1) <= tmp_1_fu_159_p1(4 - 1 downto 0)(3 downto 1);
                state_addr_reg_201 <= tmp_fu_143_p1(4 - 1 downto 0);
                tmp_16_reg_206 <= tmp_16_fu_149_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then
                reg_127 <= grp_fu_115_p2;
                reg_132 <= grp_fu_121_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                    state_addr_35_reg_232(0) <= tmp_2_fu_176_p1(4 - 1 downto 0)(0);    state_addr_35_reg_232(3 downto 2) <= tmp_2_fu_176_p1(4 - 1 downto 0)(3 downto 2);
                    state_addr_36_reg_242(3 downto 2) <= tmp_3_fu_187_p1(4 - 1 downto 0)(3 downto 2);
            end if;
        end if;
    end process;
    state_addr_34_reg_217(0) <= '1';
    state_addr_35_reg_232(1) <= '1';
    state_addr_36_reg_242(1 downto 0) <= "11";

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_137_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_fu_137_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                ap_NS_fsm <= ap_ST_fsm_state4;
            when ap_ST_fsm_state4 => 
                ap_NS_fsm <= ap_ST_fsm_state5;
            when ap_ST_fsm_state5 => 
                ap_NS_fsm <= ap_ST_fsm_state2;
            when others =>  
                ap_NS_fsm <= "XXXXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);
    ap_CS_fsm_state4 <= ap_CS_fsm(3);
    ap_CS_fsm_state5 <= ap_CS_fsm(4);

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_137_p2)
    begin
        if ((((exitcond_fu_137_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
            ap_done <= ap_const_logic_1;
        else 
            ap_done <= ap_const_logic_0;
        end if; 
    end process;


    ap_idle_assign_proc : process(ap_start, ap_CS_fsm_state1)
    begin
        if (((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
            ap_idle <= ap_const_logic_1;
        else 
            ap_idle <= ap_const_logic_0;
        end if; 
    end process;


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond_fu_137_p2)
    begin
        if (((exitcond_fu_137_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond_fu_137_p2 <= "1" when (i_reg_104 = ap_const_lv5_10) else "0";
    grp_fu_115_p2 <= (state_q0 xor round_key_q0);
    grp_fu_121_p2 <= (state_q1 xor round_key_q1);
    i_15_1_fu_171_p2 <= (tmp_16_reg_206 or ap_const_lv4_2);
    i_15_2_fu_182_p2 <= (tmp_16_reg_206 or ap_const_lv4_3);
    i_15_3_fu_165_p2 <= std_logic_vector(unsigned(ap_const_lv5_4) + unsigned(i_reg_104));
    i_15_s_fu_153_p2 <= (tmp_16_fu_149_p1 or ap_const_lv4_1);

    round_key_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2, tmp_fu_143_p1, tmp_2_fu_176_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            round_key_address0 <= tmp_2_fu_176_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            round_key_address0 <= tmp_fu_143_p1(4 - 1 downto 0);
        else 
            round_key_address0 <= "XXXX";
        end if; 
    end process;


    round_key_address1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2, tmp_1_fu_159_p1, tmp_3_fu_187_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            round_key_address1 <= tmp_3_fu_187_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            round_key_address1 <= tmp_1_fu_159_p1(4 - 1 downto 0);
        else 
            round_key_address1 <= "XXXX";
        end if; 
    end process;


    round_key_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            round_key_ce0 <= ap_const_logic_1;
        else 
            round_key_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    round_key_ce1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            round_key_ce1 <= ap_const_logic_1;
        else 
            round_key_ce1 <= ap_const_logic_0;
        end if; 
    end process;


    state_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state2, state_addr_reg_201, state_addr_35_reg_232, ap_CS_fsm_state5, tmp_fu_143_p1, tmp_2_fu_176_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            state_address0 <= state_addr_35_reg_232;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            state_address0 <= state_addr_reg_201;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            state_address0 <= tmp_2_fu_176_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            state_address0 <= tmp_fu_143_p1(4 - 1 downto 0);
        else 
            state_address0 <= "XXXX";
        end if; 
    end process;


    state_address1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state2, state_addr_34_reg_217, state_addr_36_reg_242, ap_CS_fsm_state5, tmp_1_fu_159_p1, tmp_3_fu_187_p1)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            state_address1 <= state_addr_36_reg_242;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            state_address1 <= state_addr_34_reg_217;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state3)) then 
            state_address1 <= tmp_3_fu_187_p1(4 - 1 downto 0);
        elsif ((ap_const_logic_1 = ap_CS_fsm_state2)) then 
            state_address1 <= tmp_1_fu_159_p1(4 - 1 downto 0);
        else 
            state_address1 <= "XXXX";
        end if; 
    end process;


    state_ce0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state2, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            state_ce0 <= ap_const_logic_1;
        else 
            state_ce0 <= ap_const_logic_0;
        end if; 
    end process;


    state_ce1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, ap_CS_fsm_state2, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            state_ce1 <= ap_const_logic_1;
        else 
            state_ce1 <= ap_const_logic_0;
        end if; 
    end process;

    state_d0 <= reg_127;
    state_d1 <= reg_132;

    state_we0_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            state_we0 <= ap_const_logic_1;
        else 
            state_we0 <= ap_const_logic_0;
        end if; 
    end process;


    state_we1_assign_proc : process(ap_CS_fsm_state4, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            state_we1 <= ap_const_logic_1;
        else 
            state_we1 <= ap_const_logic_0;
        end if; 
    end process;

    tmp_16_fu_149_p1 <= i_reg_104(4 - 1 downto 0);
    tmp_1_fu_159_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_15_s_fu_153_p2),64));
    tmp_2_fu_176_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_15_1_fu_171_p2),64));
    tmp_3_fu_187_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_15_2_fu_182_p2),64));
    tmp_fu_143_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_104),64));
end behav;
