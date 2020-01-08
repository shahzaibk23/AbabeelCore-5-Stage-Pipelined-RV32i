// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VMainMem.h for the primary calling header

#include "VMainMem.h"          // For This
#include "VMainMem__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VMainMem) {
    VMainMem__Syms* __restrict vlSymsp = __VlSymsp = new VMainMem__Syms(this, name());
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VMainMem::__Vconfigure(VMainMem__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VMainMem::~VMainMem() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VMainMem::eval() {
    VMainMem__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VMainMem::eval\n"); );
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

void VMainMem::_eval_initial_loop(VMainMem__Syms* __restrict vlSymsp) {
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

void VMainMem::_initial__TOP__1(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_initial__TOP__1\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,223,0,7);
    // Body
    // INITIAL at /home/hellcaster/chisel-tutorial/test_run_dir/examples/MainMem/MainMem.MainMem.dMem.v:11
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x6d6f7279U;
    __Vtemp1[2U] = 0x722f4d65U;
    __Vtemp1[3U] = 0x61737465U;
    __Vtemp1[4U] = 0x656c6c63U;
    __Vtemp1[5U] = 0x6d652f68U;
    __Vtemp1[6U] = 0x2f686fU;
    VL_READMEM_W (true,32,1024, 0,7, __Vtemp1, vlTOPp->MainMem__DOT__dMem
		  ,0,~0);
}

VL_INLINE_OPT void VMainMem::_sequent__TOP__2(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_sequent__TOP__2\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__MainMem__DOT__dMem__v0,0,0);
    //char	__VpadToAlign57[1];
    VL_SIG16(__Vdlyvdim0__MainMem__DOT__dMem__v0,9,0);
    VL_SIG(__Vdlyvval__MainMem__DOT__dMem__v0,31,0);
    // Body
    __Vdlyvset__MainMem__DOT__dMem__v0 = 0U;
    // ALWAYS at MainMem.v:70
    if (vlTOPp->io_ld) {
	vlTOPp->MainMem__DOT__dMem___05FT_20_addr_pipe_0 
	    = vlTOPp->io_Address;
    }
    // ALWAYS at MainMem.v:67
    if (((~ (IData)(vlTOPp->io_ld)) & (IData)(vlTOPp->io_str))) {
	__Vdlyvval__MainMem__DOT__dMem__v0 = vlTOPp->io_DataIn;
	__Vdlyvset__MainMem__DOT__dMem__v0 = 1U;
	__Vdlyvdim0__MainMem__DOT__dMem__v0 = vlTOPp->io_Address;
    }
    // ALWAYSPOST at MainMem.v:68
    if (__Vdlyvset__MainMem__DOT__dMem__v0) {
	vlTOPp->MainMem__DOT__dMem[__Vdlyvdim0__MainMem__DOT__dMem__v0] 
	    = __Vdlyvval__MainMem__DOT__dMem__v0;
    }
    vlTOPp->MainMem__DOT__dMem___05FT_20_data = vlTOPp->MainMem__DOT__dMem
	[vlTOPp->MainMem__DOT__dMem___05FT_20_addr_pipe_0];
}

void VMainMem::_settle__TOP__3(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_settle__TOP__3\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->MainMem__DOT__dMem___05FT_20_data = vlTOPp->MainMem__DOT__dMem
	[vlTOPp->MainMem__DOT__dMem___05FT_20_addr_pipe_0];
    vlTOPp->io_DataOut = ((IData)(vlTOPp->io_ld) ? vlTOPp->MainMem__DOT__dMem___05FT_20_data
			   : 0U);
}

VL_INLINE_OPT void VMainMem::_combo__TOP__4(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_combo__TOP__4\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_DataOut = ((IData)(vlTOPp->io_ld) ? vlTOPp->MainMem__DOT__dMem___05FT_20_data
			   : 0U);
}

void VMainMem::_eval(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_eval\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__4(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VMainMem::_eval_initial(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_eval_initial\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VMainMem::final() {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::final\n"); );
    // Variables
    VMainMem__Syms* __restrict vlSymsp = this->__VlSymsp;
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VMainMem::_eval_settle(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_eval_settle\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
}

VL_INLINE_OPT QData VMainMem::_change_request(VMainMem__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_change_request\n"); );
    VMainMem* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VMainMem::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_Address = VL_RAND_RESET_I(10);
    io_DataIn = VL_RAND_RESET_I(32);
    io_DataOut = VL_RAND_RESET_I(32);
    io_str = VL_RAND_RESET_I(1);
    io_ld = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    MainMem__DOT__dMem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    MainMem__DOT__dMem___05FT_20_data = VL_RAND_RESET_I(32);
    MainMem__DOT__dMem___05FT_20_addr_pipe_0 = VL_RAND_RESET_I(10);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VMainMem::_configure_coverage(VMainMem__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VMainMem::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
