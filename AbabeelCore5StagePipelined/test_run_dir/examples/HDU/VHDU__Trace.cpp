// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDU__Syms.h"


//======================

void VHDU::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHDU* t=(VHDU*)userthis;
    VHDU__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VHDU::traceChgThis(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceChgThis__2(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHDU::traceChgThis__2(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(vlTOPp->clock));
	vcdp->chgBit  (c+2,(vlTOPp->reset));
	vcdp->chgBit  (c+3,(vlTOPp->io_exRegWrite));
	vcdp->chgBus  (c+4,(vlTOPp->io_exRd),5);
	vcdp->chgBus  (c+5,(vlTOPp->io_idRs1),5);
	vcdp->chgBus  (c+6,(vlTOPp->io_idRs2),5);
	vcdp->chgBus  (c+7,(vlTOPp->io_operandAsel),2);
	vcdp->chgBit  (c+8,(vlTOPp->io_operandBsel));
	vcdp->chgBit  (c+9,(vlTOPp->io_hazard));
	vcdp->chgBit  (c+10,(vlTOPp->io_memRegWrite));
	vcdp->chgBus  (c+11,(vlTOPp->io_memRd),5);
	vcdp->chgBus  (c+12,(vlTOPp->io_forwardA),2);
	vcdp->chgBus  (c+13,(vlTOPp->io_forwardB),2);
    }
}
