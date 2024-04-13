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
        expanded_key_offset,
        round_key_address0,
        round_key_ce0,
        round_key_we0,
        round_key_d0
);

parameter    ap_ST_fsm_state1 = 4'd1;
parameter    ap_ST_fsm_state2 = 4'd2;
parameter    ap_ST_fsm_state3 = 4'd4;
parameter    ap_ST_fsm_state4 = 4'd8;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [7:0] expanded_key_address0;
output   expanded_key_ce0;
input  [7:0] expanded_key_q0;
input  [9:0] expanded_key_offset;
output  [3:0] round_key_address0;
output   round_key_ce0;
output   round_key_we0;
output  [7:0] round_key_d0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg expanded_key_ce0;
reg round_key_ce0;
reg round_key_we0;

(* fsm_encoding = "none" *) reg   [3:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
wire   [7:0] tmp_14_fu_79_p1;
reg   [7:0] tmp_14_reg_167;
wire   [3:0] i_cast_fu_83_p1;
reg   [3:0] i_cast_reg_172;
wire    ap_CS_fsm_state2;
wire   [2:0] i_6_fu_93_p2;
reg   [2:0] i_6_reg_180;
wire   [3:0] tmp_fu_103_p3;
reg   [3:0] tmp_reg_185;
wire   [0:0] exitcond1_fu_87_p2;
wire   [2:0] j_4_fu_121_p2;
reg   [2:0] j_4_reg_193;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond_fu_115_p2;
wire   [3:0] tmp_12_fu_158_p2;
reg   [3:0] tmp_12_reg_203;
reg   [2:0] i_reg_57;
reg   [2:0] j_reg_68;
wire    ap_CS_fsm_state4;
wire   [63:0] sum_cast_fu_141_p1;
wire   [63:0] tmp_13_fu_163_p1;
wire   [1:0] tmp_15_fu_99_p1;
wire   [3:0] j_cast_fu_111_p1;
wire   [3:0] tmp_s_fu_127_p2;
wire   [7:0] tmp_23_cast_fu_132_p1;
wire   [7:0] sum_fu_136_p2;
wire   [1:0] tmp_16_fu_146_p1;
wire   [3:0] tmp_11_fu_150_p3;
reg   [3:0] ap_NS_fsm;

// power-on initialization
initial begin
#0 ap_CS_fsm = 4'd1;
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_115_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        i_reg_57 <= i_6_reg_180;
    end else if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        i_reg_57 <= 3'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_87_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        j_reg_68 <= 3'd0;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_68 <= j_4_reg_193;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        i_6_reg_180 <= i_6_fu_93_p2;
        i_cast_reg_172[2 : 0] <= i_cast_fu_83_p1[2 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        j_4_reg_193 <= j_4_fu_121_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_fu_115_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_12_reg_203 <= tmp_12_fu_158_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
        tmp_14_reg_167 <= tmp_14_fu_79_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond1_fu_87_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state2))) begin
        tmp_reg_185[3 : 2] <= tmp_fu_103_p3[3 : 2];
    end
end

always @ (*) begin
    if ((((exitcond1_fu_87_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((exitcond1_fu_87_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state3)) begin
        expanded_key_ce0 = 1'b1;
    end else begin
        expanded_key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        round_key_ce0 = 1'b1;
    end else begin
        round_key_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        round_key_we0 = 1'b1;
    end else begin
        round_key_we0 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((exitcond1_fu_87_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond_fu_115_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
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

assign exitcond1_fu_87_p2 = ((i_reg_57 == 3'd4) ? 1'b1 : 1'b0);

assign exitcond_fu_115_p2 = ((j_reg_68 == 3'd4) ? 1'b1 : 1'b0);

assign expanded_key_address0 = sum_cast_fu_141_p1;

assign i_6_fu_93_p2 = (i_reg_57 + 3'd1);

assign i_cast_fu_83_p1 = i_reg_57;

assign j_4_fu_121_p2 = (j_reg_68 + 3'd1);

assign j_cast_fu_111_p1 = j_reg_68;

assign round_key_address0 = tmp_13_fu_163_p1;

assign round_key_d0 = expanded_key_q0;

assign sum_cast_fu_141_p1 = sum_fu_136_p2;

assign sum_fu_136_p2 = (tmp_14_reg_167 + tmp_23_cast_fu_132_p1);

assign tmp_11_fu_150_p3 = {{tmp_16_fu_146_p1}, {2'd0}};

assign tmp_12_fu_158_p2 = (tmp_11_fu_150_p3 + i_cast_reg_172);

assign tmp_13_fu_163_p1 = tmp_12_reg_203;

assign tmp_14_fu_79_p1 = expanded_key_offset[7:0];

assign tmp_15_fu_99_p1 = i_reg_57[1:0];

assign tmp_16_fu_146_p1 = j_reg_68[1:0];

assign tmp_23_cast_fu_132_p1 = tmp_s_fu_127_p2;

assign tmp_fu_103_p3 = {{tmp_15_fu_99_p1}, {2'd0}};

assign tmp_s_fu_127_p2 = (j_cast_fu_111_p1 + tmp_reg_185);

always @ (posedge ap_clk) begin
    i_cast_reg_172[3] <= 1'b0;
    tmp_reg_185[1:0] <= 2'b00;
end

endmodule //aes128_extract_round