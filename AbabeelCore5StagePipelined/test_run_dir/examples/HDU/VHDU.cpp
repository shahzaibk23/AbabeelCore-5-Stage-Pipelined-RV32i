// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VHDU.h for the primary calling header

#include "VHDU.h"              // For This
#include "VHDU__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VHDU) {
    VHDU__Syms* __restrict vlSymsp = __VlSymsp = new VHDU__Syms(this, name());
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VHDU::__Vconfigure(VHDU__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VHDU::~VHDU() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VHDU::eval() {
    VHDU__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VHDU::eval\n"); );
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

void VHDU::_eval_initial_loop(VHDU__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VHDU::_combo__TOP__1(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_combo__TOP__1\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDU__DOT___T_62 = ((IData)(vlTOPp->io_exRd) 
			       == (IData)(vlTOPp->io_idRs2));
    vlTOPp->HDU__DOT___T_61 = ((IData)(vlTOPp->io_exRd) 
			       == (IData)(vlTOPp->io_idRs1));
    vlTOPp->HDU__DOT___T_60 = ((IData)(vlTOPp->io_exRegWrite) 
			       & (0U != (IData)(vlTOPp->io_exRd)));
    vlTOPp->HDU__DOT___T_35 = ((IData)(vlTOPp->io_memRd) 
			       == (IData)(vlTOPp->io_idRs2));
    vlTOPp->HDU__DOT___T_34 = ((IData)(vlTOPp->io_memRd) 
			       == (IData)(vlTOPp->io_idRs1));
    vlTOPp->HDU__DOT___T_33 = ((IData)(vlTOPp->io_memRegWrite) 
			       & (0U != (IData)(vlTOPp->io_memRd)));
}

void VHDU::_settle__TOP__2(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_settle__TOP__2\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDU__DOT___T_62 = ((IData)(vlTOPp->io_exRd) 
			       == (IData)(vlTOPp->io_idRs2));
    vlTOPp->HDU__DOT___T_61 = ((IData)(vlTOPp->io_exRd) 
			       == (IData)(vlTOPp->io_idRs1));
    vlTOPp->HDU__DOT___T_60 = ((IData)(vlTOPp->io_exRegWrite) 
			       & (0U != (IData)(vlTOPp->io_exRd)));
    vlTOPp->HDU__DOT___T_35 = ((IData)(vlTOPp->io_memRd) 
			       == (IData)(vlTOPp->io_idRs2));
    vlTOPp->HDU__DOT___T_34 = ((IData)(vlTOPp->io_memRd) 
			       == (IData)(vlTOPp->io_idRs1));
    vlTOPp->HDU__DOT___T_33 = ((IData)(vlTOPp->io_memRegWrite) 
			       & (0U != (IData)(vlTOPp->io_memRd)));
    vlTOPp->HDU__DOT___T_73 = ((IData)(vlTOPp->HDU__DOT___T_60) 
			       & (IData)(vlTOPp->HDU__DOT___T_61));
    vlTOPp->HDU__DOT___T_64 = ((IData)(vlTOPp->HDU__DOT___T_60) 
			       & ((IData)(vlTOPp->HDU__DOT___T_61) 
				  & (IData)(vlTOPp->HDU__DOT___T_62)));
    vlTOPp->HDU__DOT___T_46 = ((IData)(vlTOPp->HDU__DOT___T_33) 
			       & (IData)(vlTOPp->HDU__DOT___T_34));
    vlTOPp->HDU__DOT___T_37 = ((IData)(vlTOPp->HDU__DOT___T_33) 
			       & ((IData)(vlTOPp->HDU__DOT___T_34) 
				  & (IData)(vlTOPp->HDU__DOT___T_35)));
}

VL_INLINE_OPT void VHDU::_combo__TOP__3(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_combo__TOP__3\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->HDU__DOT___T_73 = ((IData)(vlTOPp->HDU__DOT___T_60) 
			       & (IData)(vlTOPp->HDU__DOT___T_61));
    vlTOPp->HDU__DOT___T_64 = ((IData)(vlTOPp->HDU__DOT___T_60) 
			       & ((IData)(vlTOPp->HDU__DOT___T_61) 
				  & (IData)(vlTOPp->HDU__DOT___T_62)));
    vlTOPp->HDU__DOT___T_46 = ((IData)(vlTOPp->HDU__DOT___T_33) 
			       & (IData)(vlTOPp->HDU__DOT___T_34));
    vlTOPp->HDU__DOT___T_37 = ((IData)(vlTOPp->HDU__DOT___T_33) 
			       & ((IData)(vlTOPp->HDU__DOT___T_34) 
				  & (IData)(vlTOPp->HDU__DOT___T_35)));
    vlTOPp->io_forwardA = ((IData)(vlTOPp->HDU__DOT___T_64)
			    ? 1U : ((IData)(vlTOPp->HDU__DOT___T_73)
				     ? 1U : ((IData)(vlTOPp->HDU__DOT___T_37)
					      ? 2U : 
					     ((IData)(vlTOPp->HDU__DOT___T_46)
					       ? 2U
					       : 0U))));
    vlTOPp->HDU__DOT___GEN_4 = ((IData)(vlTOPp->HDU__DOT___T_37)
				 ? 2U : ((IData)(vlTOPp->HDU__DOT___T_46)
					  ? 0U : (((IData)(vlTOPp->HDU__DOT___T_33) 
						   & (IData)(vlTOPp->HDU__DOT___T_35))
						   ? 2U
						   : 0U)));
}

void VHDU::_settle__TOP__4(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_settle__TOP__4\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_forwardA = ((IData)(vlTOPp->HDU__DOT___T_64)
			    ? 1U : ((IData)(vlTOPp->HDU__DOT___T_73)
				     ? 1U : ((IData)(vlTOPp->HDU__DOT___T_37)
					      ? 2U : 
					     ((IData)(vlTOPp->HDU__DOT___T_46)
					       ? 2U
					       : 0U))));
    vlTOPp->HDU__DOT___GEN_4 = ((IData)(vlTOPp->HDU__DOT___T_37)
				 ? 2U : ((IData)(vlTOPp->HDU__DOT___T_46)
					  ? 0U : (((IData)(vlTOPp->HDU__DOT___T_33) 
						   & (IData)(vlTOPp->HDU__DOT___T_35))
						   ? 2U
						   : 0U)));
    vlTOPp->io_forwardB = ((IData)(vlTOPp->HDU__DOT___T_64)
			    ? 1U : ((IData)(vlTOPp->HDU__DOT___T_73)
				     ? (IData)(vlTOPp->HDU__DOT___GEN_4)
				     : (((IData)(vlTOPp->HDU__DOT___T_60) 
					 & (IData)(vlTOPp->HDU__DOT___T_62))
					 ? 1U : (IData)(vlTOPp->HDU__DOT___GEN_4))));
}

VL_INLINE_OPT void VHDU::_combo__TOP__5(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_combo__TOP__5\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_forwardB = ((IData)(vlTOPp->HDU__DOT___T_64)
			    ? 1U : ((IData)(vlTOPp->HDU__DOT___T_73)
				     ? (IData)(vlTOPp->HDU__DOT___GEN_4)
				     : (((IData)(vlTOPp->HDU__DOT___T_60) 
					 & (IData)(vlTOPp->HDU__DOT___T_62))
					 ? 1U : (IData)(vlTOPp->HDU__DOT___GEN_4))));
}

void VHDU::_eval(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_eval\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__1(vlSymsp);
    vlTOPp->_combo__TOP__3(vlSymsp);
    vlTOPp->_combo__TOP__5(vlSymsp);
}

void VHDU::_eval_initial(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_eval_initial\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHDU::final() {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::final\n"); );
    // Variables
    VHDU__Syms* __restrict vlSymsp = this->__VlSymsp;
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VHDU::_eval_settle(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_eval_settle\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
    vlTOPp->_settle__TOP__4(vlSymsp);
}

VL_INLINE_OPT QData VHDU::_change_request(VHDU__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_change_request\n"); );
    VHDU* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VHDU::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_exRegWrite = VL_RAND_RESET_I(1);
    io_exRd = VL_RAND_RESET_I(5);
    io_idRs1 = VL_RAND_RESET_I(5);
    io_idRs2 = VL_RAND_RESET_I(5);
    io_operandAsel = VL_RAND_RESET_I(2);
    io_operandBsel = VL_RAND_RESET_I(1);
    io_hazard = VL_RAND_RESET_I(1);
    io_memRegWrite = VL_RAND_RESET_I(1);
    io_memRd = VL_RAND_RESET_I(5);
    io_forwardA = VL_RAND_RESET_I(2);
    io_forwardB = VL_RAND_RESET_I(2);
    HDU__DOT___T_33 = VL_RAND_RESET_I(1);
    HDU__DOT___T_34 = VL_RAND_RESET_I(1);
    HDU__DOT___T_35 = VL_RAND_RESET_I(1);
    HDU__DOT___T_37 = VL_RAND_RESET_I(1);
    HDU__DOT___T_46 = VL_RAND_RESET_I(1);
    HDU__DOT___GEN_4 = VL_RAND_RESET_I(2);
    HDU__DOT___T_60 = VL_RAND_RESET_I(1);
    HDU__DOT___T_61 = VL_RAND_RESET_I(1);
    HDU__DOT___T_62 = VL_RAND_RESET_I(1);
    HDU__DOT___T_64 = VL_RAND_RESET_I(1);
    HDU__DOT___T_73 = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VHDU::_configure_coverage(VHDU__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VHDU::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
