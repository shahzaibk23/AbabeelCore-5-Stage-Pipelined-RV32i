// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRegFile__Syms.h"


//======================

void VRegFile::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VRegFile* t=(VRegFile*)userthis;
    VRegFile__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VRegFile::traceChgThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VRegFile::traceChgThis__2(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->RegFile__DOT__registers_0),32);
	vcdp->chgBus  (c+2,(vlTOPp->RegFile__DOT__registers_1),32);
	vcdp->chgBus  (c+3,(vlTOPp->RegFile__DOT__registers_2),32);
	vcdp->chgBus  (c+4,(vlTOPp->RegFile__DOT__registers_3),32);
	vcdp->chgBus  (c+5,(vlTOPp->RegFile__DOT__registers_4),32);
	vcdp->chgBus  (c+6,(vlTOPp->RegFile__DOT__registers_5),32);
	vcdp->chgBus  (c+7,(vlTOPp->RegFile__DOT__registers_6),32);
	vcdp->chgBus  (c+8,(vlTOPp->RegFile__DOT__registers_7),32);
	vcdp->chgBus  (c+9,(vlTOPp->RegFile__DOT__registers_8),32);
	vcdp->chgBus  (c+10,(vlTOPp->RegFile__DOT__registers_9),32);
	vcdp->chgBus  (c+11,(vlTOPp->RegFile__DOT__registers_10),32);
	vcdp->chgBus  (c+12,(vlTOPp->RegFile__DOT__registers_11),32);
	vcdp->chgBus  (c+13,(vlTOPp->RegFile__DOT__registers_12),32);
	vcdp->chgBus  (c+14,(vlTOPp->RegFile__DOT__registers_13),32);
	vcdp->chgBus  (c+15,(vlTOPp->RegFile__DOT__registers_14),32);
	vcdp->chgBus  (c+16,(vlTOPp->RegFile__DOT__registers_15),32);
	vcdp->chgBus  (c+17,(vlTOPp->RegFile__DOT__registers_16),32);
	vcdp->chgBus  (c+18,(vlTOPp->RegFile__DOT__registers_17),32);
	vcdp->chgBus  (c+19,(vlTOPp->RegFile__DOT__registers_18),32);
	vcdp->chgBus  (c+20,(vlTOPp->RegFile__DOT__registers_19),32);
	vcdp->chgBus  (c+21,(vlTOPp->RegFile__DOT__registers_20),32);
	vcdp->chgBus  (c+22,(vlTOPp->RegFile__DOT__registers_21),32);
	vcdp->chgBus  (c+23,(vlTOPp->RegFile__DOT__registers_22),32);
	vcdp->chgBus  (c+24,(vlTOPp->RegFile__DOT__registers_23),32);
	vcdp->chgBus  (c+25,(vlTOPp->RegFile__DOT__registers_24),32);
	vcdp->chgBus  (c+26,(vlTOPp->RegFile__DOT__registers_25),32);
	vcdp->chgBus  (c+27,(vlTOPp->RegFile__DOT__registers_26),32);
	vcdp->chgBus  (c+28,(vlTOPp->RegFile__DOT__registers_27),32);
	vcdp->chgBus  (c+29,(vlTOPp->RegFile__DOT__registers_28),32);
	vcdp->chgBus  (c+30,(vlTOPp->RegFile__DOT__registers_29),32);
	vcdp->chgBus  (c+31,(vlTOPp->RegFile__DOT__registers_30),32);
	vcdp->chgBus  (c+32,(vlTOPp->RegFile__DOT__registers_31),32);
    }
}

void VRegFile::traceChgThis__3(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+33,(vlTOPp->clock));
	vcdp->chgBit  (c+34,(vlTOPp->reset));
	vcdp->chgBit  (c+35,(vlTOPp->io_RegWrite));
	vcdp->chgBus  (c+36,(vlTOPp->io_rs1),5);
	vcdp->chgBus  (c+37,(vlTOPp->io_rs2),5);
	vcdp->chgBus  (c+38,(vlTOPp->io_rd),5);
	vcdp->chgBus  (c+39,(vlTOPp->io_WriteData),32);
	vcdp->chgBus  (c+40,(vlTOPp->io_rd1),32);
	vcdp->chgBus  (c+41,(vlTOPp->io_rd2),32);
    }
}
