// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMainMem__Syms.h"


//======================

void VMainMem::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VMainMem::traceInit, &VMainMem::traceFull, &VMainMem::traceChg, this);
}
void VMainMem::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VMainMem* t=(VMainMem*)userthis;
    VMainMem__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VMainMem::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMainMem* t=(VMainMem*)userthis;
    VMainMem__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VMainMem::traceInitThis(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VMainMem::traceFullThis(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMainMem::traceInitThis__1(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+3,"clock",-1);
	vcdp->declBit  (c+4,"reset",-1);
	vcdp->declBus  (c+5,"io_Address",-1,9,0);
	vcdp->declBus  (c+6,"io_DataIn",-1,31,0);
	vcdp->declBus  (c+7,"io_DataOut",-1,31,0);
	vcdp->declBit  (c+8,"io_str",-1);
	vcdp->declBit  (c+9,"io_ld",-1);
	vcdp->declBit  (c+3,"MainMem clock",-1);
	vcdp->declBit  (c+4,"MainMem reset",-1);
	vcdp->declBus  (c+5,"MainMem io_Address",-1,9,0);
	vcdp->declBus  (c+6,"MainMem io_DataIn",-1,31,0);
	vcdp->declBus  (c+7,"MainMem io_DataOut",-1,31,0);
	vcdp->declBit  (c+8,"MainMem io_str",-1);
	vcdp->declBit  (c+9,"MainMem io_ld",-1);
	// Tracing: MainMem dMem // Ignored: Wide memory > --trace-max-array ents at MainMem.v:10
	// Tracing: MainMem _RAND_0 // Ignored: Inlined leading underscore at MainMem.v:11
	vcdp->declBus  (c+1,"MainMem dMem__T_20_data",-1,31,0);
	vcdp->declBus  (c+2,"MainMem dMem__T_20_addr",-1,9,0);
	vcdp->declBus  (c+6,"MainMem dMem__T_24_data",-1,31,0);
	vcdp->declBus  (c+5,"MainMem dMem__T_24_addr",-1,9,0);
	vcdp->declBit  (c+11,"MainMem dMem__T_24_mask",-1);
	vcdp->declBit  (c+10,"MainMem dMem__T_24_en",-1);
	// Tracing: MainMem _T_19 // Ignored: Inlined leading underscore at MainMem.v:18
	// Tracing: MainMem _T_21 // Ignored: Inlined leading underscore at MainMem.v:19
	vcdp->declBus  (c+2,"MainMem dMem__T_20_addr_pipe_0",-1,9,0);
	// Tracing: MainMem _RAND_1 // Ignored: Inlined leading underscore at MainMem.v:21
	vcdp->declBit  (c+3,"MainMem BindsTo_0_MainMem_Inst clock",-1);
	vcdp->declBit  (c+4,"MainMem BindsTo_0_MainMem_Inst reset",-1);
	vcdp->declBus  (c+5,"MainMem BindsTo_0_MainMem_Inst io_Address",-1,9,0);
	vcdp->declBus  (c+6,"MainMem BindsTo_0_MainMem_Inst io_DataIn",-1,31,0);
	vcdp->declBus  (c+7,"MainMem BindsTo_0_MainMem_Inst io_DataOut",-1,31,0);
	vcdp->declBit  (c+8,"MainMem BindsTo_0_MainMem_Inst io_str",-1);
	vcdp->declBit  (c+9,"MainMem BindsTo_0_MainMem_Inst io_ld",-1);
    }
}

void VMainMem::traceFullThis__1(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBus  (c+1,(vlTOPp->MainMem__DOT__dMem___05FT_20_data),32);
	vcdp->fullBus  (c+2,(vlTOPp->MainMem__DOT__dMem___05FT_20_addr_pipe_0),10);
	vcdp->fullBit  (c+3,(vlTOPp->clock));
	vcdp->fullBit  (c+4,(vlTOPp->reset));
	vcdp->fullBus  (c+5,(vlTOPp->io_Address),10);
	vcdp->fullBus  (c+6,(vlTOPp->io_DataIn),32);
	vcdp->fullBus  (c+7,(vlTOPp->io_DataOut),32);
	vcdp->fullBit  (c+8,(vlTOPp->io_str));
	vcdp->fullBit  (c+9,(vlTOPp->io_ld));
	vcdp->fullBit  (c+10,(((~ (IData)(vlTOPp->io_ld)) 
			       & (IData)(vlTOPp->io_str))));
	vcdp->fullBit  (c+11,(1U));
    }
}
