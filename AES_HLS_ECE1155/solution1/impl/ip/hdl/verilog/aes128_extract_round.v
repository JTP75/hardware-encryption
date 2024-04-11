// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.3
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module aes128_extract_round (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        expanded_key_address0,
        expanded_key_ce0,
        expanded_key_q0,
        expanded_key_address1,
        expanded_key_ce1,
        expanded_key_q1,
        expanded_key_offset,
        round_key_address0,
        round_key_ce0,
        round_key_we0,
        round_key_d0,
        round_key_address1,
        round_key_ce1,
        round_key_we1,
        round_key_d1
);

parameter    ap_ST_fsm_state1 = 9'd1;
parameter    ap_ST_fsm_state2 = 9'd2;
parameter    ap_ST_fsm_state3 = 9'd4;
parameter    ap_ST_fsm_state4 = 9'd8;
parameter    ap_ST_fsm_state5 = 9'd16;
parameter    ap_ST_fsm_state6 = 9'd32;
parameter    ap_ST_fsm_state7 = 9'd64;
parameter    ap_ST_fsm_state8 = 9'd128;
parameter    ap_ST_fsm_state9 = 9'd256;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] expanded_key_address0;
output   expanded_key_ce0;
input  [7:0] expanded_key_q0;
output  [7:0] expanded_key_address1;
output   expanded_key_ce1;
input  [7:0] expanded_key_q1;
input  [9:0] expanded_key_offset;
output  [3:0] round_key_address0;
output   round_key_ce0;
output   round_key_we0;
output  [7:0] round_key_d0;
output  [3:0] round_key_address1;
output   round_key_ce1;
output   round_key_we1;
output  [7:0] round_key_d1;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[7:0] expanded_key_address0;
reg expanded_key_ce0;
reg[7:0] expanded_key_address1;
reg expanded_key_ce1;
reg[3:0] round_key_address0;
reg round_key_ce0;
reg round_key_we0;
reg[3:0] round_key_address1;
reg round_key_ce1;
reg round_key_we1;

(* fsm_encoding = "none" *) reg   [8:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] tmp_fu_373_p1;
reg   [7:0] tmp_reg_533;
wire    ap_CS_fsm_state2;
wire    ap_CS_fsm_state3;
wire    ap_CS_fsm_state4;
wire    ap_CS_fsm_state5;
wire    ap_CS_fsm_state6;
wire    ap_CS_fsm_state7;
wire    ap_CS_fsm_state8;
wire   [63:0] expanded_key_offset_s_fu_368_p1;
wire   [63:0] sum_0_1_cast_fu_383_p1;
wire   [63:0] sum_0_2_cast_fu_393_p1;
wire   [63:0] sum_0_3_cast_fu_403_p1;
wire   [63:0] sum_1_cast_fu_413_p1;
wire   [63:0] sum_1_1_cast_fu_423_p1;
wire   [63:0] sum_1_2_cast_fu_433_p1;
wire   [63:0] sum_1_3_cast_fu_443_p1;
wire   [63:0] sum_2_cast_fu_453_p1;
wire   [63:0] sum_2_1_cast_fu_463_p1;
wire   [63:0] sum_2_2_cast_fu_473_p1;
wire   [63:0] sum_2_3_cast_fu_483_p1;
wire   [63:0] sum_3_cast_fu_493_p1;
wire   [63:0] sum_3_1_cast_fu_503_p1;
wire   [63:0] sum_3_2_cast_fu_513_p1;
wire   [63:0] sum_3_3_cast_fu_523_p1;
wire    ap_CS_fsm_state9;
wire   [7:0] sum_0_1_fu_377_p2;
wire   [7:0] sum_0_2_fu_388_p2;
wire   [7:0] sum_0_3_fu_398_p2;
wire   [7:0] sum_1_fu_408_p2;
wire   [7:0] sum_1_1_fu_418_p2;
wire   [7:0] sum_1_2_fu_428_p2;
wire   [7:0] sum_1_3_fu_438_p2;
wire   [7:0] sum_2_fu_448_p2;
wire   [7:0] sum_2_1_fu_458_p2;
wire   [7:0] sum_2_2_fu_468_p2;
wire   [7:0] sum_2_3_fu_478_p2;
wire   [7:0] sum_3_fu_488_p2;
wire   [7:0] sum_3_1_fu_498_p2;
wire   [7:0] sum_3_2_fu_508_p2;
wire   [7:0] sum_3_3_fu_518_p2;
reg   [8:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 9'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_reg_533 <= tmp_fu_373_p1;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state9) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        expanded_key_address0 = sum_3_2_cast_fu_513_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        expanded_key_address0 = sum_3_cast_fu_493_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        expanded_key_address0 = sum_2_2_cast_fu_473_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        expanded_key_address0 = sum_2_cast_fu_453_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        expanded_key_address0 = sum_1_2_cast_fu_433_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        expanded_key_address0 = sum_1_cast_fu_413_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        expanded_key_address0 = sum_0_2_cast_fu_393_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        expanded_key_address0 = expanded_key_offset_s_fu_368_p1;
    end else begin
        expanded_key_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state8)) begin
        expanded_key_address1 = sum_3_3_cast_fu_523_p1;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        expanded_key_address1 = sum_3_1_cast_fu_503_p1;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        expanded_key_address1 = sum_2_3_cast_fu_483_p1;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        expanded_key_address1 = sum_2_1_cast_fu_463_p1;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        expanded_key_address1 = sum_1_3_cast_fu_443_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        expanded_key_address1 = sum_1_1_cast_fu_423_p1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        expanded_key_address1 = sum_0_3_cast_fu_403_p1;
    end else if ((1'b1 == ap_CS_fsm_state1)) begin
        expanded_key_address1 = sum_0_1_cast_fu_383_p1;
    end else begin
        expanded_key_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        expanded_key_ce0 = 1'b1;
    end else begin
        expanded_key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7) | ((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        expanded_key_ce1 = 1'b1;
    end else begin
        expanded_key_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        round_key_address0 = 64'd11;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        round_key_address0 = 64'd3;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        round_key_address0 = 64'd10;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        round_key_address0 = 64'd2;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        round_key_address0 = 64'd9;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        round_key_address0 = 64'd1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        round_key_address0 = 64'd8;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        round_key_address0 = 64'd0;
    end else begin
        round_key_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state9)) begin
        round_key_address1 = 64'd15;
    end else if ((1'b1 == ap_CS_fsm_state8)) begin
        round_key_address1 = 64'd7;
    end else if ((1'b1 == ap_CS_fsm_state7)) begin
        round_key_address1 = 64'd14;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        round_key_address1 = 64'd6;
    end else if ((1'b1 == ap_CS_fsm_state5)) begin
        round_key_address1 = 64'd13;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        round_key_address1 = 64'd5;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        round_key_address1 = 64'd12;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        round_key_address1 = 64'd4;
    end else begin
        round_key_address1 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        round_key_ce0 = 1'b1;
    end else begin
        round_key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        round_key_ce1 = 1'b1;
    end else begin
        round_key_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        round_key_we0 = 1'b1;
    end else begin
        round_key_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state6) | (1'b1 == ap_CS_fsm_state5) | (1'b1 == ap_CS_fsm_state4) | (1'b1 == ap_CS_fsm_state3) | (1'b1 == ap_CS_fsm_state2) | (1'b1 == ap_CS_fsm_state9) | (1'b1 == ap_CS_fsm_state8) | (1'b1 == ap_CS_fsm_state7))) begin
        round_key_we1 = 1'b1;
    end else begin
        round_key_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            ap_NS_fsm = ap_ST_fsm_state4;
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_state7;
        end
        ap_ST_fsm_state7 : begin
            ap_NS_fsm = ap_ST_fsm_state8;
        end
        ap_ST_fsm_state8 : begin
            ap_NS_fsm = ap_ST_fsm_state9;
        end
        ap_ST_fsm_state9 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state7 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state8 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state9 = ap_CS_fsm[32'd8];

assign expanded_key_offset_s_fu_368_p1 = expanded_key_offset;

assign round_key_d0 = expanded_key_q0;

assign round_key_d1 = expanded_key_q1;

assign sum_0_1_cast_fu_383_p1 = sum_0_1_fu_377_p2;

assign sum_0_1_fu_377_p2 = (8'd1 + tmp_fu_373_p1);

assign sum_0_2_cast_fu_393_p1 = sum_0_2_fu_388_p2;

assign sum_0_2_fu_388_p2 = (8'd2 + tmp_reg_533);

assign sum_0_3_cast_fu_403_p1 = sum_0_3_fu_398_p2;

assign sum_0_3_fu_398_p2 = (8'd3 + tmp_reg_533);

assign sum_1_1_cast_fu_423_p1 = sum_1_1_fu_418_p2;

assign sum_1_1_fu_418_p2 = (8'd5 + tmp_reg_533);

assign sum_1_2_cast_fu_433_p1 = sum_1_2_fu_428_p2;

assign sum_1_2_fu_428_p2 = (8'd6 + tmp_reg_533);

assign sum_1_3_cast_fu_443_p1 = sum_1_3_fu_438_p2;

assign sum_1_3_fu_438_p2 = (8'd7 + tmp_reg_533);

assign sum_1_cast_fu_413_p1 = sum_1_fu_408_p2;

assign sum_1_fu_408_p2 = (8'd4 + tmp_reg_533);

assign sum_2_1_cast_fu_463_p1 = sum_2_1_fu_458_p2;

assign sum_2_1_fu_458_p2 = (8'd9 + tmp_reg_533);

assign sum_2_2_cast_fu_473_p1 = sum_2_2_fu_468_p2;

assign sum_2_2_fu_468_p2 = (8'd10 + tmp_reg_533);

assign sum_2_3_cast_fu_483_p1 = sum_2_3_fu_478_p2;

assign sum_2_3_fu_478_p2 = (8'd11 + tmp_reg_533);

assign sum_2_cast_fu_453_p1 = sum_2_fu_448_p2;

assign sum_2_fu_448_p2 = (8'd8 + tmp_reg_533);

assign sum_3_1_cast_fu_503_p1 = sum_3_1_fu_498_p2;

assign sum_3_1_fu_498_p2 = (8'd13 + tmp_reg_533);

assign sum_3_2_cast_fu_513_p1 = sum_3_2_fu_508_p2;

assign sum_3_2_fu_508_p2 = (8'd14 + tmp_reg_533);

assign sum_3_3_cast_fu_523_p1 = sum_3_3_fu_518_p2;

assign sum_3_3_fu_518_p2 = (8'd15 + tmp_reg_533);

assign sum_3_cast_fu_493_p1 = sum_3_fu_488_p2;

assign sum_3_fu_488_p2 = (8'd12 + tmp_reg_533);

assign tmp_fu_373_p1 = expanded_key_offset[7:0];

endmodule //aes128_extract_round
