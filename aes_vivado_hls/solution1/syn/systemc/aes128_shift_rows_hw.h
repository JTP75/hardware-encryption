// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _aes128_shift_rows_hw_HH_
#define _aes128_shift_rows_hw_HH_

#include "systemc.h"
#include "AESL_pkg.h"


namespace ap_rtl {

struct aes128_shift_rows_hw : public sc_module {
    // Port declarations 11
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


    // Module declarations
    aes128_shift_rows_hw(sc_module_name name);
    SC_HAS_PROCESS(aes128_shift_rows_hw);

    ~aes128_shift_rows_hw();

    sc_trace_file* mVcdFile;

    sc_signal< sc_lv<6> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<3> > i_2_fu_103_p2;
    sc_signal< sc_lv<3> > i_2_reg_192;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<2> > tmp_5_fu_109_p1;
    sc_signal< sc_lv<2> > tmp_5_reg_197;
    sc_signal< sc_lv<1> > exitcond_fu_97_p2;
    sc_signal< sc_lv<4> > state_addr_reg_203;
    sc_signal< sc_lv<4> > state_addr_1_reg_208;
    sc_signal< sc_lv<2> > i_3_fu_147_p2;
    sc_signal< sc_lv<2> > i_3_reg_216;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<8> > tmp_6_reg_221;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<2> > j_fu_159_p2;
    sc_signal< sc_lv<2> > j_reg_229;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<1> > exitcond_i_fu_153_p2;
    sc_signal< sc_lv<3> > i_reg_62;
    sc_signal< sc_lv<1> > exitcond1_i_fu_141_p2;
    sc_signal< sc_lv<2> > i_i_reg_74;
    sc_signal< sc_lv<2> > j_i_reg_85;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > tmp_s_fu_121_p1;
    sc_signal< sc_lv<64> > sum_i2_cast_fu_132_p1;
    sc_signal< sc_lv<64> > sum2_i_cast_fu_172_p1;
    sc_signal< sc_lv<64> > sum4_i_cast_fu_184_p1;
    sc_signal< sc_lv<4> > tmp_fu_113_p3;
    sc_signal< sc_lv<4> > sum_i2_fu_126_p2;
    sc_signal< sc_lv<3> > i_i_cast_fu_137_p1;
    sc_signal< sc_lv<4> > sum2_i_fu_165_p3;
    sc_signal< sc_lv<4> > sum4_i_fu_177_p3;
    sc_signal< sc_lv<6> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<6> ap_ST_fsm_state1;
    static const sc_lv<6> ap_ST_fsm_state2;
    static const sc_lv<6> ap_ST_fsm_state3;
    static const sc_lv<6> ap_ST_fsm_state4;
    static const sc_lv<6> ap_ST_fsm_state5;
    static const sc_lv<6> ap_ST_fsm_state6;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<4> ap_const_lv4_3;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_3;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_exitcond1_i_fu_141_p2();
    void thread_exitcond_fu_97_p2();
    void thread_exitcond_i_fu_153_p2();
    void thread_i_2_fu_103_p2();
    void thread_i_3_fu_147_p2();
    void thread_i_i_cast_fu_137_p1();
    void thread_j_fu_159_p2();
    void thread_state_address0();
    void thread_state_ce0();
    void thread_state_d0();
    void thread_state_we0();
    void thread_sum2_i_cast_fu_172_p1();
    void thread_sum2_i_fu_165_p3();
    void thread_sum4_i_cast_fu_184_p1();
    void thread_sum4_i_fu_177_p3();
    void thread_sum_i2_cast_fu_132_p1();
    void thread_sum_i2_fu_126_p2();
    void thread_tmp_5_fu_109_p1();
    void thread_tmp_fu_113_p3();
    void thread_tmp_s_fu_121_p1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif