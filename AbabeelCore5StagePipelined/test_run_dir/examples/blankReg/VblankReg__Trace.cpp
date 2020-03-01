// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VblankReg__Syms.h"


//======================

void VblankReg::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VblankReg* t=(VblankReg*)userthis;
    VblankReg__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VblankReg::traceChgThis(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VblankReg::traceChgThis__2(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->blankReg__DOT__reg_pc),32);
	vcdp->chgBus  (c+2,(vlTOPp->blankReg__DOT__reg_ins),32);
    }
}

void VblankReg::traceChgThis__3(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clock));
	vcdp->chgBit  (c+4,(vlTOPp->reset));
	vcdp->chgBus  (c+5,(vlTOPp->io_pc_in),32);
	vcdp->chgBus  (c+6,(vlTOPp->io_ins_in),32);
	vcdp->chgBus  (c+7,(vlTOPp->io_pc_out),32);
	vcdp->chgBus  (c+8,(vlTOPp->io_ins_out),32);
    }
}
