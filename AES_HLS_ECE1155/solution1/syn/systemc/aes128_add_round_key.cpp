// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "aes128_add_round_key.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic aes128_add_round_key::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic aes128_add_round_key::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<5> aes128_add_round_key::ap_ST_fsm_state1 = "1";
const sc_lv<5> aes128_add_round_key::ap_ST_fsm_state2 = "10";
const sc_lv<5> aes128_add_round_key::ap_ST_fsm_state3 = "100";
const sc_lv<5> aes128_add_round_key::ap_ST_fsm_state4 = "1000";
const sc_lv<5> aes128_add_round_key::ap_ST_fsm_state5 = "10000";
const sc_lv<32> aes128_add_round_key::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> aes128_add_round_key::ap_const_lv32_2 = "10";
const sc_lv<32> aes128_add_round_key::ap_const_lv32_3 = "11";
const sc_lv<32> aes128_add_round_key::ap_const_lv32_1 = "1";
const sc_lv<1> aes128_add_round_key::ap_const_lv1_0 = "0";
const sc_lv<5> aes128_add_round_key::ap_const_lv5_0 = "00000";
const sc_lv<32> aes128_add_round_key::ap_const_lv32_4 = "100";
const sc_lv<5> aes128_add_round_key::ap_const_lv5_10 = "10000";
const sc_lv<4> aes128_add_round_key::ap_const_lv4_1 = "1";
const sc_lv<5> aes128_add_round_key::ap_const_lv5_4 = "100";
const sc_lv<4> aes128_add_round_key::ap_const_lv4_2 = "10";
const sc_lv<4> aes128_add_round_key::ap_const_lv4_3 = "11";
const sc_lv<1> aes128_add_round_key::ap_const_lv1_1 = "1";
const bool aes128_add_round_key::ap_const_boolean_1 = true;

aes128_add_round_key::aes128_add_round_key(sc_module_name name) : sc_module(name), mVcdFile(0) {

    SC_METHOD(thread_ap_clk_no_reset_);
    dont_initialize();
    sensitive << ( ap_clk.pos() );

    SC_METHOD(thread_ap_CS_fsm_state1);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state2);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state3);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state4);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_CS_fsm_state5);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_137_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_137_p2 );

    SC_METHOD(thread_exitcond_fu_137_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_grp_fu_115_p2);
    sensitive << ( state_q0 );
    sensitive << ( round_key_q0 );

    SC_METHOD(thread_grp_fu_121_p2);
    sensitive << ( state_q1 );
    sensitive << ( round_key_q1 );

    SC_METHOD(thread_i_15_1_fu_171_p2);
    sensitive << ( tmp_16_reg_206 );

    SC_METHOD(thread_i_15_2_fu_182_p2);
    sensitive << ( tmp_16_reg_206 );

    SC_METHOD(thread_i_15_3_fu_165_p2);
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_i_15_s_fu_153_p2);
    sensitive << ( tmp_16_fu_149_p1 );

    SC_METHOD(thread_round_key_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_fu_143_p1 );
    sensitive << ( tmp_2_fu_176_p1 );

    SC_METHOD(thread_round_key_address1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( tmp_1_fu_159_p1 );
    sensitive << ( tmp_3_fu_187_p1 );

    SC_METHOD(thread_round_key_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_round_key_ce1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state2 );

    SC_METHOD(thread_state_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( state_addr_reg_201 );
    sensitive << ( state_addr_35_reg_232 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_fu_143_p1 );
    sensitive << ( tmp_2_fu_176_p1 );

    SC_METHOD(thread_state_address1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( state_addr_34_reg_217 );
    sensitive << ( state_addr_36_reg_242 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( tmp_1_fu_159_p1 );
    sensitive << ( tmp_3_fu_187_p1 );

    SC_METHOD(thread_state_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_state_ce1);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_state_d0);
    sensitive << ( reg_127 );
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_state_d1);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( reg_132 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_state_we0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_state_we1);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( ap_CS_fsm_state5 );

    SC_METHOD(thread_tmp_16_fu_149_p1);
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_tmp_1_fu_159_p1);
    sensitive << ( i_15_s_fu_153_p2 );

    SC_METHOD(thread_tmp_2_fu_176_p1);
    sensitive << ( i_15_1_fu_171_p2 );

    SC_METHOD(thread_tmp_3_fu_187_p1);
    sensitive << ( i_15_2_fu_182_p2 );

    SC_METHOD(thread_tmp_fu_143_p1);
    sensitive << ( i_reg_104 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_137_p2 );

    ap_CS_fsm = "00001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "aes128_add_round_key_sc_trace_" << apTFileNum ++;
    string apTFn = apTFilenSS.str();
    mVcdFile = sc_create_vcd_trace_file(apTFn.c_str());
    mVcdFile->set_time_unit(1, SC_PS);
    if (1) {
#ifdef __HLS_TRACE_LEVEL_PORT_HIER__
    sc_trace(mVcdFile, ap_clk, "(port)ap_clk");
    sc_trace(mVcdFile, ap_rst, "(port)ap_rst");
    sc_trace(mVcdFile, ap_start, "(port)ap_start");
    sc_trace(mVcdFile, ap_done, "(port)ap_done");
    sc_trace(mVcdFile, ap_idle, "(port)ap_idle");
    sc_trace(mVcdFile, ap_ready, "(port)ap_ready");
    sc_trace(mVcdFile, state_address0, "(port)state_address0");
    sc_trace(mVcdFile, state_ce0, "(port)state_ce0");
    sc_trace(mVcdFile, state_we0, "(port)state_we0");
    sc_trace(mVcdFile, state_d0, "(port)state_d0");
    sc_trace(mVcdFile, state_q0, "(port)state_q0");
    sc_trace(mVcdFile, state_address1, "(port)state_address1");
    sc_trace(mVcdFile, state_ce1, "(port)state_ce1");
    sc_trace(mVcdFile, state_we1, "(port)state_we1");
    sc_trace(mVcdFile, state_d1, "(port)state_d1");
    sc_trace(mVcdFile, state_q1, "(port)state_q1");
    sc_trace(mVcdFile, round_key_address0, "(port)round_key_address0");
    sc_trace(mVcdFile, round_key_ce0, "(port)round_key_ce0");
    sc_trace(mVcdFile, round_key_q0, "(port)round_key_q0");
    sc_trace(mVcdFile, round_key_address1, "(port)round_key_address1");
    sc_trace(mVcdFile, round_key_ce1, "(port)round_key_ce1");
    sc_trace(mVcdFile, round_key_q1, "(port)round_key_q1");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, grp_fu_115_p2, "grp_fu_115_p2");
    sc_trace(mVcdFile, reg_127, "reg_127");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, grp_fu_121_p2, "grp_fu_121_p2");
    sc_trace(mVcdFile, reg_132, "reg_132");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, exitcond_fu_137_p2, "exitcond_fu_137_p2");
    sc_trace(mVcdFile, state_addr_reg_201, "state_addr_reg_201");
    sc_trace(mVcdFile, tmp_16_fu_149_p1, "tmp_16_fu_149_p1");
    sc_trace(mVcdFile, tmp_16_reg_206, "tmp_16_reg_206");
    sc_trace(mVcdFile, state_addr_34_reg_217, "state_addr_34_reg_217");
    sc_trace(mVcdFile, i_15_3_fu_165_p2, "i_15_3_fu_165_p2");
    sc_trace(mVcdFile, i_15_3_reg_222, "i_15_3_reg_222");
    sc_trace(mVcdFile, state_addr_35_reg_232, "state_addr_35_reg_232");
    sc_trace(mVcdFile, state_addr_36_reg_242, "state_addr_36_reg_242");
    sc_trace(mVcdFile, i_reg_104, "i_reg_104");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, tmp_fu_143_p1, "tmp_fu_143_p1");
    sc_trace(mVcdFile, tmp_1_fu_159_p1, "tmp_1_fu_159_p1");
    sc_trace(mVcdFile, tmp_2_fu_176_p1, "tmp_2_fu_176_p1");
    sc_trace(mVcdFile, tmp_3_fu_187_p1, "tmp_3_fu_187_p1");
    sc_trace(mVcdFile, i_15_s_fu_153_p2, "i_15_s_fu_153_p2");
    sc_trace(mVcdFile, i_15_1_fu_171_p2, "i_15_1_fu_171_p2");
    sc_trace(mVcdFile, i_15_2_fu_182_p2, "i_15_2_fu_182_p2");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

aes128_add_round_key::~aes128_add_round_key() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void aes128_add_round_key::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        i_reg_104 = i_15_3_reg_222.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_104 = ap_const_lv5_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_137_p2.read(), ap_const_lv1_0))) {
        i_15_3_reg_222 = i_15_3_fu_165_p2.read();
        state_addr_34_reg_217 =  (sc_lv<4>) (tmp_1_fu_159_p1.read());
        state_addr_reg_201 =  (sc_lv<4>) (tmp_fu_143_p1.read());
        tmp_16_reg_206 = tmp_16_fu_149_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()))) {
        reg_127 = grp_fu_115_p2.read();
        reg_132 = grp_fu_121_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        state_addr_35_reg_232 =  (sc_lv<4>) (tmp_2_fu_176_p1.read());
        state_addr_36_reg_242 =  (sc_lv<4>) (tmp_3_fu_187_p1.read());
    }
}

void aes128_add_round_key::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void aes128_add_round_key::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void aes128_add_round_key::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void aes128_add_round_key::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void aes128_add_round_key::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void aes128_add_round_key::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_137_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_137_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_exitcond_fu_137_p2() {
    exitcond_fu_137_p2 = (!i_reg_104.read().is_01() || !ap_const_lv5_10.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_104.read() == ap_const_lv5_10);
}

void aes128_add_round_key::thread_grp_fu_115_p2() {
    grp_fu_115_p2 = (state_q0.read() ^ round_key_q0.read());
}

void aes128_add_round_key::thread_grp_fu_121_p2() {
    grp_fu_121_p2 = (state_q1.read() ^ round_key_q1.read());
}

void aes128_add_round_key::thread_i_15_1_fu_171_p2() {
    i_15_1_fu_171_p2 = (tmp_16_reg_206.read() | ap_const_lv4_2);
}

void aes128_add_round_key::thread_i_15_2_fu_182_p2() {
    i_15_2_fu_182_p2 = (tmp_16_reg_206.read() | ap_const_lv4_3);
}

void aes128_add_round_key::thread_i_15_3_fu_165_p2() {
    i_15_3_fu_165_p2 = (!ap_const_lv5_4.is_01() || !i_reg_104.read().is_01())? sc_lv<5>(): (sc_biguint<5>(ap_const_lv5_4) + sc_biguint<5>(i_reg_104.read()));
}

void aes128_add_round_key::thread_i_15_s_fu_153_p2() {
    i_15_s_fu_153_p2 = (tmp_16_fu_149_p1.read() | ap_const_lv4_1);
}

void aes128_add_round_key::thread_round_key_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        round_key_address0 =  (sc_lv<4>) (tmp_2_fu_176_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        round_key_address0 =  (sc_lv<4>) (tmp_fu_143_p1.read());
    } else {
        round_key_address0 = "XXXX";
    }
}

void aes128_add_round_key::thread_round_key_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        round_key_address1 =  (sc_lv<4>) (tmp_3_fu_187_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        round_key_address1 =  (sc_lv<4>) (tmp_1_fu_159_p1.read());
    } else {
        round_key_address1 = "XXXX";
    }
}

void aes128_add_round_key::thread_round_key_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        round_key_ce0 = ap_const_logic_1;
    } else {
        round_key_ce0 = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_round_key_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()))) {
        round_key_ce1 = ap_const_logic_1;
    } else {
        round_key_ce1 = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_state_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        state_address0 = state_addr_35_reg_232.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        state_address0 = state_addr_reg_201.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        state_address0 =  (sc_lv<4>) (tmp_2_fu_176_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        state_address0 =  (sc_lv<4>) (tmp_fu_143_p1.read());
    } else {
        state_address0 = "XXXX";
    }
}

void aes128_add_round_key::thread_state_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        state_address1 = state_addr_36_reg_242.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        state_address1 = state_addr_34_reg_217.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        state_address1 =  (sc_lv<4>) (tmp_3_fu_187_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        state_address1 =  (sc_lv<4>) (tmp_1_fu_159_p1.read());
    } else {
        state_address1 = "XXXX";
    }
}

void aes128_add_round_key::thread_state_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        state_ce0 = ap_const_logic_1;
    } else {
        state_ce0 = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_state_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        state_ce1 = ap_const_logic_1;
    } else {
        state_ce1 = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_state_d0() {
    state_d0 = reg_127.read();
}

void aes128_add_round_key::thread_state_d1() {
    state_d1 = reg_132.read();
}

void aes128_add_round_key::thread_state_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        state_we0 = ap_const_logic_1;
    } else {
        state_we0 = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_state_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read()) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()))) {
        state_we1 = ap_const_logic_1;
    } else {
        state_we1 = ap_const_logic_0;
    }
}

void aes128_add_round_key::thread_tmp_16_fu_149_p1() {
    tmp_16_fu_149_p1 = i_reg_104.read().range(4-1, 0);
}

void aes128_add_round_key::thread_tmp_1_fu_159_p1() {
    tmp_1_fu_159_p1 = esl_zext<64,4>(i_15_s_fu_153_p2.read());
}

void aes128_add_round_key::thread_tmp_2_fu_176_p1() {
    tmp_2_fu_176_p1 = esl_zext<64,4>(i_15_1_fu_171_p2.read());
}

void aes128_add_round_key::thread_tmp_3_fu_187_p1() {
    tmp_3_fu_187_p1 = esl_zext<64,4>(i_15_2_fu_182_p2.read());
}

void aes128_add_round_key::thread_tmp_fu_143_p1() {
    tmp_fu_143_p1 = esl_zext<64,5>(i_reg_104.read());
}

void aes128_add_round_key::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_137_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            ap_NS_fsm = ap_ST_fsm_state4;
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            ap_NS_fsm = ap_ST_fsm_state2;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<5>) ("XXXXX");
            break;
    }
}

}
