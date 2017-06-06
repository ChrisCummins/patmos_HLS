# ==============================================================
# File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
# Version: 2016.4
# Copyright (C) 1986-2016 Xilinx, Inc. All Rights Reserved.
# 
# ==============================================================

set ::env(LD_LIBRARY_PATH) $::env(LD_LIBRARY_PATH):/home/patmos/Xilinx/Vivado_HLS/2016.4/lnx64/tools/fpo_v7_0
set ::env(LD_LIBRARY_PATH) $::env(LD_LIBRARY_PATH):/home/patmos/Xilinx/Vivado_HLS/2016.4/lnx64/tools/opencv
set ::env(LD_LIBRARY_PATH) $::env(LD_LIBRARY_PATH):/home/patmos/Xilinx/Vivado_HLS/2016.4/lnx64/tools/fft_v9_0
set ::env(LD_LIBRARY_PATH) $::env(LD_LIBRARY_PATH):/home/patmos/Xilinx/Vivado_HLS/2016.4/lnx64/tools/fir_v7_0
set ::env(LD_LIBRARY_PATH) $::env(LD_LIBRARY_PATH):/home/patmos/Xilinx/Vivado_HLS/2016.4/lnx64/tools/dds_v6_0
set ::env(LD_LIBRARY_PATH) $::env(LD_LIBRARY_PATH):/usr/lib/x86_64-linux-gnu
### C sim ###
if {![file exists csim.exe]} {
  puts "@E C-simulation is not set up properly. Please re-run csim."
  return -code error
}
set ret [catch {eval exec ./csim.exe | tee temp0.log >&@ stdout} err]
set logfile "temp0.log"
if {$ret || $err != ""} {
    if { [lindex $::errorCode 0] eq "CHILDSTATUS"} {
        set status [lindex $::errorCode 2]
        if {$status != ""} {
            puts "@E Simulation failed: Function \'main\' returns nonzero value \'$status\'."
            set ::AESL_CSIM::gnonzeroRetErr 1
            return -code error
        } else {
            puts "@E Simulation failed."
            return -code error
        }
    } else {
        if { [regexp {segmentation violation} $err] } {
            puts "@E Simulation failed: SIGSEGV."
        } else {
            puts "@E Simulation failed."
        }
        return -code error
    }
}
if {[file exists $logfile]} {
    set cmdret [catch {eval exec "grep \"Error:\" $logfile"} err]
    if {$cmdret == 0} {
        puts "@E Simulation failed."
        return -code error
    }
}

