// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VblankReg.h for the primary calling header

#include "VblankReg.h"         // For This
#include "VblankReg__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VblankReg) {
    VblankReg__Syms* __restrict vlSymsp = __VlSymsp = new VblankReg__Syms(this, name());
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VblankReg::__Vconfigure(VblankReg__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VblankReg::~VblankReg() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VblankReg::eval() {
    VblankReg__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VblankReg::eval\n"); );
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	VL_DEBUG_IF(VL_PRINTF(" Clock loop\n"););
	vlSymsp->__Vm_activity = true;
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't converge");
    }
}

void VblankReg::_eval_initial_loop(VblankReg__Syms* __restrict vlSymsp) {
    vlSymsp->__Vm_didInit = true;
    _eval_initial(vlSymsp);
    vlSymsp->__Vm_activity = true;
    int __VclockLoop = 0;
    QData __Vchange=1;
    while (VL_LIKELY(__Vchange)) {
	_eval_settle(vlSymsp);
	_eval(vlSymsp);
	__Vchange = _change_request(vlSymsp);
	if (++__VclockLoop > 100) vl_fatal(__FILE__,__LINE__,__FILE__,"Verilated model didn't DC converge");
    }
}

//--------------------
// Internal Methods

VL_INLINE_OPT void VblankReg::_sequent__TOP__1(VblankReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_sequent__TOP__1\n"); );
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at blankReg.v:49
    vlTOPp->blankReg__DOT__reg_pc = ((IData)(vlTOPp->reset)
				      ? 0U : vlTOPp->io_pc_in);
    vlTOPp->blankReg__DOT__reg_ins = ((IData)(vlTOPp->reset)
				       ? 0U : vlTOPp->io_ins_in);
    vlTOPp->io_pc_out = vlTOPp->blankReg__DOT__reg_pc;
    vlTOPp->io_ins_out = vlTOPp->blankReg__DOT__reg_ins;
}

void VblankReg::_settle__TOP__2(VblankReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_settle__TOP__2\n"); );
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_pc_out = vlTOPp->blankReg__DOT__reg_pc;
    vlTOPp->io_ins_out = vlTOPp->blankReg__DOT__reg_ins;
}

void VblankReg::_eval(VblankReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_eval\n"); );
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VblankReg::_eval_initial(VblankReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_eval_initial\n"); );
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VblankReg::final() {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::final\n"); );
    // Variables
    VblankReg__Syms* __restrict vlSymsp = this->__VlSymsp;
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VblankReg::_eval_settle(VblankReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_eval_settle\n"); );
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VblankReg::_change_request(VblankReg__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_change_request\n"); );
    VblankReg* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VblankReg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_pc_in = VL_RAND_RESET_I(32);
    io_ins_in = VL_RAND_RESET_I(32);
    io_pc_out = VL_RAND_RESET_I(32);
    io_ins_out = VL_RAND_RESET_I(32);
    blankReg__DOT__reg_pc = VL_RAND_RESET_I(32);
    blankReg__DOT__reg_ins = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VblankReg::_configure_coverage(VblankReg__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VblankReg::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
