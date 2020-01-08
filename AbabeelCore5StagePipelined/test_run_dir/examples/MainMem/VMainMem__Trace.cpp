// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VMainMem__Syms.h"


//======================

void VMainMem::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VMainMem* t=(VMainMem*)userthis;
    VMainMem__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VMainMem::traceChgThis(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	if (VL_UNLIKELY((1U & (vlTOPp->__Vm_traceActivity 
			       | (vlTOPp->__Vm_traceActivity 
				  >> 1U))))) {
	    vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
	}
	if (VL_UNLIKELY((2U & vlTOPp->__Vm_traceActivity))) {
	    vlTOPp->traceChgThis__3(vlSymsp, vcdp, code);
	}
	vlTOPp->traceChgThis__4(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VMainMem::traceChgThis__2(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+1,(vlTOPp->MainMem__DOT__dMem___05FT_20_data),32);
    }
}

void VMainMem::traceChgThis__3(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+2,(vlTOPp->MainMem__DOT__dMem___05FT_20_addr_pipe_0),10);
    }
}

void VMainMem::traceChgThis__4(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+3,(vlTOPp->clock));
	vcdp->chgBit  (c+4,(vlTOPp->reset));
	vcdp->chgBus  (c+5,(vlTOPp->io_Address),10);
	vcdp->chgBus  (c+6,(vlTOPp->io_DataIn),32);
	vcdp->chgBus  (c+7,(vlTOPp->io_DataOut),32);
	vcdp->chgBit  (c+8,(vlTOPp->io_str));
	vcdp->chgBit  (c+9,(vlTOPp->io_ld));
	vcdp->chgBit  (c+10,(((~ (IData)(vlTOPp->io_ld)) 
			      & (IData)(vlTOPp->io_str))));
    }
}
