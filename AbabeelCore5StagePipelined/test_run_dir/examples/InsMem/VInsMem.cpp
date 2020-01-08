// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VInsMem.h for the primary calling header

#include "VInsMem.h"           // For This
#include "VInsMem__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VInsMem) {
    VInsMem__Syms* __restrict vlSymsp = __VlSymsp = new VInsMem__Syms(this, name());
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VInsMem::__Vconfigure(VInsMem__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VInsMem::~VInsMem() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VInsMem::eval() {
    VInsMem__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VInsMem::eval\n"); );
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

void VInsMem::_eval_initial_loop(VInsMem__Syms* __restrict vlSymsp) {
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

void VInsMem::_initial__TOP__1(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_initial__TOP__1\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,255,0,8);
    // Body
    // INITIAL at /home/hellcaster/chisel-tutorial/test_run_dir/examples/InsMem/InsMem.InsMem.mem.v:8
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x74696f6eU;
    __Vtemp1[2U] = 0x74727563U;
    __Vtemp1[3U] = 0x2f496e73U;
    __Vtemp1[4U] = 0x73746572U;
    __Vtemp1[5U] = 0x6c6c6361U;
    __Vtemp1[6U] = 0x652f6865U;
    __Vtemp1[7U] = 0x2f686f6dU;
    VL_READMEM_W (true,32,1024, 0,8, __Vtemp1, vlTOPp->InsMem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VInsMem::_combo__TOP__2(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_combo__TOP__2\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InsMem__DOT__mem___05FT_11_data = vlTOPp->InsMem__DOT__mem
	[vlTOPp->io_wrAdder];
}

void VInsMem::_settle__TOP__3(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_settle__TOP__3\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->InsMem__DOT__mem___05FT_11_data = vlTOPp->InsMem__DOT__mem
	[vlTOPp->io_wrAdder];
    vlTOPp->io_rData = vlTOPp->InsMem__DOT__mem___05FT_11_data;
}

VL_INLINE_OPT void VInsMem::_combo__TOP__4(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_combo__TOP__4\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_rData = vlTOPp->InsMem__DOT__mem___05FT_11_data;
}

void VInsMem::_eval(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_eval\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
    vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_combo__TOP__4(vlSymsp);
}

void VInsMem::_eval_initial(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_eval_initial\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VInsMem::final() {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::final\n"); );
    // Variables
    VInsMem__Syms* __restrict vlSymsp = this->__VlSymsp;
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VInsMem::_eval_settle(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_eval_settle\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VInsMem::_change_request(VInsMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_change_request\n"); );
    VInsMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VInsMem::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_wrAdder = VL_RAND_RESET_I(10);
    io_rData = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    InsMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    InsMem__DOT__mem___05FT_11_data = VL_RAND_RESET_I(32);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VInsMem::_configure_coverage(VInsMem__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VInsMem::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
