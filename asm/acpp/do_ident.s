.section .rodata
glabel STR_100015BC
/* 0135BC 100015BC */ .asciz "ANSI C does not allow #ident; #ident ignored "
                      .balign 4


.section .text
/* Generated by spimdisasm 1.9.1 */

glabel do_ident # 28
# _gp_disp: 0xFC00658
.set noreorder; .cpload $t9; # .set reorder
/* 00A1D4 0040A1D4 8F8E8324 */  lw          $t6, %got(pedantic)($gp)
/* 00A1D8 0040A1D8 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 00A1DC 0040A1DC 8DCE0000 */  lw          $t6, 0x0($t6)
/* 00A1E0 0040A1E0 AFBF001C */  sw          $ra, 0x1C($sp)
/* 00A1E4 0040A1E4 29C10002 */  slti        $at, $t6, 0x2
/* 00A1E8 0040A1E8 1420000E */  bnez        $at, .L0040A224
/* 00A1EC 0040A1EC AFBC0018 */   sw         $gp, 0x18($sp)
/* 00A1F0 0040A1F0 8F8F8328 */  lw          $t7, %got(warnings_off)($gp)
/* 00A1F4 0040A1F4 00000000 */  nop
/* 00A1F8 0040A1F8 8DEF0000 */  lw          $t7, 0x0($t7)
/* 00A1FC 0040A1FC 00000000 */  nop
/* 00A200 0040A200 15E00009 */  bnez        $t7, .L0040A228
/* 00A204 0040A204 8FBF001C */   lw         $ra, 0x1C($sp)
/* 00A208 0040A208 8F84804C */  lw          $a0, %got(STR_100015BC)($gp)
/* 00A20C 0040A20C 8F9981EC */  lw          $t9, %call16(warning)($gp)
/* 00A210 0040A210 248415BC */  addiu       $a0, $a0, %lo(STR_100015BC)
/* 00A214 0040A214 0320F809 */  jalr        $t9
/* 00A218 0040A218 00000000 */   nop
/* 00A21C 0040A21C 8FBC0018 */  lw          $gp, 0x18($sp)
/* 00A220 0040A220 00000000 */  nop
.L0040A224:
/* 00A224 0040A224 8FBF001C */  lw          $ra, 0x1C($sp)
.L0040A228:
/* 00A228 0040A228 27BD0020 */  addiu       $sp, $sp, 0x20
/* 00A22C 0040A22C 03E00008 */  jr          $ra
/* 00A230 0040A230 00000000 */   nop