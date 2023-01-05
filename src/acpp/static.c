/**************************************************************
*
*
*
*		Iris Development Option 5.3
*
*
*		Static Variables
*
*	
*
*
***************************************************************/

__asm__(R""(

.include "macro.inc"

# assembler directives
.set noat       # allow manual use of $at
.set noreorder # don't insert nops after branches

.section .data

.balign 16

/* Generated by spimdisasm 1.9.1 */

# static variable
glabel D_10000000
/* 012000 10000000 */ .word 0x40282329
/* 012004 10000004 */ .word 0x616C6C6F
/* 012008 10000008 */ .word 0x63612E63
/* 01200C 1000000C */ .word 0x09312E31
/* 012010 10000010 */ .word 0x00000000

glabel D_10000014
/* 012014 10000014 */ .word 0x00000000

glabel D_10000018
/* 012018 10000018 */ .word 0x00000000
/* 01201C 1000001C */ .word 0x00000000

glabel put_out_comments
/* 012020 10000020 */ .word 0x00000000

glabel no_newline_splicing
/* 012024 10000024 */ .word 0x00000000

glabel no_trigraphs
/* 012028 10000028 */ .word 0x00000000

glabel print_deps
/* 01202C 1000002C */ .word 0x00000000

glabel indepth
/* 012030 10000030 */ .word 0xFFFFFFFF

glabel system_include_depth
/* 012034 10000034 */ .word 0x00000000

glabel include_defaults
/* 012038 10000038 */ .word D_10000040
/* 01203C 1000003C */ .word RO_10000B80

glabel D_10000040
/* 012040 10000040 */ .word D_10000048
/* 012044 10000044 */ .word STR_10000B94

glabel D_10000048
/* 012048 10000048 */ .word 0x00000000
/* 01204C 1000004C */ .word STR_10000BA4

glabel cplusplus_include_defaults
/* 012050 10000050 */ .word D_10000058
/* 012054 10000054 */ .word STR_10000BB8

glabel D_10000058
/* 012058 10000058 */ .word D_10000060
/* 01205C 1000005C */ .word STR_10000BD0

glabel D_10000060
/* 012060 10000060 */ .word 0x00000000
/* 012064 10000064 */ .word STR_10000BE4

glabel include
/* 012068 10000068 */ .word 0x00000000

glabel first_bracket_include
/* 01206C 1000006C */ .word 0x00000000

glabel last_include
/* 012070 10000070 */ .word 0x00000000

glabel dont_repeat_files
/* 012074 10000074 */ .word 0x00000000

glabel all_include_files
/* 012078 10000078 */ .word 0x00000000

glabel predefs
/* 01207C 1000007C */ .word STR_10000BF4


glabel errors
/* 0121AC 100001AC */ .word 0x00000000

glabel dollars_in_ident
/* 0121B0 100001B0 */ .word 0x00000000

glabel if_stack
/* 0121B4 100001B4 */ .word 0x00000000

glabel D_100001B8
/* 0121B8 100001B8 */ .word STR_10001028
/* 0121BC 100001BC */ .word STR_1000102C
/* 0121C0 100001C0 */ .word STR_10001030
/* 0121C4 100001C4 */ .word STR_10001034
/* 0121C8 100001C8 */ .word STR_10001038
/* 0121CC 100001CC */ .word STR_1000103C
/* 0121D0 100001D0 */ .word STR_10001040
/* 0121D4 100001D4 */ .word STR_10001044
/* 0121D8 100001D8 */ .word STR_10001048
/* 0121DC 100001DC */ .word STR_1000104C
/* 0121E0 100001E0 */ .word STR_10001050
/* 0121E4 100001E4 */ .word STR_10001054

glabel D_100001E8
/* 0121E8 100001E8 */ .word 0x00000000
/* 0121EC 100001EC */ .word 0x00000000

glabel version_string
/* 0121F0 100001F0 */ .word STR_100021E0
/* 0121F4 100001F4 */ .word 0x00000000
/* 0121F8 100001F8 */ .word 0x00000000
/* 0121FC 100001FC */ .word 0x00000000

glabel yys
/* 012200 10000200 */ .word yy_yys

glabel yyv
/* 012204 10000204 */ .word yy_yyv

glabel D_10000208
/* 012208 10000208 */ .word 0x00000096

glabel D_1000020C
/* 01220C 1000020C */ .word STR_10002254
/* 012210 10000210 */ .word 0x00000106
/* 012214 10000214 */ .word STR_10002258
/* 012218 10000218 */ .word 0x00000105
/* 01221C 1000021C */ .word STR_1000225C
/* 012220 10000220 */ .word 0x0000010B
/* 012224 10000224 */ .word STR_10002260
/* 012228 10000228 */ .word 0x0000010C
/* 01222C 1000022C */ .word STR_10002264
/* 012230 10000230 */ .word 0x00000107
/* 012234 10000234 */ .word STR_10002268
/* 012238 10000238 */ .word 0x00000108
/* 01223C 1000023C */ .word STR_1000226C
/* 012240 10000240 */ .word 0x00000109
/* 012244 10000244 */ .word STR_10002270
/* 012248 10000248 */ .word 0x0000010A
/* 01224C 1000024C */ .word 0x00000000
/* 012250 10000250 */ .word 0x00000104

glabel yyexca
/* 012254 10000254 */ .word 0xFFFFFFFF
/* 012258 10000258 */ .word 0x00000001
/* 01225C 1000025C */ .word 0x00000000
/* 012260 10000260 */ .word 0xFFFFFFFF
/* 012264 10000264 */ .word 0xFFFFFFFE
/* 012268 10000268 */ .word 0x00000000

glabel yyact
/* 01226C 1000026C */ .word 0x0000000E
/* 012270 10000270 */ .word 0x00000019
/* 012274 10000274 */ .word 0x0000000B
/* 012278 10000278 */ .word 0x00000002
/* 01227C 1000027C */ .word 0x0000000E
/* 012280 10000280 */ .word 0x0000000C
/* 012284 10000284 */ .word 0x0000000F
/* 012288 10000288 */ .word 0x00000001
/* 01228C 1000028C */ .word 0x00000010
/* 012290 10000290 */ .word 0x0000000C
/* 012294 10000294 */ .word 0x0000000D
/* 012298 10000298 */ .word 0x00000022
/* 01229C 1000029C */ .word 0x0000000E
/* 0122A0 100002A0 */ .word 0x00000019
/* 0122A4 100002A4 */ .word 0x0000000D
/* 0122A8 100002A8 */ .word 0x00000000
/* 0122AC 100002AC */ .word 0x00000000
/* 0122B0 100002B0 */ .word 0x0000000C
/* 0122B4 100002B4 */ .word 0x0000000F
/* 0122B8 100002B8 */ .word 0x00000000
/* 0122BC 100002BC */ .word 0x00000010
/* 0122C0 100002C0 */ .word 0x00000038
/* 0122C4 100002C4 */ .word 0x0000000D
/* 0122C8 100002C8 */ .word 0x00000017
/* 0122CC 100002CC */ .word 0x0000000E
/* 0122D0 100002D0 */ .word 0x00000018
/* 0122D4 100002D4 */ .word 0x0000001E
/* 0122D8 100002D8 */ .word 0x00000000
/* 0122DC 100002DC */ .word 0x00000000
/* 0122E0 100002E0 */ .word 0x0000000C
/* 0122E4 100002E4 */ .word 0x0000000F
/* 0122E8 100002E8 */ .word 0x00000000
/* 0122EC 100002EC */ .word 0x00000010
/* 0122F0 100002F0 */ .word 0x00000037
/* 0122F4 100002F4 */ .word 0x0000000D
/* 0122F8 100002F8 */ .word 0x00000017
/* 0122FC 100002FC */ .word 0x0000000B
/* 012300 10000300 */ .word 0x00000018
/* 012304 10000304 */ .word 0x0000001E
/* 012308 10000308 */ .word 0x0000000E
/* 01230C 1000030C */ .word 0x00000019
/* 012310 10000310 */ .word 0x00000000
/* 012314 10000314 */ .word 0x00000000
/* 012318 10000318 */ .word 0x00000000
/* 01231C 1000031C */ .word 0x0000000C
/* 012320 10000320 */ .word 0x0000000F
/* 012324 10000324 */ .word 0x00000000
/* 012328 10000328 */ .word 0x00000010
/* 01232C 1000032C */ .word 0x00000000
/* 012330 10000330 */ .word 0x0000000D
/* 012334 10000334 */ .word 0x0000000E
/* 012338 10000338 */ .word 0x00000019
/* 01233C 1000033C */ .word 0x00000000
/* 012340 10000340 */ .word 0x00000000
/* 012344 10000344 */ .word 0x00000000
/* 012348 10000348 */ .word 0x0000000C
/* 01234C 1000034C */ .word 0x0000000F
/* 012350 10000350 */ .word 0x0000001A
/* 012354 10000354 */ .word 0x00000010
/* 012358 10000358 */ .word 0x00000000
/* 01235C 1000035C */ .word 0x0000000D
/* 012360 10000360 */ .word 0x00000000
/* 012364 10000364 */ .word 0x00000017
/* 012368 10000368 */ .word 0x00000000
/* 01236C 1000036C */ .word 0x00000018
/* 012370 10000370 */ .word 0x00000000
/* 012374 10000374 */ .word 0x0000000E
/* 012378 10000378 */ .word 0x00000019
/* 01237C 1000037C */ .word 0x00000000
/* 012380 10000380 */ .word 0x0000001A
/* 012384 10000384 */ .word 0x00000000
/* 012388 10000388 */ .word 0x0000000C
/* 01238C 1000038C */ .word 0x0000000F
/* 012390 10000390 */ .word 0x00000017
/* 012394 10000394 */ .word 0x00000010
/* 012398 10000398 */ .word 0x00000018
/* 01239C 1000039C */ .word 0x0000000D
/* 0123A0 100003A0 */ .word 0x00000000
/* 0123A4 100003A4 */ .word 0x0000000E
/* 0123A8 100003A8 */ .word 0x00000019
/* 0123AC 100003AC */ .word 0x00000000
/* 0123B0 100003B0 */ .word 0x00000000
/* 0123B4 100003B4 */ .word 0x00000000
/* 0123B8 100003B8 */ .word 0x0000000C
/* 0123BC 100003BC */ .word 0x0000000F
/* 0123C0 100003C0 */ .word 0x00000000
/* 0123C4 100003C4 */ .word 0x00000010
/* 0123C8 100003C8 */ .word 0x0000001B
/* 0123CC 100003CC */ .word 0x0000000D
/* 0123D0 100003D0 */ .word 0x00000017
/* 0123D4 100003D4 */ .word 0x00000000
/* 0123D8 100003D8 */ .word 0x00000018
/* 0123DC 100003DC */ .word 0x0000000E
/* 0123E0 100003E0 */ .word 0x00000000
/* 0123E4 100003E4 */ .word 0x00000000
/* 0123E8 100003E8 */ .word 0x00000000
/* 0123EC 100003EC */ .word 0x0000001A
/* 0123F0 100003F0 */ .word 0x0000000C
/* 0123F4 100003F4 */ .word 0x0000000F
/* 0123F8 100003F8 */ .word 0x0000001B
/* 0123FC 100003FC */ .word 0x00000010
/* 012400 10000400 */ .word 0x00000017
/* 012404 10000404 */ .word 0x0000000D
/* 012408 10000408 */ .word 0x00000018
/* 01240C 1000040C */ .word 0x0000000E
/* 012410 10000410 */ .word 0x00000000
/* 012414 10000414 */ .word 0x00000000
/* 012418 10000418 */ .word 0x0000001A
/* 01241C 1000041C */ .word 0x00000000
/* 012420 10000420 */ .word 0x0000000C
/* 012424 10000424 */ .word 0x0000000F
/* 012428 10000428 */ .word 0x00000000
/* 01242C 1000042C */ .word 0x00000010
/* 012430 10000430 */ .word 0x00000005
/* 012434 10000434 */ .word 0x0000000D
/* 012438 10000438 */ .word 0x00000017
/* 01243C 1000043C */ .word 0x00000000
/* 012440 10000440 */ .word 0x00000018
/* 012444 10000444 */ .word 0x00000000
/* 012448 10000448 */ .word 0x00000000
/* 01244C 1000044C */ .word 0x00000007
/* 012450 10000450 */ .word 0x00000000
/* 012454 10000454 */ .word 0x00000000
/* 012458 10000458 */ .word 0x0000001A
/* 01245C 1000045C */ .word 0x00000000
/* 012460 10000460 */ .word 0x00000004
/* 012464 10000464 */ .word 0x0000001B
/* 012468 10000468 */ .word 0x00000017
/* 01246C 1000046C */ .word 0x00000003
/* 012470 10000470 */ .word 0x00000018
/* 012474 10000474 */ .word 0x00000000
/* 012478 10000478 */ .word 0x00000000
/* 01247C 1000047C */ .word 0x00000000
/* 012480 10000480 */ .word 0x0000001F
/* 012484 10000484 */ .word 0x00000020
/* 012488 10000488 */ .word 0x00000021
/* 01248C 1000048C */ .word 0x00000000
/* 012490 10000490 */ .word 0x0000001B
/* 012494 10000494 */ .word 0x00000000
/* 012498 10000498 */ .word 0x00000000
/* 01249C 1000049C */ .word 0x00000023
/* 0124A0 100004A0 */ .word 0x00000024
/* 0124A4 100004A4 */ .word 0x00000025
/* 0124A8 100004A8 */ .word 0x00000026
/* 0124AC 100004AC */ .word 0x00000027
/* 0124B0 100004B0 */ .word 0x00000028
/* 0124B4 100004B4 */ .word 0x00000029
/* 0124B8 100004B8 */ .word 0x0000002A
/* 0124BC 100004BC */ .word 0x0000002B
/* 0124C0 100004C0 */ .word 0x0000002C
/* 0124C4 100004C4 */ .word 0x0000002D
/* 0124C8 100004C8 */ .word 0x0000002E
/* 0124CC 100004CC */ .word 0x0000002F
/* 0124D0 100004D0 */ .word 0x00000030
/* 0124D4 100004D4 */ .word 0x00000031
/* 0124D8 100004D8 */ .word 0x00000032
/* 0124DC 100004DC */ .word 0x00000033
/* 0124E0 100004E0 */ .word 0x00000034
/* 0124E4 100004E4 */ .word 0x00000035
/* 0124E8 100004E8 */ .word 0x00000036
/* 0124EC 100004EC */ .word 0x0000000E
/* 0124F0 100004F0 */ .word 0x00000000
/* 0124F4 100004F4 */ .word 0x00000000
/* 0124F8 100004F8 */ .word 0x00000000
/* 0124FC 100004FC */ .word 0x00000000
/* 012500 10000500 */ .word 0x0000000C
/* 012504 10000504 */ .word 0x0000000F
/* 012508 10000508 */ .word 0x00000000
/* 01250C 1000050C */ .word 0x00000010
/* 012510 10000510 */ .word 0x00000000
/* 012514 10000514 */ .word 0x0000000D
/* 012518 10000518 */ .word 0x00000000
/* 01251C 1000051C */ .word 0x00000000
/* 012520 10000520 */ .word 0x00000000
/* 012524 10000524 */ .word 0x00000000
/* 012528 10000528 */ .word 0x00000000
/* 01252C 1000052C */ .word 0x00000000
/* 012530 10000530 */ .word 0x00000000
/* 012534 10000534 */ .word 0x00000000
/* 012538 10000538 */ .word 0x00000000
/* 01253C 1000053C */ .word 0x00000000
/* 012540 10000540 */ .word 0x00000000
/* 012544 10000544 */ .word 0x00000000
/* 012548 10000548 */ .word 0x00000000
/* 01254C 1000054C */ .word 0x00000000
/* 012550 10000550 */ .word 0x00000039
/* 012554 10000554 */ .word 0x00000000
/* 012558 10000558 */ .word 0x00000000
/* 01255C 1000055C */ .word 0x00000000
/* 012560 10000560 */ .word 0x00000000
/* 012564 10000564 */ .word 0x00000000
/* 012568 10000568 */ .word 0x00000000
/* 01256C 1000056C */ .word 0x00000000
/* 012570 10000570 */ .word 0x00000000
/* 012574 10000574 */ .word 0x00000000
/* 012578 10000578 */ .word 0x00000000
/* 01257C 1000057C */ .word 0x00000000
/* 012580 10000580 */ .word 0x00000000
/* 012584 10000584 */ .word 0x00000000
/* 012588 10000588 */ .word 0x00000000
/* 01258C 1000058C */ .word 0x00000000
/* 012590 10000590 */ .word 0x00000000
/* 012594 10000594 */ .word 0x00000000
/* 012598 10000598 */ .word 0x00000000
/* 01259C 1000059C */ .word 0x00000000
/* 0125A0 100005A0 */ .word 0x00000000
/* 0125A4 100005A4 */ .word 0x00000006
/* 0125A8 100005A8 */ .word 0x00000000
/* 0125AC 100005AC */ .word 0x00000000
/* 0125B0 100005B0 */ .word 0x00000000
/* 0125B4 100005B4 */ .word 0x00000000
/* 0125B8 100005B8 */ .word 0x00000000
/* 0125BC 100005BC */ .word 0x00000000
/* 0125C0 100005C0 */ .word 0x00000000
/* 0125C4 100005C4 */ .word 0x00000000
/* 0125C8 100005C8 */ .word 0x00000000
/* 0125CC 100005CC */ .word 0x00000000
/* 0125D0 100005D0 */ .word 0x00000000
/* 0125D4 100005D4 */ .word 0x00000000
/* 0125D8 100005D8 */ .word 0x00000000
/* 0125DC 100005DC */ .word 0x00000000
/* 0125E0 100005E0 */ .word 0x00000000
/* 0125E4 100005E4 */ .word 0x00000000
/* 0125E8 100005E8 */ .word 0x00000000
/* 0125EC 100005EC */ .word 0x0000001D
/* 0125F0 100005F0 */ .word 0x0000001C
/* 0125F4 100005F4 */ .word 0x00000013
/* 0125F8 100005F8 */ .word 0x00000014
/* 0125FC 100005FC */ .word 0x00000015
/* 012600 10000600 */ .word 0x00000016
/* 012604 10000604 */ .word 0x00000011
/* 012608 10000608 */ .word 0x00000012
/* 01260C 1000060C */ .word 0x00000000
/* 012610 10000610 */ .word 0x00000000
/* 012614 10000614 */ .word 0x00000000
/* 012618 10000618 */ .word 0x00000000
/* 01261C 1000061C */ .word 0x0000001D
/* 012620 10000620 */ .word 0x0000001C
/* 012624 10000624 */ .word 0x00000013
/* 012628 10000628 */ .word 0x00000014
/* 01262C 1000062C */ .word 0x00000015
/* 012630 10000630 */ .word 0x00000016
/* 012634 10000634 */ .word 0x00000011
/* 012638 10000638 */ .word 0x00000012
/* 01263C 1000063C */ .word 0x00000000
/* 012640 10000640 */ .word 0x00000000
/* 012644 10000644 */ .word 0x00000000
/* 012648 10000648 */ .word 0x00000000
/* 01264C 1000064C */ .word 0x00000000
/* 012650 10000650 */ .word 0x00000000
/* 012654 10000654 */ .word 0x00000000
/* 012658 10000658 */ .word 0x00000000
/* 01265C 1000065C */ .word 0x00000000
/* 012660 10000660 */ .word 0x00000000
/* 012664 10000664 */ .word 0x00000011
/* 012668 10000668 */ .word 0x00000012
/* 01266C 1000066C */ .word 0x00000000
/* 012670 10000670 */ .word 0x00000000
/* 012674 10000674 */ .word 0x00000000
/* 012678 10000678 */ .word 0x00000000
/* 01267C 1000067C */ .word 0x00000000
/* 012680 10000680 */ .word 0x00000000
/* 012684 10000684 */ .word 0x00000000
/* 012688 10000688 */ .word 0x00000000
/* 01268C 1000068C */ .word 0x0000001C
/* 012690 10000690 */ .word 0x00000013
/* 012694 10000694 */ .word 0x00000014
/* 012698 10000698 */ .word 0x00000015
/* 01269C 1000069C */ .word 0x00000016
/* 0126A0 100006A0 */ .word 0x00000011
/* 0126A4 100006A4 */ .word 0x00000012
/* 0126A8 100006A8 */ .word 0x00000000
/* 0126AC 100006AC */ .word 0x00000000
/* 0126B0 100006B0 */ .word 0x00000000
/* 0126B4 100006B4 */ .word 0x00000000
/* 0126B8 100006B8 */ .word 0x00000000
/* 0126BC 100006BC */ .word 0x00000013
/* 0126C0 100006C0 */ .word 0x00000014
/* 0126C4 100006C4 */ .word 0x00000015
/* 0126C8 100006C8 */ .word 0x00000016
/* 0126CC 100006CC */ .word 0x00000011
/* 0126D0 100006D0 */ .word 0x00000012
/* 0126D4 100006D4 */ .word 0x00000000
/* 0126D8 100006D8 */ .word 0x00000000
/* 0126DC 100006DC */ .word 0x00000000
/* 0126E0 100006E0 */ .word 0x00000000
/* 0126E4 100006E4 */ .word 0x00000000
/* 0126E8 100006E8 */ .word 0x00000000
/* 0126EC 100006EC */ .word 0x00000000
/* 0126F0 100006F0 */ .word 0x00000000
/* 0126F4 100006F4 */ .word 0x00000000
/* 0126F8 100006F8 */ .word 0x00000000
/* 0126FC 100006FC */ .word 0x00000013
/* 012700 10000700 */ .word 0x00000014
/* 012704 10000704 */ .word 0x00000015
/* 012708 10000708 */ .word 0x00000016
/* 01270C 1000070C */ .word 0x00000011
/* 012710 10000710 */ .word 0x00000012
/* 012714 10000714 */ .word 0x00000000
/* 012718 10000718 */ .word 0x00000000
/* 01271C 1000071C */ .word 0x00000000
/* 012720 10000720 */ .word 0x00000000
/* 012724 10000724 */ .word 0x00000000
/* 012728 10000728 */ .word 0x00000000
/* 01272C 1000072C */ .word 0x00000013
/* 012730 10000730 */ .word 0x00000014
/* 012734 10000734 */ .word 0x00000015
/* 012738 10000738 */ .word 0x00000016
/* 01273C 1000073C */ .word 0x00000011
/* 012740 10000740 */ .word 0x00000012
/* 012744 10000744 */ .word 0x00000000
/* 012748 10000748 */ .word 0x00000000
/* 01274C 1000074C */ .word 0x00000000
/* 012750 10000750 */ .word 0x00000000
/* 012754 10000754 */ .word 0x00000000
/* 012758 10000758 */ .word 0x00000000
/* 01275C 1000075C */ .word 0x00000000
/* 012760 10000760 */ .word 0x00000000
/* 012764 10000764 */ .word 0x00000013
/* 012768 10000768 */ .word 0x00000014
/* 01276C 1000076C */ .word 0x00000015
/* 012770 10000770 */ .word 0x00000016
/* 012774 10000774 */ .word 0x00000011
/* 012778 10000778 */ .word 0x00000012
/* 01277C 1000077C */ .word 0x00000000
/* 012780 10000780 */ .word 0x00000000
/* 012784 10000784 */ .word 0x00000000
/* 012788 10000788 */ .word 0x00000000
/* 01278C 1000078C */ .word 0x00000000
/* 012790 10000790 */ .word 0x00000000
/* 012794 10000794 */ .word 0x00000000
/* 012798 10000798 */ .word 0x00000000
/* 01279C 1000079C */ .word 0x00000015
/* 0127A0 100007A0 */ .word 0x00000016
/* 0127A4 100007A4 */ .word 0x00000011
/* 0127A8 100007A8 */ .word 0x00000012
/* 0127AC 100007AC */ .word 0x00000000
/* 0127B0 100007B0 */ .word 0x00000008
/* 0127B4 100007B4 */ .word 0x00000009
/* 0127B8 100007B8 */ .word 0x0000000A

glabel yypact
/* 0127BC 100007BC */ .word 0x00000050
/* 0127C0 100007C0 */ .word 0xFF676980
/* 0127C4 100007C4 */ .word 0xFFFFFFD6
/* 0127C8 100007C8 */ .word 0xFFFFFFE7
/* 0127CC 100007CC */ .word 0x00000050
/* 0127D0 100007D0 */ .word 0x00000050
/* 0127D4 100007D4 */ .word 0x00000050
/* 0127D8 100007D8 */ .word 0x00000050
/* 0127DC 100007DC */ .word 0xFF676980
/* 0127E0 100007E0 */ .word 0xFF676980
/* 0127E4 100007E4 */ .word 0xFF676980
/* 0127E8 100007E8 */ .word 0x00000050
/* 0127EC 100007EC */ .word 0x00000050
/* 0127F0 100007F0 */ .word 0x00000050
/* 0127F4 100007F4 */ .word 0x00000050
/* 0127F8 100007F8 */ .word 0x00000050
/* 0127FC 100007FC */ .word 0x00000050
/* 012800 10000800 */ .word 0x00000050
/* 012804 10000804 */ .word 0x00000050
/* 012808 10000808 */ .word 0x00000050
/* 01280C 1000080C */ .word 0x00000050
/* 012810 10000810 */ .word 0x00000050
/* 012814 10000814 */ .word 0x00000050
/* 012818 10000818 */ .word 0x00000050
/* 01281C 1000081C */ .word 0x00000050
/* 012820 10000820 */ .word 0x00000050
/* 012824 10000824 */ .word 0x00000050
/* 012828 10000828 */ .word 0x00000050
/* 01282C 1000082C */ .word 0x00000050
/* 012830 10000830 */ .word 0x00000050
/* 012834 10000834 */ .word 0x00000050
/* 012838 10000838 */ .word 0xFF676980
/* 01283C 1000083C */ .word 0xFF676980
/* 012840 10000840 */ .word 0xFF676980
/* 012844 10000844 */ .word 0xFFFFFFF8
/* 012848 10000848 */ .word 0xFFFFFFE7
/* 01284C 1000084C */ .word 0xFF676980
/* 012850 10000850 */ .word 0xFF676980
/* 012854 10000854 */ .word 0xFF676980
/* 012858 10000858 */ .word 0xFFFFFFDF
/* 01285C 1000085C */ .word 0xFFFFFFDF
/* 012860 10000860 */ .word 0x0000007B
/* 012864 10000864 */ .word 0x0000007B
/* 012868 10000868 */ .word 0x00000043
/* 01286C 1000086C */ .word 0x00000043
/* 012870 10000870 */ .word 0xFFFFFFF3
/* 012874 10000874 */ .word 0xFFFFFFF3
/* 012878 10000878 */ .word 0xFFFFFFF3
/* 01287C 1000087C */ .word 0xFFFFFFF3
/* 012880 10000880 */ .word 0x00000037
/* 012884 10000884 */ .word 0x00000029
/* 012888 10000888 */ .word 0x0000001D
/* 01288C 1000088C */ .word 0x0000000D
/* 012890 10000890 */ .word 0x00000002
/* 012894 10000894 */ .word 0xFFFFFFDB
/* 012898 10000898 */ .word 0xFF676980
/* 01289C 1000089C */ .word 0x00000050
/* 0128A0 100008A0 */ .word 0xFFFFFFE7

glabel yypgo
/* 0128A4 100008A4 */ .word 0x00000000
/* 0128A8 100008A8 */ .word 0x00000080
/* 0128AC 100008AC */ .word 0x00000003
/* 0128B0 100008B0 */ .word 0x00000007

glabel yyr1
/* 0128B4 100008B4 */ .word 0x00000000
/* 0128B8 100008B8 */ .word 0x00000003
/* 0128BC 100008BC */ .word 0x00000002
/* 0128C0 100008C0 */ .word 0x00000002
/* 0128C4 100008C4 */ .word 0x00000001
/* 0128C8 100008C8 */ .word 0x00000001
/* 0128CC 100008CC */ .word 0x00000001
/* 0128D0 100008D0 */ .word 0x00000001
/* 0128D4 100008D4 */ .word 0x00000001
/* 0128D8 100008D8 */ .word 0x00000001
/* 0128DC 100008DC */ .word 0x00000001
/* 0128E0 100008E0 */ .word 0x00000001
/* 0128E4 100008E4 */ .word 0x00000001
/* 0128E8 100008E8 */ .word 0x00000001
/* 0128EC 100008EC */ .word 0x00000001
/* 0128F0 100008F0 */ .word 0x00000001
/* 0128F4 100008F4 */ .word 0x00000001
/* 0128F8 100008F8 */ .word 0x00000001
/* 0128FC 100008FC */ .word 0x00000001
/* 012900 10000900 */ .word 0x00000001
/* 012904 10000904 */ .word 0x00000001
/* 012908 10000908 */ .word 0x00000001
/* 01290C 1000090C */ .word 0x00000001
/* 012910 10000910 */ .word 0x00000001
/* 012914 10000914 */ .word 0x00000001
/* 012918 10000918 */ .word 0x00000001
/* 01291C 1000091C */ .word 0x00000001
/* 012920 10000920 */ .word 0x00000001
/* 012924 10000924 */ .word 0x00000001
/* 012928 10000928 */ .word 0x00000001

glabel yyr2
/* 01292C 1000092C */ .word 0x00000000
/* 012930 10000930 */ .word 0x00000003
/* 012934 10000934 */ .word 0x00000002
/* 012938 10000938 */ .word 0x00000007
/* 01293C 1000093C */ .word 0x00000005
/* 012940 10000940 */ .word 0x00000005
/* 012944 10000944 */ .word 0x00000005
/* 012948 10000948 */ .word 0x00000007
/* 01294C 1000094C */ .word 0x00000007
/* 012950 10000950 */ .word 0x00000007
/* 012954 10000954 */ .word 0x00000007
/* 012958 10000958 */ .word 0x00000007
/* 01295C 1000095C */ .word 0x00000007
/* 012960 10000960 */ .word 0x00000007
/* 012964 10000964 */ .word 0x00000007
/* 012968 10000968 */ .word 0x00000007
/* 01296C 1000096C */ .word 0x00000007
/* 012970 10000970 */ .word 0x00000007
/* 012974 10000974 */ .word 0x00000007
/* 012978 10000978 */ .word 0x00000007
/* 01297C 1000097C */ .word 0x00000007
/* 012980 10000980 */ .word 0x00000007
/* 012984 10000984 */ .word 0x00000007
/* 012988 10000988 */ .word 0x00000007
/* 01298C 1000098C */ .word 0x00000007
/* 012990 10000990 */ .word 0x00000007
/* 012994 10000994 */ .word 0x0000000B
/* 012998 10000998 */ .word 0x00000003
/* 01299C 1000099C */ .word 0x00000003
/* 0129A0 100009A0 */ .word 0x00000003

glabel yychk
/* 0129A4 100009A4 */ .word 0xFF676980
/* 0129A8 100009A8 */ .word 0xFFFFFFFD
/* 0129AC 100009AC */ .word 0xFFFFFFFE
/* 0129B0 100009B0 */ .word 0xFFFFFFFF
/* 0129B4 100009B4 */ .word 0x0000002D
/* 0129B8 100009B8 */ .word 0x00000021
/* 0129BC 100009BC */ .word 0x0000007E
/* 0129C0 100009C0 */ .word 0x00000028
/* 0129C4 100009C4 */ .word 0x00000101
/* 0129C8 100009C8 */ .word 0x00000102
/* 0129CC 100009CC */ .word 0x00000103
/* 0129D0 100009D0 */ .word 0x0000002C
/* 0129D4 100009D4 */ .word 0x0000002A
/* 0129D8 100009D8 */ .word 0x0000002F
/* 0129DC 100009DC */ .word 0x00000025
/* 0129E0 100009E0 */ .word 0x0000002B
/* 0129E4 100009E4 */ .word 0x0000002D
/* 0129E8 100009E8 */ .word 0x0000010B
/* 0129EC 100009EC */ .word 0x0000010C
/* 0129F0 100009F0 */ .word 0x00000107
/* 0129F4 100009F4 */ .word 0x00000108
/* 0129F8 100009F8 */ .word 0x00000109
/* 0129FC 100009FC */ .word 0x0000010A
/* 012A00 10000A00 */ .word 0x0000003C
/* 012A04 10000A04 */ .word 0x0000003E
/* 012A08 10000A08 */ .word 0x00000026
/* 012A0C 10000A0C */ .word 0x0000005E
/* 012A10 10000A10 */ .word 0x0000007C
/* 012A14 10000A14 */ .word 0x00000106
/* 012A18 10000A18 */ .word 0x00000105
/* 012A1C 10000A1C */ .word 0x0000003F
/* 012A20 10000A20 */ .word 0xFFFFFFFF
/* 012A24 10000A24 */ .word 0xFFFFFFFF
/* 012A28 10000A28 */ .word 0xFFFFFFFF
/* 012A2C 10000A2C */ .word 0xFFFFFFFE
/* 012A30 10000A30 */ .word 0xFFFFFFFF
/* 012A34 10000A34 */ .word 0xFFFFFFFF
/* 012A38 10000A38 */ .word 0xFFFFFFFF
/* 012A3C 10000A3C */ .word 0xFFFFFFFF
/* 012A40 10000A40 */ .word 0xFFFFFFFF
/* 012A44 10000A44 */ .word 0xFFFFFFFF
/* 012A48 10000A48 */ .word 0xFFFFFFFF
/* 012A4C 10000A4C */ .word 0xFFFFFFFF
/* 012A50 10000A50 */ .word 0xFFFFFFFF
/* 012A54 10000A54 */ .word 0xFFFFFFFF
/* 012A58 10000A58 */ .word 0xFFFFFFFF
/* 012A5C 10000A5C */ .word 0xFFFFFFFF
/* 012A60 10000A60 */ .word 0xFFFFFFFF
/* 012A64 10000A64 */ .word 0xFFFFFFFF
/* 012A68 10000A68 */ .word 0xFFFFFFFF
/* 012A6C 10000A6C */ .word 0xFFFFFFFF
/* 012A70 10000A70 */ .word 0xFFFFFFFF
/* 012A74 10000A74 */ .word 0xFFFFFFFF
/* 012A78 10000A78 */ .word 0xFFFFFFFF
/* 012A7C 10000A7C */ .word 0xFFFFFFFF
/* 012A80 10000A80 */ .word 0x00000029
/* 012A84 10000A84 */ .word 0x0000003A
/* 012A88 10000A88 */ .word 0xFFFFFFFF

glabel yydef
/* 012A8C 10000A8C */ .word 0x00000000
/* 012A90 10000A90 */ .word 0xFFFFFFFE
/* 012A94 10000A94 */ .word 0x00000001
/* 012A98 10000A98 */ .word 0x00000002
/* 012A9C 10000A9C */ .word 0x00000000
/* 012AA0 10000AA0 */ .word 0x00000000
/* 012AA4 10000AA4 */ .word 0x00000000
/* 012AA8 10000AA8 */ .word 0x00000000
/* 012AAC 10000AAC */ .word 0x0000001B
/* 012AB0 10000AB0 */ .word 0x0000001C
/* 012AB4 10000AB4 */ .word 0x0000001D
/* 012AB8 10000AB8 */ .word 0x00000000
/* 012ABC 10000ABC */ .word 0x00000000
/* 012AC0 10000AC0 */ .word 0x00000000
/* 012AC4 10000AC4 */ .word 0x00000000
/* 012AC8 10000AC8 */ .word 0x00000000
/* 012ACC 10000ACC */ .word 0x00000000
/* 012AD0 10000AD0 */ .word 0x00000000
/* 012AD4 10000AD4 */ .word 0x00000000
/* 012AD8 10000AD8 */ .word 0x00000000
/* 012ADC 10000ADC */ .word 0x00000000
/* 012AE0 10000AE0 */ .word 0x00000000
/* 012AE4 10000AE4 */ .word 0x00000000
/* 012AE8 10000AE8 */ .word 0x00000000
/* 012AEC 10000AEC */ .word 0x00000000
/* 012AF0 10000AF0 */ .word 0x00000000
/* 012AF4 10000AF4 */ .word 0x00000000
/* 012AF8 10000AF8 */ .word 0x00000000
/* 012AFC 10000AFC */ .word 0x00000000
/* 012B00 10000B00 */ .word 0x00000000
/* 012B04 10000B04 */ .word 0x00000000
/* 012B08 10000B08 */ .word 0x00000004
/* 012B0C 10000B0C */ .word 0x00000005
/* 012B10 10000B10 */ .word 0x00000006
/* 012B14 10000B14 */ .word 0x00000000
/* 012B18 10000B18 */ .word 0x00000003
/* 012B1C 10000B1C */ .word 0x00000008
/* 012B20 10000B20 */ .word 0x00000009
/* 012B24 10000B24 */ .word 0x0000000A
/* 012B28 10000B28 */ .word 0x0000000B
/* 012B2C 10000B2C */ .word 0x0000000C
/* 012B30 10000B30 */ .word 0x0000000D
/* 012B34 10000B34 */ .word 0x0000000E
/* 012B38 10000B38 */ .word 0x0000000F
/* 012B3C 10000B3C */ .word 0x00000010
/* 012B40 10000B40 */ .word 0x00000011
/* 012B44 10000B44 */ .word 0x00000012
/* 012B48 10000B48 */ .word 0x00000013
/* 012B4C 10000B4C */ .word 0x00000014
/* 012B50 10000B50 */ .word 0x00000015
/* 012B54 10000B54 */ .word 0x00000016
/* 012B58 10000B58 */ .word 0x00000017
/* 012B5C 10000B5C */ .word 0x00000018
/* 012B60 10000B60 */ .word 0x00000019
/* 012B64 10000B64 */ .word 0x00000000
/* 012B68 10000B68 */ .word 0x00000007
/* 012B6C 10000B6C */ .word 0x00000000
/* 012B70 10000B70 */ .word 0x0000001A
/* 012B74 10000B74 */ .word 0x00000000
/* 012B78 10000B78 */ .word 0x00000000
/* 012B7C 10000B7C */ .word 0x00000000
)"");