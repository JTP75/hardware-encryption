set moduleName aes128_encrypt_block_hw
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_none
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {aes128_encrypt_block_hw}
set C_modelType { void 0 }
set C_modelArgList {
	{ sin_V_data_V int 8 regular {axi_s 0 volatile  { sin Data } }  }
	{ sin_V_keep_V int 1 regular {axi_s 0 volatile  { sin Keep } }  }
	{ sin_V_strb_V int 1 regular {axi_s 0 volatile  { sin Strb } }  }
	{ sin_V_user_V int 1 regular {axi_s 0 volatile  { sin User } }  }
	{ sin_V_last_V int 1 regular {axi_s 0 volatile  { sin Last } }  }
	{ sin_V_id_V int 1 regular {axi_s 0 volatile  { sin ID } }  }
	{ sin_V_dest_V int 1 regular {axi_s 0 volatile  { sin Dest } }  }
	{ sout_V_data_V int 8 regular {axi_s 1 volatile  { sout Data } }  }
	{ sout_V_keep_V int 1 regular {axi_s 1 volatile  { sout Keep } }  }
	{ sout_V_strb_V int 1 regular {axi_s 1 volatile  { sout Strb } }  }
	{ sout_V_user_V int 1 regular {axi_s 1 volatile  { sout User } }  }
	{ sout_V_last_V int 1 regular {axi_s 1 volatile  { sout Last } }  }
	{ sout_V_id_V int 1 regular {axi_s 1 volatile  { sout ID } }  }
	{ sout_V_dest_V int 1 regular {axi_s 1 volatile  { sout Dest } }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "sin_V_data_V", "interface" : "axis", "bitwidth" : 8, "direction" : "READONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sin.V.data.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sin_V_keep_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sin.V.keep.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sin_V_strb_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sin.V.strb.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sin_V_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sin.V.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sin_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sin.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sin_V_id_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sin.V.id.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sin_V_dest_V", "interface" : "axis", "bitwidth" : 1, "direction" : "READONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sin.V.dest.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_data_V", "interface" : "axis", "bitwidth" : 8, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":7,"cElement": [{"cName": "sout.V.data.V","cData": "int8","bit_use": { "low": 0,"up": 7},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_keep_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sout.V.keep.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_strb_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sout.V.strb.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_user_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sout.V.user.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_last_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sout.V.last.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_id_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sout.V.id.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "sout_V_dest_V", "interface" : "axis", "bitwidth" : 1, "direction" : "WRITEONLY", "bitSlice":[{"low":0,"up":0,"cElement": [{"cName": "sout.V.dest.V","cData": "uint1","bit_use": { "low": 0,"up": 0},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 20
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst_n sc_in sc_logic 1 reset -1 active_low_sync } 
	{ sin_TDATA sc_in sc_lv 8 signal 0 } 
	{ sin_TVALID sc_in sc_logic 1 invld 6 } 
	{ sin_TREADY sc_out sc_logic 1 inacc 6 } 
	{ sin_TKEEP sc_in sc_lv 1 signal 1 } 
	{ sin_TSTRB sc_in sc_lv 1 signal 2 } 
	{ sin_TUSER sc_in sc_lv 1 signal 3 } 
	{ sin_TLAST sc_in sc_lv 1 signal 4 } 
	{ sin_TID sc_in sc_lv 1 signal 5 } 
	{ sin_TDEST sc_in sc_lv 1 signal 6 } 
	{ sout_TDATA sc_out sc_lv 8 signal 7 } 
	{ sout_TVALID sc_out sc_logic 1 outvld 13 } 
	{ sout_TREADY sc_in sc_logic 1 outacc 7 } 
	{ sout_TKEEP sc_out sc_lv 1 signal 8 } 
	{ sout_TSTRB sc_out sc_lv 1 signal 9 } 
	{ sout_TUSER sc_out sc_lv 1 signal 10 } 
	{ sout_TLAST sc_out sc_lv 1 signal 11 } 
	{ sout_TID sc_out sc_lv 1 signal 12 } 
	{ sout_TDEST sc_out sc_lv 1 signal 13 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst_n", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst_n", "role": "default" }} , 
 	{ "name": "sin_TDATA", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sin_V_data_V", "role": "default" }} , 
 	{ "name": "sin_TVALID", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "invld", "bundle":{"name": "sin_V_dest_V", "role": "default" }} , 
 	{ "name": "sin_TREADY", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "inacc", "bundle":{"name": "sin_V_dest_V", "role": "default" }} , 
 	{ "name": "sin_TKEEP", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sin_V_keep_V", "role": "default" }} , 
 	{ "name": "sin_TSTRB", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sin_V_strb_V", "role": "default" }} , 
 	{ "name": "sin_TUSER", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sin_V_user_V", "role": "default" }} , 
 	{ "name": "sin_TLAST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sin_V_last_V", "role": "default" }} , 
 	{ "name": "sin_TID", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sin_V_id_V", "role": "default" }} , 
 	{ "name": "sin_TDEST", "direction": "in", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sin_V_dest_V", "role": "default" }} , 
 	{ "name": "sout_TDATA", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "sout_V_data_V", "role": "default" }} , 
 	{ "name": "sout_TVALID", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "outvld", "bundle":{"name": "sout_V_dest_V", "role": "default" }} , 
 	{ "name": "sout_TREADY", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "outacc", "bundle":{"name": "sout_V_data_V", "role": "default" }} , 
 	{ "name": "sout_TKEEP", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sout_V_keep_V", "role": "default" }} , 
 	{ "name": "sout_TSTRB", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sout_V_strb_V", "role": "default" }} , 
 	{ "name": "sout_TUSER", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sout_V_user_V", "role": "default" }} , 
 	{ "name": "sout_TLAST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sout_V_last_V", "role": "default" }} , 
 	{ "name": "sout_TID", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sout_V_id_V", "role": "default" }} , 
 	{ "name": "sout_TDEST", "direction": "out", "datatype": "sc_lv", "bitwidth":1, "type": "signal", "bundle":{"name": "sout_V_dest_V", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "21", "31", "32", "33"],
		"CDFG" : "aes128_encrypt_block_hw",
		"Protocol" : "ap_ctrl_none",
		"ControlExist" : "0", "ap_start" : "0", "ap_ready" : "0", "ap_done" : "0", "ap_continue" : "0", "ap_idle" : "0",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "3802", "EstimateLatencyMax" : "5650",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_mix_columns_h_fu_308"},
			{"State" : "ap_ST_fsm_state4", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_expand_key_hw_fu_313"},
			{"State" : "ap_ST_fsm_state14", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_shift_rows_hw_fu_324"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_shift_rows_hw_fu_324"},
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_extract_round_fu_329"},
			{"State" : "ap_ST_fsm_state10", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_extract_round_fu_329"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_extract_round_fu_329"},
			{"State" : "ap_ST_fsm_state8", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_add_round_key_fu_338"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_add_round_key_fu_338"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_add_round_key_fu_338"}],
		"Port" : [
			{"Name" : "sin_V_data_V", "Type" : "Axis", "Direction" : "I",
				"BlockSignal" : [
					{"Name" : "sin_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "sin_V_keep_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "sin_V_strb_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "sin_V_user_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "sin_V_last_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "sin_V_id_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "sin_V_dest_V", "Type" : "Axis", "Direction" : "I"},
			{"Name" : "sout_V_data_V", "Type" : "Axis", "Direction" : "O",
				"BlockSignal" : [
					{"Name" : "sout_TDATA_blk_n", "Type" : "RtlSignal"}]},
			{"Name" : "sout_V_keep_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "sout_V_strb_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "sout_V_user_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "sout_V_last_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "sout_V_id_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "sout_V_dest_V", "Type" : "Axis", "Direction" : "O"},
			{"Name" : "key", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_aes128_expand_key_hw_fu_313", "Port" : "key"}]},
			{"Name" : "sbox_hw", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_aes128_expand_key_hw_fu_313", "Port" : "sbox_hw"}]},
			{"Name" : "rcon_hw", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "21", "SubInstance" : "grp_aes128_expand_key_hw_fu_313", "Port" : "rcon_hw"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.sbox_hw_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.state_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.round_key_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.expanded_key_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308", "Parent" : "0", "Child" : ["6", "20"],
		"CDFG" : "aes128_mix_columns_h",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "141", "EstimateLatencyMax" : "141",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state6", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_aes128_mix_column_hw_fu_246"}],
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246", "Parent" : "5", "Child" : ["7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19"],
		"CDFG" : "aes128_mix_column_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "15", "EstimateLatencyMax" : "15",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_89"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_96"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_103"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_110"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_117"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_124"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_131"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_138"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_145"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_152"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_159"},
			{"State" : "ap_ST_fsm_state3", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_gmul_hw_fu_166"}],
		"Port" : [
			{"Name" : "column_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "column_1_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "column_2_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "column_3_read", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "7", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_89", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "8", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_96", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "9", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_103", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "10", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_110", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "11", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_117", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_124", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_131", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_138", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_145", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_152", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_159", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.grp_gmul_hw_fu_166", "Parent" : "6",
		"CDFG" : "gmul_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "9",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "a", "Type" : "None", "Direction" : "I"},
			{"Name" : "b", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.grp_aes128_mix_column_hw_fu_246.aes128_encrypt_blfYi_U21", "Parent" : "6"},
	{"ID" : "20", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_mix_columns_h_fu_308.aes128_encrypt_blfYi_U26", "Parent" : "5"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313", "Parent" : "0", "Child" : ["22", "23", "24", "25", "26", "27", "28", "29", "30"],
		"CDFG" : "aes128_expand_key_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "994", "EstimateLatencyMax" : "1794",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "expanded_key", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "sbox_hw", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "rcon_hw", "Type" : "Memory", "Direction" : "I"}]},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.key_U", "Parent" : "21"},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.sbox_hw_U", "Parent" : "21"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.rcon_hw_U", "Parent" : "21"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.aes128_encrypt_bleOg_U1", "Parent" : "21"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.aes128_encrypt_blfYi_U2", "Parent" : "21"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.aes128_encrypt_blfYi_U3", "Parent" : "21"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.aes128_encrypt_blfYi_U4", "Parent" : "21"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.aes128_encrypt_blfYi_U5", "Parent" : "21"},
	{"ID" : "30", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_aes128_expand_key_hw_fu_313.aes128_encrypt_blfYi_U6", "Parent" : "21"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_aes128_shift_rows_hw_fu_324", "Parent" : "0",
		"CDFG" : "aes128_shift_rows_hw",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "9", "EstimateLatencyMax" : "117",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"}]},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_aes128_extract_round_fu_329", "Parent" : "0",
		"CDFG" : "aes128_extract_round",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "41", "EstimateLatencyMax" : "41",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "expanded_key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "expanded_key_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "round_key", "Type" : "Memory", "Direction" : "O"}]},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_aes128_add_round_key_fu_338", "Parent" : "0",
		"CDFG" : "aes128_add_round_key",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "33", "EstimateLatencyMax" : "33",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "state", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "round_key", "Type" : "Memory", "Direction" : "I"}]}]}


set ArgLastReadFirstWriteLatency {
	aes128_encrypt_block_hw {
		sin_V_data_V {Type I LastRead 2 FirstWrite -1}
		sin_V_keep_V {Type I LastRead 2 FirstWrite -1}
		sin_V_strb_V {Type I LastRead 2 FirstWrite -1}
		sin_V_user_V {Type I LastRead 2 FirstWrite -1}
		sin_V_last_V {Type I LastRead 2 FirstWrite -1}
		sin_V_id_V {Type I LastRead 2 FirstWrite -1}
		sin_V_dest_V {Type I LastRead 2 FirstWrite -1}
		sout_V_data_V {Type O LastRead -1 FirstWrite 14}
		sout_V_keep_V {Type O LastRead -1 FirstWrite 14}
		sout_V_strb_V {Type O LastRead -1 FirstWrite 14}
		sout_V_user_V {Type O LastRead -1 FirstWrite 14}
		sout_V_last_V {Type O LastRead -1 FirstWrite 14}
		sout_V_id_V {Type O LastRead -1 FirstWrite 14}
		sout_V_dest_V {Type O LastRead -1 FirstWrite 14}
		key {Type I LastRead -1 FirstWrite -1}
		sbox_hw {Type I LastRead -1 FirstWrite -1}
		rcon_hw {Type I LastRead -1 FirstWrite -1}}
	aes128_mix_columns_h {
		state {Type IO LastRead 2 FirstWrite 4}}
	aes128_mix_column_hw {
		column_0_read {Type I LastRead 0 FirstWrite -1}
		column_1_read {Type I LastRead 0 FirstWrite -1}
		column_2_read {Type I LastRead 0 FirstWrite -1}
		column_3_read {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	gmul_hw {
		a {Type I LastRead 0 FirstWrite -1}
		b {Type I LastRead 0 FirstWrite -1}}
	aes128_expand_key_hw {
		expanded_key {Type IO LastRead 7 FirstWrite 2}
		key {Type I LastRead -1 FirstWrite -1}
		sbox_hw {Type I LastRead -1 FirstWrite -1}
		rcon_hw {Type I LastRead -1 FirstWrite -1}}
	aes128_shift_rows_hw {
		state {Type IO LastRead 4 FirstWrite 4}}
	aes128_extract_round {
		expanded_key {Type I LastRead 2 FirstWrite -1}
		expanded_key_offset {Type I LastRead 0 FirstWrite -1}
		round_key {Type O LastRead -1 FirstWrite 3}}
	aes128_add_round_key {
		state {Type IO LastRead 1 FirstWrite 2}
		round_key {Type I LastRead 1 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "3802", "Max" : "5650"}
	, {"Name" : "Interval", "Min" : "3803", "Max" : "5651"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	sin_V_data_V { axis {  { sin_TDATA in_data 0 8 } } }
	sin_V_keep_V { axis {  { sin_TKEEP in_data 0 1 } } }
	sin_V_strb_V { axis {  { sin_TSTRB in_data 0 1 } } }
	sin_V_user_V { axis {  { sin_TUSER in_data 0 1 } } }
	sin_V_last_V { axis {  { sin_TLAST in_data 0 1 } } }
	sin_V_id_V { axis {  { sin_TID in_data 0 1 } } }
	sin_V_dest_V { axis {  { sin_TVALID in_vld 0 1 }  { sin_TREADY in_acc 1 1 }  { sin_TDEST in_data 0 1 } } }
	sout_V_data_V { axis {  { sout_TDATA out_data 1 8 }  { sout_TREADY out_acc 0 1 } } }
	sout_V_keep_V { axis {  { sout_TKEEP out_data 1 1 } } }
	sout_V_strb_V { axis {  { sout_TSTRB out_data 1 1 } } }
	sout_V_user_V { axis {  { sout_TUSER out_data 1 1 } } }
	sout_V_last_V { axis {  { sout_TLAST out_data 1 1 } } }
	sout_V_id_V { axis {  { sout_TID out_data 1 1 } } }
	sout_V_dest_V { axis {  { sout_TVALID out_vld 1 1 }  { sout_TDEST out_data 1 1 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
