/* Generated by spimdisasm 1.9.1 */

glabel _gmatch # 9
# _gp_disp: 0x15FD8
.set noreorder; .cpload $t9; # .set reorder
/* 0024D4 0F9A24D4 27BDFFA0 */  addiu       $sp, $sp, -0x60
/* 0024D8 0F9A24D8 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 0024DC 0F9A24DC AFB6002C */  sw          $s6, 0x2C($sp)
/* 0024E0 0F9A24E0 AFB40024 */  sw          $s4, 0x24($sp)
/* 0024E4 0F9A24E4 AFB10018 */  sw          $s1, 0x18($sp)
/* 0024E8 0F9A24E8 AFB00014 */  sw          $s0, 0x14($sp)
/* 0024EC 0F9A24EC 00A08825 */  move        $s1, $a1
/* 0024F0 0F9A24F0 0080A025 */  move        $s4, $a0
/* 0024F4 0F9A24F4 27B6004C */  addiu       $s6, $sp, 0x4C
/* 0024F8 0F9A24F8 AFBF0034 */  sw          $ra, 0x34($sp)
/* 0024FC 0F9A24FC 00808025 */  move        $s0, $a0
/* 002500 0F9A2500 AFBC0030 */  sw          $gp, 0x30($sp)
/* 002504 0F9A2504 AFB50028 */  sw          $s5, 0x28($sp)
/* 002508 0F9A2508 AFB30020 */  sw          $s3, 0x20($sp)
/* 00250C 0F9A250C AFB2001C */  sw          $s2, 0x1C($sp)
/* 002510 0F9A2510 02C02025 */  move        $a0, $s6
/* 002514 0F9A2514 02802825 */  move        $a1, $s4
/* 002518 0F9A2518 0320F809 */  jalr        $t9
/* 00251C 0F9A251C 24060005 */   addiu      $a2, $zero, 0x5
/* 002520 0F9A2520 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002524 0F9A2524 1C400004 */  bgtz        $v0, .L0F9A2538
/* 002528 0F9A2528 02C02025 */   move       $a0, $s6
/* 00252C 0F9A252C 26940001 */  addiu       $s4, $s4, 0x1
/* 002530 0F9A2530 10000003 */  b           .L0F9A2540
/* 002534 0F9A2534 0040A825 */   move       $s5, $v0
.L0F9A2538:
/* 002538 0F9A2538 8FB5004C */  lw          $s5, 0x4C($sp)
/* 00253C 0F9A253C 0282A021 */  addu        $s4, $s4, $v0
.L0F9A2540:
/* 002540 0F9A2540 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 002544 0F9A2544 02202825 */  move        $a1, $s1
/* 002548 0F9A2548 0320F809 */  jalr        $t9
/* 00254C 0F9A254C 24060005 */   addiu      $a2, $zero, 0x5
/* 002550 0F9A2550 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002554 0F9A2554 04410003 */  bgez        $v0, .L0F9A2564
/* 002558 0F9A2558 00000000 */   nop
/* 00255C 0F9A255C 100000F0 */  b           .L0F9A2920
/* 002560 0F9A2560 00001025 */   move       $v0, $zero
.L0F9A2564:
/* 002564 0F9A2564 14400004 */  bnez        $v0, .L0F9A2578
/* 002568 0F9A2568 8FA4004C */   lw         $a0, 0x4C($sp)
/* 00256C 0F9A256C 100000EC */  b           .L0F9A2920
/* 002570 0F9A2570 2EA20001 */   sltiu      $v0, $s5, 0x1
/* 002574 0F9A2574 8FA4004C */  lw          $a0, 0x4C($sp)
.L0F9A2578:
/* 002578 0F9A2578 2403002A */  addiu       $v1, $zero, 0x2A
/* 00257C 0F9A257C 108300C0 */  beq         $a0, $v1, .L0F9A2880
/* 002580 0F9A2580 02228821 */   addu       $s1, $s1, $v0
/* 002584 0F9A2584 2401003F */  addiu       $at, $zero, 0x3F
/* 002588 0F9A2588 108100B2 */  beq         $a0, $at, .L0F9A2854
/* 00258C 0F9A258C 2401005B */   addiu      $at, $zero, 0x5B
/* 002590 0F9A2590 10810005 */  beq         $a0, $at, .L0F9A25A8
/* 002594 0F9A2594 2401005C */   addiu      $at, $zero, 0x5C
/* 002598 0F9A2598 1081009F */  beq         $a0, $at, .L0F9A2818
/* 00259C 0F9A259C 02202825 */   move       $a1, $s1
/* 0025A0 0F9A25A0 100000A8 */  b           .L0F9A2844
/* 0025A4 0F9A25A4 00000000 */   nop
.L0F9A25A8:
/* 0025A8 0F9A25A8 1EA00003 */  bgtz        $s5, .L0F9A25B8
/* 0025AC 0F9A25AC 00009825 */   move       $s3, $zero
/* 0025B0 0F9A25B0 100000DB */  b           .L0F9A2920
/* 0025B4 0F9A25B4 00001025 */   move       $v0, $zero
.L0F9A25B8:
/* 0025B8 0F9A25B8 922E0000 */  lbu         $t6, 0x0($s1)
/* 0025BC 0F9A25BC 24010021 */  addiu       $at, $zero, 0x21
/* 0025C0 0F9A25C0 00001025 */  move        $v0, $zero
/* 0025C4 0F9A25C4 15C10003 */  bne         $t6, $at, .L0F9A25D4
/* 0025C8 0F9A25C8 00009025 */   move       $s2, $zero
/* 0025CC 0F9A25CC 24020001 */  addiu       $v0, $zero, 0x1
/* 0025D0 0F9A25D0 26310001 */  addiu       $s1, $s1, 0x1
.L0F9A25D4:
/* 0025D4 0F9A25D4 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 0025D8 0F9A25D8 02C02025 */  move        $a0, $s6
/* 0025DC 0F9A25DC 02202825 */  move        $a1, $s1
/* 0025E0 0F9A25E0 24060005 */  addiu       $a2, $zero, 0x5
/* 0025E4 0F9A25E4 0320F809 */  jalr        $t9
/* 0025E8 0F9A25E8 AFA20040 */   sw         $v0, 0x40($sp)
/* 0025EC 0F9A25EC 8FA4004C */  lw          $a0, 0x4C($sp)
/* 0025F0 0F9A25F0 8FBC0030 */  lw          $gp, 0x30($sp)
/* 0025F4 0F9A25F4 1C400003 */  bgtz        $v0, .L0F9A2604
/* 0025F8 0F9A25F8 00808025 */   move       $s0, $a0
/* 0025FC 0F9A25FC 100000C8 */  b           .L0F9A2920
/* 002600 0F9A2600 00001025 */   move       $v0, $zero
.L0F9A2604:
/* 002604 0F9A2604 02228821 */  addu        $s1, $s1, $v0
.L0F9A2608:
/* 002608 0F9A2608 2401002D */  addiu       $at, $zero, 0x2D
/* 00260C 0F9A260C 14810050 */  bne         $a0, $at, .L0F9A2750
/* 002610 0F9A2610 8FA4004C */   lw         $a0, 0x4C($sp)
/* 002614 0F9A2614 1260004E */  beqz        $s3, .L0F9A2750
/* 002618 0F9A2618 8FA4004C */   lw         $a0, 0x4C($sp)
/* 00261C 0F9A261C 922F0000 */  lbu         $t7, 0x0($s1)
/* 002620 0F9A2620 2401005D */  addiu       $at, $zero, 0x5D
/* 002624 0F9A2624 11E10049 */  beq         $t7, $at, .L0F9A274C
/* 002628 0F9A2628 02C02025 */   move       $a0, $s6
/* 00262C 0F9A262C 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 002630 0F9A2630 02202825 */  move        $a1, $s1
/* 002634 0F9A2634 0320F809 */  jalr        $t9
/* 002638 0F9A2638 24060005 */   addiu      $a2, $zero, 0x5
/* 00263C 0F9A263C 8FA4004C */  lw          $a0, 0x4C($sp)
/* 002640 0F9A2640 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002644 0F9A2644 1C400003 */  bgtz        $v0, .L0F9A2654
/* 002648 0F9A2648 00808025 */   move       $s0, $a0
/* 00264C 0F9A264C 100000B4 */  b           .L0F9A2920
/* 002650 0F9A2650 00001025 */   move       $v0, $zero
.L0F9A2654:
/* 002654 0F9A2654 2401005C */  addiu       $at, $zero, 0x5C
/* 002658 0F9A2658 1481000C */  bne         $a0, $at, .L0F9A268C
/* 00265C 0F9A265C 02228821 */   addu       $s1, $s1, $v0
/* 002660 0F9A2660 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 002664 0F9A2664 02C02025 */  move        $a0, $s6
/* 002668 0F9A2668 02202825 */  move        $a1, $s1
/* 00266C 0F9A266C 0320F809 */  jalr        $t9
/* 002670 0F9A2670 24060005 */   addiu      $a2, $zero, 0x5
/* 002674 0F9A2674 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002678 0F9A2678 8FB0004C */  lw          $s0, 0x4C($sp)
/* 00267C 0F9A267C 1C400003 */  bgtz        $v0, .L0F9A268C
/* 002680 0F9A2680 02228821 */   addu       $s1, $s1, $v0
/* 002684 0F9A2684 100000A6 */  b           .L0F9A2920
/* 002688 0F9A2688 00001025 */   move       $v0, $zero
.L0F9A268C:
/* 00268C 0F9A268C 8FB80040 */  lw          $t8, 0x40($sp)
/* 002690 0F9A2690 00000000 */  nop
/* 002694 0F9A2694 13000018 */  beqz        $t8, .L0F9A26F8
/* 002698 0F9A2698 00000000 */   nop
/* 00269C 0F9A269C 8F998070 */  lw          $t9, %got(D_FB504F0)($gp)
/* 0026A0 0F9A26A0 00000000 */  nop
/* 0026A4 0F9A26A4 93390208 */  lbu         $t9, 0x208($t9)
/* 0026A8 0F9A26A8 00000000 */  nop
/* 0026AC 0F9A26AC 2B210002 */  slti        $at, $t9, 0x2
/* 0026B0 0F9A26B0 14200009 */  bnez        $at, .L0F9A26D8
/* 0026B4 0F9A26B4 02B3082A */   slt        $at, $s5, $s3
/* 0026B8 0F9A26B8 8F998014 */  lw          $t9, %got(func_0F9A2420)($gp)
/* 0026BC 0F9A26BC 02602025 */  move        $a0, $s3
/* 0026C0 0F9A26C0 27392420 */  addiu       $t9, $t9, %lo(func_0F9A2420)
/* 0026C4 0F9A26C4 0320F809 */  jalr        $t9
/* 0026C8 0F9A26C8 02002825 */   move       $a1, $s0
/* 0026CC 0F9A26CC 8FBC0030 */  lw          $gp, 0x30($sp)
/* 0026D0 0F9A26D0 1040002C */  beqz        $v0, .L0F9A2784
/* 0026D4 0F9A26D4 02B3082A */   slt        $at, $s5, $s3
.L0F9A26D8:
/* 0026D8 0F9A26D8 14200003 */  bnez        $at, .L0F9A26E8
/* 0026DC 0F9A26DC 0215082A */   slt        $at, $s0, $s5
/* 0026E0 0F9A26E0 10200003 */  beqz        $at, .L0F9A26F0
/* 0026E4 0F9A26E4 00000000 */   nop
.L0F9A26E8:
/* 0026E8 0F9A26E8 10000026 */  b           .L0F9A2784
/* 0026EC 0F9A26EC 26520001 */   addiu      $s2, $s2, 0x1
.L0F9A26F0:
/* 0026F0 0F9A26F0 1000008B */  b           .L0F9A2920
/* 0026F4 0F9A26F4 00001025 */   move       $v0, $zero
.L0F9A26F8:
/* 0026F8 0F9A26F8 8F888070 */  lw          $t0, %got(D_FB504F0)($gp)
/* 0026FC 0F9A26FC 00000000 */  nop
/* 002700 0F9A2700 91080208 */  lbu         $t0, 0x208($t0)
/* 002704 0F9A2704 00000000 */  nop
/* 002708 0F9A2708 29010002 */  slti        $at, $t0, 0x2
/* 00270C 0F9A270C 14200009 */  bnez        $at, .L0F9A2734
/* 002710 0F9A2710 02B3082A */   slt        $at, $s5, $s3
/* 002714 0F9A2714 8F998014 */  lw          $t9, %got(func_0F9A2420)($gp)
/* 002718 0F9A2718 02602025 */  move        $a0, $s3
/* 00271C 0F9A271C 27392420 */  addiu       $t9, $t9, %lo(func_0F9A2420)
/* 002720 0F9A2720 0320F809 */  jalr        $t9
/* 002724 0F9A2724 02002825 */   move       $a1, $s0
/* 002728 0F9A2728 8FBC0030 */  lw          $gp, 0x30($sp)
/* 00272C 0F9A272C 10400015 */  beqz        $v0, .L0F9A2784
/* 002730 0F9A2730 02B3082A */   slt        $at, $s5, $s3
.L0F9A2734:
/* 002734 0F9A2734 14200013 */  bnez        $at, .L0F9A2784
/* 002738 0F9A2738 0215082A */   slt        $at, $s0, $s5
/* 00273C 0F9A273C 14200012 */  bnez        $at, .L0F9A2788
/* 002740 0F9A2740 8FA90040 */   lw         $t1, 0x40($sp)
/* 002744 0F9A2744 1000000F */  b           .L0F9A2784
/* 002748 0F9A2748 26520001 */   addiu      $s2, $s2, 0x1
.L0F9A274C:
/* 00274C 0F9A274C 8FA4004C */  lw          $a0, 0x4C($sp)
.L0F9A2750:
/* 002750 0F9A2750 2401005C */  addiu       $at, $zero, 0x5C
/* 002754 0F9A2754 1481000B */  bne         $a0, $at, .L0F9A2784
/* 002758 0F9A2758 02202825 */   move       $a1, $s1
/* 00275C 0F9A275C 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 002760 0F9A2760 02C02025 */  move        $a0, $s6
/* 002764 0F9A2764 0320F809 */  jalr        $t9
/* 002768 0F9A2768 24060005 */   addiu      $a2, $zero, 0x5
/* 00276C 0F9A276C 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002770 0F9A2770 8FB0004C */  lw          $s0, 0x4C($sp)
/* 002774 0F9A2774 1C400003 */  bgtz        $v0, .L0F9A2784
/* 002778 0F9A2778 02228821 */   addu       $s1, $s1, $v0
/* 00277C 0F9A277C 10000068 */  b           .L0F9A2920
/* 002780 0F9A2780 00001025 */   move       $v0, $zero
.L0F9A2784:
/* 002784 0F9A2784 8FA90040 */  lw          $t1, 0x40($sp)
.L0F9A2788:
/* 002788 0F9A2788 02009825 */  move        $s3, $s0
/* 00278C 0F9A278C 11200007 */  beqz        $t1, .L0F9A27AC
/* 002790 0F9A2790 02C02025 */   move       $a0, $s6
/* 002794 0F9A2794 12B00003 */  beq         $s5, $s0, .L0F9A27A4
/* 002798 0F9A2798 00000000 */   nop
/* 00279C 0F9A279C 10000006 */  b           .L0F9A27B8
/* 0027A0 0F9A27A0 26520001 */   addiu      $s2, $s2, 0x1
.L0F9A27A4:
/* 0027A4 0F9A27A4 1000005E */  b           .L0F9A2920
/* 0027A8 0F9A27A8 00001025 */   move       $v0, $zero
.L0F9A27AC:
/* 0027AC 0F9A27AC 16B00002 */  bne         $s5, $s0, .L0F9A27B8
/* 0027B0 0F9A27B0 00000000 */   nop
/* 0027B4 0F9A27B4 26520001 */  addiu       $s2, $s2, 0x1
.L0F9A27B8:
/* 0027B8 0F9A27B8 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 0027BC 0F9A27BC 02202825 */  move        $a1, $s1
/* 0027C0 0F9A27C0 0320F809 */  jalr        $t9
/* 0027C4 0F9A27C4 24060005 */   addiu      $a2, $zero, 0x5
/* 0027C8 0F9A27C8 8FA4004C */  lw          $a0, 0x4C($sp)
/* 0027CC 0F9A27CC 8FBC0030 */  lw          $gp, 0x30($sp)
/* 0027D0 0F9A27D0 1C400003 */  bgtz        $v0, .L0F9A27E0
/* 0027D4 0F9A27D4 00808025 */   move       $s0, $a0
/* 0027D8 0F9A27D8 10000051 */  b           .L0F9A2920
/* 0027DC 0F9A27DC 00001025 */   move       $v0, $zero
.L0F9A27E0:
/* 0027E0 0F9A27E0 2401005D */  addiu       $at, $zero, 0x5D
/* 0027E4 0F9A27E4 1601FF88 */  bne         $s0, $at, .L0F9A2608
/* 0027E8 0F9A27E8 02228821 */   addu       $s1, $s1, $v0
/* 0027EC 0F9A27EC 12400008 */  beqz        $s2, .L0F9A2810
/* 0027F0 0F9A27F0 00001825 */   move       $v1, $zero
/* 0027F4 0F9A27F4 8F9980F8 */  lw          $t9, %call16(_gmatch)($gp)
/* 0027F8 0F9A27F8 02802025 */  move        $a0, $s4
/* 0027FC 0F9A27FC 0320F809 */  jalr        $t9
/* 002800 0F9A2800 02202825 */   move       $a1, $s1
/* 002804 0F9A2804 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002808 0F9A2808 10000046 */  b           .L0F9A2924
/* 00280C 0F9A280C 8FBF0034 */   lw         $ra, 0x34($sp)
.L0F9A2810:
/* 002810 0F9A2810 10000043 */  b           .L0F9A2920
/* 002814 0F9A2814 00601025 */   move       $v0, $v1
.L0F9A2818:
/* 002818 0F9A2818 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 00281C 0F9A281C 02C02025 */  move        $a0, $s6
/* 002820 0F9A2820 0320F809 */  jalr        $t9
/* 002824 0F9A2824 24060005 */   addiu      $a2, $zero, 0x5
/* 002828 0F9A2828 8FBC0030 */  lw          $gp, 0x30($sp)
/* 00282C 0F9A282C 1C400004 */  bgtz        $v0, .L0F9A2840
/* 002830 0F9A2830 8FA4004C */   lw         $a0, 0x4C($sp)
/* 002834 0F9A2834 1000003A */  b           .L0F9A2920
/* 002838 0F9A2838 00001025 */   move       $v0, $zero
/* 00283C 0F9A283C 8FA4004C */  lw          $a0, 0x4C($sp)
.L0F9A2840:
/* 002840 0F9A2840 02228821 */  addu        $s1, $s1, $v0
.L0F9A2844:
/* 002844 0F9A2844 10950003 */  beq         $a0, $s5, .L0F9A2854
/* 002848 0F9A2848 00000000 */   nop
/* 00284C 0F9A284C 10000034 */  b           .L0F9A2920
/* 002850 0F9A2850 00001025 */   move       $v0, $zero
.L0F9A2854:
/* 002854 0F9A2854 1AA00008 */  blez        $s5, .L0F9A2878
/* 002858 0F9A2858 00001825 */   move       $v1, $zero
/* 00285C 0F9A285C 8F9980F8 */  lw          $t9, %call16(_gmatch)($gp)
/* 002860 0F9A2860 02802025 */  move        $a0, $s4
/* 002864 0F9A2864 0320F809 */  jalr        $t9
/* 002868 0F9A2868 02202825 */   move       $a1, $s1
/* 00286C 0F9A286C 8FBC0030 */  lw          $gp, 0x30($sp)
/* 002870 0F9A2870 1000002C */  b           .L0F9A2924
/* 002874 0F9A2874 8FBF0034 */   lw         $ra, 0x34($sp)
.L0F9A2878:
/* 002878 0F9A2878 10000029 */  b           .L0F9A2920
/* 00287C 0F9A287C 00601025 */   move       $v0, $v1
.L0F9A2880:
/* 002880 0F9A2880 92220000 */  lbu         $v0, 0x0($s1)
/* 002884 0F9A2884 00000000 */  nop
/* 002888 0F9A2888 14620005 */  bne         $v1, $v0, .L0F9A28A0
/* 00288C 0F9A288C 00000000 */   nop
.L0F9A2890:
/* 002890 0F9A2890 92220001 */  lbu         $v0, 0x1($s1)
/* 002894 0F9A2894 26310001 */  addiu       $s1, $s1, 0x1
/* 002898 0F9A2898 1062FFFD */  beq         $v1, $v0, .L0F9A2890
/* 00289C 0F9A289C 00000000 */   nop
.L0F9A28A0:
/* 0028A0 0F9A28A0 14400003 */  bnez        $v0, .L0F9A28B0
/* 0028A4 0F9A28A4 00000000 */   nop
/* 0028A8 0F9A28A8 1000001D */  b           .L0F9A2920
/* 0028AC 0F9A28AC 24020001 */   addiu      $v0, $zero, 0x1
.L0F9A28B0:
/* 0028B0 0F9A28B0 920A0000 */  lbu         $t2, 0x0($s0)
/* 0028B4 0F9A28B4 0200A025 */  move        $s4, $s0
/* 0028B8 0F9A28B8 11400019 */  beqz        $t2, .L0F9A2920
/* 0028BC 0F9A28BC 00001025 */   move       $v0, $zero
.L0F9A28C0:
/* 0028C0 0F9A28C0 8F9980F8 */  lw          $t9, %call16(_gmatch)($gp)
/* 0028C4 0F9A28C4 02802025 */  move        $a0, $s4
/* 0028C8 0F9A28C8 0320F809 */  jalr        $t9
/* 0028CC 0F9A28CC 02202825 */   move       $a1, $s1
/* 0028D0 0F9A28D0 8FBC0030 */  lw          $gp, 0x30($sp)
/* 0028D4 0F9A28D4 10400003 */  beqz        $v0, .L0F9A28E4
/* 0028D8 0F9A28D8 02C02025 */   move       $a0, $s6
/* 0028DC 0F9A28DC 10000010 */  b           .L0F9A2920
/* 0028E0 0F9A28E0 24020001 */   addiu      $v0, $zero, 0x1
.L0F9A28E4:
/* 0028E4 0F9A28E4 8F99807C */  lw          $t9, %call16(mbtowc)($gp)
/* 0028E8 0F9A28E8 02802825 */  move        $a1, $s4
/* 0028EC 0F9A28EC 0320F809 */  jalr        $t9
/* 0028F0 0F9A28F0 24060005 */   addiu      $a2, $zero, 0x5
/* 0028F4 0F9A28F4 8FBC0030 */  lw          $gp, 0x30($sp)
/* 0028F8 0F9A28F8 04410003 */  bgez        $v0, .L0F9A2908
/* 0028FC 0F9A28FC 00000000 */   nop
/* 002900 0F9A2900 10000002 */  b           .L0F9A290C
/* 002904 0F9A2904 26940001 */   addiu      $s4, $s4, 0x1
.L0F9A2908:
/* 002908 0F9A2908 0282A021 */  addu        $s4, $s4, $v0
.L0F9A290C:
/* 00290C 0F9A290C 928B0000 */  lbu         $t3, 0x0($s4)
/* 002910 0F9A2910 00000000 */  nop
/* 002914 0F9A2914 1560FFEA */  bnez        $t3, .L0F9A28C0
/* 002918 0F9A2918 00000000 */   nop
/* 00291C 0F9A291C 00001025 */  move        $v0, $zero
.L0F9A2920:
/* 002920 0F9A2920 8FBF0034 */  lw          $ra, 0x34($sp)
.L0F9A2924:
/* 002924 0F9A2924 8FB00014 */  lw          $s0, 0x14($sp)
/* 002928 0F9A2928 8FB10018 */  lw          $s1, 0x18($sp)
/* 00292C 0F9A292C 8FB2001C */  lw          $s2, 0x1C($sp)
/* 002930 0F9A2930 8FB30020 */  lw          $s3, 0x20($sp)
/* 002934 0F9A2934 8FB40024 */  lw          $s4, 0x24($sp)
/* 002938 0F9A2938 8FB50028 */  lw          $s5, 0x28($sp)
/* 00293C 0F9A293C 8FB6002C */  lw          $s6, 0x2C($sp)
/* 002940 0F9A2940 03E00008 */  jr          $ra
/* 002944 0F9A2944 27BD0060 */   addiu      $sp, $sp, 0x60
/* 002948 0F9A2948 00000000 */  nop
/* 00294C 0F9A294C 00000000 */  nop
