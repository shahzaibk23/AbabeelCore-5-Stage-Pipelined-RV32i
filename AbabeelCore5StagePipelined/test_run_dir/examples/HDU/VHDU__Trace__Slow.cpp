// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VHDU__Syms.h"


//======================

void VHDU::trace (VerilatedVcdC* tfp, int, int) {
    tfp->spTrace()->addCallback (&VHDU::traceInit, &VHDU::traceFull, &VHDU::traceChg, this);
}
void VHDU::traceInit(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->open()
    VHDU* t=(VHDU*)userthis;
    VHDU__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (!Verilated::calcUnusedSigs()) vl_fatal(__FILE__,__LINE__,__FILE__,"Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    vcdp->scopeEscape(' ');
    t->traceInitThis (vlSymsp, vcdp, code);
    vcdp->scopeEscape('.');
}
void VHDU::traceFull(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VHDU* t=(VHDU*)userthis;
    VHDU__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    t->traceFullThis (vlSymsp, vcdp, code);
}

//======================


void VHDU::traceInitThis(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    vcdp->module(vlSymsp->name()); // Setup signal names
    // Body
    {
	vlTOPp->traceInitThis__1(vlSymsp, vcdp, code);
    }
}

void VHDU::traceFullThis(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vlTOPp->traceFullThis__1(vlSymsp, vcdp, code);
    }
    // Final
    vlTOPp->__Vm_traceActivity = 0U;
}

void VHDU::traceInitThis__1(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->declBit  (c+1,"clock",-1);
	vcdp->declBit  (c+2,"reset",-1);
	vcdp->declBit  (c+3,"io_exRegWrite",-1);
	vcdp->declBus  (c+4,"io_exRd",-1,4,0);
	vcdp->declBus  (c+5,"io_idRs1",-1,4,0);
	vcdp->declBus  (c+6,"io_idRs2",-1,4,0);
	vcdp->declBus  (c+7,"io_operandAsel",-1,1,0);
	vcdp->declBit  (c+8,"io_operandBsel",-1);
	vcdp->declBit  (c+9,"io_hazard",-1);
	vcdp->declBit  (c+10,"io_memRegWrite",-1);
	vcdp->declBus  (c+11,"io_memRd",-1,4,0);
	vcdp->declBus  (c+12,"io_forwardA",-1,1,0);
	vcdp->declBus  (c+13,"io_forwardB",-1,1,0);
	vcdp->declBit  (c+1,"HDU clock",-1);
	vcdp->declBit  (c+2,"HDU reset",-1);
	vcdp->declBit  (c+3,"HDU io_exRegWrite",-1);
	vcdp->declBus  (c+4,"HDU io_exRd",-1,4,0);
	vcdp->declBus  (c+5,"HDU io_idRs1",-1,4,0);
	vcdp->declBus  (c+6,"HDU io_idRs2",-1,4,0);
	vcdp->declBus  (c+7,"HDU io_operandAsel",-1,1,0);
	vcdp->declBit  (c+8,"HDU io_operandBsel",-1);
	vcdp->declBit  (c+9,"HDU io_hazard",-1);
	vcdp->declBit  (c+10,"HDU io_memRegWrite",-1);
	vcdp->declBus  (c+11,"HDU io_memRd",-1,4,0);
	vcdp->declBus  (c+12,"HDU io_forwardA",-1,1,0);
	vcdp->declBus  (c+13,"HDU io_forwardB",-1,1,0);
	// Tracing: HDU _T_32 // Ignored: Inlined leading underscore at HDU.v:16
	// Tracing: HDU _T_33 // Ignored: Inlined leading underscore at HDU.v:17
	// Tracing: HDU _T_34 // Ignored: Inlined leading underscore at HDU.v:18
	// Tracing: HDU _T_35 // Ignored: Inlined leading underscore at HDU.v:19
	// Tracing: HDU _T_36 // Ignored: Inlined leading underscore at HDU.v:20
	// Tracing: HDU _T_37 // Ignored: Inlined leading underscore at HDU.v:21
	// Tracing: HDU _T_46 // Ignored: Inlined leading underscore at HDU.v:22
	// Tracing: HDU _T_54 // Ignored: Inlined leading underscore at HDU.v:23
	// Tracing: HDU _GEN_0 // Ignored: Inlined leading underscore at HDU.v:24
	// Tracing: HDU _GEN_1 // Ignored: Inlined leading underscore at HDU.v:25
	// Tracing: HDU _GEN_2 // Ignored: Inlined leading underscore at HDU.v:26
	// Tracing: HDU _GEN_3 // Ignored: Inlined leading underscore at HDU.v:27
	// Tracing: HDU _GEN_4 // Ignored: Inlined leading underscore at HDU.v:28
	// Tracing: HDU _T_59 // Ignored: Inlined leading underscore at HDU.v:29
	// Tracing: HDU _T_60 // Ignored: Inlined leading underscore at HDU.v:30
	// Tracing: HDU _T_61 // Ignored: Inlined leading underscore at HDU.v:31
	// Tracing: HDU _T_62 // Ignored: Inlined leading underscore at HDU.v:32
	// Tracing: HDU _T_63 // Ignored: Inlined leading underscore at HDU.v:33
	// Tracing: HDU _T_64 // Ignored: Inlined leading underscore at HDU.v:34
	// Tracing: HDU _T_73 // Ignored: Inlined leading underscore at HDU.v:35
	// Tracing: HDU _T_81 // Ignored: Inlined leading underscore at HDU.v:36
	// Tracing: HDU _GEN_5 // Ignored: Inlined leading underscore at HDU.v:37
	// Tracing: HDU _GEN_6 // Ignored: Inlined leading underscore at HDU.v:38
	// Tracing: HDU _GEN_7 // Ignored: Inlined leading underscore at HDU.v:39
    }
}

void VHDU::traceFullThis__1(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->fullBit  (c+1,(vlTOPp->clock));
	vcdp->fullBit  (c+2,(vlTOPp->reset));
	vcdp->fullBit  (c+3,(vlTOPp->io_exRegWrite));
	vcdp->fullBus  (c+4,(vlTOPp->io_exRd),5);
	vcdp->fullBus  (c+5,(vlTOPp->io_idRs1),5);
	vcdp->fullBus  (c+6,(vlTOPp->io_idRs2),5);
	vcdp->fullBus  (c+7,(vlTOPp->io_operandAsel),2);
	vcdp->fullBit  (c+8,(vlTOPp->io_operandBsel));
	vcdp->fullBit  (c+9,(vlTOPp->io_hazard));
	vcdp->fullBit  (c+10,(vlTOPp->io_memRegWrite));
	vcdp->fullBus  (c+11,(vlTOPp->io_memRd),5);
	vcdp->fullBus  (c+12,(vlTOPp->io_forwardA),2);
	vcdp->fullBus  (c+13,(vlTOPp->io_forwardB),2);
    }
}
