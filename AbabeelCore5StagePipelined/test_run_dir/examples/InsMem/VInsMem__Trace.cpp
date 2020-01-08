// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VInsMem__Syms.h"


//======================

void VInsMem::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VInsMem* t=(VInsMem*)userthis;
    VInsMem__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VInsMem::traceChgThis(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VInsMem::traceChgThis__2(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->InsMem__DOT__mem___05FT_11_data),32);
    }
}

void VInsMem::traceChgThis__3(VInsMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+2,(vlTOPp->clock));
	vcdp->chgBit  (c+3,(vlTOPp->reset));
	vcdp->chgBus  (c+4,(vlTOPp->io_wrAdder),10);
	vcdp->chgBus  (c+5,(vlTOPp->io_rData),32);
    }
}
