// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "aes128_shift_rows_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic aes128_shift_rows_hw::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic aes128_shift_rows_hw::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<6> aes128_shift_rows_hw::ap_ST_fsm_state1 = "1";
const sc_lv<6> aes128_shift_rows_hw::ap_ST_fsm_state2 = "10";
const sc_lv<6> aes128_shift_rows_hw::ap_ST_fsm_state3 = "100";
const sc_lv<6> aes128_shift_rows_hw::ap_ST_fsm_state4 = "1000";
const sc_lv<6> aes128_shift_rows_hw::ap_ST_fsm_state5 = "10000";
const sc_lv<6> aes128_shift_rows_hw::ap_ST_fsm_state6 = "100000";
const sc_lv<32> aes128_shift_rows_hw::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> aes128_shift_rows_hw::ap_const_lv32_1 = "1";
const sc_lv<1> aes128_shift_rows_hw::ap_const_lv1_0 = "0";
const sc_lv<32> aes128_shift_rows_hw::ap_const_lv32_2 = "10";
const sc_lv<32> aes128_shift_rows_hw::ap_const_lv32_3 = "11";
const sc_lv<32> aes128_shift_rows_hw::ap_const_lv32_4 = "100";
const sc_lv<3> aes128_shift_rows_hw::ap_const_lv3_0 = "000";
const sc_lv<1> aes128_shift_rows_hw::ap_const_lv1_1 = "1";
const sc_lv<2> aes128_shift_rows_hw::ap_const_lv2_0 = "00";
const sc_lv<32> aes128_shift_rows_hw::ap_const_lv32_5 = "101";
const sc_lv<3> aes128_shift_rows_hw::ap_const_lv3_4 = "100";
const sc_lv<3> aes128_shift_rows_hw::ap_const_lv3_1 = "1";
const sc_lv<4> aes128_shift_rows_hw::ap_const_lv4_3 = "11";
const sc_lv<2> aes128_shift_rows_hw::ap_const_lv2_1 = "1";
const sc_lv<2> aes128_shift_rows_hw::ap_const_lv2_3 = "11";
const bool aes128_shift_rows_hw::ap_const_boolean_1 = true;

aes128_shift_rows_hw::aes128_shift_rows_hw(sc_module_name name) : sc_module(name), mVcdFile(0) {

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

    SC_METHOD(thread_ap_CS_fsm_state6);
    sensitive << ( ap_CS_fsm );

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_97_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_97_p2 );

    SC_METHOD(thread_exitcond1_i_fu_141_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( i_reg_62 );
    sensitive << ( i_i_cast_fu_137_p1 );

    SC_METHOD(thread_exitcond_fu_97_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_62 );

    SC_METHOD(thread_exitcond_i_fu_153_p2);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( j_i_reg_85 );

    SC_METHOD(thread_i_2_fu_103_p2);
    sensitive << ( i_reg_62 );

    SC_METHOD(thread_i_3_fu_147_p2);
    sensitive << ( i_i_reg_74 );

    SC_METHOD(thread_i_i_cast_fu_137_p1);
    sensitive << ( i_i_reg_74 );

    SC_METHOD(thread_j_fu_159_p2);
    sensitive << ( j_i_reg_85 );

    SC_METHOD(thread_state_address0);
    sensitive << ( state_addr_reg_203 );
    sensitive << ( state_addr_1_reg_208 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_i_fu_153_p2 );
    sensitive << ( ap_CS_fsm_state6 );
    sensitive << ( sum2_i_cast_fu_172_p1 );
    sensitive << ( sum4_i_cast_fu_184_p1 );

    SC_METHOD(thread_state_ce0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_i_fu_153_p2 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_state_d0);
    sensitive << ( state_q0 );
    sensitive << ( tmp_6_reg_221 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_i_fu_153_p2 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_state_we0);
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_i_fu_153_p2 );
    sensitive << ( ap_CS_fsm_state6 );

    SC_METHOD(thread_sum2_i_cast_fu_172_p1);
    sensitive << ( sum2_i_fu_165_p3 );

    SC_METHOD(thread_sum2_i_fu_165_p3);
    sensitive << ( tmp_5_reg_197 );
    sensitive << ( j_fu_159_p2 );

    SC_METHOD(thread_sum4_i_cast_fu_184_p1);
    sensitive << ( sum4_i_fu_177_p3 );

    SC_METHOD(thread_sum4_i_fu_177_p3);
    sensitive << ( tmp_5_reg_197 );
    sensitive << ( j_i_reg_85 );

    SC_METHOD(thread_sum_i2_cast_fu_132_p1);
    sensitive << ( sum_i2_fu_126_p2 );

    SC_METHOD(thread_sum_i2_fu_126_p2);
    sensitive << ( tmp_fu_113_p3 );

    SC_METHOD(thread_tmp_5_fu_109_p1);
    sensitive << ( i_reg_62 );

    SC_METHOD(thread_tmp_fu_113_p3);
    sensitive << ( tmp_5_fu_109_p1 );

    SC_METHOD(thread_tmp_s_fu_121_p1);
    sensitive << ( tmp_fu_113_p3 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond_fu_97_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( ap_CS_fsm_state5 );
    sensitive << ( exitcond_i_fu_153_p2 );
    sensitive << ( exitcond1_i_fu_141_p2 );

    ap_CS_fsm = "000001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "aes128_shift_rows_hw_sc_trace_" << apTFileNum ++;
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
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, i_2_fu_103_p2, "i_2_fu_103_p2");
    sc_trace(mVcdFile, i_2_reg_192, "i_2_reg_192");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, tmp_5_fu_109_p1, "tmp_5_fu_109_p1");
    sc_trace(mVcdFile, tmp_5_reg_197, "tmp_5_reg_197");
    sc_trace(mVcdFile, exitcond_fu_97_p2, "exitcond_fu_97_p2");
    sc_trace(mVcdFile, state_addr_reg_203, "state_addr_reg_203");
    sc_trace(mVcdFile, state_addr_1_reg_208, "state_addr_1_reg_208");
    sc_trace(mVcdFile, i_3_fu_147_p2, "i_3_fu_147_p2");
    sc_trace(mVcdFile, i_3_reg_216, "i_3_reg_216");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, tmp_6_reg_221, "tmp_6_reg_221");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, j_fu_159_p2, "j_fu_159_p2");
    sc_trace(mVcdFile, j_reg_229, "j_reg_229");
    sc_trace(mVcdFile, ap_CS_fsm_state5, "ap_CS_fsm_state5");
    sc_trace(mVcdFile, exitcond_i_fu_153_p2, "exitcond_i_fu_153_p2");
    sc_trace(mVcdFile, i_reg_62, "i_reg_62");
    sc_trace(mVcdFile, exitcond1_i_fu_141_p2, "exitcond1_i_fu_141_p2");
    sc_trace(mVcdFile, i_i_reg_74, "i_i_reg_74");
    sc_trace(mVcdFile, j_i_reg_85, "j_i_reg_85");
    sc_trace(mVcdFile, ap_CS_fsm_state6, "ap_CS_fsm_state6");
    sc_trace(mVcdFile, tmp_s_fu_121_p1, "tmp_s_fu_121_p1");
    sc_trace(mVcdFile, sum_i2_cast_fu_132_p1, "sum_i2_cast_fu_132_p1");
    sc_trace(mVcdFile, sum2_i_cast_fu_172_p1, "sum2_i_cast_fu_172_p1");
    sc_trace(mVcdFile, sum4_i_cast_fu_184_p1, "sum4_i_cast_fu_184_p1");
    sc_trace(mVcdFile, tmp_fu_113_p3, "tmp_fu_113_p3");
    sc_trace(mVcdFile, sum_i2_fu_126_p2, "sum_i2_fu_126_p2");
    sc_trace(mVcdFile, i_i_cast_fu_137_p1, "i_i_cast_fu_137_p1");
    sc_trace(mVcdFile, sum2_i_fu_165_p3, "sum2_i_fu_165_p3");
    sc_trace(mVcdFile, sum4_i_fu_177_p3, "sum4_i_fu_177_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

aes128_shift_rows_hw::~aes128_shift_rows_hw() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void aes128_shift_rows_hw::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
         esl_seteq<1,1,1>(exitcond_i_fu_153_p2.read(), ap_const_lv1_1))) {
        i_i_reg_74 = i_3_reg_216.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
                esl_seteq<1,1,1>(exitcond_fu_97_p2.read(), ap_const_lv1_0))) {
        i_i_reg_74 = ap_const_lv2_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond1_i_fu_141_p2.read(), ap_const_lv1_1))) {
        i_reg_62 = i_2_reg_192.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_62 = ap_const_lv3_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        j_i_reg_85 = j_reg_229.read();
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_i_reg_85 = ap_const_lv2_0;
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_2_reg_192 = i_2_fu_103_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        i_3_reg_216 = i_3_fu_147_p2.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read())) {
        j_reg_229 = j_fu_159_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_97_p2.read(), ap_const_lv1_0))) {
        state_addr_1_reg_208 =  (sc_lv<4>) (sum_i2_cast_fu_132_p1.read());
        state_addr_reg_203 =  (sc_lv<4>) (tmp_s_fu_121_p1.read());
        tmp_5_reg_197 = tmp_5_fu_109_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        tmp_6_reg_221 = state_q0.read();
    }
}

void aes128_shift_rows_hw::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void aes128_shift_rows_hw::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void aes128_shift_rows_hw::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void aes128_shift_rows_hw::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void aes128_shift_rows_hw::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[4];
}

void aes128_shift_rows_hw::thread_ap_CS_fsm_state6() {
    ap_CS_fsm_state6 = ap_CS_fsm.read()[5];
}

void aes128_shift_rows_hw::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond_fu_97_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void aes128_shift_rows_hw::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void aes128_shift_rows_hw::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_97_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void aes128_shift_rows_hw::thread_exitcond1_i_fu_141_p2() {
    exitcond1_i_fu_141_p2 = (!i_i_cast_fu_137_p1.read().is_01() || !i_reg_62.read().is_01())? sc_lv<1>(): sc_lv<1>(i_i_cast_fu_137_p1.read() == i_reg_62.read());
}

void aes128_shift_rows_hw::thread_exitcond_fu_97_p2() {
    exitcond_fu_97_p2 = (!i_reg_62.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_62.read() == ap_const_lv3_4);
}

void aes128_shift_rows_hw::thread_exitcond_i_fu_153_p2() {
    exitcond_i_fu_153_p2 = (!j_i_reg_85.read().is_01() || !ap_const_lv2_3.is_01())? sc_lv<1>(): sc_lv<1>(j_i_reg_85.read() == ap_const_lv2_3);
}

void aes128_shift_rows_hw::thread_i_2_fu_103_p2() {
    i_2_fu_103_p2 = (!i_reg_62.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_62.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void aes128_shift_rows_hw::thread_i_3_fu_147_p2() {
    i_3_fu_147_p2 = (!i_i_reg_74.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(i_i_reg_74.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void aes128_shift_rows_hw::thread_i_i_cast_fu_137_p1() {
    i_i_cast_fu_137_p1 = esl_zext<3,2>(i_i_reg_74.read());
}

void aes128_shift_rows_hw::thread_j_fu_159_p2() {
    j_fu_159_p2 = (!j_i_reg_85.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<2>(): (sc_biguint<2>(j_i_reg_85.read()) + sc_biguint<2>(ap_const_lv2_1));
}

void aes128_shift_rows_hw::thread_state_address0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        state_address0 =  (sc_lv<4>) (sum4_i_cast_fu_184_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(exitcond_i_fu_153_p2.read(), ap_const_lv1_1))) {
        state_address0 = state_addr_1_reg_208.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_fu_153_p2.read()))) {
        state_address0 =  (sc_lv<4>) (sum2_i_cast_fu_172_p1.read());
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        state_address0 = state_addr_reg_203.read();
    } else {
        state_address0 = "XXXX";
    }
}

void aes128_shift_rows_hw::thread_state_ce0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_i_fu_153_p2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond_i_fu_153_p2.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        state_ce0 = ap_const_logic_1;
    } else {
        state_ce0 = ap_const_logic_0;
    }
}

void aes128_shift_rows_hw::thread_state_d0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read())) {
        state_d0 = state_q0.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
                esl_seteq<1,1,1>(exitcond_i_fu_153_p2.read(), ap_const_lv1_1))) {
        state_d0 = tmp_6_reg_221.read();
    } else {
        state_d0 =  (sc_lv<8>) ("XXXXXXXX");
    }
}

void aes128_shift_rows_hw::thread_state_we0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && 
          esl_seteq<1,1,1>(exitcond_i_fu_153_p2.read(), ap_const_lv1_1)) || 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state6.read()))) {
        state_we0 = ap_const_logic_1;
    } else {
        state_we0 = ap_const_logic_0;
    }
}

void aes128_shift_rows_hw::thread_sum2_i_cast_fu_172_p1() {
    sum2_i_cast_fu_172_p1 = esl_zext<64,4>(sum2_i_fu_165_p3.read());
}

void aes128_shift_rows_hw::thread_sum2_i_fu_165_p3() {
    sum2_i_fu_165_p3 = esl_concat<2,2>(tmp_5_reg_197.read(), j_fu_159_p2.read());
}

void aes128_shift_rows_hw::thread_sum4_i_cast_fu_184_p1() {
    sum4_i_cast_fu_184_p1 = esl_zext<64,4>(sum4_i_fu_177_p3.read());
}

void aes128_shift_rows_hw::thread_sum4_i_fu_177_p3() {
    sum4_i_fu_177_p3 = esl_concat<2,2>(tmp_5_reg_197.read(), j_i_reg_85.read());
}

void aes128_shift_rows_hw::thread_sum_i2_cast_fu_132_p1() {
    sum_i2_cast_fu_132_p1 = esl_zext<64,4>(sum_i2_fu_126_p2.read());
}

void aes128_shift_rows_hw::thread_sum_i2_fu_126_p2() {
    sum_i2_fu_126_p2 = (tmp_fu_113_p3.read() | ap_const_lv4_3);
}

void aes128_shift_rows_hw::thread_tmp_5_fu_109_p1() {
    tmp_5_fu_109_p1 = i_reg_62.read().range(2-1, 0);
}

void aes128_shift_rows_hw::thread_tmp_fu_113_p3() {
    tmp_fu_113_p3 = esl_concat<2,2>(tmp_5_fu_109_p1.read(), ap_const_lv2_0);
}

void aes128_shift_rows_hw::thread_tmp_s_fu_121_p1() {
    tmp_s_fu_121_p1 = esl_zext<64,4>(tmp_fu_113_p3.read());
}

void aes128_shift_rows_hw::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond_fu_97_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond1_i_fu_141_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        case 16 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state5.read()) && esl_seteq<1,1,1>(exitcond_i_fu_153_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state3;
            } else {
                ap_NS_fsm = ap_ST_fsm_state6;
            }
            break;
        case 32 : 
            ap_NS_fsm = ap_ST_fsm_state5;
            break;
        default : 
            ap_NS_fsm =  (sc_lv<6>) ("XXXXXX");
            break;
    }
}

}
