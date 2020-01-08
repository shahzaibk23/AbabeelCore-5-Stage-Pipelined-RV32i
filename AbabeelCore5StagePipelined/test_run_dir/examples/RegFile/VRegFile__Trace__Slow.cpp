// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegFile__Syms.h"


//======================

void VRegFile::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VRegFile::traceInit, &VRegFile::traceFull, &VRegFile::traceChg, this);
}
void VRegFile::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VRegFile* t=(VRegFile*)userthis;
    VRegFile__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VRegFile::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegFile* t=(VRegFile*)userthis;
    VRegFile__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VRegFile::traceInitThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VRegFile::traceFullThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRegFile::traceInitThis__1(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+33,"clock",-1);
	vcdp->declBit  (c+34,"reset",-1);
	vcdp->declBit  (c+35,"io_RegWrite",-1);
	vcdp->declBus  (c+36,"io_rs1",-1,4,0);
	vcdp->declBus  (c+37,"io_rs2",-1,4,0);
	vcdp->declBus  (c+38,"io_rd",-1,4,0);
	vcdp->declBus  (c+39,"io_WriteData",-1,31,0);
	vcdp->declBus  (c+40,"io_rd1",-1,31,0);
	vcdp->declBus  (c+41,"io_rd2",-1,31,0);
	vcdp->declBit  (c+33,"RegFile clock",-1);
	vcdp->declBit  (c+34,"RegFile reset",-1);
	vcdp->declBit  (c+35,"RegFile io_RegWrite",-1);
	vcdp->declBus  (c+36,"RegFile io_rs1",-1,4,0);
	vcdp->declBus  (c+37,"RegFile io_rs2",-1,4,0);
	vcdp->declBus  (c+38,"RegFile io_rd",-1,4,0);
	vcdp->declBus  (c+39,"RegFile io_WriteData",-1,31,0);
	vcdp->declBus  (c+40,"RegFile io_rd1",-1,31,0);
	vcdp->declBus  (c+41,"RegFile io_rd2",-1,31,0);
	vcdp->declBus  (c+1,"RegFile registers_0",-1,31,0);
	// Tracing: RegFile _RAND_0 // Ignored: Inlined leading underscore at RegFile.v:13
	vcdp->declBus  (c+2,"RegFile registers_1",-1,31,0);
	// Tracing: RegFile _RAND_1 // Ignored: Inlined leading underscore at RegFile.v:15
	vcdp->declBus  (c+3,"RegFile registers_2",-1,31,0);
	// Tracing: RegFile _RAND_2 // Ignored: Inlined leading underscore at RegFile.v:17
	vcdp->declBus  (c+4,"RegFile registers_3",-1,31,0);
	// Tracing: RegFile _RAND_3 // Ignored: Inlined leading underscore at RegFile.v:19
	vcdp->declBus  (c+5,"RegFile registers_4",-1,31,0);
	// Tracing: RegFile _RAND_4 // Ignored: Inlined leading underscore at RegFile.v:21
	vcdp->declBus  (c+6,"RegFile registers_5",-1,31,0);
	// Tracing: RegFile _RAND_5 // Ignored: Inlined leading underscore at RegFile.v:23
	vcdp->declBus  (c+7,"RegFile registers_6",-1,31,0);
	// Tracing: RegFile _RAND_6 // Ignored: Inlined leading underscore at RegFile.v:25
	vcdp->declBus  (c+8,"RegFile registers_7",-1,31,0);
	// Tracing: RegFile _RAND_7 // Ignored: Inlined leading underscore at RegFile.v:27
	vcdp->declBus  (c+9,"RegFile registers_8",-1,31,0);
	// Tracing: RegFile _RAND_8 // Ignored: Inlined leading underscore at RegFile.v:29
	vcdp->declBus  (c+10,"RegFile registers_9",-1,31,0);
	// Tracing: RegFile _RAND_9 // Ignored: Inlined leading underscore at RegFile.v:31
	vcdp->declBus  (c+11,"RegFile registers_10",-1,31,0);
	// Tracing: RegFile _RAND_10 // Ignored: Inlined leading underscore at RegFile.v:33
	vcdp->declBus  (c+12,"RegFile registers_11",-1,31,0);
	// Tracing: RegFile _RAND_11 // Ignored: Inlined leading underscore at RegFile.v:35
	vcdp->declBus  (c+13,"RegFile registers_12",-1,31,0);
	// Tracing: RegFile _RAND_12 // Ignored: Inlined leading underscore at RegFile.v:37
	vcdp->declBus  (c+14,"RegFile registers_13",-1,31,0);
	// Tracing: RegFile _RAND_13 // Ignored: Inlined leading underscore at RegFile.v:39
	vcdp->declBus  (c+15,"RegFile registers_14",-1,31,0);
	// Tracing: RegFile _RAND_14 // Ignored: Inlined leading underscore at RegFile.v:41
	vcdp->declBus  (c+16,"RegFile registers_15",-1,31,0);
	// Tracing: RegFile _RAND_15 // Ignored: Inlined leading underscore at RegFile.v:43
	vcdp->declBus  (c+17,"RegFile registers_16",-1,31,0);
	// Tracing: RegFile _RAND_16 // Ignored: Inlined leading underscore at RegFile.v:45
	vcdp->declBus  (c+18,"RegFile registers_17",-1,31,0);
	// Tracing: RegFile _RAND_17 // Ignored: Inlined leading underscore at RegFile.v:47
	vcdp->declBus  (c+19,"RegFile registers_18",-1,31,0);
	// Tracing: RegFile _RAND_18 // Ignored: Inlined leading underscore at RegFile.v:49
	vcdp->declBus  (c+20,"RegFile registers_19",-1,31,0);
	// Tracing: RegFile _RAND_19 // Ignored: Inlined leading underscore at RegFile.v:51
	vcdp->declBus  (c+21,"RegFile registers_20",-1,31,0);
	// Tracing: RegFile _RAND_20 // Ignored: Inlined leading underscore at RegFile.v:53
	vcdp->declBus  (c+22,"RegFile registers_21",-1,31,0);
	// Tracing: RegFile _RAND_21 // Ignored: Inlined leading underscore at RegFile.v:55
	vcdp->declBus  (c+23,"RegFile registers_22",-1,31,0);
	// Tracing: RegFile _RAND_22 // Ignored: Inlined leading underscore at RegFile.v:57
	vcdp->declBus  (c+24,"RegFile registers_23",-1,31,0);
	// Tracing: RegFile _RAND_23 // Ignored: Inlined leading underscore at RegFile.v:59
	vcdp->declBus  (c+25,"RegFile registers_24",-1,31,0);
	// Tracing: RegFile _RAND_24 // Ignored: Inlined leading underscore at RegFile.v:61
	vcdp->declBus  (c+26,"RegFile registers_25",-1,31,0);
	// Tracing: RegFile _RAND_25 // Ignored: Inlined leading underscore at RegFile.v:63
	vcdp->declBus  (c+27,"RegFile registers_26",-1,31,0);
	// Tracing: RegFile _RAND_26 // Ignored: Inlined leading underscore at RegFile.v:65
	vcdp->declBus  (c+28,"RegFile registers_27",-1,31,0);
	// Tracing: RegFile _RAND_27 // Ignored: Inlined leading underscore at RegFile.v:67
	vcdp->declBus  (c+29,"RegFile registers_28",-1,31,0);
	// Tracing: RegFile _RAND_28 // Ignored: Inlined leading underscore at RegFile.v:69
	vcdp->declBus  (c+30,"RegFile registers_29",-1,31,0);
	// Tracing: RegFile _RAND_29 // Ignored: Inlined leading underscore at RegFile.v:71
	vcdp->declBus  (c+31,"RegFile registers_30",-1,31,0);
	// Tracing: RegFile _RAND_30 // Ignored: Inlined leading underscore at RegFile.v:73
	vcdp->declBus  (c+32,"RegFile registers_31",-1,31,0);
	// Tracing: RegFile _RAND_31 // Ignored: Inlined leading underscore at RegFile.v:75
	// Tracing: RegFile _GEN_1 // Ignored: Inlined leading underscore at RegFile.v:76
	// Tracing: RegFile _GEN_2 // Ignored: Inlined leading underscore at RegFile.v:77
	// Tracing: RegFile _GEN_3 // Ignored: Inlined leading underscore at RegFile.v:78
	// Tracing: RegFile _GEN_4 // Ignored: Inlined leading underscore at RegFile.v:79
	// Tracing: RegFile _GEN_5 // Ignored: Inlined leading underscore at RegFile.v:80
	// Tracing: RegFile _GEN_6 // Ignored: Inlined leading underscore at RegFile.v:81
	// Tracing: RegFile _GEN_7 // Ignored: Inlined leading underscore at RegFile.v:82
	// Tracing: RegFile _GEN_8 // Ignored: Inlined leading underscore at RegFile.v:83
	// Tracing: RegFile _GEN_9 // Ignored: Inlined leading underscore at RegFile.v:84
	// Tracing: RegFile _GEN_10 // Ignored: Inlined leading underscore at RegFile.v:85
	// Tracing: RegFile _GEN_11 // Ignored: Inlined leading underscore at RegFile.v:86
	// Tracing: RegFile _GEN_12 // Ignored: Inlined leading underscore at RegFile.v:87
	// Tracing: RegFile _GEN_13 // Ignored: Inlined leading underscore at RegFile.v:88
	// Tracing: RegFile _GEN_14 // Ignored: Inlined leading underscore at RegFile.v:89
	// Tracing: RegFile _GEN_15 // Ignored: Inlined leading underscore at RegFile.v:90
	// Tracing: RegFile _GEN_16 // Ignored: Inlined leading underscore at RegFile.v:91
	// Tracing: RegFile _GEN_17 // Ignored: Inlined leading underscore at RegFile.v:92
	// Tracing: RegFile _GEN_18 // Ignored: Inlined leading underscore at RegFile.v:93
	// Tracing: RegFile _GEN_19 // Ignored: Inlined leading underscore at RegFile.v:94
	// Tracing: RegFile _GEN_20 // Ignored: Inlined leading underscore at RegFile.v:95
	// Tracing: RegFile _GEN_21 // Ignored: Inlined leading underscore at RegFile.v:96
	// Tracing: RegFile _GEN_22 // Ignored: Inlined leading underscore at RegFile.v:97
	// Tracing: RegFile _GEN_23 // Ignored: Inlined leading underscore at RegFile.v:98
	// Tracing: RegFile _GEN_24 // Ignored: Inlined leading underscore at RegFile.v:99
	// Tracing: RegFile _GEN_25 // Ignored: Inlined leading underscore at RegFile.v:100
	// Tracing: RegFile _GEN_26 // Ignored: Inlined leading underscore at RegFile.v:101
	// Tracing: RegFile _GEN_27 // Ignored: Inlined leading underscore at RegFile.v:102
	// Tracing: RegFile _GEN_28 // Ignored: Inlined leading underscore at RegFile.v:103
	// Tracing: RegFile _GEN_29 // Ignored: Inlined leading underscore at RegFile.v:104
	// Tracing: RegFile _GEN_30 // Ignored: Inlined leading underscore at RegFile.v:105
	// Tracing: RegFile _GEN_33 // Ignored: Inlined leading underscore at RegFile.v:106
	// Tracing: RegFile _GEN_34 // Ignored: Inlined leading underscore at RegFile.v:107
	// Tracing: RegFile _GEN_35 // Ignored: Inlined leading underscore at RegFile.v:108
	// Tracing: RegFile _GEN_36 // Ignored: Inlined leading underscore at RegFile.v:109
	// Tracing: RegFile _GEN_37 // Ignored: Inlined leading underscore at RegFile.v:110
	// Tracing: RegFile _GEN_38 // Ignored: Inlined leading underscore at RegFile.v:111
	// Tracing: RegFile _GEN_39 // Ignored: Inlined leading underscore at RegFile.v:112
	// Tracing: RegFile _GEN_40 // Ignored: Inlined leading underscore at RegFile.v:113
	// Tracing: RegFile _GEN_41 // Ignored: Inlined leading underscore at RegFile.v:114
	// Tracing: RegFile _GEN_42 // Ignored: Inlined leading underscore at RegFile.v:115
	// Tracing: RegFile _GEN_43 // Ignored: Inlined leading underscore at RegFile.v:116
	// Tracing: RegFile _GEN_44 // Ignored: Inlined leading underscore at RegFile.v:117
	// Tracing: RegFile _GEN_45 // Ignored: Inlined leading underscore at RegFile.v:118
	// Tracing: RegFile _GEN_46 // Ignored: Inlined leading underscore at RegFile.v:119
	// Tracing: RegFile _GEN_47 // Ignored: Inlined leading underscore at RegFile.v:120
	// Tracing: RegFile _GEN_48 // Ignored: Inlined leading underscore at RegFile.v:121
	// Tracing: RegFile _GEN_49 // Ignored: Inlined leading underscore at RegFile.v:122
	// Tracing: RegFile _GEN_50 // Ignored: Inlined leading underscore at RegFile.v:123
	// Tracing: RegFile _GEN_51 // Ignored: Inlined leading underscore at RegFile.v:124
	// Tracing: RegFile _GEN_52 // Ignored: Inlined leading underscore at RegFile.v:125
	// Tracing: RegFile _GEN_53 // Ignored: Inlined leading underscore at RegFile.v:126
	// Tracing: RegFile _GEN_54 // Ignored: Inlined leading underscore at RegFile.v:127
	// Tracing: RegFile _GEN_55 // Ignored: Inlined leading underscore at RegFile.v:128
	// Tracing: RegFile _GEN_56 // Ignored: Inlined leading underscore at RegFile.v:129
	// Tracing: RegFile _GEN_57 // Ignored: Inlined leading underscore at RegFile.v:130
	// Tracing: RegFile _GEN_58 // Ignored: Inlined leading underscore at RegFile.v:131
	// Tracing: RegFile _GEN_59 // Ignored: Inlined leading underscore at RegFile.v:132
	// Tracing: RegFile _GEN_60 // Ignored: Inlined leading underscore at RegFile.v:133
	// Tracing: RegFile _GEN_61 // Ignored: Inlined leading underscore at RegFile.v:134
	// Tracing: RegFile _GEN_62 // Ignored: Inlined leading underscore at RegFile.v:135
	// Tracing: RegFile _GEN_64 // Ignored: Inlined leading underscore at RegFile.v:136
	// Tracing: RegFile _GEN_65 // Ignored: Inlined leading underscore at RegFile.v:137
	// Tracing: RegFile _GEN_66 // Ignored: Inlined leading underscore at RegFile.v:138
	// Tracing: RegFile _GEN_67 // Ignored: Inlined leading underscore at RegFile.v:139
	// Tracing: RegFile _GEN_68 // Ignored: Inlined leading underscore at RegFile.v:140
	// Tracing: RegFile _GEN_69 // Ignored: Inlined leading underscore at RegFile.v:141
	// Tracing: RegFile _GEN_70 // Ignored: Inlined leading underscore at RegFile.v:142
	// Tracing: RegFile _GEN_71 // Ignored: Inlined leading underscore at RegFile.v:143
	// Tracing: RegFile _GEN_72 // Ignored: Inlined leading underscore at RegFile.v:144
	// Tracing: RegFile _GEN_73 // Ignored: Inlined leading underscore at RegFile.v:145
	// Tracing: RegFile _GEN_74 // Ignored: Inlined leading underscore at RegFile.v:146
	// Tracing: RegFile _GEN_75 // Ignored: Inlined leading underscore at RegFile.v:147
	// Tracing: RegFile _GEN_76 // Ignored: Inlined leading underscore at RegFile.v:148
	// Tracing: RegFile _GEN_77 // Ignored: Inlined leading underscore at RegFile.v:149
	// Tracing: RegFile _GEN_78 // Ignored: Inlined leading underscore at RegFile.v:150
	// Tracing: RegFile _GEN_79 // Ignored: Inlined leading underscore at RegFile.v:151
	// Tracing: RegFile _GEN_80 // Ignored: Inlined leading underscore at RegFile.v:152
	// Tracing: RegFile _GEN_81 // Ignored: Inlined leading underscore at RegFile.v:153
	// Tracing: RegFile _GEN_82 // Ignored: Inlined leading underscore at RegFile.v:154
	// Tracing: RegFile _GEN_83 // Ignored: Inlined leading underscore at RegFile.v:155
	// Tracing: RegFile _GEN_84 // Ignored: Inlined leading underscore at RegFile.v:156
	// Tracing: RegFile _GEN_85 // Ignored: Inlined leading underscore at RegFile.v:157
	// Tracing: RegFile _GEN_86 // Ignored: Inlined leading underscore at RegFile.v:158
	// Tracing: RegFile _GEN_87 // Ignored: Inlined leading underscore at RegFile.v:159
	// Tracing: RegFile _GEN_88 // Ignored: Inlined leading underscore at RegFile.v:160
	// Tracing: RegFile _GEN_89 // Ignored: Inlined leading underscore at RegFile.v:161
	// Tracing: RegFile _GEN_90 // Ignored: Inlined leading underscore at RegFile.v:162
	// Tracing: RegFile _GEN_91 // Ignored: Inlined leading underscore at RegFile.v:163
	// Tracing: RegFile _GEN_92 // Ignored: Inlined leading underscore at RegFile.v:164
	// Tracing: RegFile _GEN_93 // Ignored: Inlined leading underscore at RegFile.v:165
	// Tracing: RegFile _GEN_94 // Ignored: Inlined leading underscore at RegFile.v:166
	// Tracing: RegFile _GEN_95 // Ignored: Inlined leading underscore at RegFile.v:167
	// Tracing: RegFile _GEN_96 // Ignored: Inlined leading underscore at RegFile.v:168
	// Tracing: RegFile _GEN_97 // Ignored: Inlined leading underscore at RegFile.v:169
	// Tracing: RegFile _GEN_98 // Ignored: Inlined leading underscore at RegFile.v:170
	// Tracing: RegFile _GEN_99 // Ignored: Inlined leading underscore at RegFile.v:171
	// Tracing: RegFile _GEN_100 // Ignored: Inlined leading underscore at RegFile.v:172
	// Tracing: RegFile _GEN_101 // Ignored: Inlined leading underscore at RegFile.v:173
	// Tracing: RegFile _GEN_102 // Ignored: Inlined leading underscore at RegFile.v:174
	// Tracing: RegFile _GEN_103 // Ignored: Inlined leading underscore at RegFile.v:175
	// Tracing: RegFile _GEN_104 // Ignored: Inlined leading underscore at RegFile.v:176
	// Tracing: RegFile _GEN_105 // Ignored: Inlined leading underscore at RegFile.v:177
	// Tracing: RegFile _GEN_106 // Ignored: Inlined leading underscore at RegFile.v:178
	// Tracing: RegFile _GEN_107 // Ignored: Inlined leading underscore at RegFile.v:179
	// Tracing: RegFile _GEN_108 // Ignored: Inlined leading underscore at RegFile.v:180
	// Tracing: RegFile _GEN_109 // Ignored: Inlined leading underscore at RegFile.v:181
	// Tracing: RegFile _GEN_110 // Ignored: Inlined leading underscore at RegFile.v:182
	// Tracing: RegFile _GEN_111 // Ignored: Inlined leading underscore at RegFile.v:183
	// Tracing: RegFile _GEN_112 // Ignored: Inlined leading underscore at RegFile.v:184
	// Tracing: RegFile _GEN_113 // Ignored: Inlined leading underscore at RegFile.v:185
	// Tracing: RegFile _GEN_114 // Ignored: Inlined leading underscore at RegFile.v:186
	// Tracing: RegFile _GEN_115 // Ignored: Inlined leading underscore at RegFile.v:187
	// Tracing: RegFile _GEN_116 // Ignored: Inlined leading underscore at RegFile.v:188
	// Tracing: RegFile _GEN_117 // Ignored: Inlined leading underscore at RegFile.v:189
	// Tracing: RegFile _GEN_118 // Ignored: Inlined leading underscore at RegFile.v:190
	// Tracing: RegFile _GEN_119 // Ignored: Inlined leading underscore at RegFile.v:191
	// Tracing: RegFile _GEN_120 // Ignored: Inlined leading underscore at RegFile.v:192
	// Tracing: RegFile _GEN_121 // Ignored: Inlined leading underscore at RegFile.v:193
	// Tracing: RegFile _GEN_122 // Ignored: Inlined leading underscore at RegFile.v:194
	// Tracing: RegFile _GEN_123 // Ignored: Inlined leading underscore at RegFile.v:195
	// Tracing: RegFile _GEN_124 // Ignored: Inlined leading underscore at RegFile.v:196
	// Tracing: RegFile _GEN_125 // Ignored: Inlined leading underscore at RegFile.v:197
	// Tracing: RegFile _GEN_126 // Ignored: Inlined leading underscore at RegFile.v:198
	// Tracing: RegFile _GEN_127 // Ignored: Inlined leading underscore at RegFile.v:199
    }
}

void VRegFile::traceFullThis__1(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->RegFile__DOT__registers_0),32);
	vcdp->fullBus  (c+2,(vlTOPp->RegFile__DOT__registers_1),32);
	vcdp->fullBus  (c+3,(vlTOPp->RegFile__DOT__registers_2),32);
	vcdp->fullBus  (c+4,(vlTOPp->RegFile__DOT__registers_3),32);
	vcdp->fullBus  (c+5,(vlTOPp->RegFile__DOT__registers_4),32);
	vcdp->fullBus  (c+6,(vlTOPp->RegFile__DOT__registers_5),32);
	vcdp->fullBus  (c+7,(vlTOPp->RegFile__DOT__registers_6),32);
	vcdp->fullBus  (c+8,(vlTOPp->RegFile__DOT__registers_7),32);
	vcdp->fullBus  (c+9,(vlTOPp->RegFile__DOT__registers_8),32);
	vcdp->fullBus  (c+10,(vlTOPp->RegFile__DOT__registers_9),32);
	vcdp->fullBus  (c+11,(vlTOPp->RegFile__DOT__registers_10),32);
	vcdp->fullBus  (c+12,(vlTOPp->RegFile__DOT__registers_11),32);
	vcdp->fullBus  (c+13,(vlTOPp->RegFile__DOT__registers_12),32);
	vcdp->fullBus  (c+14,(vlTOPp->RegFile__DOT__registers_13),32);
	vcdp->fullBus  (c+15,(vlTOPp->RegFile__DOT__registers_14),32);
	vcdp->fullBus  (c+16,(vlTOPp->RegFile__DOT__registers_15),32);
	vcdp->fullBus  (c+17,(vlTOPp->RegFile__DOT__registers_16),32);
	vcdp->fullBus  (c+18,(vlTOPp->RegFile__DOT__registers_17),32);
	vcdp->fullBus  (c+19,(vlTOPp->RegFile__DOT__registers_18),32);
	vcdp->fullBus  (c+20,(vlTOPp->RegFile__DOT__registers_19),32);
	vcdp->fullBus  (c+21,(vlTOPp->RegFile__DOT__registers_20),32);
	vcdp->fullBus  (c+22,(vlTOPp->RegFile__DOT__registers_21),32);
	vcdp->fullBus  (c+23,(vlTOPp->RegFile__DOT__registers_22),32);
	vcdp->fullBus  (c+24,(vlTOPp->RegFile__DOT__registers_23),32);
	vcdp->fullBus  (c+25,(vlTOPp->RegFile__DOT__registers_24),32);
	vcdp->fullBus  (c+26,(vlTOPp->RegFile__DOT__registers_25),32);
	vcdp->fullBus  (c+27,(vlTOPp->RegFile__DOT__registers_26),32);
	vcdp->fullBus  (c+28,(vlTOPp->RegFile__DOT__registers_27),32);
	vcdp->fullBus  (c+29,(vlTOPp->RegFile__DOT__registers_28),32);
	vcdp->fullBus  (c+30,(vlTOPp->RegFile__DOT__registers_29),32);
	vcdp->fullBus  (c+31,(vlTOPp->RegFile__DOT__registers_30),32);
	vcdp->fullBus  (c+32,(vlTOPp->RegFile__DOT__registers_31),32);
	vcdp->fullBit  (c+33,(vlTOPp->clock));
	vcdp->fullBit  (c+34,(vlTOPp->reset));
	vcdp->fullBit  (c+35,(vlTOPp->io_RegWrite));
	vcdp->fullBus  (c+36,(vlTOPp->io_rs1),5);
	vcdp->fullBus  (c+37,(vlTOPp->io_rs2),5);
	vcdp->fullBus  (c+38,(vlTOPp->io_rd),5);
	vcdp->fullBus  (c+39,(vlTOPp->io_WriteData),32);
	vcdp->fullBus  (c+40,(vlTOPp->io_rd1),32);
	vcdp->fullBus  (c+41,(vlTOPp->io_rd2),32);
    }
}
