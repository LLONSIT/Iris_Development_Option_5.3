/* Generated by spimdisasm 1.9.1 */

glabel _strccpy # 40
# _gp_disp: 0x105AC
.set noreorder; .cpload $t9; # .set reorder
/* 007F00 0F9A7F00 8F998128 */  lw          $t9, %call16(_strcadd)($gp)
/* 007F04 0F9A7F04 27BDFFE0 */  addiu       $sp, $sp, -0x20
/* 007F08 0F9A7F08 AFBF001C */  sw          $ra, 0x1C($sp)
/* 007F0C 0F9A7F0C AFBC0018 */  sw          $gp, 0x18($sp)
/* 007F10 0F9A7F10 0320F809 */  jalr        $t9
/* 007F14 0F9A7F14 AFA40020 */   sw         $a0, 0x20($sp)
/* 007F18 0F9A7F18 8FBF001C */  lw          $ra, 0x1C($sp)
/* 007F1C 0F9A7F1C 8FBC0018 */  lw          $gp, 0x18($sp)
/* 007F20 0F9A7F20 8FA20020 */  lw          $v0, 0x20($sp)
/* 007F24 0F9A7F24 03E00008 */  jr          $ra
/* 007F28 0F9A7F28 27BD0020 */   addiu      $sp, $sp, 0x20