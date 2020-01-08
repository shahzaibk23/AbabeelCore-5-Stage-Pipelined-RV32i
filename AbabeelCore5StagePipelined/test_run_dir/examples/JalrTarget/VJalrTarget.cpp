// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VJalrTarget.h for the primary calling header

#include "VJalrTarget.h"       // For This
#include "VJalrTarget__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VJalrTarget) {
    VJalrTarget__Syms* __restrict vlSymsp = __VlSymsp = new VJalrTarget__Syms(this, name());
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VJalrTarget::__Vconfigure(VJalrTarget__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VJalrTarget::~VJalrTarget() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VJalrTarget::eval() {
    VJalrTarget__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VJalrTarget::eval\n"); );
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

void VJalrTarget::_eval_initial_loop(VJalrTarget__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VJalrTarget::_combo__TOP__1(VJalrTarget__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_combo__TOP__1\n"); );
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_output = (0xfffffffeU & (vlTOPp->io_a 
					+ vlTOPp->io_b));
}

void VJalrTarget::_eval(VJalrTarget__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_eval\n"); );
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

void VJalrTarget::_eval_initial(VJalrTarget__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_eval_initial\n"); );
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VJalrTarget::final() {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::final\n"); );
    // Variables
    VJalrTarget__Syms* __restrict vlSymsp = this->__VlSymsp;
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VJalrTarget::_eval_settle(VJalrTarget__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_eval_settle\n"); );
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
}

VL_INLINE_OPT QData VJalrTarget::_change_request(VJalrTarget__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_change_request\n"); );
    VJalrTarget* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VJalrTarget::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_a = VL_RAND_RESET_I(32);
    io_b = VL_RAND_RESET_I(32);
    io_output = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VJalrTarget::_configure_coverage(VJalrTarget__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VJalrTarget::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
