set_property SRC_FILE_INFO {cfile:C:/Users/pacel/Documents/Spring_2023/ECE_1195/git/system.tcl rfile:../../../../../../../Spring_2023/ECE_1195/git/system.tcl id:1 unmanaged:yes} [current_design]
set_property src_info {type:XDC file:1 line:115 export:INPUT save:NONE read:READ} [current_design]
if { 2 != 0 } {
catch {common::send_msg_id "BD_TCL-114" "ERROR" Design <system> already exists in your project, please set the variable <design_name> to another value.}
return 2
}
set_property src_info {type:XDC file:1 line:1163 export:INPUT save:NONE read:READ} [current_design]
create_root_design ""
