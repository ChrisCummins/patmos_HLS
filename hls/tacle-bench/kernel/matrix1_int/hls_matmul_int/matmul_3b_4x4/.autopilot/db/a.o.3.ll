; ModuleID = '/home/patmos/github/bachelor_project_HLS/hls/tacle-bench/kernel/matrix1_int/hls_matmul_int/matmul_3b_4x4/.autopilot/db/a.o.3.bc'
target datalayout = "e-p:64:64:64-i1:8:8-i8:8:8-i16:16:16-i32:32:32-i64:64:64-f32:32:32-f64:64:64-v64:64:64-v128:128:128-a0:0:64-s0:64:64-f80:128:128-n8:16:32:64-S128"
target triple = "x86_64-unknown-linux-gnu"

@matmul_hw_str = internal unnamed_addr constant [10 x i8] c"matmul_hw\00" ; [#uses=1 type=[10 x i8]*]
@L_col_str = internal unnamed_addr constant [6 x i8] c"L_col\00" ; [#uses=1 type=[6 x i8]*]
@p_str4 = private unnamed_addr constant [4 x i8] c"col\00", align 1 ; [#uses=3 type=[4 x i8]*]
@p_str3 = private unnamed_addr constant [12 x i8] c"RAM_1P_BRAM\00", align 1 ; [#uses=3 type=[12 x i8]*]
@p_str2 = private unnamed_addr constant [5 x i8] c"bram\00", align 1 ; [#uses=3 type=[5 x i8]*]
@p_str1 = private unnamed_addr constant [1 x i8] zeroinitializer, align 1 ; [#uses=46 type=[1 x i8]*]
@p_str = private unnamed_addr constant [11 x i8] c"ap_ctrl_hs\00", align 1 ; [#uses=1 type=[11 x i8]*]

; [#uses=0]
define void @matmul_hw([16 x i32]* %a, [16 x i32]* %b, [16 x i32]* %c) nounwind uwtable {
  %a_row_0_2 = alloca i32                         ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %a_row_0_2}, metadata !7) ; [debug variable = a_row[0]]
  %a_row_1_2 = alloca i32                         ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %a_row_1_2}, metadata !22) ; [debug variable = a_row[1]]
  %a_row_2_2 = alloca i32                         ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %a_row_2_2}, metadata !23) ; [debug variable = a_row[2]]
  %a_row_3_2 = alloca i32                         ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %a_row_3_2}, metadata !24) ; [debug variable = a_row[3]]
  %b_copy_0_3_11 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_0_3_11}, metadata !25) ; [debug variable = b_copy[0][3]]
  %b_copy_0_3_8 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_0_3_8}, metadata !25) ; [debug variable = b_copy[0][3]]
  %b_copy_0_3_12 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_0_3_12}, metadata !25) ; [debug variable = b_copy[0][3]]
  %b_copy_0_3_1 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_0_3_1}, metadata !25) ; [debug variable = b_copy[0][3]]
  %b_copy_1_3_11 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_1_3_11}, metadata !30) ; [debug variable = b_copy[1][3]]
  %b_copy_1_3_8 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_1_3_8}, metadata !30) ; [debug variable = b_copy[1][3]]
  %b_copy_1_3_12 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_1_3_12}, metadata !30) ; [debug variable = b_copy[1][3]]
  %b_copy_1_3_1 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_1_3_1}, metadata !30) ; [debug variable = b_copy[1][3]]
  %b_copy_2_3_11 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_2_3_11}, metadata !32) ; [debug variable = b_copy[2][3]]
  %b_copy_2_3_8 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_2_3_8}, metadata !32) ; [debug variable = b_copy[2][3]]
  %b_copy_2_3_12 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_2_3_12}, metadata !32) ; [debug variable = b_copy[2][3]]
  %b_copy_2_3_1 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_2_3_1}, metadata !32) ; [debug variable = b_copy[2][3]]
  %b_copy_3_3_11 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_3_3_11}, metadata !34) ; [debug variable = b_copy[3][3]]
  %b_copy_3_3_8 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_3_3_8}, metadata !34) ; [debug variable = b_copy[3][3]]
  %b_copy_3_3_12 = alloca i32                     ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_3_3_12}, metadata !34) ; [debug variable = b_copy[3][3]]
  %b_copy_3_3_1 = alloca i32                      ; [#uses=2 type=i32*]
  call void @llvm.dbg.declare(metadata !{i32* %b_copy_3_3_1}, metadata !34) ; [debug variable = b_copy[3][3]]
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %a) nounwind, !map !36
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %b) nounwind, !map !42
  call void (...)* @_ssdm_op_SpecBitsMap([16 x i32]* %c) nounwind, !map !46
  call void (...)* @_ssdm_op_SpecTopModule([10 x i8]* @matmul_hw_str) nounwind
  call void @llvm.dbg.value(metadata !{[16 x i32]* %a}, i64 0, metadata !50), !dbg !52 ; [debug line = 4:25] [debug variable = a]
  call void @llvm.dbg.value(metadata !{[16 x i32]* %b}, i64 0, metadata !53), !dbg !54 ; [debug line = 4:138] [debug variable = b]
  call void @llvm.dbg.value(metadata !{[16 x i32]* %c}, i64 0, metadata !55), !dbg !56 ; [debug line = 4:252] [debug variable = c]
  call void (...)* @_ssdm_op_SpecInterface(i32 0, [11 x i8]* @p_str, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind, !dbg !57 ; [debug line = 6:1]
  call void (...)* @_ssdm_op_SpecInterface([16 x i32]* %a, [5 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecMemCore([16 x i32]* %a, [1 x i8]* @p_str1, [12 x i8]* @p_str3, [1 x i8]* @p_str1, i32 -1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface([16 x i32]* %b, [5 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecMemCore([16 x i32]* %b, [1 x i8]* @p_str1, [12 x i8]* @p_str3, [1 x i8]* @p_str1, i32 -1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  call void (...)* @_ssdm_op_SpecInterface([16 x i32]* %c, [5 x i8]* @p_str2, i32 0, i32 0, [1 x i8]* @p_str1, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, i32 0, i32 0, i32 0, i32 0, [1 x i8]* @p_str1, [1 x i8]* @p_str1)
  call void (...)* @_ssdm_op_SpecMemCore([16 x i32]* %c, [1 x i8]* @p_str1, [12 x i8]* @p_str3, [1 x i8]* @p_str1, i32 -1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1, [1 x i8]* @p_str1) nounwind
  br label %.preheader7, !dbg !58                 ; [debug line = 21:15]

.preheader7:                                      ; preds = %.preheader7.preheader, %0
  %indvar_flatten = phi i5 [ 0, %0 ], [ %indvar_flatten_next, %.preheader7.preheader ] ; [#uses=2 type=i5]
  %i = phi i3 [ 0, %0 ], [ %tmp_1_mid2_v, %.preheader7.preheader ] ; [#uses=3 type=i3]
  %j = phi i3 [ 0, %0 ], [ %j_1, %.preheader7.preheader ] ; [#uses=2 type=i3]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !60), !dbg !61 ; [debug line = 21:58] [debug variable = i]
  %exitcond_flatten = icmp eq i5 %indvar_flatten, -16 ; [#uses=1 type=i1]
  %indvar_flatten_next = add i5 %indvar_flatten, 1 ; [#uses=1 type=i5]
  br i1 %exitcond_flatten, label %1, label %.preheader7.preheader

.preheader7.preheader:                            ; preds = %.preheader7
  %a_row_0_2_load = load i32* %a_row_0_2          ; [#uses=1 type=i32]
  %a_row_1_2_load = load i32* %a_row_1_2          ; [#uses=1 type=i32]
  %a_row_2_2_load = load i32* %a_row_2_2          ; [#uses=1 type=i32]
  %a_row_3_2_load = load i32* %a_row_3_2          ; [#uses=1 type=i32]
  %b_copy_0_3_11_load = load i32* %b_copy_0_3_11  ; [#uses=2 type=i32]
  %b_copy_0_3_8_load = load i32* %b_copy_0_3_8    ; [#uses=3 type=i32]
  %b_copy_0_3_12_load = load i32* %b_copy_0_3_12  ; [#uses=4 type=i32]
  %b_copy_0_3_1_load = load i32* %b_copy_0_3_1    ; [#uses=4 type=i32]
  %b_copy_1_3_11_load = load i32* %b_copy_1_3_11  ; [#uses=2 type=i32]
  %b_copy_1_3_8_load = load i32* %b_copy_1_3_8    ; [#uses=3 type=i32]
  %b_copy_1_3_12_load = load i32* %b_copy_1_3_12  ; [#uses=4 type=i32]
  %b_copy_1_3_1_load = load i32* %b_copy_1_3_1    ; [#uses=4 type=i32]
  %b_copy_2_3_11_load = load i32* %b_copy_2_3_11  ; [#uses=2 type=i32]
  %b_copy_2_3_8_load = load i32* %b_copy_2_3_8    ; [#uses=3 type=i32]
  %b_copy_2_3_12_load = load i32* %b_copy_2_3_12  ; [#uses=4 type=i32]
  %b_copy_2_3_1_load = load i32* %b_copy_2_3_1    ; [#uses=4 type=i32]
  %b_copy_3_3_11_load = load i32* %b_copy_3_3_11  ; [#uses=2 type=i32]
  %b_copy_3_3_8_load = load i32* %b_copy_3_3_8    ; [#uses=3 type=i32]
  %b_copy_3_3_12_load = load i32* %b_copy_3_3_12  ; [#uses=4 type=i32]
  %b_copy_3_3_1_load = load i32* %b_copy_3_3_1    ; [#uses=4 type=i32]
  %i_1 = add i3 1, %i, !dbg !61                   ; [#uses=2 type=i3] [debug line = 21:58]
  call void @llvm.dbg.value(metadata !{i3 %i_1}, i64 0, metadata !60), !dbg !61 ; [debug line = 21:58] [debug variable = i]
  call void (...)* @_ssdm_op_SpecLoopName([6 x i8]* @L_col_str)
  %empty = call i32 (...)* @_ssdm_op_SpecLoopTripCount(i64 16, i64 16, i64 16) nounwind ; [#uses=0 type=i32]
  %exitcond = icmp eq i3 %j, -4, !dbg !62         ; [#uses=3 type=i1] [debug line = 23:20]
  %j_mid2 = select i1 %exitcond, i3 0, i3 %j      ; [#uses=8 type=i3]
  %tmp_mid1 = icmp eq i3 %i_1, 0, !dbg !65        ; [#uses=1 type=i1] [debug line = 36:4]
  %tmp1 = icmp eq i3 %i, 0, !dbg !65              ; [#uses=1 type=i1] [debug line = 36:4]
  %tmp_mid2 = select i1 %exitcond, i1 %tmp_mid1, i1 %tmp1, !dbg !65 ; [#uses=16 type=i1] [debug line = 36:4]
  %tmp_1_mid2_v = select i1 %exitcond, i3 %i_1, i3 %i, !dbg !67 ; [#uses=2 type=i3] [debug line = 46:5]
  %tmp_1 = call i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3 %tmp_1_mid2_v, i2 0) ; [#uses=5 type=i5]
  %tmp_9 = zext i5 %tmp_1 to i64, !dbg !68        ; [#uses=1 type=i64] [debug line = 32:6]
  %tmp_9_cast = zext i5 %tmp_1 to i6, !dbg !68    ; [#uses=1 type=i6] [debug line = 32:6]
  %a_addr = getelementptr [16 x i32]* %a, i64 0, i64 %tmp_9, !dbg !68 ; [#uses=1 type=i32*] [debug line = 32:6]
  %tmp_10 = or i5 %tmp_1, 1                       ; [#uses=1 type=i5]
  %tmp_11 = call i64 @_ssdm_op_BitConcatenate.i64.i59.i5(i59 0, i5 %tmp_10), !dbg !68 ; [#uses=1 type=i64] [debug line = 32:6]
  %a_addr_1 = getelementptr [16 x i32]* %a, i64 0, i64 %tmp_11, !dbg !68 ; [#uses=1 type=i32*] [debug line = 32:6]
  %tmp_12 = or i5 %tmp_1, 2                       ; [#uses=1 type=i5]
  %tmp_13 = call i64 @_ssdm_op_BitConcatenate.i64.i59.i5(i59 0, i5 %tmp_12), !dbg !68 ; [#uses=1 type=i64] [debug line = 32:6]
  %a_addr_2 = getelementptr [16 x i32]* %a, i64 0, i64 %tmp_13, !dbg !68 ; [#uses=1 type=i32*] [debug line = 32:6]
  %tmp_14 = or i5 %tmp_1, 3                       ; [#uses=1 type=i5]
  %tmp_15 = call i64 @_ssdm_op_BitConcatenate.i64.i59.i5(i59 0, i5 %tmp_14), !dbg !68 ; [#uses=1 type=i64] [debug line = 32:6]
  %a_addr_3 = getelementptr [16 x i32]* %a, i64 0, i64 %tmp_15, !dbg !68 ; [#uses=1 type=i32*] [debug line = 32:6]
  call void (...)* @_ssdm_op_SpecLoopName([4 x i8]* @p_str4) nounwind, !dbg !72 ; [debug line = 23:69]
  %tmp_2 = call i32 (...)* @_ssdm_op_SpecRegionBegin([4 x i8]* @p_str4) nounwind, !dbg !72 ; [#uses=1 type=i32] [debug line = 23:69]
  call void (...)* @_ssdm_op_SpecPipeline(i32 -1, i32 1, i32 1, i32 0, [1 x i8]* @p_str1) nounwind, !dbg !73 ; [debug line = 25:1]
  %tmp_3 = icmp eq i3 %j_mid2, 0, !dbg !74        ; [#uses=4 type=i1] [debug line = 30:5]
  %a_row_0 = load i32* %a_addr, align 4, !dbg !68 ; [#uses=1 type=i32] [debug line = 32:6]
  call void @llvm.dbg.value(metadata !{i32 %a_row_0}, i64 0, metadata !7), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[0]]
  %a_row_1 = load i32* %a_addr_1, align 4, !dbg !68 ; [#uses=1 type=i32] [debug line = 32:6]
  call void @llvm.dbg.value(metadata !{i32 %a_row_1}, i64 0, metadata !22), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[1]]
  %a_row_2 = load i32* %a_addr_2, align 4, !dbg !68 ; [#uses=1 type=i32] [debug line = 32:6]
  call void @llvm.dbg.value(metadata !{i32 %a_row_2}, i64 0, metadata !23), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[2]]
  %a_row_3 = load i32* %a_addr_3, align 4, !dbg !68 ; [#uses=1 type=i32] [debug line = 32:6]
  call void @llvm.dbg.value(metadata !{i32 %a_row_3}, i64 0, metadata !24), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[3]]
  %a_row_3_1 = select i1 %tmp_3, i32 %a_row_3, i32 %a_row_3_2_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %a_row_3_1}, i64 0, metadata !24), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[3]]
  %a_row_2_1 = select i1 %tmp_3, i32 %a_row_2, i32 %a_row_2_2_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %a_row_2_1}, i64 0, metadata !23), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[2]]
  %a_row_1_1 = select i1 %tmp_3, i32 %a_row_1, i32 %a_row_1_2_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %a_row_1_1}, i64 0, metadata !22), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[1]]
  %a_row_0_1 = select i1 %tmp_3, i32 %a_row_0, i32 %a_row_0_2_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %a_row_0_1}, i64 0, metadata !7), !dbg !68 ; [debug line = 32:6] [debug variable = a_row[0]]
  %tmp_6 = zext i3 %j_mid2 to i64, !dbg !75       ; [#uses=1 type=i64] [debug line = 38:7]
  %tmp_6_cast6 = zext i3 %j_mid2 to i6, !dbg !75  ; [#uses=1 type=i6] [debug line = 38:7]
  %tmp_6_cast5 = zext i3 %j_mid2 to i5, !dbg !75  ; [#uses=1 type=i5] [debug line = 38:7]
  %tmp_6_cast = zext i3 %j_mid2 to i4, !dbg !75   ; [#uses=1 type=i4] [debug line = 38:7]
  %b_addr = getelementptr [16 x i32]* %b, i64 0, i64 %tmp_6, !dbg !75 ; [#uses=1 type=i32*] [debug line = 38:7]
  %tmp_16 = add i4 4, %tmp_6_cast, !dbg !75       ; [#uses=1 type=i4] [debug line = 38:7]
  %tmp_16_cast = zext i4 %tmp_16 to i64, !dbg !75 ; [#uses=1 type=i64] [debug line = 38:7]
  %b_addr_1 = getelementptr [16 x i32]* %b, i64 0, i64 %tmp_16_cast, !dbg !75 ; [#uses=1 type=i32*] [debug line = 38:7]
  %tmp_17 = call i64 @_ssdm_op_BitConcatenate.i64.i61.i3(i61 1, i3 %j_mid2), !dbg !75 ; [#uses=1 type=i64] [debug line = 38:7]
  %b_addr_2 = getelementptr [16 x i32]* %b, i64 0, i64 %tmp_17, !dbg !75 ; [#uses=1 type=i32*] [debug line = 38:7]
  %tmp_18 = add i5 12, %tmp_6_cast5, !dbg !75     ; [#uses=1 type=i5] [debug line = 38:7]
  %tmp_18_cast = zext i5 %tmp_18 to i64, !dbg !75 ; [#uses=1 type=i64] [debug line = 38:7]
  %b_addr_3 = getelementptr [16 x i32]* %b, i64 0, i64 %tmp_18_cast, !dbg !75 ; [#uses=1 type=i32*] [debug line = 38:7]
  %tmp_19 = add i6 %tmp_9_cast, %tmp_6_cast6, !dbg !67 ; [#uses=1 type=i6] [debug line = 46:5]
  %tmp_19_cast = zext i6 %tmp_19 to i64, !dbg !67 ; [#uses=1 type=i64] [debug line = 46:5]
  %c_addr = getelementptr [16 x i32]* %c, i64 0, i64 %tmp_19_cast, !dbg !67 ; [#uses=1 type=i32*] [debug line = 46:5]
  %b_copy_0_3_19 = load i32* %b_addr, align 4, !dbg !75 ; [#uses=4 type=i32] [debug line = 38:7]
  %tmp = trunc i3 %j_mid2 to i2                   ; [#uses=7 type=i2]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_19}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_19}, i64 0, metadata !79), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][0]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_19}, i64 0, metadata !80), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][1]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_19}, i64 0, metadata !81), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][2]]
  %sel_tmp = icmp eq i2 %tmp, -2                  ; [#uses=8 type=i1]
  %b_copy_0_3 = select i1 %sel_tmp, i32 %b_copy_0_3_1_load, i32 %b_copy_0_3_19 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %sel_tmp2 = icmp eq i2 %tmp, 1                  ; [#uses=12 type=i1]
  %b_copy_0_3_4 = select i1 %sel_tmp2, i32 %b_copy_0_3_1_load, i32 %b_copy_0_3 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_4}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %sel_tmp4 = icmp eq i2 %tmp, 0                  ; [#uses=16 type=i1]
  %b_copy_0_3_2 = select i1 %sel_tmp4, i32 %b_copy_0_3_1_load, i32 %b_copy_0_3_4 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_2}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_5 = select i1 %sel_tmp, i32 %b_copy_0_3_19, i32 %b_copy_0_3_12_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_5}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_6 = select i1 %sel_tmp2, i32 %b_copy_0_3_12_load, i32 %b_copy_0_3_5 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_6}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_7 = select i1 %sel_tmp4, i32 %b_copy_0_3_12_load, i32 %b_copy_0_3_6 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_7}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_9 = select i1 %sel_tmp2, i32 %b_copy_0_3_19, i32 %b_copy_0_3_8_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_9}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_14 = select i1 %sel_tmp4, i32 %b_copy_0_3_8_load, i32 %b_copy_0_3_9 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_14}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_15 = select i1 %sel_tmp4, i32 %b_copy_0_3_19, i32 %b_copy_0_3_11_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_15}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_1_3_19 = load i32* %b_addr_1, align 4, !dbg !75 ; [#uses=4 type=i32] [debug line = 38:7]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_19}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_19}, i64 0, metadata !82), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][0]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_19}, i64 0, metadata !83), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][1]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_19}, i64 0, metadata !84), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][2]]
  %b_copy_1_3 = select i1 %sel_tmp, i32 %b_copy_1_3_1_load, i32 %b_copy_1_3_19 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_4 = select i1 %sel_tmp2, i32 %b_copy_1_3_1_load, i32 %b_copy_1_3 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_4}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_2 = select i1 %sel_tmp4, i32 %b_copy_1_3_1_load, i32 %b_copy_1_3_4 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_2}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_5 = select i1 %sel_tmp, i32 %b_copy_1_3_19, i32 %b_copy_1_3_12_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_5}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_6 = select i1 %sel_tmp2, i32 %b_copy_1_3_12_load, i32 %b_copy_1_3_5 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_6}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_7 = select i1 %sel_tmp4, i32 %b_copy_1_3_12_load, i32 %b_copy_1_3_6 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_7}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_9 = select i1 %sel_tmp2, i32 %b_copy_1_3_19, i32 %b_copy_1_3_8_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_9}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_14 = select i1 %sel_tmp4, i32 %b_copy_1_3_8_load, i32 %b_copy_1_3_9 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_14}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_15 = select i1 %sel_tmp4, i32 %b_copy_1_3_19, i32 %b_copy_1_3_11_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_15}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_2_3_19 = load i32* %b_addr_2, align 4, !dbg !75 ; [#uses=4 type=i32] [debug line = 38:7]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_19}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_19}, i64 0, metadata !85), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][0]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_19}, i64 0, metadata !86), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][1]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_19}, i64 0, metadata !87), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][2]]
  %b_copy_2_3 = select i1 %sel_tmp, i32 %b_copy_2_3_1_load, i32 %b_copy_2_3_19 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_4 = select i1 %sel_tmp2, i32 %b_copy_2_3_1_load, i32 %b_copy_2_3 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_4}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_2 = select i1 %sel_tmp4, i32 %b_copy_2_3_1_load, i32 %b_copy_2_3_4 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_2}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_5 = select i1 %sel_tmp, i32 %b_copy_2_3_19, i32 %b_copy_2_3_12_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_5}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_6 = select i1 %sel_tmp2, i32 %b_copy_2_3_12_load, i32 %b_copy_2_3_5 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_6}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_7 = select i1 %sel_tmp4, i32 %b_copy_2_3_12_load, i32 %b_copy_2_3_6 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_7}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_9 = select i1 %sel_tmp2, i32 %b_copy_2_3_19, i32 %b_copy_2_3_8_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_9}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_14 = select i1 %sel_tmp4, i32 %b_copy_2_3_8_load, i32 %b_copy_2_3_9 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_14}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_15 = select i1 %sel_tmp4, i32 %b_copy_2_3_19, i32 %b_copy_2_3_11_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_15}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_3_3_19 = load i32* %b_addr_3, align 4, !dbg !75 ; [#uses=4 type=i32] [debug line = 38:7]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_19}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_19}, i64 0, metadata !88), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][0]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_19}, i64 0, metadata !89), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][1]]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_19}, i64 0, metadata !90), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][2]]
  %b_copy_3_3 = select i1 %sel_tmp, i32 %b_copy_3_3_1_load, i32 %b_copy_3_3_19 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_4 = select i1 %sel_tmp2, i32 %b_copy_3_3_1_load, i32 %b_copy_3_3 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_4}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_2 = select i1 %sel_tmp4, i32 %b_copy_3_3_1_load, i32 %b_copy_3_3_4 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_2}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_5 = select i1 %sel_tmp, i32 %b_copy_3_3_19, i32 %b_copy_3_3_12_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_5}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_6 = select i1 %sel_tmp2, i32 %b_copy_3_3_12_load, i32 %b_copy_3_3_5 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_6}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_7 = select i1 %sel_tmp4, i32 %b_copy_3_3_12_load, i32 %b_copy_3_3_6 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_7}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_9 = select i1 %sel_tmp2, i32 %b_copy_3_3_19, i32 %b_copy_3_3_8_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_9}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_14 = select i1 %sel_tmp4, i32 %b_copy_3_3_8_load, i32 %b_copy_3_3_9 ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_14}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_15 = select i1 %sel_tmp4, i32 %b_copy_3_3_19, i32 %b_copy_3_3_11_load ; [#uses=1 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_15}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_3 = select i1 %tmp_mid2, i32 %b_copy_3_3_2, i32 %b_copy_3_3_1_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_3}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_16 = select i1 %tmp_mid2, i32 %b_copy_3_3_7, i32 %b_copy_3_3_12_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_16}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_17 = select i1 %tmp_mid2, i32 %b_copy_3_3_14, i32 %b_copy_3_3_8_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_17}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_3_3_18 = select i1 %tmp_mid2, i32 %b_copy_3_3_15, i32 %b_copy_3_3_11_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_3_3_18}, i64 0, metadata !34), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[3][3]]
  %b_copy_2_3_3 = select i1 %tmp_mid2, i32 %b_copy_2_3_2, i32 %b_copy_2_3_1_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_3}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_16 = select i1 %tmp_mid2, i32 %b_copy_2_3_7, i32 %b_copy_2_3_12_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_16}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_17 = select i1 %tmp_mid2, i32 %b_copy_2_3_14, i32 %b_copy_2_3_8_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_17}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_2_3_18 = select i1 %tmp_mid2, i32 %b_copy_2_3_15, i32 %b_copy_2_3_11_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_2_3_18}, i64 0, metadata !32), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[2][3]]
  %b_copy_1_3_3 = select i1 %tmp_mid2, i32 %b_copy_1_3_2, i32 %b_copy_1_3_1_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_3}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_16 = select i1 %tmp_mid2, i32 %b_copy_1_3_7, i32 %b_copy_1_3_12_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_16}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_17 = select i1 %tmp_mid2, i32 %b_copy_1_3_14, i32 %b_copy_1_3_8_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_17}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_1_3_18 = select i1 %tmp_mid2, i32 %b_copy_1_3_15, i32 %b_copy_1_3_11_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_1_3_18}, i64 0, metadata !30), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[1][3]]
  %b_copy_0_3_3 = select i1 %tmp_mid2, i32 %b_copy_0_3_2, i32 %b_copy_0_3_1_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_3}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_16 = select i1 %tmp_mid2, i32 %b_copy_0_3_7, i32 %b_copy_0_3_12_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_16}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_17 = select i1 %tmp_mid2, i32 %b_copy_0_3_14, i32 %b_copy_0_3_8_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_17}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %b_copy_0_3_18 = select i1 %tmp_mid2, i32 %b_copy_0_3_15, i32 %b_copy_0_3_11_load ; [#uses=2 type=i32]
  call void @llvm.dbg.value(metadata !{i32 %b_copy_0_3_18}, i64 0, metadata !25), !dbg !75 ; [debug line = 38:7] [debug variable = b_copy[0][3]]
  %tmp_4 = call i32 @_ssdm_op_Mux.ap_auto.4i32.i2(i32 %b_copy_0_3_18, i32 %b_copy_0_3_17, i32 %b_copy_0_3_16, i32 %b_copy_0_3_3, i2 %tmp) nounwind ; [#uses=1 type=i32]
  %tmp_s = mul nsw i32 %tmp_4, %a_row_0_1, !dbg !91 ; [#uses=1 type=i32] [debug line = 43:4]
  %tmp_5 = call i32 @_ssdm_op_Mux.ap_auto.4i32.i2(i32 %b_copy_1_3_18, i32 %b_copy_1_3_17, i32 %b_copy_1_3_16, i32 %b_copy_1_3_3, i2 %tmp) nounwind ; [#uses=1 type=i32]
  %tmp_2_1 = mul nsw i32 %tmp_5, %a_row_1_1, !dbg !91 ; [#uses=1 type=i32] [debug line = 43:4]
  %tmp_7 = call i32 @_ssdm_op_Mux.ap_auto.4i32.i2(i32 %b_copy_2_3_18, i32 %b_copy_2_3_17, i32 %b_copy_2_3_16, i32 %b_copy_2_3_3, i2 %tmp) nounwind ; [#uses=1 type=i32]
  %tmp_2_2 = mul nsw i32 %tmp_7, %a_row_2_1, !dbg !91 ; [#uses=1 type=i32] [debug line = 43:4]
  %tmp_8 = call i32 @_ssdm_op_Mux.ap_auto.4i32.i2(i32 %b_copy_3_3_18, i32 %b_copy_3_3_17, i32 %b_copy_3_3_16, i32 %b_copy_3_3_3, i2 %tmp) nounwind ; [#uses=1 type=i32]
  %tmp_2_3 = mul nsw i32 %tmp_8, %a_row_3_1, !dbg !91 ; [#uses=1 type=i32] [debug line = 43:4]
  %tmp9 = add i32 %tmp_2_1, %tmp_s, !dbg !91      ; [#uses=1 type=i32] [debug line = 43:4]
  %tmp2 = add i32 %tmp_2_3, %tmp_2_2, !dbg !91    ; [#uses=1 type=i32] [debug line = 43:4]
  %tmp_5_3 = add nsw i32 %tmp9, %tmp2, !dbg !91   ; [#uses=1 type=i32] [debug line = 43:4]
  store i32 %tmp_5_3, i32* %c_addr, align 4, !dbg !67 ; [debug line = 46:5]
  %empty_3 = call i32 (...)* @_ssdm_op_SpecRegionEnd([4 x i8]* @p_str4, i32 %tmp_2) nounwind, !dbg !94 ; [#uses=0 type=i32] [debug line = 47:3]
  %j_1 = add i3 1, %j_mid2, !dbg !95              ; [#uses=1 type=i3] [debug line = 23:63]
  call void @llvm.dbg.value(metadata !{i3 %j_1}, i64 0, metadata !96), !dbg !95 ; [debug line = 23:63] [debug variable = j]
  store i32 %b_copy_3_3_3, i32* %b_copy_3_3_1
  store i32 %b_copy_3_3_16, i32* %b_copy_3_3_12
  store i32 %b_copy_3_3_17, i32* %b_copy_3_3_8
  store i32 %b_copy_3_3_18, i32* %b_copy_3_3_11
  store i32 %b_copy_2_3_3, i32* %b_copy_2_3_1
  store i32 %b_copy_2_3_16, i32* %b_copy_2_3_12
  store i32 %b_copy_2_3_17, i32* %b_copy_2_3_8
  store i32 %b_copy_2_3_18, i32* %b_copy_2_3_11
  store i32 %b_copy_1_3_3, i32* %b_copy_1_3_1
  store i32 %b_copy_1_3_16, i32* %b_copy_1_3_12
  store i32 %b_copy_1_3_17, i32* %b_copy_1_3_8
  store i32 %b_copy_1_3_18, i32* %b_copy_1_3_11
  store i32 %b_copy_0_3_3, i32* %b_copy_0_3_1
  store i32 %b_copy_0_3_16, i32* %b_copy_0_3_12
  store i32 %b_copy_0_3_17, i32* %b_copy_0_3_8
  store i32 %b_copy_0_3_18, i32* %b_copy_0_3_11
  store i32 %a_row_3_1, i32* %a_row_3_2
  store i32 %a_row_2_1, i32* %a_row_2_2
  store i32 %a_row_1_1, i32* %a_row_1_2
  store i32 %a_row_0_1, i32* %a_row_0_2
  br label %.preheader7, !dbg !95                 ; [debug line = 23:63]

; <label>:1                                       ; preds = %.preheader7
  ret void, !dbg !97                              ; [debug line = 49:1]
}

; [#uses=82]
declare void @llvm.dbg.value(metadata, i64, metadata) nounwind readnone

; [#uses=20]
declare void @llvm.dbg.declare(metadata, metadata) nounwind readnone

; [#uses=1]
define weak void @_ssdm_op_SpecTopModule(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionEnd(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecRegionBegin(...) {
entry:
  ret i32 0
}

; [#uses=1]
define weak void @_ssdm_op_SpecPipeline(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecMemCore(...) {
entry:
  ret void
}

; [#uses=1]
define weak i32 @_ssdm_op_SpecLoopTripCount(...) {
entry:
  ret i32 0
}

; [#uses=2]
define weak void @_ssdm_op_SpecLoopName(...) nounwind {
entry:
  ret void
}

; [#uses=4]
define weak void @_ssdm_op_SpecInterface(...) nounwind {
entry:
  ret void
}

; [#uses=3]
define weak void @_ssdm_op_SpecBitsMap(...) {
entry:
  ret void
}

; [#uses=0]
declare i2 @_ssdm_op_PartSelect.i2.i3.i32.i32(i3, i32, i32) nounwind readnone

; [#uses=4]
define weak i32 @_ssdm_op_Mux.ap_auto.4i32.i2(i32, i32, i32, i32, i2) {
entry:
  switch i2 %4, label %case3 [
    i2 0, label %case0
    i2 1, label %case1
    i2 -2, label %case2
  ]

case0:                                            ; preds = %case3, %case2, %case1, %entry
  %merge = phi i32 [ %0, %entry ], [ %1, %case1 ], [ %2, %case2 ], [ %3, %case3 ] ; [#uses=1 type=i32]
  ret i32 %merge

case1:                                            ; preds = %entry
  br label %case0

case2:                                            ; preds = %entry
  br label %case0

case3:                                            ; preds = %entry
  br label %case0
}

; [#uses=1]
define weak i64 @_ssdm_op_BitConcatenate.i64.i61.i3(i61, i3) nounwind readnone {
entry:
  %empty = zext i61 %0 to i64                     ; [#uses=1 type=i64]
  %empty_4 = zext i3 %1 to i64                    ; [#uses=1 type=i64]
  %empty_5 = shl i64 %empty, 3                    ; [#uses=1 type=i64]
  %empty_6 = or i64 %empty_5, %empty_4            ; [#uses=1 type=i64]
  ret i64 %empty_6
}

; [#uses=3]
define weak i64 @_ssdm_op_BitConcatenate.i64.i59.i5(i59, i5) nounwind readnone {
entry:
  %empty = zext i59 %0 to i64                     ; [#uses=1 type=i64]
  %empty_7 = zext i5 %1 to i64                    ; [#uses=1 type=i64]
  %empty_8 = shl i64 %empty, 5                    ; [#uses=1 type=i64]
  %empty_9 = or i64 %empty_8, %empty_7            ; [#uses=1 type=i64]
  ret i64 %empty_9
}

; [#uses=1]
define weak i5 @_ssdm_op_BitConcatenate.i5.i3.i2(i3, i2) nounwind readnone {
entry:
  %empty = zext i3 %0 to i5                       ; [#uses=1 type=i5]
  %empty_10 = zext i2 %1 to i5                    ; [#uses=1 type=i5]
  %empty_11 = shl i5 %empty, 2                    ; [#uses=1 type=i5]
  %empty_12 = or i5 %empty_11, %empty_10          ; [#uses=1 type=i5]
  ret i5 %empty_12
}

!opencl.kernels = !{!0}
!hls.encrypted.func = !{}
!llvm.map.gv = !{}

!0 = metadata !{null, metadata !1, metadata !2, metadata !3, metadata !4, metadata !5, metadata !6}
!1 = metadata !{metadata !"kernel_arg_addr_space", i32 1, i32 1, i32 1}
!2 = metadata !{metadata !"kernel_arg_access_qual", metadata !"none", metadata !"none", metadata !"none"}
!3 = metadata !{metadata !"kernel_arg_type", metadata !"mat_type [4]*", metadata !"mat_type [4]*", metadata !"mat_type [4]*"}
!4 = metadata !{metadata !"kernel_arg_type_qual", metadata !"", metadata !"", metadata !""}
!5 = metadata !{metadata !"kernel_arg_name", metadata !"a", metadata !"b", metadata !"c"}
!6 = metadata !{metadata !"reqd_work_group_size", i32 1, i32 1, i32 1}
!7 = metadata !{i32 786688, metadata !8, metadata !"a_row[0]", null, i32 17, metadata !21, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!8 = metadata !{i32 786443, metadata !9, i32 5, i32 1, metadata !10, i32 0} ; [ DW_TAG_lexical_block ]
!9 = metadata !{i32 786478, i32 0, metadata !10, metadata !"matmul_hw", metadata !"matmul_hw", metadata !"", metadata !10, i32 4, metadata !11, i1 false, i1 true, i32 0, i32 0, null, i32 256, i1 false, null, null, null, metadata !19, i32 5} ; [ DW_TAG_subprogram ]
!10 = metadata !{i32 786473, metadata !"matmul.c", metadata !"/home/patmos/github/bachelor_project_HLS/hls/tacle-bench/kernel/matrix1_int", null} ; [ DW_TAG_file_type ]
!11 = metadata !{i32 786453, i32 0, metadata !"", i32 0, i32 0, i64 0, i64 0, i64 0, i32 0, null, metadata !12, i32 0, i32 0} ; [ DW_TAG_subroutine_type ]
!12 = metadata !{null, metadata !13, metadata !13, metadata !13}
!13 = metadata !{i32 786447, null, metadata !"", null, i32 0, i64 64, i64 64, i64 0, i32 0, metadata !14} ; [ DW_TAG_pointer_type ]
!14 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !15, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!15 = metadata !{i32 786454, null, metadata !"mat_type", metadata !10, i32 15, i64 0, i64 0, i64 0, i32 0, metadata !16} ; [ DW_TAG_typedef ]
!16 = metadata !{i32 786468, null, metadata !"int", null, i32 0, i64 32, i64 32, i64 0, i32 0, i32 5} ; [ DW_TAG_base_type ]
!17 = metadata !{metadata !18}
!18 = metadata !{i32 786465, i64 0, i64 3}        ; [ DW_TAG_subrange_type ]
!19 = metadata !{metadata !20}
!20 = metadata !{i32 786468}                      ; [ DW_TAG_base_type ]
!21 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32, i64 32, i32 0, i32 0, metadata !15, metadata !17, i32 0, i32 0} ; [ DW_TAG_array_type ]
!22 = metadata !{i32 786688, metadata !8, metadata !"a_row[1]", null, i32 17, metadata !21, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!23 = metadata !{i32 786688, metadata !8, metadata !"a_row[2]", null, i32 17, metadata !21, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!24 = metadata !{i32 786688, metadata !8, metadata !"a_row[3]", null, i32 17, metadata !21, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!25 = metadata !{i32 790529, metadata !26, metadata !"b_copy[0][3]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!26 = metadata !{i32 786688, metadata !8, metadata !"b_copy[0]", null, i32 18, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!27 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 128, i64 32, i32 0, i32 0, metadata !15, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!28 = metadata !{metadata !18, metadata !18}
!29 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 32, i64 32, i32 0, i32 0, metadata !15, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!30 = metadata !{i32 790529, metadata !31, metadata !"b_copy[1][3]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!31 = metadata !{i32 786688, metadata !8, metadata !"b_copy[1]", null, i32 18, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!32 = metadata !{i32 790529, metadata !33, metadata !"b_copy[2][3]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!33 = metadata !{i32 786688, metadata !8, metadata !"b_copy[2]", null, i32 18, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!34 = metadata !{i32 790529, metadata !35, metadata !"b_copy[3][3]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!35 = metadata !{i32 786688, metadata !8, metadata !"b_copy[3]", null, i32 18, metadata !27, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!36 = metadata !{metadata !37}
!37 = metadata !{i32 0, i32 31, metadata !38}
!38 = metadata !{metadata !39}
!39 = metadata !{metadata !"a", metadata !40, metadata !"int", i32 0, i32 31}
!40 = metadata !{metadata !41, metadata !41}
!41 = metadata !{i32 0, i32 3, i32 1}
!42 = metadata !{metadata !43}
!43 = metadata !{i32 0, i32 31, metadata !44}
!44 = metadata !{metadata !45}
!45 = metadata !{metadata !"b", metadata !40, metadata !"int", i32 0, i32 31}
!46 = metadata !{metadata !47}
!47 = metadata !{i32 0, i32 31, metadata !48}
!48 = metadata !{metadata !49}
!49 = metadata !{metadata !"c", metadata !40, metadata !"int", i32 0, i32 31}
!50 = metadata !{i32 786689, metadata !9, metadata !"a", null, i32 4, metadata !51, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!51 = metadata !{i32 786433, null, metadata !"", null, i32 0, i64 512, i64 32, i32 0, i32 0, metadata !15, metadata !28, i32 0, i32 0} ; [ DW_TAG_array_type ]
!52 = metadata !{i32 4, i32 25, metadata !9, null}
!53 = metadata !{i32 786689, metadata !9, metadata !"b", null, i32 4, metadata !51, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!54 = metadata !{i32 4, i32 138, metadata !9, null}
!55 = metadata !{i32 786689, metadata !9, metadata !"c", null, i32 4, metadata !51, i32 0, i32 0} ; [ DW_TAG_arg_variable ]
!56 = metadata !{i32 4, i32 252, metadata !9, null}
!57 = metadata !{i32 6, i32 1, metadata !8, null}
!58 = metadata !{i32 21, i32 15, metadata !59, null}
!59 = metadata !{i32 786443, metadata !8, i32 21, i32 2, metadata !10, i32 1} ; [ DW_TAG_lexical_block ]
!60 = metadata !{i32 786688, metadata !59, metadata !"i", metadata !10, i32 21, metadata !16, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!61 = metadata !{i32 21, i32 58, metadata !59, null}
!62 = metadata !{i32 23, i32 20, metadata !63, null}
!63 = metadata !{i32 786443, metadata !64, i32 23, i32 7, metadata !10, i32 3} ; [ DW_TAG_lexical_block ]
!64 = metadata !{i32 786443, metadata !59, i32 21, i32 63, metadata !10, i32 2} ; [ DW_TAG_lexical_block ]
!65 = metadata !{i32 36, i32 4, metadata !66, null}
!66 = metadata !{i32 786443, metadata !63, i32 23, i32 68, metadata !10, i32 4} ; [ DW_TAG_lexical_block ]
!67 = metadata !{i32 46, i32 5, metadata !66, null}
!68 = metadata !{i32 32, i32 6, metadata !69, null}
!69 = metadata !{i32 786443, metadata !70, i32 32, i32 6, metadata !10, i32 7} ; [ DW_TAG_lexical_block ]
!70 = metadata !{i32 786443, metadata !71, i32 31, i32 15, metadata !10, i32 6} ; [ DW_TAG_lexical_block ]
!71 = metadata !{i32 786443, metadata !66, i32 30, i32 17, metadata !10, i32 5} ; [ DW_TAG_lexical_block ]
!72 = metadata !{i32 23, i32 69, metadata !66, null}
!73 = metadata !{i32 25, i32 1, metadata !66, null}
!74 = metadata !{i32 30, i32 5, metadata !66, null}
!75 = metadata !{i32 38, i32 7, metadata !76, null}
!76 = metadata !{i32 786443, metadata !77, i32 37, i32 105, metadata !10, i32 10} ; [ DW_TAG_lexical_block ]
!77 = metadata !{i32 786443, metadata !78, i32 37, i32 16, metadata !10, i32 9} ; [ DW_TAG_lexical_block ]
!78 = metadata !{i32 786443, metadata !66, i32 36, i32 16, metadata !10, i32 8} ; [ DW_TAG_lexical_block ]
!79 = metadata !{i32 790529, metadata !26, metadata !"b_copy[0][0]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!80 = metadata !{i32 790529, metadata !26, metadata !"b_copy[0][1]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!81 = metadata !{i32 790529, metadata !26, metadata !"b_copy[0][2]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!82 = metadata !{i32 790529, metadata !31, metadata !"b_copy[1][0]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!83 = metadata !{i32 790529, metadata !31, metadata !"b_copy[1][1]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!84 = metadata !{i32 790529, metadata !31, metadata !"b_copy[1][2]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!85 = metadata !{i32 790529, metadata !33, metadata !"b_copy[2][0]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!86 = metadata !{i32 790529, metadata !33, metadata !"b_copy[2][1]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!87 = metadata !{i32 790529, metadata !33, metadata !"b_copy[2][2]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!88 = metadata !{i32 790529, metadata !35, metadata !"b_copy[3][0]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!89 = metadata !{i32 790529, metadata !35, metadata !"b_copy[3][1]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!90 = metadata !{i32 790529, metadata !35, metadata !"b_copy[3][2]", null, i32 18, metadata !29, i32 0, i32 0} ; [ DW_TAG_auto_variable_field ]
!91 = metadata !{i32 43, i32 4, metadata !92, null}
!92 = metadata !{i32 786443, metadata !93, i32 42, i32 103, metadata !10, i32 12} ; [ DW_TAG_lexical_block ]
!93 = metadata !{i32 786443, metadata !66, i32 42, i32 14, metadata !10, i32 11} ; [ DW_TAG_lexical_block ]
!94 = metadata !{i32 47, i32 3, metadata !66, null}
!95 = metadata !{i32 23, i32 63, metadata !63, null}
!96 = metadata !{i32 786688, metadata !63, metadata !"j", metadata !10, i32 23, metadata !16, i32 0, i32 0} ; [ DW_TAG_auto_variable ]
!97 = metadata !{i32 49, i32 1, metadata !8, null}