-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity aes128_shift_row_hw is
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
    state_offset : IN STD_LOGIC_VECTOR (4 downto 0);
    n : IN STD_LOGIC_VECTOR (3 downto 0) );
end;


architecture behav of aes128_shift_row_hw is 
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
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv32_4 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000100";
    constant ap_const_lv4_3 : STD_LOGIC_VECTOR (3 downto 0) := "0011";
    constant ap_const_lv4_1 : STD_LOGIC_VECTOR (3 downto 0) := "0001";
    constant ap_const_lv4_2 : STD_LOGIC_VECTOR (3 downto 0) := "0010";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (4 downto 0) := "00001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal reg_87 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal ap_CS_fsm_state4 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state4 : signal is "none";
    signal state_addr_reg_153 : STD_LOGIC_VECTOR (3 downto 0);
    signal tmp_4_fu_97_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal tmp_4_reg_158 : STD_LOGIC_VECTOR (2 downto 0);
    signal state_addr_16_reg_163 : STD_LOGIC_VECTOR (3 downto 0);
    signal state_addr_17_reg_168 : STD_LOGIC_VECTOR (3 downto 0);
    signal state_addr_18_reg_173 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_1_fu_147_p2 : STD_LOGIC_VECTOR (1 downto 0);
    signal i_1_reg_181 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal tmp_reg_186 : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_76 : STD_LOGIC_VECTOR (1 downto 0);
    signal ap_CS_fsm_state5 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state5 : signal is "none";
    signal state_offset_cast3_fu_92_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum_cast_fu_111_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum2_cast_fu_122_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal sum2_1_cast_fu_133_p1 : STD_LOGIC_VECTOR (63 downto 0);
    signal tmp_5_fu_101_p1 : STD_LOGIC_VECTOR (3 downto 0);
    signal sum_fu_105_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal sum2_fu_116_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal sum2_1_fu_127_p2 : STD_LOGIC_VECTOR (3 downto 0);
    signal i_cast_fu_138_p1 : STD_LOGIC_VECTOR (2 downto 0);
    signal exitcond1_fu_142_p2 : STD_LOGIC_VECTOR (0 downto 0);
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


    i_reg_76_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
                i_reg_76 <= i_1_reg_181;
            elsif (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then 
                i_reg_76 <= ap_const_lv2_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state2)) then
                i_1_reg_181 <= i_1_fu_147_p2;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state4) or (ap_const_logic_1 = ap_CS_fsm_state3))) then
                reg_87 <= state_q1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                state_addr_16_reg_163 <= sum_cast_fu_111_p1(4 - 1 downto 0);
                state_addr_17_reg_168 <= sum2_cast_fu_122_p1(4 - 1 downto 0);
                state_addr_18_reg_173 <= sum2_1_cast_fu_133_p1(4 - 1 downto 0);
                state_addr_reg_153 <= state_offset_cast3_fu_92_p1(4 - 1 downto 0);
                tmp_4_reg_158 <= tmp_4_fu_97_p1;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if ((ap_const_logic_1 = ap_CS_fsm_state3)) then
                tmp_reg_186 <= state_q0;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_142_p2)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state1) and (ap_start = ap_const_logic_1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_142_p2 = ap_const_lv1_1))) then
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

    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond1_fu_142_p2)
    begin
        if ((((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_142_p2 = ap_const_lv1_1)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state2, exitcond1_fu_142_p2)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state2) and (exitcond1_fu_142_p2 = ap_const_lv1_1))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;

    exitcond1_fu_142_p2 <= "1" when (i_cast_fu_138_p1 = tmp_4_reg_158) else "0";
    i_1_fu_147_p2 <= std_logic_vector(unsigned(i_reg_76) + unsigned(ap_const_lv2_1));
    i_cast_fu_138_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(i_reg_76),3));

    state_address0_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, state_addr_reg_153, state_addr_18_reg_173, ap_CS_fsm_state2, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            state_address0 <= state_addr_18_reg_173;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            state_address0 <= state_addr_reg_153;
        else 
            state_address0 <= "XXXX";
        end if; 
    end process;


    state_address1_assign_proc : process(ap_CS_fsm_state3, ap_CS_fsm_state4, state_addr_16_reg_163, state_addr_17_reg_168, ap_CS_fsm_state2, ap_CS_fsm_state5)
    begin
        if (((ap_const_logic_1 = ap_CS_fsm_state5) or (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            state_address1 <= state_addr_16_reg_163;
        elsif (((ap_const_logic_1 = ap_CS_fsm_state2) or (ap_const_logic_1 = ap_CS_fsm_state4))) then 
            state_address1 <= state_addr_17_reg_168;
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

    state_d0 <= reg_87;

    state_d1_assign_proc : process(state_q0, ap_CS_fsm_state4, tmp_reg_186, ap_CS_fsm_state5)
    begin
        if ((ap_const_logic_1 = ap_CS_fsm_state5)) then 
            state_d1 <= tmp_reg_186;
        elsif ((ap_const_logic_1 = ap_CS_fsm_state4)) then 
            state_d1 <= state_q0;
        else 
            state_d1 <= "XXXXXXXX";
        end if; 
    end process;

    state_offset_cast3_fu_92_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(state_offset),64));

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

    sum2_1_cast_fu_133_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum2_1_fu_127_p2),64));
    sum2_1_fu_127_p2 <= std_logic_vector(unsigned(ap_const_lv4_2) + unsigned(tmp_5_fu_101_p1));
    sum2_cast_fu_122_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum2_fu_116_p2),64));
    sum2_fu_116_p2 <= std_logic_vector(unsigned(ap_const_lv4_1) + unsigned(tmp_5_fu_101_p1));
    sum_cast_fu_111_p1 <= std_logic_vector(IEEE.numeric_std.resize(unsigned(sum_fu_105_p2),64));
    sum_fu_105_p2 <= std_logic_vector(unsigned(ap_const_lv4_3) + unsigned(tmp_5_fu_101_p1));
    tmp_4_fu_97_p1 <= n(3 - 1 downto 0);
    tmp_5_fu_101_p1 <= state_offset(4 - 1 downto 0);
end behav;
