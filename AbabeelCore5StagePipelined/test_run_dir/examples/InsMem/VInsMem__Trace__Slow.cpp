// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInsMem__Syms.h"


//======================

void VInsMem::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VInsMem::traceInit, &VInsMem::traceFull, &VInsMem::traceChg, this);
}
void VInsMem::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VInsMem* t=(VInsMem*)userthis;
    VInsMem__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VInsMem::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInsMem* t=(VInsMem*)userthis;
    VInsMem__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VInsMem::traceInitThis(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VInsMem::traceFullThis(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInsMem::traceInitThis__1(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+2,"clock",-1);
	vcdp->declBit  (c+3,"reset",-1);
	vcdp->declBus  (c+4,"io_wrAdder",-1,9,0);
	vcdp->declBus  (c+5,"io_rData",-1,31,0);
	vcdp->declBit  (c+2,"InsMem clock",-1);
	vcdp->declBit  (c+3,"InsMem reset",-1);
	vcdp->declBus  (c+4,"InsMem io_wrAdder",-1,9,0);
	vcdp->declBus  (c+5,"InsMem io_rData",-1,31,0);
	// Tracing: InsMem mem // Ignored: Wide memory > --trace-max-array ents at InsMem.v:7
	// Tracing: InsMem _RAND_0 // Ignored: Inlined leading underscore at InsMem.v:8
	vcdp->declBus  (c+1,"InsMem mem__T_11_data",-1,31,0);
	vcdp->declBus  (c+4,"InsMem mem__T_11_addr",-1,9,0);
	vcdp->declBit  (c+2,"InsMem BindsTo_0_InsMem_Inst clock",-1);
	vcdp->declBit  (c+3,"InsMem BindsTo_0_InsMem_Inst reset",-1);
	vcdp->declBus  (c+4,"InsMem BindsTo_0_InsMem_Inst io_wrAdder",-1,9,0);
	vcdp->declBus  (c+5,"InsMem BindsTo_0_InsMem_Inst io_rData",-1,31,0);
    }
}

void VInsMem::traceFullThis__1(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->InsMem__DOT__mem___05FT_11_data),32);
	vcdp->fullBit  (c+2,(vlTOPp->clock));
	vcdp->fullBit  (c+3,(vlTOPp->reset));
	vcdp->fullBus  (c+4,(vlTOPp->io_wrAdder),10);
	vcdp->fullBus  (c+5,(vlTOPp->io_rData),32);
    }
}
