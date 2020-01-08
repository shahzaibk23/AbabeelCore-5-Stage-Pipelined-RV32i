// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VJalrTarget__Syms.h"


//======================

void VJalrTarget::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VJalrTarget::traceInit, &VJalrTarget::traceFull, &VJalrTarget::traceChg, this);
}
void VJalrTarget::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VJalrTarget* t=(VJalrTarget*)userthis;
    VJalrTarget__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VJalrTarget::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VJalrTarget* t=(VJalrTarget*)userthis;
    VJalrTarget__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VJalrTarget::traceInitThis(VJalrTarget__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VJalrTarget::traceFullThis(VJalrTarget__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VJalrTarget::traceInitThis__1(VJalrTarget__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBus  (c+3,"io_a",-1,31,0);
	vcdp->declBus  (c+4,"io_b",-1,31,0);
	vcdp->declBus  (c+5,"io_output",-1,31,0);
	vcdp->declBit  (c+1,"JalrTarget clock",-1);
	vcdp->declBit  (c+2,"JalrTarget reset",-1);
	vcdp->declBus  (c+3,"JalrTarget io_a",-1,31,0);
	vcdp->declBus  (c+4,"JalrTarget io_b",-1,31,0);
	vcdp->declBus  (c+5,"JalrTarget io_output",-1,31,0);
	// Tracing: JalrTarget _T_11 // Ignored: Inlined leading underscore at JalrTarget.v:8
	// Tracing: JalrTarget _T_12 // Ignored: Inlined leading underscore at JalrTarget.v:9
	// Tracing: JalrTarget _GEN_0 // Ignored: Inlined leading underscore at JalrTarget.v:10
	// Tracing: JalrTarget _T_14 // Ignored: Inlined leading underscore at JalrTarget.v:11
    }
}

void VJalrTarget::traceFullThis__1(VJalrTarget__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBus  (c+3,(vlTOPp->io_a),32);
	vcdp->fullBus  (c+4,(vlTOPp->io_b),32);
	vcdp->fullBus  (c+5,(vlTOPp->io_output),32);
    }
}
