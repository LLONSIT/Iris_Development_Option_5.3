.section .rodata
glabel STR_100026F0
/* 0146F0 100026F0 */ .asciz "%s: %s"
                      .balign 4

glabel STR_100026F8
/* 0146F8 100026F8 */ .asciz "%s: %s"
                      .balign 4

glabel STR_10002700
/* 014700 10002700 */ .asciz "%s: %s"
                      .balign 4

glabel STR_10002708
/* 014708 10002708 */ .asciz "#:%.4s"
                      .balign 4

glabel STR_10002710
/* 014710 10002710 */ .asciz "%s: %s"
                      .balign 4

glabel STR_10002718
/* 014718 10002718 */ .asciz "%s: error during update -- file %s is corrupted -- unexpected null at offset %d.\n"
                      .balign 4

glabel STR_1000276C
/* 01476C 1000276C */ .asciz "%s: %s"
                      .balign 4

glabel STR_10002774
/* 014774 10002774 */ .asciz "a"
                      .balign 4

glabel STR_10002778
/* 014778 10002778 */ .asciz "can't open %s to append %s's dependencies"
                      .balign 4

glabel STR_100027A4
/* 0147A4 100027A4 */ .asciz "%s:"
                      .balign 4

glabel STR_100027A8
/* 0147A8 100027A8 */ .asciz "%s: %s"
                      .balign 4

glabel STR_100027B0
/* 0147B0 100027B0 */ .asciz " %s"
                      .balign 4

glabel STR_100027B4
/* 0147B4 100027B4 */ .asciz " %s\n"
                      .balign 4

glabel STR_100027BC
/* 0147BC 100027BC */ .asciz "%s: %s"
                      .balign 4

glabel STR_100027C4
/* 0147C4 100027C4 */ .asciz "%s: %s"
                      .balign 4

glabel STR_100027CC
/* 0147CC 100027CC */ .asciz "%s: %s"
                      .balign 4
/* 0147D4 100027D4 */ .asciz ""
                      .balign 4
/* 0147D8 100027D8 */ .asciz ""
                      .balign 4
/* 0147DC 100027DC */ .asciz ""
                      .balign 4
/* 0147E0 100027E0 */ .asciz "@(#)$Header: IRIX 5.3:1021572033 built 11/03/94 at pigheart:/joist/5.3MR/root $"
                      .balign 4


.section .text
/* Generated by spimdisasm 1.9.1 */

glabel MDclose # 89
# _gp_disp: 0xFBF9624
.set noreorder; .cpload $t9; # .set reorder
/* 011208 00411208 27BDFED0 */  addiu       $sp, $sp, -0x130
/* 01120C 0041120C AFB50034 */  sw          $s5, 0x34($sp)
/* 011210 00411210 0080A825 */  move        $s5, $a0
/* 011214 00411214 AFBF003C */  sw          $ra, 0x3C($sp)
/* 011218 00411218 AFBC0038 */  sw          $gp, 0x38($sp)
/* 01121C 0041121C AFB40030 */  sw          $s4, 0x30($sp)
/* 011220 00411220 AFB3002C */  sw          $s3, 0x2C($sp)
/* 011224 00411224 AFB20028 */  sw          $s2, 0x28($sp)
/* 011228 00411228 AFB10024 */  sw          $s1, 0x24($sp)
/* 01122C 0041122C AFB00020 */  sw          $s0, 0x20($sp)
/* 011230 00411230 108001B3 */  beqz        $a0, .L00411900
/* 011234 00411234 AFA50134 */   sw         $a1, 0x134($sp)
/* 011238 00411238 8C8E0010 */  lw          $t6, 0x10($a0)
/* 01123C 0041123C 24050102 */  addiu       $a1, $zero, 0x102
/* 011240 00411240 11C0019D */  beqz        $t6, .L004118B8
/* 011244 00411244 00000000 */   nop
/* 011248 00411248 8F9980DC */  lw          $t9, %call16(open)($gp)
/* 01124C 0041124C 8C840004 */  lw          $a0, 0x4($a0)
/* 011250 00411250 0320F809 */  jalr        $t9
/* 011254 00411254 240601B6 */   addiu      $a2, $zero, 0x1B6
/* 011258 00411258 8FBC0038 */  lw          $gp, 0x38($sp)
/* 01125C 0041125C 240F0002 */  addiu       $t7, $zero, 0x2
/* 011260 00411260 AFA2012C */  sw          $v0, 0x12C($sp)
/* 011264 00411264 A7AF0100 */  sh          $t7, 0x100($sp)
/* 011268 00411268 A7A00102 */  sh          $zero, 0x102($sp)
/* 01126C 0041126C AFA00108 */  sw          $zero, 0x108($sp)
/* 011270 00411270 04400010 */  bltz        $v0, .L004112B4
/* 011274 00411274 AFA00104 */   sw         $zero, 0x104($sp)
/* 011278 00411278 8F9980F4 */  lw          $t9, %call16(fcntl)($gp)
/* 01127C 0041127C 00402025 */  move        $a0, $v0
/* 011280 00411280 24050007 */  addiu       $a1, $zero, 0x7
/* 011284 00411284 0320F809 */  jalr        $t9
/* 011288 00411288 27A60100 */   addiu      $a2, $sp, 0x100
/* 01128C 0041128C 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011290 00411290 04400008 */  bltz        $v0, .L004112B4
/* 011294 00411294 00000000 */   nop
/* 011298 00411298 8F998140 */  lw          $t9, %call16(fstat)($gp)
/* 01129C 0041129C 8FA4012C */  lw          $a0, 0x12C($sp)
/* 0112A0 004112A0 0320F809 */  jalr        $t9
/* 0112A4 004112A4 27A50078 */   addiu      $a1, $sp, 0x78
/* 0112A8 004112A8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0112AC 004112AC 04410028 */  bgez        $v0, .L00411350
/* 0112B0 004112B0 8FB000A8 */   lw         $s0, 0xA8($sp)
.L004112B4:
/* 0112B4 004112B4 8F848088 */  lw          $a0, %got(errno)($gp)
/* 0112B8 004112B8 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 0112BC 004112BC 8C840000 */  lw          $a0, 0x0($a0)
/* 0112C0 004112C0 0320F809 */  jalr        $t9
/* 0112C4 004112C4 00000000 */   nop
/* 0112C8 004112C8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0112CC 004112CC 8EB9000C */  lw          $t9, 0xC($s5)
/* 0112D0 004112D0 8F84804C */  lw          $a0, %got(STR_100026F0)($gp)
/* 0112D4 004112D4 8EA50004 */  lw          $a1, 0x4($s5)
/* 0112D8 004112D8 00403025 */  move        $a2, $v0
/* 0112DC 004112DC 0320F809 */  jalr        $t9
/* 0112E0 004112E0 248426F0 */   addiu      $a0, $a0, %lo(STR_100026F0)
/* 0112E4 004112E4 8FA4012C */  lw          $a0, 0x12C($sp)
/* 0112E8 004112E8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0112EC 004112EC 04800185 */  bltz        $a0, .L00411904
/* 0112F0 004112F0 8FBF003C */   lw         $ra, 0x3C($sp)
/* 0112F4 004112F4 8F9980E8 */  lw          $t9, %call16(close)($gp)
/* 0112F8 004112F8 00000000 */  nop
/* 0112FC 004112FC 0320F809 */  jalr        $t9
/* 011300 00411300 00000000 */   nop
/* 011304 00411304 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011308 00411308 1040017E */  beqz        $v0, .L00411904
/* 01130C 0041130C 8FBF003C */   lw         $ra, 0x3C($sp)
/* 011310 00411310 8F848088 */  lw          $a0, %got(errno)($gp)
/* 011314 00411314 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011318 00411318 8C840000 */  lw          $a0, 0x0($a0)
/* 01131C 0041131C 0320F809 */  jalr        $t9
/* 011320 00411320 00000000 */   nop
/* 011324 00411324 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011328 00411328 8EB9000C */  lw          $t9, 0xC($s5)
/* 01132C 0041132C 8F84804C */  lw          $a0, %got(STR_100026F8)($gp)
/* 011330 00411330 8EA50004 */  lw          $a1, 0x4($s5)
/* 011334 00411334 00403025 */  move        $a2, $v0
/* 011338 00411338 0320F809 */  jalr        $t9
/* 01133C 0041133C 248426F8 */   addiu      $a0, $a0, %lo(STR_100026F8)
/* 011340 00411340 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011344 00411344 1000016F */  b           .L00411904
/* 011348 00411348 8FBF003C */   lw         $ra, 0x3C($sp)
/* 01134C 0041134C 8FB000A8 */  lw          $s0, 0xA8($sp)
.L00411350:
/* 011350 00411350 00002025 */  move        $a0, $zero
/* 011354 00411354 16000004 */  bnez        $s0, .L00411368
/* 011358 00411358 02002825 */   move       $a1, $s0
/* 01135C 0041135C 0000A025 */  move        $s4, $zero
/* 011360 00411360 10000028 */  b           .L00411404
/* 011364 00411364 AFA00070 */   sw         $zero, 0x70($sp)
.L00411368:
/* 011368 00411368 8FB8012C */  lw          $t8, 0x12C($sp)
/* 01136C 0041136C 8F9980EC */  lw          $t9, %call16(mmap)($gp)
/* 011370 00411370 24060003 */  addiu       $a2, $zero, 0x3
/* 011374 00411374 24070001 */  addiu       $a3, $zero, 0x1
/* 011378 00411378 AFA00014 */  sw          $zero, 0x14($sp)
/* 01137C 0041137C 0320F809 */  jalr        $t9
/* 011380 00411380 AFB80010 */   sw         $t8, 0x10($sp)
/* 011384 00411384 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011388 00411388 04410016 */  bgez        $v0, .L004113E4
/* 01138C 0041138C AFA20070 */   sw         $v0, 0x70($sp)
/* 011390 00411390 8F848088 */  lw          $a0, %got(errno)($gp)
/* 011394 00411394 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011398 00411398 8C840000 */  lw          $a0, 0x0($a0)
/* 01139C 0041139C 0320F809 */  jalr        $t9
/* 0113A0 004113A0 00000000 */   nop
/* 0113A4 004113A4 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0113A8 004113A8 8EB9000C */  lw          $t9, 0xC($s5)
/* 0113AC 004113AC 8F84804C */  lw          $a0, %got(STR_10002700)($gp)
/* 0113B0 004113B0 8EA50004 */  lw          $a1, 0x4($s5)
/* 0113B4 004113B4 00403025 */  move        $a2, $v0
/* 0113B8 004113B8 0320F809 */  jalr        $t9
/* 0113BC 004113BC 24842700 */   addiu      $a0, $a0, %lo(STR_10002700)
/* 0113C0 004113C0 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0113C4 004113C4 8FA4012C */  lw          $a0, 0x12C($sp)
/* 0113C8 004113C8 8F9980E8 */  lw          $t9, %call16(close)($gp)
/* 0113CC 004113CC 00000000 */  nop
/* 0113D0 004113D0 0320F809 */  jalr        $t9
/* 0113D4 004113D4 00000000 */   nop
/* 0113D8 004113D8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0113DC 004113DC 10000149 */  b           .L00411904
/* 0113E0 004113E0 8FBF003C */   lw         $ra, 0x3C($sp)
.L004113E4:
/* 0113E4 004113E4 00501821 */  addu        $v1, $v0, $s0
/* 0113E8 004113E8 1A000006 */  blez        $s0, .L00411404
/* 0113EC 004113EC 0060A025 */   move       $s4, $v1
/* 0113F0 004113F0 9068FFFF */  lbu         $t0, -0x1($v1)
/* 0113F4 004113F4 2401000A */  addiu       $at, $zero, 0xA
/* 0113F8 004113F8 11010003 */  beq         $t0, $at, .L00411408
/* 0113FC 004113FC 8FA90134 */   lw         $t1, 0x134($sp)
/* 011400 00411400 0040A025 */  move        $s4, $v0
.L00411404:
/* 011404 00411404 8FA90134 */  lw          $t1, 0x134($sp)
.L00411408:
/* 011408 00411408 00000000 */  nop
/* 01140C 0041140C 15200004 */  bnez        $t1, .L00411420
/* 011410 00411410 00000000 */   nop
/* 011414 00411414 8EAA0008 */  lw          $t2, 0x8($s5)
/* 011418 00411418 00000000 */  nop
/* 01141C 0041141C AFAA0134 */  sw          $t2, 0x134($sp)
.L00411420:
/* 011420 00411420 8F9980E4 */  lw          $t9, %call16(strlen)($gp)
/* 011424 00411424 8FA40134 */  lw          $a0, 0x134($sp)
/* 011428 00411428 0320F809 */  jalr        $t9
/* 01142C 0041142C 00000000 */   nop
/* 011430 00411430 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011434 00411434 AFA20128 */  sw          $v0, 0x128($sp)
/* 011438 00411438 8F85804C */  lw          $a1, %got(STR_10002708)($gp)
/* 01143C 0041143C 8F9980A0 */  lw          $t9, %call16(sprintf)($gp)
/* 011440 00411440 8EA60000 */  lw          $a2, 0x0($s5)
/* 011444 00411444 27A40054 */  addiu       $a0, $sp, 0x54
/* 011448 00411448 0320F809 */  jalr        $t9
/* 01144C 0041144C 24A52708 */   addiu      $a1, $a1, %lo(STR_10002708)
/* 011450 00411450 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011454 00411454 0441000F */  bgez        $v0, .L00411494
/* 011458 00411458 AFA20124 */   sw         $v0, 0x124($sp)
/* 01145C 0041145C 8F848088 */  lw          $a0, %got(errno)($gp)
/* 011460 00411460 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011464 00411464 8C840000 */  lw          $a0, 0x0($a0)
/* 011468 00411468 0320F809 */  jalr        $t9
/* 01146C 0041146C 00000000 */   nop
/* 011470 00411470 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011474 00411474 8EB9000C */  lw          $t9, 0xC($s5)
/* 011478 00411478 8F84804C */  lw          $a0, %got(STR_10002710)($gp)
/* 01147C 0041147C 8EA50004 */  lw          $a1, 0x4($s5)
/* 011480 00411480 00403025 */  move        $a2, $v0
/* 011484 00411484 0320F809 */  jalr        $t9
/* 011488 00411488 24842710 */   addiu      $a0, $a0, %lo(STR_10002710)
/* 01148C 0041148C 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011490 00411490 00000000 */  nop
.L00411494:
/* 011494 00411494 8FB00070 */  lw          $s0, 0x70($sp)
/* 011498 00411498 00000000 */  nop
/* 01149C 0041149C 0214082B */  sltu        $at, $s0, $s4
/* 0114A0 004114A0 1020005D */  beqz        $at, .L00411618
/* 0114A4 004114A4 8FA80070 */   lw         $t0, 0x70($sp)
/* 0114A8 004114A8 8F928084 */  lw          $s2, %got(__ctype)($gp)
/* 0114AC 004114AC 00000000 */  nop
.L004114B0:
/* 0114B0 004114B0 8F9980CC */  lw          $t9, %call16(strchr)($gp)
/* 0114B4 004114B4 02002025 */  move        $a0, $s0
/* 0114B8 004114B8 0320F809 */  jalr        $t9
/* 0114BC 004114BC 2405000A */   addiu      $a1, $zero, 0xA
/* 0114C0 004114C0 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0114C4 004114C4 14400014 */  bnez        $v0, .L00411518
/* 0114C8 004114C8 00408825 */   move       $s1, $v0
/* 0114CC 004114CC 8FAC0070 */  lw          $t4, 0x70($sp)
/* 0114D0 004114D0 8F848074 */  lw          $a0, %got(__iob)($gp)
/* 0114D4 004114D4 8F85804C */  lw          $a1, %got(STR_10002718)($gp)
/* 0114D8 004114D8 8F9980B4 */  lw          $t9, %call16(fprintf)($gp)
/* 0114DC 004114DC 8EA60000 */  lw          $a2, 0x0($s5)
/* 0114E0 004114E0 8EA70004 */  lw          $a3, 0x4($s5)
/* 0114E4 004114E4 020C6823 */  subu        $t5, $s0, $t4
/* 0114E8 004114E8 AFAD0010 */  sw          $t5, 0x10($sp)
/* 0114EC 004114EC 24840020 */  addiu       $a0, $a0, 0x20
/* 0114F0 004114F0 0320F809 */  jalr        $t9
/* 0114F4 004114F4 24A52718 */   addiu      $a1, $a1, %lo(STR_10002718)
/* 0114F8 004114F8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0114FC 004114FC 24040001 */  addiu       $a0, $zero, 0x1
/* 011500 00411500 8F998108 */  lw          $t9, %call16(exit)($gp)
/* 011504 00411504 00000000 */  nop
/* 011508 00411508 0320F809 */  jalr        $t9
/* 01150C 0041150C 00000000 */   nop
/* 011510 00411510 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011514 00411514 00000000 */  nop
.L00411518:
/* 011518 00411518 A2200000 */  sb          $zero, 0x0($s1)
/* 01151C 0041151C 8F9980CC */  lw          $t9, %call16(strchr)($gp)
/* 011520 00411520 02009825 */  move        $s3, $s0
/* 011524 00411524 02002025 */  move        $a0, $s0
/* 011528 00411528 0320F809 */  jalr        $t9
/* 01152C 0041152C 2405003A */   addiu      $a1, $zero, 0x3A
/* 011530 00411530 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011534 00411534 240E000A */  addiu       $t6, $zero, 0xA
/* 011538 00411538 00408025 */  move        $s0, $v0
/* 01153C 0041153C A22E0000 */  sb          $t6, 0x0($s1)
/* 011540 00411540 10400031 */  beqz        $v0, .L00411608
/* 011544 00411544 26310001 */   addiu      $s1, $s1, 0x1
/* 011548 00411548 904FFFFF */  lbu         $t7, -0x1($v0)
/* 01154C 0041154C 8FAD0128 */  lw          $t5, 0x128($sp)
/* 011550 00411550 01F2C021 */  addu        $t8, $t7, $s2
/* 011554 00411554 93080001 */  lbu         $t0, 0x1($t8)
/* 011558 00411558 02602025 */  move        $a0, $s3
/* 01155C 0041155C 31090008 */  andi        $t1, $t0, 0x8
/* 011560 00411560 1120000A */  beqz        $t1, .L0041158C
/* 011564 00411564 02137023 */   subu       $t6, $s0, $s3
.L00411568:
/* 011568 00411568 920AFFFE */  lbu         $t2, -0x2($s0)
/* 01156C 0041156C 2610FFFF */  addiu       $s0, $s0, -0x1
/* 011570 00411570 0152C821 */  addu        $t9, $t2, $s2
/* 011574 00411574 932B0001 */  lbu         $t3, 0x1($t9)
/* 011578 00411578 00000000 */  nop
/* 01157C 0041157C 316C0008 */  andi        $t4, $t3, 0x8
/* 011580 00411580 1580FFF9 */  bnez        $t4, .L00411568
/* 011584 00411584 00000000 */   nop
/* 011588 00411588 02137023 */  subu        $t6, $s0, $s3
.L0041158C:
/* 01158C 0041158C 15AE001F */  bne         $t5, $t6, .L0041160C
/* 011590 00411590 0234082B */   sltu       $at, $s1, $s4
/* 011594 00411594 8F998234 */  lw          $t9, %call16(bcmp)($gp)
/* 011598 00411598 8FA50134 */  lw          $a1, 0x134($sp)
/* 01159C 0041159C 0320F809 */  jalr        $t9
/* 0115A0 004115A0 01A03025 */   move       $a2, $t5
/* 0115A4 004115A4 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0115A8 004115A8 14400018 */  bnez        $v0, .L0041160C
/* 0115AC 004115AC 0234082B */   sltu       $at, $s1, $s4
/* 0115B0 004115B0 8FAF0124 */  lw          $t7, 0x124($sp)
/* 0115B4 004115B4 00000000 */  nop
/* 0115B8 004115B8 022F2023 */  subu        $a0, $s1, $t7
/* 0115BC 004115BC 2484FFFF */  addiu       $a0, $a0, -0x1
/* 0115C0 004115C0 0204082B */  sltu        $at, $s0, $a0
/* 0115C4 004115C4 10200011 */  beqz        $at, .L0041160C
/* 0115C8 004115C8 0234082B */   sltu       $at, $s1, $s4
/* 0115CC 004115CC 8F998234 */  lw          $t9, %call16(bcmp)($gp)
/* 0115D0 004115D0 27A50054 */  addiu       $a1, $sp, 0x54
/* 0115D4 004115D4 0320F809 */  jalr        $t9
/* 0115D8 004115D8 01E03025 */   move       $a2, $t7
/* 0115DC 004115DC 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0115E0 004115E0 14400009 */  bnez        $v0, .L00411608
/* 0115E4 004115E4 02202025 */   move       $a0, $s1
/* 0115E8 004115E8 8F998230 */  lw          $t9, %call16(bcopy)($gp)
/* 0115EC 004115EC 02602825 */  move        $a1, $s3
/* 0115F0 004115F0 0320F809 */  jalr        $t9
/* 0115F4 004115F4 02913023 */   subu       $a2, $s4, $s1
/* 0115F8 004115F8 0233C023 */  subu        $t8, $s1, $s3
/* 0115FC 004115FC 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011600 00411600 0298A023 */  subu        $s4, $s4, $t8
/* 011604 00411604 02608825 */  move        $s1, $s3
.L00411608:
/* 011608 00411608 0234082B */  sltu        $at, $s1, $s4
.L0041160C:
/* 01160C 0041160C 1420FFA8 */  bnez        $at, .L004114B0
/* 011610 00411610 02208025 */   move       $s0, $s1
/* 011614 00411614 8FA80070 */  lw          $t0, 0x70($sp)
.L00411618:
/* 011618 00411618 8FA600A8 */  lw          $a2, 0xA8($sp)
/* 01161C 0041161C 02882823 */  subu        $a1, $s4, $t0
/* 011620 00411620 00A6082A */  slt         $at, $a1, $a2
/* 011624 00411624 10200016 */  beqz        $at, .L00411680
/* 011628 00411628 00000000 */   nop
/* 01162C 0041162C 8F998100 */  lw          $t9, %call16(ftruncate)($gp)
/* 011630 00411630 8FA4012C */  lw          $a0, 0x12C($sp)
/* 011634 00411634 0320F809 */  jalr        $t9
/* 011638 00411638 00000000 */   nop
/* 01163C 0041163C 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011640 00411640 1040000F */  beqz        $v0, .L00411680
/* 011644 00411644 00000000 */   nop
/* 011648 00411648 8F848088 */  lw          $a0, %got(errno)($gp)
/* 01164C 0041164C 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011650 00411650 8C840000 */  lw          $a0, 0x0($a0)
/* 011654 00411654 0320F809 */  jalr        $t9
/* 011658 00411658 00000000 */   nop
/* 01165C 0041165C 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011660 00411660 8EB9000C */  lw          $t9, 0xC($s5)
/* 011664 00411664 8F84804C */  lw          $a0, %got(STR_1000276C)($gp)
/* 011668 00411668 8EA50004 */  lw          $a1, 0x4($s5)
/* 01166C 0041166C 00403025 */  move        $a2, $v0
/* 011670 00411670 0320F809 */  jalr        $t9
/* 011674 00411674 2484276C */   addiu      $a0, $a0, %lo(STR_1000276C)
/* 011678 00411678 8FBC0038 */  lw          $gp, 0x38($sp)
/* 01167C 0041167C 00000000 */  nop
.L00411680:
/* 011680 00411680 8F85804C */  lw          $a1, %got(STR_10002774)($gp)
/* 011684 00411684 8F998114 */  lw          $t9, %call16(fdopen)($gp)
/* 011688 00411688 8FA4012C */  lw          $a0, 0x12C($sp)
/* 01168C 0041168C 0320F809 */  jalr        $t9
/* 011690 00411690 24A52774 */   addiu      $a1, $a1, %lo(STR_10002774)
/* 011694 00411694 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011698 00411698 14400010 */  bnez        $v0, .L004116DC
/* 01169C 0041169C 00409025 */   move       $s2, $v0
/* 0116A0 004116A0 8F84804C */  lw          $a0, %got(STR_10002778)($gp)
/* 0116A4 004116A4 8EB9000C */  lw          $t9, 0xC($s5)
/* 0116A8 004116A8 8EA50004 */  lw          $a1, 0x4($s5)
/* 0116AC 004116AC 8FA60134 */  lw          $a2, 0x134($sp)
/* 0116B0 004116B0 0320F809 */  jalr        $t9
/* 0116B4 004116B4 24842778 */   addiu      $a0, $a0, %lo(STR_10002778)
/* 0116B8 004116B8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0116BC 004116BC 8FA4012C */  lw          $a0, 0x12C($sp)
/* 0116C0 004116C0 8F9980E8 */  lw          $t9, %call16(close)($gp)
/* 0116C4 004116C4 00000000 */  nop
/* 0116C8 004116C8 0320F809 */  jalr        $t9
/* 0116CC 004116CC 00000000 */   nop
/* 0116D0 004116D0 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0116D4 004116D4 10000060 */  b           .L00411858
/* 0116D8 004116D8 8FAD0070 */   lw         $t5, 0x70($sp)
.L004116DC:
/* 0116DC 004116DC 8F85804C */  lw          $a1, %got(STR_100027A4)($gp)
/* 0116E0 004116E0 8F9980B4 */  lw          $t9, %call16(fprintf)($gp)
/* 0116E4 004116E4 8FA60134 */  lw          $a2, 0x134($sp)
/* 0116E8 004116E8 02402025 */  move        $a0, $s2
/* 0116EC 004116EC 0320F809 */  jalr        $t9
/* 0116F0 004116F0 24A527A4 */   addiu      $a1, $a1, %lo(STR_100027A4)
/* 0116F4 004116F4 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0116F8 004116F8 0441000F */  bgez        $v0, .L00411738
/* 0116FC 004116FC 00000000 */   nop
/* 011700 00411700 8F848088 */  lw          $a0, %got(errno)($gp)
/* 011704 00411704 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011708 00411708 8C840000 */  lw          $a0, 0x0($a0)
/* 01170C 0041170C 0320F809 */  jalr        $t9
/* 011710 00411710 00000000 */   nop
/* 011714 00411714 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011718 00411718 8EB9000C */  lw          $t9, 0xC($s5)
/* 01171C 0041171C 8F84804C */  lw          $a0, %got(STR_100027A8)($gp)
/* 011720 00411720 8EA50004 */  lw          $a1, 0x4($s5)
/* 011724 00411724 00403025 */  move        $a2, $v0
/* 011728 00411728 0320F809 */  jalr        $t9
/* 01172C 0041172C 248427A8 */   addiu      $a0, $a0, %lo(STR_100027A8)
/* 011730 00411730 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011734 00411734 00000000 */  nop
.L00411738:
/* 011738 00411738 8EA90018 */  lw          $t1, 0x18($s5)
/* 01173C 0041173C 8EB0001C */  lw          $s0, 0x1C($s5)
/* 011740 00411740 000950C0 */  sll         $t2, $t1, 3
/* 011744 00411744 020A1821 */  addu        $v1, $s0, $t2
/* 011748 00411748 0070082B */  sltu        $at, $v1, $s0
/* 01174C 0041174C 14200015 */  bnez        $at, .L004117A4
/* 011750 00411750 00000000 */   nop
/* 011754 00411754 8F91804C */  lw          $s1, %got(STR_100027B0)($gp)
/* 011758 00411758 00000000 */  nop
/* 01175C 0041175C 263127B0 */  addiu       $s1, $s1, %lo(STR_100027B0)
.L00411760:
/* 011760 00411760 8E060000 */  lw          $a2, 0x0($s0)
/* 011764 00411764 00000000 */  nop
/* 011768 00411768 10C0000A */  beqz        $a2, .L00411794
/* 01176C 0041176C 00000000 */   nop
/* 011770 00411770 8F9980B4 */  lw          $t9, %call16(fprintf)($gp)
/* 011774 00411774 02402025 */  move        $a0, $s2
/* 011778 00411778 0320F809 */  jalr        $t9
/* 01177C 0041177C 02202825 */   move       $a1, $s1
/* 011780 00411780 8EAC0018 */  lw          $t4, 0x18($s5)
/* 011784 00411784 8EAB001C */  lw          $t3, 0x1C($s5)
/* 011788 00411788 000C70C0 */  sll         $t6, $t4, 3
/* 01178C 0041178C 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011790 00411790 016E1821 */  addu        $v1, $t3, $t6
.L00411794:
/* 011794 00411794 26100008 */  addiu       $s0, $s0, 0x8
/* 011798 00411798 0070082B */  sltu        $at, $v1, $s0
/* 01179C 0041179C 1020FFF0 */  beqz        $at, .L00411760
/* 0117A0 004117A0 00000000 */   nop
.L004117A4:
/* 0117A4 004117A4 8F85804C */  lw          $a1, %got(STR_100027B4)($gp)
/* 0117A8 004117A8 8F9980B4 */  lw          $t9, %call16(fprintf)($gp)
/* 0117AC 004117AC 02402025 */  move        $a0, $s2
/* 0117B0 004117B0 27A60054 */  addiu       $a2, $sp, 0x54
/* 0117B4 004117B4 0320F809 */  jalr        $t9
/* 0117B8 004117B8 24A527B4 */   addiu      $a1, $a1, %lo(STR_100027B4)
/* 0117BC 004117BC 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0117C0 004117C0 0441000F */  bgez        $v0, .L00411800
/* 0117C4 004117C4 00000000 */   nop
/* 0117C8 004117C8 8F848088 */  lw          $a0, %got(errno)($gp)
/* 0117CC 004117CC 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 0117D0 004117D0 8C840000 */  lw          $a0, 0x0($a0)
/* 0117D4 004117D4 0320F809 */  jalr        $t9
/* 0117D8 004117D8 00000000 */   nop
/* 0117DC 004117DC 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0117E0 004117E0 8EB9000C */  lw          $t9, 0xC($s5)
/* 0117E4 004117E4 8F84804C */  lw          $a0, %got(STR_100027BC)($gp)
/* 0117E8 004117E8 8EA50004 */  lw          $a1, 0x4($s5)
/* 0117EC 004117EC 00403025 */  move        $a2, $v0
/* 0117F0 004117F0 0320F809 */  jalr        $t9
/* 0117F4 004117F4 248427BC */   addiu      $a0, $a0, %lo(STR_100027BC)
/* 0117F8 004117F8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0117FC 004117FC 00000000 */  nop
.L00411800:
/* 011800 00411800 8F9980A8 */  lw          $t9, %call16(fclose)($gp)
/* 011804 00411804 02402025 */  move        $a0, $s2
/* 011808 00411808 0320F809 */  jalr        $t9
/* 01180C 0041180C 00000000 */   nop
/* 011810 00411810 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011814 00411814 10400010 */  beqz        $v0, .L00411858
/* 011818 00411818 8FAD0070 */   lw         $t5, 0x70($sp)
/* 01181C 0041181C 8F848088 */  lw          $a0, %got(errno)($gp)
/* 011820 00411820 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011824 00411824 8C840000 */  lw          $a0, 0x0($a0)
/* 011828 00411828 0320F809 */  jalr        $t9
/* 01182C 0041182C 00000000 */   nop
/* 011830 00411830 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011834 00411834 8EB9000C */  lw          $t9, 0xC($s5)
/* 011838 00411838 8F84804C */  lw          $a0, %got(STR_100027C4)($gp)
/* 01183C 0041183C 8EA50004 */  lw          $a1, 0x4($s5)
/* 011840 00411840 00403025 */  move        $a2, $v0
/* 011844 00411844 0320F809 */  jalr        $t9
/* 011848 00411848 248427C4 */   addiu      $a0, $a0, %lo(STR_100027C4)
/* 01184C 0041184C 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011850 00411850 00000000 */  nop
/* 011854 00411854 8FAD0070 */  lw          $t5, 0x70($sp)
.L00411858:
/* 011858 00411858 00000000 */  nop
/* 01185C 0041185C 11A00016 */  beqz        $t5, .L004118B8
/* 011860 00411860 00000000 */   nop
/* 011864 00411864 8F998110 */  lw          $t9, %call16(munmap)($gp)
/* 011868 00411868 8FA500A8 */  lw          $a1, 0xA8($sp)
/* 01186C 0041186C 0320F809 */  jalr        $t9
/* 011870 00411870 01A02025 */   move       $a0, $t5
/* 011874 00411874 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011878 00411878 1040000F */  beqz        $v0, .L004118B8
/* 01187C 0041187C 00000000 */   nop
/* 011880 00411880 8F848088 */  lw          $a0, %got(errno)($gp)
/* 011884 00411884 8F9980F0 */  lw          $t9, %call16(strerror)($gp)
/* 011888 00411888 8C840000 */  lw          $a0, 0x0($a0)
/* 01188C 0041188C 0320F809 */  jalr        $t9
/* 011890 00411890 00000000 */   nop
/* 011894 00411894 8FBC0038 */  lw          $gp, 0x38($sp)
/* 011898 00411898 8EB9000C */  lw          $t9, 0xC($s5)
/* 01189C 0041189C 8F84804C */  lw          $a0, %got(STR_100027CC)($gp)
/* 0118A0 004118A0 8EA50004 */  lw          $a1, 0x4($s5)
/* 0118A4 004118A4 00403025 */  move        $a2, $v0
/* 0118A8 004118A8 0320F809 */  jalr        $t9
/* 0118AC 004118AC 248427CC */   addiu      $a0, $a0, %lo(STR_100027CC)
/* 0118B0 004118B0 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0118B4 004118B4 00000000 */  nop
.L004118B8:
/* 0118B8 004118B8 8F99808C */  lw          $t9, %call16(free)($gp)
/* 0118BC 004118BC 8EA4001C */  lw          $a0, 0x1C($s5)
/* 0118C0 004118C0 0320F809 */  jalr        $t9
/* 0118C4 004118C4 00000000 */   nop
/* 0118C8 004118C8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0118CC 004118CC 8EA40020 */  lw          $a0, 0x20($s5)
/* 0118D0 004118D0 8F99808C */  lw          $t9, %call16(free)($gp)
/* 0118D4 004118D4 00000000 */  nop
/* 0118D8 004118D8 0320F809 */  jalr        $t9
/* 0118DC 004118DC 00000000 */   nop
/* 0118E0 004118E0 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0118E4 004118E4 02A02025 */  move        $a0, $s5
/* 0118E8 004118E8 8F99808C */  lw          $t9, %call16(free)($gp)
/* 0118EC 004118EC 00000000 */  nop
/* 0118F0 004118F0 0320F809 */  jalr        $t9
/* 0118F4 004118F4 00000000 */   nop
/* 0118F8 004118F8 8FBC0038 */  lw          $gp, 0x38($sp)
/* 0118FC 004118FC 00000000 */  nop
.L00411900:
/* 011900 00411900 8FBF003C */  lw          $ra, 0x3C($sp)
.L00411904:
/* 011904 00411904 8FB00020 */  lw          $s0, 0x20($sp)
/* 011908 00411908 8FB10024 */  lw          $s1, 0x24($sp)
/* 01190C 0041190C 8FB20028 */  lw          $s2, 0x28($sp)
/* 011910 00411910 8FB3002C */  lw          $s3, 0x2C($sp)
/* 011914 00411914 8FB40030 */  lw          $s4, 0x30($sp)
/* 011918 00411918 8FB50034 */  lw          $s5, 0x34($sp)
/* 01191C 0041191C 03E00008 */  jr          $ra
/* 011920 00411920 27BD0130 */   addiu      $sp, $sp, 0x130
/* 011924 00411924 00000000 */  nop
/* 011928 00411928 00000000 */  nop
/* 01192C 0041192C 00000000 */  nop