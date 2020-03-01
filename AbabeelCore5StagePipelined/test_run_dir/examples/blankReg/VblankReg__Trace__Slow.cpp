// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VblankReg__Syms.h"


//======================

void VblankReg::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VblankReg::traceInit, &VblankReg::traceFull, &VblankReg::traceChg, this);
}
void VblankReg::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VblankReg* t=(VblankReg*)userthis;
    VblankReg__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VblankReg::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VblankReg* t=(VblankReg*)userthis;
    VblankReg__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VblankReg::traceInitThis(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VblankReg::traceFullThis(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VblankReg::traceInitThis__1(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBus  (c+5,"io_pc_in",-1,31,0);
	vcdp->declBus  (c+6,"io_ins_in",-1,31,0);
	vcdp->declBus  (c+7,"io_pc_out",-1,31,0);
	vcdp->declBus  (c+8,"io_ins_out",-1,31,0);
	vcdp->declBit  (c+3,"blankReg clock",-1);
	vcdp->declBit  (c+4,"blankReg reset",-1);
	vcdp->declBus  (c+5,"blankReg io_pc_in",-1,31,0);
	vcdp->declBus  (c+6,"blankReg io_ins_in",-1,31,0);
	vcdp->declBus  (c+7,"blankReg io_pc_out",-1,31,0);
	vcdp->declBus  (c+8,"blankReg io_ins_out",-1,31,0);
	vcdp->declBus  (c+1,"blankReg reg_pc",-1,31,0);
	// Tracing: blankReg _RAND_0 // Ignored: Inlined leading underscore at blankReg.v:10
	vcdp->declBus  (c+2,"blankReg reg_ins",-1,31,0);
	// Tracing: blankReg _RAND_1 // Ignored: Inlined leading underscore at blankReg.v:12
    }
}

void VblankReg::traceFullThis__1(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->blankReg__DOT__reg_pc),32);
	vcdp->fullBus  (c+2,(vlTOPp->blankReg__DOT__reg_ins),32);
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
	vcdp->fullBus  (c+5,(vlTOPp->io_pc_in),32);
	vcdp->fullBus  (c+6,(vlTOPp->io_ins_in),32);
	vcdp->fullBus  (c+7,(vlTOPp->io_pc_out),32);
	vcdp->fullBus  (c+8,(vlTOPp->io_ins_out),32);
    }
}
