#!/bin/sh
lli=${LLVMINTERP-lli}
exec $lli \
    /home/patmos/github/bachelor_project_HLS/hls/misc/matmul_float/hls_matmul_float/matmul_3b_16x16/.autopilot/db/a.g.bc ${1+"$@"}