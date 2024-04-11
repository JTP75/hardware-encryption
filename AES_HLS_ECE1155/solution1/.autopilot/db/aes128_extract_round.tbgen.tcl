set moduleName aes128_extract_round
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {aes128_extract_round}
set C_modelType { void 0 }
set C_modelArgList {
	{ expanded_key int 8 regular {array 176 { 1 1 } 1 1 }  }
	{ expanded_key_offset int 10 regular  }
	{ round_key int 8 regular {array 16 { 0 0 } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "expanded_key", "interface" : "memory", "bitwidth" : 8, "direction" : "READONLY"} , 
 	{ "Name" : "expanded_key_offset", "interface" : "wire", "bitwidth" : 10, "direction" : "READONLY"} , 
 	{ "Name" : "round_key", "interface" : "memory", "bitwidth" : 8, "direction" : "WRITEONLY"} ]}
# RTL Port declarations: 
set portNum 21
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ expanded_key_address0 sc_out sc_lv 8 signal 0 } 
	{ expanded_key_ce0 sc_out sc_logic 1 signal 0 } 
	{ expanded_key_q0 sc_in sc_lv 8 signal 0 } 
	{ expanded_key_address1 sc_out sc_lv 8 signal 0 } 
	{ expanded_key_ce1 sc_out sc_logic 1 signal 0 } 
	{ expanded_key_q1 sc_in sc_lv 8 signal 0 } 
	{ expanded_key_offset sc_in sc_lv 10 signal 1 } 
	{ round_key_address0 sc_out sc_lv 4 signal 2 } 
	{ round_key_ce0 sc_out sc_logic 1 signal 2 } 
	{ round_key_we0 sc_out sc_logic 1 signal 2 } 
	{ round_key_d0 sc_out sc_lv 8 signal 2 } 
	{ round_key_address1 sc_out sc_lv 4 signal 2 } 
	{ round_key_ce1 sc_out sc_logic 1 signal 2 } 
	{ round_key_we1 sc_out sc_logic 1 signal 2 } 
	{ round_key_d1 sc_out sc_lv 8 signal 2 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "expanded_key_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expanded_key", "role": "address0" }} , 
 	{ "name": "expanded_key_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "expanded_key", "role": "ce0" }} , 
 	{ "name": "expanded_key_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expanded_key", "role": "q0" }} , 
 	{ "name": "expanded_key_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expanded_key", "role": "address1" }} , 
 	{ "name": "expanded_key_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "expanded_key", "role": "ce1" }} , 
 	{ "name": "expanded_key_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "expanded_key", "role": "q1" }} , 
 	{ "name": "expanded_key_offset", "direction": "in", "datatype": "sc_lv", "bitwidth":10, "type": "signal", "bundle":{"name": "expanded_key_offset", "role": "default" }} , 
 	{ "name": "round_key_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "round_key", "role": "address0" }} , 
 	{ "name": "round_key_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "round_key", "role": "ce0" }} , 
 	{ "name": "round_key_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "round_key", "role": "we0" }} , 
 	{ "name": "round_key_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "round_key", "role": "d0" }} , 
 	{ "name": "round_key_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":4, "type": "signal", "bundle":{"name": "round_key", "role": "address1" }} , 
 	{ "name": "round_key_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "round_key", "role": "ce1" }} , 
 	{ "name": "round_key_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "round_key", "role": "we1" }} , 
 	{ "name": "round_key_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":8, "type": "signal", "bundle":{"name": "round_key", "role": "d1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "",
		"CDFG" : "aes128_extract_round",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "8", "EstimateLatencyMax" : "8",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "expanded_key", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "expanded_key_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "round_key", "Type" : "Memory", "Direction" : "O"}]}]}


set ArgLastReadFirstWriteLatency {
	aes128_extract_round {
		expanded_key {Type I LastRead 8 FirstWrite -1}
		expanded_key_offset {Type I LastRead 0 FirstWrite -1}
		round_key {Type O LastRead -1 FirstWrite 1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "8", "Max" : "8"}
	, {"Name" : "Interval", "Min" : "8", "Max" : "8"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	expanded_key { ap_memory {  { expanded_key_address0 mem_address 1 8 }  { expanded_key_ce0 mem_ce 1 1 }  { expanded_key_q0 mem_dout 0 8 }  { expanded_key_address1 MemPortADDR2 1 8 }  { expanded_key_ce1 MemPortCE2 1 1 }  { expanded_key_q1 MemPortDOUT2 0 8 } } }
	expanded_key_offset { ap_none {  { expanded_key_offset in_data 0 10 } } }
	round_key { ap_memory {  { round_key_address0 mem_address 1 4 }  { round_key_ce0 mem_ce 1 1 }  { round_key_we0 mem_we 1 1 }  { round_key_d0 mem_din 1 8 }  { round_key_address1 MemPortADDR2 1 4 }  { round_key_ce1 MemPortCE2 1 1 }  { round_key_we1 MemPortWE2 1 1 }  { round_key_d1 MemPortDIN2 1 8 } } }
}
