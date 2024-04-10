-- ==============================================================
-- RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.3
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ===========================================================

library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity aes128_mix_column_hw is
port (
    ap_clk : IN STD_LOGIC;
    ap_rst : IN STD_LOGIC;
    ap_start : IN STD_LOGIC;
    ap_done : OUT STD_LOGIC;
    ap_idle : OUT STD_LOGIC;
    ap_ready : OUT STD_LOGIC;
    column_0_read : IN STD_LOGIC_VECTOR (7 downto 0);
    column_1_read : IN STD_LOGIC_VECTOR (7 downto 0);
    column_2_read : IN STD_LOGIC_VECTOR (7 downto 0);
    column_3_read : IN STD_LOGIC_VECTOR (7 downto 0);
    ap_return_0 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_1 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_2 : OUT STD_LOGIC_VECTOR (7 downto 0);
    ap_return_3 : OUT STD_LOGIC_VECTOR (7 downto 0) );
end;


architecture behav of aes128_mix_column_hw is 
    constant ap_const_logic_1 : STD_LOGIC := '1';
    constant ap_const_logic_0 : STD_LOGIC := '0';
    constant ap_ST_fsm_state1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_ST_fsm_state2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_ST_fsm_state3 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv32_0 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000000";
    constant ap_const_lv32_1 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000001";
    constant ap_const_lv1_1 : STD_LOGIC_VECTOR (0 downto 0) := "1";
    constant ap_const_lv3_0 : STD_LOGIC_VECTOR (2 downto 0) := "000";
    constant ap_const_lv1_0 : STD_LOGIC_VECTOR (0 downto 0) := "0";
    constant ap_const_lv32_2 : STD_LOGIC_VECTOR (31 downto 0) := "00000000000000000000000000000010";
    constant ap_const_lv3_2 : STD_LOGIC_VECTOR (2 downto 0) := "010";
    constant ap_const_lv3_3 : STD_LOGIC_VECTOR (2 downto 0) := "011";
    constant ap_const_lv3_1 : STD_LOGIC_VECTOR (2 downto 0) := "001";
    constant ap_const_lv2_0 : STD_LOGIC_VECTOR (1 downto 0) := "00";
    constant ap_const_lv2_1 : STD_LOGIC_VECTOR (1 downto 0) := "01";
    constant ap_const_lv2_2 : STD_LOGIC_VECTOR (1 downto 0) := "10";
    constant ap_const_lv2_3 : STD_LOGIC_VECTOR (1 downto 0) := "11";
    constant ap_const_lv3_4 : STD_LOGIC_VECTOR (2 downto 0) := "100";
    constant ap_const_lv8_0 : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    constant ap_const_boolean_0 : BOOLEAN := false;
    constant ap_const_boolean_1 : BOOLEAN := true;

    signal ap_CS_fsm : STD_LOGIC_VECTOR (2 downto 0) := "001";
    attribute fsm_encoding : string;
    attribute fsm_encoding of ap_CS_fsm : signal is "none";
    signal ap_CS_fsm_state1 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state1 : signal is "none";
    signal i_5_fu_179_p2 : STD_LOGIC_VECTOR (2 downto 0);
    signal ap_CS_fsm_state2 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state2 : signal is "none";
    signal copy_3_load_reg_394 : STD_LOGIC_VECTOR (7 downto 0);
    signal exitcond_fu_173_p2 : STD_LOGIC_VECTOR (0 downto 0);
    signal copy_3_1_load_reg_401 : STD_LOGIC_VECTOR (7 downto 0);
    signal copy_3_2_load_reg_408 : STD_LOGIC_VECTOR (7 downto 0);
    signal copy_3_3_load_reg_415 : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_89_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_89_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_89_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_89_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_89_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_96_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_96_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_96_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_96_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_96_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_103_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_103_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_103_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_103_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_103_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_110_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_110_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_110_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_110_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_110_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_117_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_117_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_117_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_117_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_117_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_124_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_124_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_124_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_124_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_124_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_131_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_131_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_131_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_131_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_131_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_138_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_138_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_138_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_138_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_138_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_145_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_145_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_145_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_145_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_145_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_152_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_152_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_152_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_152_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_152_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_159_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_159_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_159_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_159_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_159_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal grp_gmul_hw_fu_166_ap_start : STD_LOGIC;
    signal grp_gmul_hw_fu_166_ap_done : STD_LOGIC;
    signal grp_gmul_hw_fu_166_ap_idle : STD_LOGIC;
    signal grp_gmul_hw_fu_166_ap_ready : STD_LOGIC;
    signal grp_gmul_hw_fu_166_ap_return : STD_LOGIC_VECTOR (7 downto 0);
    signal i_reg_78 : STD_LOGIC_VECTOR (2 downto 0);
    signal grp_gmul_hw_fu_89_ap_start_reg : STD_LOGIC := '0';
    signal ap_CS_fsm_state3 : STD_LOGIC;
    attribute fsm_encoding of ap_CS_fsm_state3 : signal is "none";
    signal grp_gmul_hw_fu_96_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_103_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_110_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_117_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_124_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_131_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_138_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_145_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_152_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_159_ap_start_reg : STD_LOGIC := '0';
    signal grp_gmul_hw_fu_166_ap_start_reg : STD_LOGIC := '0';
    signal copy_3_fu_38 : STD_LOGIC_VECTOR (7 downto 0);
    signal copy_0_fu_189_p6 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp_12_fu_185_p1 : STD_LOGIC_VECTOR (1 downto 0);
    signal copy_3_1_fu_42 : STD_LOGIC_VECTOR (7 downto 0);
    signal copy_3_2_fu_46 : STD_LOGIC_VECTOR (7 downto 0);
    signal copy_3_3_fu_50 : STD_LOGIC_VECTOR (7 downto 0);
    signal copy_0_fu_189_p5 : STD_LOGIC_VECTOR (1 downto 0);
    signal tmp5_fu_249_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp4_fu_243_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp7_fu_267_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp6_fu_261_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp9_fu_285_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp8_fu_279_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp11_fu_303_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal tmp10_fu_297_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal column_0_write_assi_fu_255_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal column_1_write_assi_fu_273_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal column_2_write_assi_fu_291_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal column_3_write_assi_fu_309_p2 : STD_LOGIC_VECTOR (7 downto 0);
    signal ap_return_0_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_block_state3_on_subcall_done : BOOLEAN;
    signal ap_return_1_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_2_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_return_3_preg : STD_LOGIC_VECTOR (7 downto 0) := "00000000";
    signal ap_NS_fsm : STD_LOGIC_VECTOR (2 downto 0);

    component gmul_hw IS
    port (
        ap_clk : IN STD_LOGIC;
        ap_rst : IN STD_LOGIC;
        ap_start : IN STD_LOGIC;
        ap_done : OUT STD_LOGIC;
        ap_idle : OUT STD_LOGIC;
        ap_ready : OUT STD_LOGIC;
        a : IN STD_LOGIC_VECTOR (7 downto 0);
        b : IN STD_LOGIC_VECTOR (2 downto 0);
        ap_return : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;


    component aes128_encrypt_bleOg IS
    generic (
        ID : INTEGER;
        NUM_STAGE : INTEGER;
        din0_WIDTH : INTEGER;
        din1_WIDTH : INTEGER;
        din2_WIDTH : INTEGER;
        din3_WIDTH : INTEGER;
        din4_WIDTH : INTEGER;
        dout_WIDTH : INTEGER );
    port (
        din0 : IN STD_LOGIC_VECTOR (7 downto 0);
        din1 : IN STD_LOGIC_VECTOR (7 downto 0);
        din2 : IN STD_LOGIC_VECTOR (7 downto 0);
        din3 : IN STD_LOGIC_VECTOR (7 downto 0);
        din4 : IN STD_LOGIC_VECTOR (1 downto 0);
        dout : OUT STD_LOGIC_VECTOR (7 downto 0) );
    end component;



begin
    grp_gmul_hw_fu_89 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_89_ap_start,
        ap_done => grp_gmul_hw_fu_89_ap_done,
        ap_idle => grp_gmul_hw_fu_89_ap_idle,
        ap_ready => grp_gmul_hw_fu_89_ap_ready,
        a => copy_3_load_reg_394,
        b => ap_const_lv3_2,
        ap_return => grp_gmul_hw_fu_89_ap_return);

    grp_gmul_hw_fu_96 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_96_ap_start,
        ap_done => grp_gmul_hw_fu_96_ap_done,
        ap_idle => grp_gmul_hw_fu_96_ap_idle,
        ap_ready => grp_gmul_hw_fu_96_ap_ready,
        a => copy_3_1_load_reg_401,
        b => ap_const_lv3_3,
        ap_return => grp_gmul_hw_fu_96_ap_return);

    grp_gmul_hw_fu_103 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_103_ap_start,
        ap_done => grp_gmul_hw_fu_103_ap_done,
        ap_idle => grp_gmul_hw_fu_103_ap_idle,
        ap_ready => grp_gmul_hw_fu_103_ap_ready,
        a => copy_3_2_load_reg_408,
        b => ap_const_lv3_1,
        ap_return => grp_gmul_hw_fu_103_ap_return);

    grp_gmul_hw_fu_110 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_110_ap_start,
        ap_done => grp_gmul_hw_fu_110_ap_done,
        ap_idle => grp_gmul_hw_fu_110_ap_idle,
        ap_ready => grp_gmul_hw_fu_110_ap_ready,
        a => copy_3_3_load_reg_415,
        b => ap_const_lv3_1,
        ap_return => grp_gmul_hw_fu_110_ap_return);

    grp_gmul_hw_fu_117 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_117_ap_start,
        ap_done => grp_gmul_hw_fu_117_ap_done,
        ap_idle => grp_gmul_hw_fu_117_ap_idle,
        ap_ready => grp_gmul_hw_fu_117_ap_ready,
        a => copy_3_load_reg_394,
        b => ap_const_lv3_1,
        ap_return => grp_gmul_hw_fu_117_ap_return);

    grp_gmul_hw_fu_124 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_124_ap_start,
        ap_done => grp_gmul_hw_fu_124_ap_done,
        ap_idle => grp_gmul_hw_fu_124_ap_idle,
        ap_ready => grp_gmul_hw_fu_124_ap_ready,
        a => copy_3_1_load_reg_401,
        b => ap_const_lv3_2,
        ap_return => grp_gmul_hw_fu_124_ap_return);

    grp_gmul_hw_fu_131 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_131_ap_start,
        ap_done => grp_gmul_hw_fu_131_ap_done,
        ap_idle => grp_gmul_hw_fu_131_ap_idle,
        ap_ready => grp_gmul_hw_fu_131_ap_ready,
        a => copy_3_2_load_reg_408,
        b => ap_const_lv3_3,
        ap_return => grp_gmul_hw_fu_131_ap_return);

    grp_gmul_hw_fu_138 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_138_ap_start,
        ap_done => grp_gmul_hw_fu_138_ap_done,
        ap_idle => grp_gmul_hw_fu_138_ap_idle,
        ap_ready => grp_gmul_hw_fu_138_ap_ready,
        a => copy_3_1_load_reg_401,
        b => ap_const_lv3_1,
        ap_return => grp_gmul_hw_fu_138_ap_return);

    grp_gmul_hw_fu_145 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_145_ap_start,
        ap_done => grp_gmul_hw_fu_145_ap_done,
        ap_idle => grp_gmul_hw_fu_145_ap_idle,
        ap_ready => grp_gmul_hw_fu_145_ap_ready,
        a => copy_3_2_load_reg_408,
        b => ap_const_lv3_2,
        ap_return => grp_gmul_hw_fu_145_ap_return);

    grp_gmul_hw_fu_152 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_152_ap_start,
        ap_done => grp_gmul_hw_fu_152_ap_done,
        ap_idle => grp_gmul_hw_fu_152_ap_idle,
        ap_ready => grp_gmul_hw_fu_152_ap_ready,
        a => copy_3_3_load_reg_415,
        b => ap_const_lv3_3,
        ap_return => grp_gmul_hw_fu_152_ap_return);

    grp_gmul_hw_fu_159 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_159_ap_start,
        ap_done => grp_gmul_hw_fu_159_ap_done,
        ap_idle => grp_gmul_hw_fu_159_ap_idle,
        ap_ready => grp_gmul_hw_fu_159_ap_ready,
        a => copy_3_load_reg_394,
        b => ap_const_lv3_3,
        ap_return => grp_gmul_hw_fu_159_ap_return);

    grp_gmul_hw_fu_166 : component gmul_hw
    port map (
        ap_clk => ap_clk,
        ap_rst => ap_rst,
        ap_start => grp_gmul_hw_fu_166_ap_start,
        ap_done => grp_gmul_hw_fu_166_ap_done,
        ap_idle => grp_gmul_hw_fu_166_ap_idle,
        ap_ready => grp_gmul_hw_fu_166_ap_ready,
        a => copy_3_3_load_reg_415,
        b => ap_const_lv3_2,
        ap_return => grp_gmul_hw_fu_166_ap_return);

    aes128_encrypt_bleOg_U21 : component aes128_encrypt_bleOg
    generic map (
        ID => 1,
        NUM_STAGE => 1,
        din0_WIDTH => 8,
        din1_WIDTH => 8,
        din2_WIDTH => 8,
        din3_WIDTH => 8,
        din4_WIDTH => 2,
        dout_WIDTH => 8)
    port map (
        din0 => column_0_read,
        din1 => column_1_read,
        din2 => column_2_read,
        din3 => column_3_read,
        din4 => copy_0_fu_189_p5,
        dout => copy_0_fu_189_p6);





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


    ap_return_0_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_0_preg <= ap_const_lv8_0;
            else
                if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                    ap_return_0_preg <= column_0_write_assi_fu_255_p2;
                end if; 
            end if;
        end if;
    end process;


    ap_return_1_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_1_preg <= ap_const_lv8_0;
            else
                if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                    ap_return_1_preg <= column_1_write_assi_fu_273_p2;
                end if; 
            end if;
        end if;
    end process;


    ap_return_2_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_2_preg <= ap_const_lv8_0;
            else
                if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                    ap_return_2_preg <= column_2_write_assi_fu_291_p2;
                end if; 
            end if;
        end if;
    end process;


    ap_return_3_preg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                ap_return_3_preg <= ap_const_lv8_0;
            else
                if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
                    ap_return_3_preg <= column_3_write_assi_fu_309_p2;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_103_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_103_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_103_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_103_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_103_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_110_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_110_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_110_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_110_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_110_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_117_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_117_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_117_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_117_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_117_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_124_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_124_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_124_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_124_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_124_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_131_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_131_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_131_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_131_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_131_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_138_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_138_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_138_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_138_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_138_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_145_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_145_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_145_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_145_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_145_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_152_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_152_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_152_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_152_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_152_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_159_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_159_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_159_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_159_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_159_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_166_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_166_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_166_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_166_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_166_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_89_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_89_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_89_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_89_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_89_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    grp_gmul_hw_fu_96_ap_start_reg_assign_proc : process(ap_clk)
    begin
        if (ap_clk'event and ap_clk =  '1') then
            if (ap_rst = '1') then
                grp_gmul_hw_fu_96_ap_start_reg <= ap_const_logic_0;
            else
                if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                    grp_gmul_hw_fu_96_ap_start_reg <= ap_const_logic_1;
                elsif ((grp_gmul_hw_fu_96_ap_ready = ap_const_logic_1)) then 
                    grp_gmul_hw_fu_96_ap_start_reg <= ap_const_logic_0;
                end if; 
            end if;
        end if;
    end process;


    i_reg_78_assign_proc : process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_173_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then 
                i_reg_78 <= i_5_fu_179_p2;
            elsif (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then 
                i_reg_78 <= ap_const_lv3_0;
            end if; 
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_173_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_12_fu_185_p1 = ap_const_lv2_1))) then
                copy_3_1_fu_42 <= copy_0_fu_189_p6;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_173_p2 = ap_const_lv1_1) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                copy_3_1_load_reg_401 <= copy_3_1_fu_42;
                copy_3_2_load_reg_408 <= copy_3_2_fu_46;
                copy_3_3_load_reg_415 <= copy_3_3_fu_50;
                copy_3_load_reg_394 <= copy_3_fu_38;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_173_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_12_fu_185_p1 = ap_const_lv2_2))) then
                copy_3_2_fu_46 <= copy_0_fu_189_p6;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_173_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_12_fu_185_p1 = ap_const_lv2_3))) then
                copy_3_3_fu_50 <= copy_0_fu_189_p6;
            end if;
        end if;
    end process;
    process (ap_clk)
    begin
        if (ap_clk'event and ap_clk = '1') then
            if (((exitcond_fu_173_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2) and (tmp_12_fu_185_p1 = ap_const_lv2_0))) then
                copy_3_fu_38 <= copy_0_fu_189_p6;
            end if;
        end if;
    end process;

    ap_NS_fsm_assign_proc : process (ap_start, ap_CS_fsm, ap_CS_fsm_state1, ap_CS_fsm_state2, exitcond_fu_173_p2, ap_CS_fsm_state3, ap_block_state3_on_subcall_done)
    begin
        case ap_CS_fsm is
            when ap_ST_fsm_state1 => 
                if (((ap_start = ap_const_logic_1) and (ap_const_logic_1 = ap_CS_fsm_state1))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state1;
                end if;
            when ap_ST_fsm_state2 => 
                if (((exitcond_fu_173_p2 = ap_const_lv1_0) and (ap_const_logic_1 = ap_CS_fsm_state2))) then
                    ap_NS_fsm <= ap_ST_fsm_state2;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when ap_ST_fsm_state3 => 
                if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then
                    ap_NS_fsm <= ap_ST_fsm_state1;
                else
                    ap_NS_fsm <= ap_ST_fsm_state3;
                end if;
            when others =>  
                ap_NS_fsm <= "XXX";
        end case;
    end process;
    ap_CS_fsm_state1 <= ap_CS_fsm(0);
    ap_CS_fsm_state2 <= ap_CS_fsm(1);
    ap_CS_fsm_state3 <= ap_CS_fsm(2);

    ap_block_state3_on_subcall_done_assign_proc : process(grp_gmul_hw_fu_89_ap_done, grp_gmul_hw_fu_96_ap_done, grp_gmul_hw_fu_103_ap_done, grp_gmul_hw_fu_110_ap_done, grp_gmul_hw_fu_117_ap_done, grp_gmul_hw_fu_124_ap_done, grp_gmul_hw_fu_131_ap_done, grp_gmul_hw_fu_138_ap_done, grp_gmul_hw_fu_145_ap_done, grp_gmul_hw_fu_152_ap_done, grp_gmul_hw_fu_159_ap_done, grp_gmul_hw_fu_166_ap_done)
    begin
                ap_block_state3_on_subcall_done <= ((grp_gmul_hw_fu_117_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_110_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_103_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_96_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_89_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_166_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_159_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_152_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_145_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_138_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_131_ap_done = ap_const_logic_0) or (grp_gmul_hw_fu_124_ap_done = ap_const_logic_0));
    end process;


    ap_done_assign_proc : process(ap_start, ap_CS_fsm_state1, ap_CS_fsm_state3, ap_block_state3_on_subcall_done)
    begin
        if ((((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3)) or ((ap_start = ap_const_logic_0) and (ap_const_logic_1 = ap_CS_fsm_state1)))) then 
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


    ap_ready_assign_proc : process(ap_CS_fsm_state3, ap_block_state3_on_subcall_done)
    begin
        if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_ready <= ap_const_logic_1;
        else 
            ap_ready <= ap_const_logic_0;
        end if; 
    end process;


    ap_return_0_assign_proc : process(ap_CS_fsm_state3, column_0_write_assi_fu_255_p2, ap_return_0_preg, ap_block_state3_on_subcall_done)
    begin
        if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_return_0 <= column_0_write_assi_fu_255_p2;
        else 
            ap_return_0 <= ap_return_0_preg;
        end if; 
    end process;


    ap_return_1_assign_proc : process(ap_CS_fsm_state3, column_1_write_assi_fu_273_p2, ap_block_state3_on_subcall_done, ap_return_1_preg)
    begin
        if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_return_1 <= column_1_write_assi_fu_273_p2;
        else 
            ap_return_1 <= ap_return_1_preg;
        end if; 
    end process;


    ap_return_2_assign_proc : process(ap_CS_fsm_state3, column_2_write_assi_fu_291_p2, ap_block_state3_on_subcall_done, ap_return_2_preg)
    begin
        if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_return_2 <= column_2_write_assi_fu_291_p2;
        else 
            ap_return_2 <= ap_return_2_preg;
        end if; 
    end process;


    ap_return_3_assign_proc : process(ap_CS_fsm_state3, column_3_write_assi_fu_309_p2, ap_block_state3_on_subcall_done, ap_return_3_preg)
    begin
        if (((ap_const_boolean_0 = ap_block_state3_on_subcall_done) and (ap_const_logic_1 = ap_CS_fsm_state3))) then 
            ap_return_3 <= column_3_write_assi_fu_309_p2;
        else 
            ap_return_3 <= ap_return_3_preg;
        end if; 
    end process;

    column_0_write_assi_fu_255_p2 <= (tmp5_fu_249_p2 xor tmp4_fu_243_p2);
    column_1_write_assi_fu_273_p2 <= (tmp7_fu_267_p2 xor tmp6_fu_261_p2);
    column_2_write_assi_fu_291_p2 <= (tmp9_fu_285_p2 xor tmp8_fu_279_p2);
    column_3_write_assi_fu_309_p2 <= (tmp11_fu_303_p2 xor tmp10_fu_297_p2);
    copy_0_fu_189_p5 <= i_reg_78(2 - 1 downto 0);
    exitcond_fu_173_p2 <= "1" when (i_reg_78 = ap_const_lv3_4) else "0";
    grp_gmul_hw_fu_103_ap_start <= grp_gmul_hw_fu_103_ap_start_reg;
    grp_gmul_hw_fu_110_ap_start <= grp_gmul_hw_fu_110_ap_start_reg;
    grp_gmul_hw_fu_117_ap_start <= grp_gmul_hw_fu_117_ap_start_reg;
    grp_gmul_hw_fu_124_ap_start <= grp_gmul_hw_fu_124_ap_start_reg;
    grp_gmul_hw_fu_131_ap_start <= grp_gmul_hw_fu_131_ap_start_reg;
    grp_gmul_hw_fu_138_ap_start <= grp_gmul_hw_fu_138_ap_start_reg;
    grp_gmul_hw_fu_145_ap_start <= grp_gmul_hw_fu_145_ap_start_reg;
    grp_gmul_hw_fu_152_ap_start <= grp_gmul_hw_fu_152_ap_start_reg;
    grp_gmul_hw_fu_159_ap_start <= grp_gmul_hw_fu_159_ap_start_reg;
    grp_gmul_hw_fu_166_ap_start <= grp_gmul_hw_fu_166_ap_start_reg;
    grp_gmul_hw_fu_89_ap_start <= grp_gmul_hw_fu_89_ap_start_reg;
    grp_gmul_hw_fu_96_ap_start <= grp_gmul_hw_fu_96_ap_start_reg;
    i_5_fu_179_p2 <= std_logic_vector(unsigned(i_reg_78) + unsigned(ap_const_lv3_1));
    tmp10_fu_297_p2 <= (grp_gmul_hw_fu_159_ap_return xor grp_gmul_hw_fu_138_ap_return);
    tmp11_fu_303_p2 <= (grp_gmul_hw_fu_166_ap_return xor grp_gmul_hw_fu_103_ap_return);
    tmp4_fu_243_p2 <= (grp_gmul_hw_fu_96_ap_return xor grp_gmul_hw_fu_89_ap_return);
    tmp5_fu_249_p2 <= (grp_gmul_hw_fu_110_ap_return xor grp_gmul_hw_fu_103_ap_return);
    tmp6_fu_261_p2 <= (grp_gmul_hw_fu_124_ap_return xor grp_gmul_hw_fu_117_ap_return);
    tmp7_fu_267_p2 <= (grp_gmul_hw_fu_131_ap_return xor grp_gmul_hw_fu_110_ap_return);
    tmp8_fu_279_p2 <= (grp_gmul_hw_fu_138_ap_return xor grp_gmul_hw_fu_117_ap_return);
    tmp9_fu_285_p2 <= (grp_gmul_hw_fu_152_ap_return xor grp_gmul_hw_fu_145_ap_return);
    tmp_12_fu_185_p1 <= i_reg_78(2 - 1 downto 0);
end behav;
