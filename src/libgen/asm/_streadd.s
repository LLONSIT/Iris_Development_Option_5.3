.section .rodata
glabel STR_0F9B0480
/* 009480 0F9B0480 */ .asciz "%.3o"
                      .balign 4

.section .late_rodata
glabel jtbl_0F9B0488
/* 009488 0F9B0488 FFFEFDF4 */ .gpword .L0F9A8294
/* 00948C 0F9B048C FFFEFDB8 */ .gpword .L0F9A8258
/* 009490 0F9B0490 FFFEFDA8 */ .gpword .L0F9A8248
/* 009494 0F9B0494 FFFEFD9C */ .gpword .L0F9A823C
/* 009498 0F9B0498 FFFEFDE4 */ .gpword .L0F9A8284
/* 00949C 0F9B049C FFFEFDD4 */ .gpword .L0F9A8274
/* 0094A0 0F9B04A0 FFFEFDC8 */ .gpword .L0F9A8268
/* 0094A4 0F9B04A4 00000000 */ .word 0x00000000
/* 0094A8 0F9B04A8 00000000 */ .word 0x00000000
/* 0094AC 0F9B04AC 00000000 */ .word 0x00000000


.section .text
/* Generated by spimdisasm 1.9.1 */

glabel _streadd # 43
# _gp_disp: 0x10354
.set noreorder; .cpload $t9; # .set reorder
/* 008158 0F9A8158 27BDFFC0 */  addiu       $sp, $sp, -0x40
/* 00815C 0F9A815C AFBF003C */  sw          $ra, 0x3C($sp)
/* 008160 0F9A8160 AFBE0038 */  sw          $fp, 0x38($sp)
/* 008164 0F9A8164 AFBC0034 */  sw          $gp, 0x34($sp)
/* 008168 0F9A8168 AFB70030 */  sw          $s7, 0x30($sp)
/* 00816C 0F9A816C AFB6002C */  sw          $s6, 0x2C($sp)
/* 008170 0F9A8170 AFB50028 */  sw          $s5, 0x28($sp)
/* 008174 0F9A8174 AFB40024 */  sw          $s4, 0x24($sp)
/* 008178 0F9A8178 AFB30020 */  sw          $s3, 0x20($sp)
/* 00817C 0F9A817C AFB2001C */  sw          $s2, 0x1C($sp)
/* 008180 0F9A8180 AFB10018 */  sw          $s1, 0x18($sp)
/* 008184 0F9A8184 AFB00014 */  sw          $s0, 0x14($sp)
/* 008188 0F9A8188 90B10000 */  lbu         $s1, 0x0($a1)
/* 00818C 0F9A818C 00808025 */  move        $s0, $a0
/* 008190 0F9A8190 00C09025 */  move        $s2, $a2
/* 008194 0F9A8194 1220005E */  beqz        $s1, .L0F9A8310
/* 008198 0F9A8198 24B40001 */   addiu      $s4, $a1, 0x1
/* 00819C 0F9A819C 8F96804C */  lw          $s6, %got(STR_0F9B0480)($gp)
/* 0081A0 0F9A81A0 8F958070 */  lw          $s5, %got(D_FB504F0)($gp)
/* 0081A4 0F9A81A4 241E0072 */  addiu       $fp, $zero, 0x72
/* 0081A8 0F9A81A8 2417006E */  addiu       $s7, $zero, 0x6E
/* 0081AC 0F9A81AC 2413005C */  addiu       $s3, $zero, 0x5C
/* 0081B0 0F9A81B0 26D60480 */  addiu       $s6, $s6, %lo(STR_0F9B0480)
/* 0081B4 0F9A81B4 02B17021 */  addu        $t6, $s5, $s1
.L0F9A81B8:
/* 0081B8 0F9A81B8 91CF0001 */  lbu         $t7, 0x1($t6)
/* 0081BC 0F9A81BC 00000000 */  nop
/* 0081C0 0F9A81C0 31F80057 */  andi        $t8, $t7, 0x57
/* 0081C4 0F9A81C4 1700003F */  bnez        $t8, .L0F9A82C4
/* 0081C8 0F9A81C8 00000000 */   nop
/* 0081CC 0F9A81CC 12400008 */  beqz        $s2, .L0F9A81F0
/* 0081D0 0F9A81D0 2E21000E */   sltiu      $at, $s1, 0xE
/* 0081D4 0F9A81D4 8F9980E8 */  lw          $t9, %call16(strchr)($gp)
/* 0081D8 0F9A81D8 02402025 */  move        $a0, $s2
/* 0081DC 0F9A81DC 0320F809 */  jalr        $t9
/* 0081E0 0F9A81E0 02202825 */   move       $a1, $s1
/* 0081E4 0F9A81E4 8FBC0034 */  lw          $gp, 0x34($sp)
/* 0081E8 0F9A81E8 14400036 */  bnez        $v0, .L0F9A82C4
/* 0081EC 0F9A81EC 2E21000E */   sltiu      $at, $s1, 0xE
.L0F9A81F0:
/* 0081F0 0F9A81F0 A2130000 */  sb          $s3, 0x0($s0)
/* 0081F4 0F9A81F4 14200005 */  bnez        $at, .L0F9A820C
/* 0081F8 0F9A81F8 26100001 */   addiu      $s0, $s0, 0x1
/* 0081FC 0F9A81FC 12330040 */  beq         $s1, $s3, .L0F9A8300
/* 008200 0F9A8200 00000000 */   nop
/* 008204 0F9A8204 10000027 */  b           .L0F9A82A4
/* 008208 0F9A8208 00000000 */   nop
.L0F9A820C:
/* 00820C 0F9A820C 2639FFF9 */  addiu       $t9, $s1, -0x7
/* 008210 0F9A8210 2F210007 */  sltiu       $at, $t9, 0x7
/* 008214 0F9A8214 10200023 */  beqz        $at, .L0F9A82A4
/* 008218 0F9A8218 00000000 */   nop
/* 00821C 0F9A821C 8F81804C */  lw          $at, %got(jtbl_0F9B0488)($gp)
/* 008220 0F9A8220 0019C880 */  sll         $t9, $t9, 2
/* 008224 0F9A8224 00390821 */  addu        $at, $at, $t9
/* 008228 0F9A8228 8C390488 */  lw          $t9, %lo(jtbl_0F9B0488)($at)
/* 00822C 0F9A822C 00000000 */  nop
/* 008230 0F9A8230 033CC821 */  addu        $t9, $t9, $gp
/* 008234 0F9A8234 03200008 */  jr          $t9
/* 008238 0F9A8238 00000000 */   nop
.L0F9A823C:
/* 00823C 0F9A823C A2170000 */  sb          $s7, 0x0($s0)
/* 008240 0F9A8240 1000002F */  b           .L0F9A8300
/* 008244 0F9A8244 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A8248:
/* 008248 0F9A8248 24080074 */  addiu       $t0, $zero, 0x74
/* 00824C 0F9A824C A2080000 */  sb          $t0, 0x0($s0)
/* 008250 0F9A8250 1000002B */  b           .L0F9A8300
/* 008254 0F9A8254 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A8258:
/* 008258 0F9A8258 24090062 */  addiu       $t1, $zero, 0x62
/* 00825C 0F9A825C A2090000 */  sb          $t1, 0x0($s0)
/* 008260 0F9A8260 10000027 */  b           .L0F9A8300
/* 008264 0F9A8264 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A8268:
/* 008268 0F9A8268 A21E0000 */  sb          $fp, 0x0($s0)
/* 00826C 0F9A826C 10000024 */  b           .L0F9A8300
/* 008270 0F9A8270 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A8274:
/* 008274 0F9A8274 240A0066 */  addiu       $t2, $zero, 0x66
/* 008278 0F9A8278 A20A0000 */  sb          $t2, 0x0($s0)
/* 00827C 0F9A827C 10000020 */  b           .L0F9A8300
/* 008280 0F9A8280 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A8284:
/* 008284 0F9A8284 240B0076 */  addiu       $t3, $zero, 0x76
/* 008288 0F9A8288 A20B0000 */  sb          $t3, 0x0($s0)
/* 00828C 0F9A828C 1000001C */  b           .L0F9A8300
/* 008290 0F9A8290 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A8294:
/* 008294 0F9A8294 240C0061 */  addiu       $t4, $zero, 0x61
/* 008298 0F9A8298 A20C0000 */  sb          $t4, 0x0($s0)
/* 00829C 0F9A829C 10000018 */  b           .L0F9A8300
/* 0082A0 0F9A82A0 26100001 */   addiu      $s0, $s0, 0x1
.L0F9A82A4:
/* 0082A4 0F9A82A4 8F9980A4 */  lw          $t9, %call16(sprintf)($gp)
/* 0082A8 0F9A82A8 02002025 */  move        $a0, $s0
/* 0082AC 0F9A82AC 02C02825 */  move        $a1, $s6
/* 0082B0 0F9A82B0 0320F809 */  jalr        $t9
/* 0082B4 0F9A82B4 02203025 */   move       $a2, $s1
/* 0082B8 0F9A82B8 8FBC0034 */  lw          $gp, 0x34($sp)
/* 0082BC 0F9A82BC 10000010 */  b           .L0F9A8300
/* 0082C0 0F9A82C0 26100003 */   addiu      $s0, $s0, 0x3
.L0F9A82C4:
/* 0082C4 0F9A82C4 1633000C */  bne         $s1, $s3, .L0F9A82F8
/* 0082C8 0F9A82C8 00000000 */   nop
/* 0082CC 0F9A82CC 12400008 */  beqz        $s2, .L0F9A82F0
/* 0082D0 0F9A82D0 00000000 */   nop
/* 0082D4 0F9A82D4 8F9980E8 */  lw          $t9, %call16(strchr)($gp)
/* 0082D8 0F9A82D8 02402025 */  move        $a0, $s2
/* 0082DC 0F9A82DC 0320F809 */  jalr        $t9
/* 0082E0 0F9A82E0 02202825 */   move       $a1, $s1
/* 0082E4 0F9A82E4 8FBC0034 */  lw          $gp, 0x34($sp)
/* 0082E8 0F9A82E8 14400003 */  bnez        $v0, .L0F9A82F8
/* 0082EC 0F9A82EC 00000000 */   nop
.L0F9A82F0:
/* 0082F0 0F9A82F0 A2130000 */  sb          $s3, 0x0($s0)
/* 0082F4 0F9A82F4 26100001 */  addiu       $s0, $s0, 0x1
.L0F9A82F8:
/* 0082F8 0F9A82F8 A2110000 */  sb          $s1, 0x0($s0)
/* 0082FC 0F9A82FC 26100001 */  addiu       $s0, $s0, 0x1
.L0F9A8300:
/* 008300 0F9A8300 92910000 */  lbu         $s1, 0x0($s4)
/* 008304 0F9A8304 26940001 */  addiu       $s4, $s4, 0x1
/* 008308 0F9A8308 1620FFAB */  bnez        $s1, .L0F9A81B8
/* 00830C 0F9A830C 02B17021 */   addu       $t6, $s5, $s1
.L0F9A8310:
/* 008310 0F9A8310 A2000000 */  sb          $zero, 0x0($s0)
/* 008314 0F9A8314 8FBF003C */  lw          $ra, 0x3C($sp)
/* 008318 0F9A8318 02001025 */  move        $v0, $s0
/* 00831C 0F9A831C 8FB00014 */  lw          $s0, 0x14($sp)
/* 008320 0F9A8320 8FBE0038 */  lw          $fp, 0x38($sp)
/* 008324 0F9A8324 8FB70030 */  lw          $s7, 0x30($sp)
/* 008328 0F9A8328 8FB6002C */  lw          $s6, 0x2C($sp)
/* 00832C 0F9A832C 8FB50028 */  lw          $s5, 0x28($sp)
/* 008330 0F9A8330 8FB40024 */  lw          $s4, 0x24($sp)
/* 008334 0F9A8334 8FB30020 */  lw          $s3, 0x20($sp)
/* 008338 0F9A8338 8FB2001C */  lw          $s2, 0x1C($sp)
/* 00833C 0F9A833C 8FB10018 */  lw          $s1, 0x18($sp)
/* 008340 0F9A8340 03E00008 */  jr          $ra
/* 008344 0F9A8344 27BD0040 */   addiu      $sp, $sp, 0x40
/* 008348 0F9A8348 00000000 */  nop
/* 00834C 0F9A834C 00000000 */  nop
/* 008350 0F9A8350 00000000 */  nop
