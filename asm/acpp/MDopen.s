.section .rodata
glabel STR_100026CC
/* 0146CC 100026CC */ .asciz "can't allocate memory for %s update"
                      .balign 4


.section .text
/* Generated by spimdisasm 1.9.1 */

glabel MDopen # 87
# _gp_disp: 0xFBF9864
.set noreorder; .cpload $t9; # .set reorder
/* 010FC8 00410FC8 27BDFFD8 */  addiu       $sp, $sp, -0x28
/* 010FCC 00410FCC 8F99811C */  lw          $t9, %call16(malloc)($gp)
/* 010FD0 00410FD0 AFBF001C */  sw          $ra, 0x1C($sp)
/* 010FD4 00410FD4 AFA40028 */  sw          $a0, 0x28($sp)
/* 010FD8 00410FD8 AFBC0018 */  sw          $gp, 0x18($sp)
/* 010FDC 00410FDC AFB00014 */  sw          $s0, 0x14($sp)
/* 010FE0 00410FE0 AFA5002C */  sw          $a1, 0x2C($sp)
/* 010FE4 00410FE4 AFA60030 */  sw          $a2, 0x30($sp)
/* 010FE8 00410FE8 AFA70034 */  sw          $a3, 0x34($sp)
/* 010FEC 00410FEC 0320F809 */  jalr        $t9
/* 010FF0 00410FF0 2404002C */   addiu      $a0, $zero, 0x2C
/* 010FF4 00410FF4 8FBC0018 */  lw          $gp, 0x18($sp)
/* 010FF8 00410FF8 00408025 */  move        $s0, $v0
/* 010FFC 00410FFC 8F998274 */  lw          $t9, %call16(MDnewstab)($gp)
/* 011000 00411000 00402025 */  move        $a0, $v0
/* 011004 00411004 0320F809 */  jalr        $t9
/* 011008 00411008 00000000 */   nop
/* 01100C 0041100C 8FBC0018 */  lw          $gp, 0x18($sp)
/* 011010 00411010 24040100 */  addiu       $a0, $zero, 0x100
/* 011014 00411014 8F9980F8 */  lw          $t9, %call16(calloc)($gp)
/* 011018 00411018 24050008 */  addiu       $a1, $zero, 0x8
/* 01101C 0041101C 0320F809 */  jalr        $t9
/* 011020 00411020 00000000 */   nop
/* 011024 00411024 8FBC0018 */  lw          $gp, 0x18($sp)
/* 011028 00411028 12000003 */  beqz        $s0, .L00411038
/* 01102C 0041102C AFA20020 */   sw         $v0, 0x20($sp)
/* 011030 00411030 1440001B */  bnez        $v0, .L004110A0
/* 011034 00411034 00000000 */   nop
.L00411038:
/* 011038 00411038 8F84804C */  lw          $a0, %got(STR_100026CC)($gp)
/* 01103C 0041103C 8FB90034 */  lw          $t9, 0x34($sp)
/* 011040 00411040 8FA5002C */  lw          $a1, 0x2C($sp)
/* 011044 00411044 0320F809 */  jalr        $t9
/* 011048 00411048 248426CC */   addiu      $a0, $a0, %lo(STR_100026CC)
/* 01104C 0041104C 8FBC0018 */  lw          $gp, 0x18($sp)
/* 011050 00411050 12000008 */  beqz        $s0, .L00411074
/* 011054 00411054 8FA40020 */   lw         $a0, 0x20($sp)
/* 011058 00411058 8F99808C */  lw          $t9, %call16(free)($gp)
/* 01105C 0041105C 02002025 */  move        $a0, $s0
/* 011060 00411060 0320F809 */  jalr        $t9
/* 011064 00411064 00000000 */   nop
/* 011068 00411068 8FBC0018 */  lw          $gp, 0x18($sp)
/* 01106C 0041106C 00000000 */  nop
/* 011070 00411070 8FA40020 */  lw          $a0, 0x20($sp)
.L00411074:
/* 011074 00411074 00000000 */  nop
/* 011078 00411078 10800007 */  beqz        $a0, .L00411098
/* 01107C 0041107C 00000000 */   nop
/* 011080 00411080 8F99808C */  lw          $t9, %call16(free)($gp)
/* 011084 00411084 00000000 */  nop
/* 011088 00411088 0320F809 */  jalr        $t9
/* 01108C 0041108C 00000000 */   nop
/* 011090 00411090 8FBC0018 */  lw          $gp, 0x18($sp)
/* 011094 00411094 00000000 */  nop
.L00411098:
/* 011098 00411098 1000001D */  b           .L00411110
/* 01109C 0041109C 00001025 */   move       $v0, $zero
.L004110A0:
/* 0110A0 004110A0 8F998278 */  lw          $t9, %call16(MDstrcpy)($gp)
/* 0110A4 004110A4 8FA50028 */  lw          $a1, 0x28($sp)
/* 0110A8 004110A8 0320F809 */  jalr        $t9
/* 0110AC 004110AC 02002025 */   move       $a0, $s0
/* 0110B0 004110B0 8FBC0018 */  lw          $gp, 0x18($sp)
/* 0110B4 004110B4 AE020000 */  sw          $v0, 0x0($s0)
/* 0110B8 004110B8 8F998278 */  lw          $t9, %call16(MDstrcpy)($gp)
/* 0110BC 004110BC 8FA5002C */  lw          $a1, 0x2C($sp)
/* 0110C0 004110C0 0320F809 */  jalr        $t9
/* 0110C4 004110C4 02002025 */   move       $a0, $s0
/* 0110C8 004110C8 8FBC0018 */  lw          $gp, 0x18($sp)
/* 0110CC 004110CC AE020004 */  sw          $v0, 0x4($s0)
/* 0110D0 004110D0 8F998278 */  lw          $t9, %call16(MDstrcpy)($gp)
/* 0110D4 004110D4 8FA50030 */  lw          $a1, 0x30($sp)
/* 0110D8 004110D8 0320F809 */  jalr        $t9
/* 0110DC 004110DC 02002025 */   move       $a0, $s0
/* 0110E0 004110E0 8FBC0018 */  lw          $gp, 0x18($sp)
/* 0110E4 004110E4 AE020008 */  sw          $v0, 0x8($s0)
/* 0110E8 004110E8 8FAE0034 */  lw          $t6, 0x34($sp)
/* 0110EC 004110EC 240F00C0 */  addiu       $t7, $zero, 0xC0
/* 0110F0 004110F0 241800FF */  addiu       $t8, $zero, 0xFF
/* 0110F4 004110F4 AE000010 */  sw          $zero, 0x10($s0)
/* 0110F8 004110F8 AE0F0014 */  sw          $t7, 0x14($s0)
/* 0110FC 004110FC AE180018 */  sw          $t8, 0x18($s0)
/* 011100 00411100 AE0E000C */  sw          $t6, 0xC($s0)
/* 011104 00411104 8FA80020 */  lw          $t0, 0x20($sp)
/* 011108 00411108 02001025 */  move        $v0, $s0
/* 01110C 0041110C AE08001C */  sw          $t0, 0x1C($s0)
.L00411110:
/* 011110 00411110 8FBF001C */  lw          $ra, 0x1C($sp)
/* 011114 00411114 8FB00014 */  lw          $s0, 0x14($sp)
/* 011118 00411118 03E00008 */  jr          $ra
/* 01111C 0041111C 27BD0028 */   addiu      $sp, $sp, 0x28