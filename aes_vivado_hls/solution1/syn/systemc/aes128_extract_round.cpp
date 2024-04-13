// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#include "aes128_extract_round.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

const sc_logic aes128_extract_round::ap_const_logic_1 = sc_dt::Log_1;
const sc_logic aes128_extract_round::ap_const_logic_0 = sc_dt::Log_0;
const sc_lv<4> aes128_extract_round::ap_ST_fsm_state1 = "1";
const sc_lv<4> aes128_extract_round::ap_ST_fsm_state2 = "10";
const sc_lv<4> aes128_extract_round::ap_ST_fsm_state3 = "100";
const sc_lv<4> aes128_extract_round::ap_ST_fsm_state4 = "1000";
const sc_lv<32> aes128_extract_round::ap_const_lv32_0 = "00000000000000000000000000000000";
const sc_lv<32> aes128_extract_round::ap_const_lv32_1 = "1";
const sc_lv<1> aes128_extract_round::ap_const_lv1_0 = "0";
const sc_lv<32> aes128_extract_round::ap_const_lv32_2 = "10";
const sc_lv<3> aes128_extract_round::ap_const_lv3_0 = "000";
const sc_lv<1> aes128_extract_round::ap_const_lv1_1 = "1";
const sc_lv<32> aes128_extract_round::ap_const_lv32_3 = "11";
const sc_lv<3> aes128_extract_round::ap_const_lv3_4 = "100";
const sc_lv<3> aes128_extract_round::ap_const_lv3_1 = "1";
const sc_lv<2> aes128_extract_round::ap_const_lv2_0 = "00";
const bool aes128_extract_round::ap_const_boolean_1 = true;

aes128_extract_round::aes128_extract_round(sc_module_name name) : sc_module(name), mVcdFile(0) {

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

    SC_METHOD(thread_ap_done);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_87_p2 );

    SC_METHOD(thread_ap_idle);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm_state1 );

    SC_METHOD(thread_ap_ready);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_87_p2 );

    SC_METHOD(thread_exitcond1_fu_87_p2);
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( i_reg_57 );

    SC_METHOD(thread_exitcond_fu_115_p2);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( j_reg_68 );

    SC_METHOD(thread_expanded_key_address0);
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( sum_cast_fu_141_p1 );

    SC_METHOD(thread_expanded_key_ce0);
    sensitive << ( ap_CS_fsm_state3 );

    SC_METHOD(thread_i_6_fu_93_p2);
    sensitive << ( i_reg_57 );

    SC_METHOD(thread_i_cast_fu_83_p1);
    sensitive << ( i_reg_57 );

    SC_METHOD(thread_j_4_fu_121_p2);
    sensitive << ( j_reg_68 );

    SC_METHOD(thread_j_cast_fu_111_p1);
    sensitive << ( j_reg_68 );

    SC_METHOD(thread_round_key_address0);
    sensitive << ( ap_CS_fsm_state4 );
    sensitive << ( tmp_13_fu_163_p1 );

    SC_METHOD(thread_round_key_ce0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_round_key_d0);
    sensitive << ( expanded_key_q0 );
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_round_key_we0);
    sensitive << ( ap_CS_fsm_state4 );

    SC_METHOD(thread_sum_cast_fu_141_p1);
    sensitive << ( sum_fu_136_p2 );

    SC_METHOD(thread_sum_fu_136_p2);
    sensitive << ( tmp_14_reg_167 );
    sensitive << ( tmp_23_cast_fu_132_p1 );

    SC_METHOD(thread_tmp_11_fu_150_p3);
    sensitive << ( tmp_16_fu_146_p1 );

    SC_METHOD(thread_tmp_12_fu_158_p2);
    sensitive << ( i_cast_reg_172 );
    sensitive << ( tmp_11_fu_150_p3 );

    SC_METHOD(thread_tmp_13_fu_163_p1);
    sensitive << ( tmp_12_reg_203 );

    SC_METHOD(thread_tmp_14_fu_79_p1);
    sensitive << ( expanded_key_offset );

    SC_METHOD(thread_tmp_15_fu_99_p1);
    sensitive << ( i_reg_57 );

    SC_METHOD(thread_tmp_16_fu_146_p1);
    sensitive << ( j_reg_68 );

    SC_METHOD(thread_tmp_23_cast_fu_132_p1);
    sensitive << ( tmp_s_fu_127_p2 );

    SC_METHOD(thread_tmp_fu_103_p3);
    sensitive << ( tmp_15_fu_99_p1 );

    SC_METHOD(thread_tmp_s_fu_127_p2);
    sensitive << ( tmp_reg_185 );
    sensitive << ( j_cast_fu_111_p1 );

    SC_METHOD(thread_ap_NS_fsm);
    sensitive << ( ap_start );
    sensitive << ( ap_CS_fsm );
    sensitive << ( ap_CS_fsm_state1 );
    sensitive << ( ap_CS_fsm_state2 );
    sensitive << ( exitcond1_fu_87_p2 );
    sensitive << ( ap_CS_fsm_state3 );
    sensitive << ( exitcond_fu_115_p2 );

    ap_CS_fsm = "0001";
    static int apTFileNum = 0;
    stringstream apTFilenSS;
    apTFilenSS << "aes128_extract_round_sc_trace_" << apTFileNum ++;
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
    sc_trace(mVcdFile, expanded_key_address0, "(port)expanded_key_address0");
    sc_trace(mVcdFile, expanded_key_ce0, "(port)expanded_key_ce0");
    sc_trace(mVcdFile, expanded_key_q0, "(port)expanded_key_q0");
    sc_trace(mVcdFile, expanded_key_offset, "(port)expanded_key_offset");
    sc_trace(mVcdFile, round_key_address0, "(port)round_key_address0");
    sc_trace(mVcdFile, round_key_ce0, "(port)round_key_ce0");
    sc_trace(mVcdFile, round_key_we0, "(port)round_key_we0");
    sc_trace(mVcdFile, round_key_d0, "(port)round_key_d0");
#endif
#ifdef __HLS_TRACE_LEVEL_INT__
    sc_trace(mVcdFile, ap_CS_fsm, "ap_CS_fsm");
    sc_trace(mVcdFile, ap_CS_fsm_state1, "ap_CS_fsm_state1");
    sc_trace(mVcdFile, tmp_14_fu_79_p1, "tmp_14_fu_79_p1");
    sc_trace(mVcdFile, tmp_14_reg_167, "tmp_14_reg_167");
    sc_trace(mVcdFile, i_cast_fu_83_p1, "i_cast_fu_83_p1");
    sc_trace(mVcdFile, i_cast_reg_172, "i_cast_reg_172");
    sc_trace(mVcdFile, ap_CS_fsm_state2, "ap_CS_fsm_state2");
    sc_trace(mVcdFile, i_6_fu_93_p2, "i_6_fu_93_p2");
    sc_trace(mVcdFile, i_6_reg_180, "i_6_reg_180");
    sc_trace(mVcdFile, tmp_fu_103_p3, "tmp_fu_103_p3");
    sc_trace(mVcdFile, tmp_reg_185, "tmp_reg_185");
    sc_trace(mVcdFile, exitcond1_fu_87_p2, "exitcond1_fu_87_p2");
    sc_trace(mVcdFile, j_4_fu_121_p2, "j_4_fu_121_p2");
    sc_trace(mVcdFile, j_4_reg_193, "j_4_reg_193");
    sc_trace(mVcdFile, ap_CS_fsm_state3, "ap_CS_fsm_state3");
    sc_trace(mVcdFile, exitcond_fu_115_p2, "exitcond_fu_115_p2");
    sc_trace(mVcdFile, tmp_12_fu_158_p2, "tmp_12_fu_158_p2");
    sc_trace(mVcdFile, tmp_12_reg_203, "tmp_12_reg_203");
    sc_trace(mVcdFile, i_reg_57, "i_reg_57");
    sc_trace(mVcdFile, j_reg_68, "j_reg_68");
    sc_trace(mVcdFile, ap_CS_fsm_state4, "ap_CS_fsm_state4");
    sc_trace(mVcdFile, sum_cast_fu_141_p1, "sum_cast_fu_141_p1");
    sc_trace(mVcdFile, tmp_13_fu_163_p1, "tmp_13_fu_163_p1");
    sc_trace(mVcdFile, tmp_15_fu_99_p1, "tmp_15_fu_99_p1");
    sc_trace(mVcdFile, j_cast_fu_111_p1, "j_cast_fu_111_p1");
    sc_trace(mVcdFile, tmp_s_fu_127_p2, "tmp_s_fu_127_p2");
    sc_trace(mVcdFile, tmp_23_cast_fu_132_p1, "tmp_23_cast_fu_132_p1");
    sc_trace(mVcdFile, sum_fu_136_p2, "sum_fu_136_p2");
    sc_trace(mVcdFile, tmp_16_fu_146_p1, "tmp_16_fu_146_p1");
    sc_trace(mVcdFile, tmp_11_fu_150_p3, "tmp_11_fu_150_p3");
    sc_trace(mVcdFile, ap_NS_fsm, "ap_NS_fsm");
#endif

    }
}

aes128_extract_round::~aes128_extract_round() {
    if (mVcdFile) 
        sc_close_vcd_trace_file(mVcdFile);

}

void aes128_extract_round::thread_ap_clk_no_reset_() {
    if ( ap_rst.read() == ap_const_logic_1) {
        ap_CS_fsm = ap_ST_fsm_state1;
    } else {
        ap_CS_fsm = ap_NS_fsm.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && 
         esl_seteq<1,1,1>(exitcond_fu_115_p2.read(), ap_const_lv1_1))) {
        i_reg_57 = i_6_reg_180.read();
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && 
                esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        i_reg_57 = ap_const_lv3_0;
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_87_p2.read(), ap_const_lv1_0))) {
        j_reg_68 = ap_const_lv3_0;
    } else if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        j_reg_68 = j_4_reg_193.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read())) {
        i_6_reg_180 = i_6_fu_93_p2.read();
        i_cast_reg_172 = i_cast_fu_83_p1.read();
    }
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        j_4_reg_193 = j_4_fu_121_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_fu_115_p2.read()))) {
        tmp_12_reg_203 = tmp_12_fu_158_p2.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
        tmp_14_reg_167 = tmp_14_fu_79_p1.read();
    }
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_87_p2.read(), ap_const_lv1_0))) {
        tmp_reg_185 = tmp_fu_103_p3.read();
    }
}

void aes128_extract_round::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void aes128_extract_round::thread_ap_CS_fsm_state2() {
    ap_CS_fsm_state2 = ap_CS_fsm.read()[1];
}

void aes128_extract_round::thread_ap_CS_fsm_state3() {
    ap_CS_fsm_state3 = ap_CS_fsm.read()[2];
}

void aes128_extract_round::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[3];
}

void aes128_extract_round::thread_ap_done() {
    if (((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
          esl_seteq<1,1,1>(exitcond1_fu_87_p2.read(), ap_const_lv1_1)))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void aes128_extract_round::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void aes128_extract_round::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && 
         esl_seteq<1,1,1>(exitcond1_fu_87_p2.read(), ap_const_lv1_1))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void aes128_extract_round::thread_exitcond1_fu_87_p2() {
    exitcond1_fu_87_p2 = (!i_reg_57.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(i_reg_57.read() == ap_const_lv3_4);
}

void aes128_extract_round::thread_exitcond_fu_115_p2() {
    exitcond_fu_115_p2 = (!j_reg_68.read().is_01() || !ap_const_lv3_4.is_01())? sc_lv<1>(): sc_lv<1>(j_reg_68.read() == ap_const_lv3_4);
}

void aes128_extract_round::thread_expanded_key_address0() {
    expanded_key_address0 =  (sc_lv<8>) (sum_cast_fu_141_p1.read());
}

void aes128_extract_round::thread_expanded_key_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read())) {
        expanded_key_ce0 = ap_const_logic_1;
    } else {
        expanded_key_ce0 = ap_const_logic_0;
    }
}

void aes128_extract_round::thread_i_6_fu_93_p2() {
    i_6_fu_93_p2 = (!i_reg_57.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(i_reg_57.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void aes128_extract_round::thread_i_cast_fu_83_p1() {
    i_cast_fu_83_p1 = esl_zext<4,3>(i_reg_57.read());
}

void aes128_extract_round::thread_j_4_fu_121_p2() {
    j_4_fu_121_p2 = (!j_reg_68.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(j_reg_68.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void aes128_extract_round::thread_j_cast_fu_111_p1() {
    j_cast_fu_111_p1 = esl_zext<4,3>(j_reg_68.read());
}

void aes128_extract_round::thread_round_key_address0() {
    round_key_address0 =  (sc_lv<4>) (tmp_13_fu_163_p1.read());
}

void aes128_extract_round::thread_round_key_ce0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        round_key_ce0 = ap_const_logic_1;
    } else {
        round_key_ce0 = ap_const_logic_0;
    }
}

void aes128_extract_round::thread_round_key_d0() {
    round_key_d0 = expanded_key_q0.read();
}

void aes128_extract_round::thread_round_key_we0() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state4.read())) {
        round_key_we0 = ap_const_logic_1;
    } else {
        round_key_we0 = ap_const_logic_0;
    }
}

void aes128_extract_round::thread_sum_cast_fu_141_p1() {
    sum_cast_fu_141_p1 = esl_zext<64,8>(sum_fu_136_p2.read());
}

void aes128_extract_round::thread_sum_fu_136_p2() {
    sum_fu_136_p2 = (!tmp_14_reg_167.read().is_01() || !tmp_23_cast_fu_132_p1.read().is_01())? sc_lv<8>(): (sc_biguint<8>(tmp_14_reg_167.read()) + sc_biguint<8>(tmp_23_cast_fu_132_p1.read()));
}

void aes128_extract_round::thread_tmp_11_fu_150_p3() {
    tmp_11_fu_150_p3 = esl_concat<2,2>(tmp_16_fu_146_p1.read(), ap_const_lv2_0);
}

void aes128_extract_round::thread_tmp_12_fu_158_p2() {
    tmp_12_fu_158_p2 = (!tmp_11_fu_150_p3.read().is_01() || !i_cast_reg_172.read().is_01())? sc_lv<4>(): (sc_biguint<4>(tmp_11_fu_150_p3.read()) + sc_biguint<4>(i_cast_reg_172.read()));
}

void aes128_extract_round::thread_tmp_13_fu_163_p1() {
    tmp_13_fu_163_p1 = esl_zext<64,4>(tmp_12_reg_203.read());
}

void aes128_extract_round::thread_tmp_14_fu_79_p1() {
    tmp_14_fu_79_p1 = expanded_key_offset.read().range(8-1, 0);
}

void aes128_extract_round::thread_tmp_15_fu_99_p1() {
    tmp_15_fu_99_p1 = i_reg_57.read().range(2-1, 0);
}

void aes128_extract_round::thread_tmp_16_fu_146_p1() {
    tmp_16_fu_146_p1 = j_reg_68.read().range(2-1, 0);
}

void aes128_extract_round::thread_tmp_23_cast_fu_132_p1() {
    tmp_23_cast_fu_132_p1 = esl_zext<8,4>(tmp_s_fu_127_p2.read());
}

void aes128_extract_round::thread_tmp_fu_103_p3() {
    tmp_fu_103_p3 = esl_concat<2,2>(tmp_15_fu_99_p1.read(), ap_const_lv2_0);
}

void aes128_extract_round::thread_tmp_s_fu_127_p2() {
    tmp_s_fu_127_p2 = (!j_cast_fu_111_p1.read().is_01() || !tmp_reg_185.read().is_01())? sc_lv<4>(): (sc_biguint<4>(j_cast_fu_111_p1.read()) + sc_biguint<4>(tmp_reg_185.read()));
}

void aes128_extract_round::thread_ap_NS_fsm() {
    switch (ap_CS_fsm.read().to_uint64()) {
        case 1 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()) && esl_seteq<1,1,1>(ap_start.read(), ap_const_logic_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state1;
            }
            break;
        case 2 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state2.read()) && esl_seteq<1,1,1>(exitcond1_fu_87_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state1;
            } else {
                ap_NS_fsm = ap_ST_fsm_state3;
            }
            break;
        case 4 : 
            if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state3.read()) && esl_seteq<1,1,1>(exitcond_fu_115_p2.read(), ap_const_lv1_1))) {
                ap_NS_fsm = ap_ST_fsm_state2;
            } else {
                ap_NS_fsm = ap_ST_fsm_state4;
            }
            break;
        case 8 : 
            ap_NS_fsm = ap_ST_fsm_state3;
            break;
        default : 
            ap_NS_fsm = "XXXX";
            break;
    }
}

}
