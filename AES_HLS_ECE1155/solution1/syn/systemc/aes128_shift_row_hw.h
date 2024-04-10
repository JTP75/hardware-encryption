// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _aes128_shift_row_hw_HH_
#define _aes128_shift_row_hw_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct aes128_shift_row_hw : public sc_module {
    // Port declarations 18
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<4> > state_address0;
    sc_out< sc_logic > state_ce0;
    sc_out< sc_logic > state_we0;
    sc_out< sc_lv<8> > state_d0;
    sc_in< sc_lv<8> > state_q0;
    sc_out< sc_lv<4> > state_address1;
    sc_out< sc_logic > state_ce1;
    sc_out< sc_logic > state_we1;
    sc_out< sc_lv<8> > state_d1;
    sc_in< sc_lv<8> > state_q1;
    sc_in< sc_lv<5> > state_offset;
    sc_in< sc_lv<4> > n;


    // Module declarations
    aes128_shift_row_hw(sc_module_name name);
    SC_HAS_PROCESS(aes128_shift_row_hw);

    ~aes128_shift_row_hw();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<5> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<8> > reg_87;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<4> > state_addr_reg_153;
    sc_signal< sc_lv<3> > tmp_4_fu_97_p1;
    sc_signal< sc_lv<3> > tmp_4_reg_158;
    sc_signal< sc_lv<4> > state_addr_16_reg_163;
    sc_signal< sc_lv<4> > state_addr_17_reg_168;
    sc_signal< sc_lv<4> > state_addr_18_reg_173;
    sc_signal< sc_lv<2> > i_1_fu_147_p2;
    sc_signal< sc_lv<2> > i_1_reg_181;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<8> > tmp_reg_186;
    sc_signal< sc_lv<2> > i_reg_76;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > state_offset_cast3_fu_92_p1;
    sc_signal< sc_lv<64> > sum_cast_fu_111_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_122_p1;
    sc_signal< sc_lv<64> > sum2_1_cast_fu_133_p1;
    sc_signal< sc_lv<4> > tmp_5_fu_101_p1;
    sc_signal< sc_lv<4> > sum_fu_105_p2;
    sc_signal< sc_lv<4> > sum2_fu_116_p2;
    sc_signal< sc_lv<4> > sum2_1_fu_127_p2;
    sc_signal< sc_lv<3> > i_cast_fu_138_p1;
    sc_signal< sc_lv<1> > exitcond1_fu_142_p2;
    sc_signal< sc_lv<5> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<5> ap_ST_fsm_state1;
    static const sc_lv<5> ap_ST_fsm_state2;
    static const sc_lv<5> ap_ST_fsm_state3;
    static const sc_lv<5> ap_ST_fsm_state4;
    static const sc_lv<5> ap_ST_fsm_state5;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<4> ap_const_lv4_1;
    static const sc_lv<4> ap_const_lv4_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<1> ap_const_lv1_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_fu_142_p2();
    void thread_i_1_fu_147_p2();
    void thread_i_cast_fu_138_p1();
    void thread_state_address0();
    void thread_state_address1();
    void thread_state_ce0();
    void thread_state_ce1();
    void thread_state_d0();
    void thread_state_d1();
    void thread_state_offset_cast3_fu_92_p1();
    void thread_state_we0();
    void thread_state_we1();
    void thread_sum2_1_cast_fu_133_p1();
    void thread_sum2_1_fu_127_p2();
    void thread_sum2_cast_fu_122_p1();
    void thread_sum2_fu_116_p2();
    void thread_sum_cast_fu_111_p1();
    void thread_sum_fu_105_p2();
    void thread_tmp_4_fu_97_p1();
    void thread_tmp_5_fu_101_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif