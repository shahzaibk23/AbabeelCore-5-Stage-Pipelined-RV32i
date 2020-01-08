// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRegFile.h for the primary calling header

#include "VRegFile.h"          // For This
#include "VRegFile__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VRegFile) {
    VRegFile__Syms* __restrict vlSymsp = __VlSymsp = new VRegFile__Syms(this, name());
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VRegFile::__Vconfigure(VRegFile__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VRegFile::~VRegFile() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VRegFile::eval() {
    VRegFile__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VRegFile::eval\n"); );
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

void VRegFile::_eval_initial_loop(VRegFile__Syms* __restrict vlSymsp) {
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

VL_INLINE_OPT void VRegFile::_sequent__TOP__1(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_sequent__TOP__1\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // ALWAYS at RegFile.v:480
    vlTOPp->RegFile__DOT__registers_0 = ((IData)(vlTOPp->reset)
					  ? 0U : ((IData)(vlTOPp->io_RegWrite)
						   ? 
						  ((0U 
						    == (IData)(vlTOPp->io_rd))
						    ? vlTOPp->io_WriteData
						    : 0U)
						   : 0U));
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_1 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((1U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_1 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_2 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((2U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_2 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_3 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((3U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_3 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_4 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((4U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_4 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_5 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((5U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_5 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_6 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((6U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_6 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_7 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((7U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_7 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_8 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((8U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_8 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_9 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((9U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_9 = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_10 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0xaU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_10 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_11 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0xbU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_11 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_12 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0xcU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_12 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_13 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0xdU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_13 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_14 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0xeU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_14 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_15 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0xfU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_15 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_16 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x10U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_16 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_17 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x11U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_17 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_18 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x12U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_18 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_19 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x13U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_19 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_20 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x14U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_20 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_21 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x15U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_21 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_22 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x16U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_22 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_23 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x17U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_23 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_24 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x18U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_24 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_25 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x19U == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_25 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_26 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x1aU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_26 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_27 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x1bU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_27 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_28 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x1cU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_28 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_29 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x1dU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_29 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_30 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x1eU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_30 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
    if (vlTOPp->reset) {
	vlTOPp->RegFile__DOT__registers_31 = 0U;
    } else {
	if (vlTOPp->io_RegWrite) {
	    if ((0x1fU == (IData)(vlTOPp->io_rd))) {
		vlTOPp->RegFile__DOT__registers_31 
		    = vlTOPp->io_WriteData;
	    }
	}
    }
}

VL_INLINE_OPT void VRegFile::_combo__TOP__2(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_combo__TOP__2\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->io_rd1 = ((0x1fU == (IData)(vlTOPp->io_rs1))
		       ? vlTOPp->RegFile__DOT__registers_31
		       : ((0x1eU == (IData)(vlTOPp->io_rs1))
			   ? vlTOPp->RegFile__DOT__registers_30
			   : ((0x1dU == (IData)(vlTOPp->io_rs1))
			       ? vlTOPp->RegFile__DOT__registers_29
			       : ((0x1cU == (IData)(vlTOPp->io_rs1))
				   ? vlTOPp->RegFile__DOT__registers_28
				   : ((0x1bU == (IData)(vlTOPp->io_rs1))
				       ? vlTOPp->RegFile__DOT__registers_27
				       : ((0x1aU == (IData)(vlTOPp->io_rs1))
					   ? vlTOPp->RegFile__DOT__registers_26
					   : ((0x19U 
					       == (IData)(vlTOPp->io_rs1))
					       ? vlTOPp->RegFile__DOT__registers_25
					       : ((0x18U 
						   == (IData)(vlTOPp->io_rs1))
						   ? vlTOPp->RegFile__DOT__registers_24
						   : 
						  ((0x17U 
						    == (IData)(vlTOPp->io_rs1))
						    ? vlTOPp->RegFile__DOT__registers_23
						    : 
						   ((0x16U 
						     == (IData)(vlTOPp->io_rs1))
						     ? vlTOPp->RegFile__DOT__registers_22
						     : 
						    ((0x15U 
						      == (IData)(vlTOPp->io_rs1))
						      ? vlTOPp->RegFile__DOT__registers_21
						      : 
						     ((0x14U 
						       == (IData)(vlTOPp->io_rs1))
						       ? vlTOPp->RegFile__DOT__registers_20
						       : 
						      ((0x13U 
							== (IData)(vlTOPp->io_rs1))
						        ? vlTOPp->RegFile__DOT__registers_19
						        : 
						       ((0x12U 
							 == (IData)(vlTOPp->io_rs1))
							 ? vlTOPp->RegFile__DOT__registers_18
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_rs1))
							  ? vlTOPp->RegFile__DOT__registers_17
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_rs1))
							   ? vlTOPp->RegFile__DOT__registers_16
							   : 
							  ((0xfU 
							    == (IData)(vlTOPp->io_rs1))
							    ? vlTOPp->RegFile__DOT__registers_15
							    : 
							   ((0xeU 
							     == (IData)(vlTOPp->io_rs1))
							     ? vlTOPp->RegFile__DOT__registers_14
							     : 
							    ((0xdU 
							      == (IData)(vlTOPp->io_rs1))
							      ? vlTOPp->RegFile__DOT__registers_13
							      : 
							     ((0xcU 
							       == (IData)(vlTOPp->io_rs1))
							       ? vlTOPp->RegFile__DOT__registers_12
							       : 
							      ((0xbU 
								== (IData)(vlTOPp->io_rs1))
							        ? vlTOPp->RegFile__DOT__registers_11
							        : 
							       ((0xaU 
								 == (IData)(vlTOPp->io_rs1))
								 ? vlTOPp->RegFile__DOT__registers_10
								 : 
								((9U 
								  == (IData)(vlTOPp->io_rs1))
								  ? vlTOPp->RegFile__DOT__registers_9
								  : 
								 ((8U 
								   == (IData)(vlTOPp->io_rs1))
								   ? vlTOPp->RegFile__DOT__registers_8
								   : 
								  ((7U 
								    == (IData)(vlTOPp->io_rs1))
								    ? vlTOPp->RegFile__DOT__registers_7
								    : 
								   ((6U 
								     == (IData)(vlTOPp->io_rs1))
								     ? vlTOPp->RegFile__DOT__registers_6
								     : 
								    ((5U 
								      == (IData)(vlTOPp->io_rs1))
								      ? vlTOPp->RegFile__DOT__registers_5
								      : 
								     ((4U 
								       == (IData)(vlTOPp->io_rs1))
								       ? vlTOPp->RegFile__DOT__registers_4
								       : 
								      ((3U 
									== (IData)(vlTOPp->io_rs1))
								        ? vlTOPp->RegFile__DOT__registers_3
								        : 
								       ((2U 
									 == (IData)(vlTOPp->io_rs1))
									 ? vlTOPp->RegFile__DOT__registers_2
									 : 
									((1U 
									  == (IData)(vlTOPp->io_rs1))
									  ? vlTOPp->RegFile__DOT__registers_1
									  : vlTOPp->RegFile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->io_rd2 = ((0x1fU == (IData)(vlTOPp->io_rs2))
		       ? vlTOPp->RegFile__DOT__registers_31
		       : ((0x1eU == (IData)(vlTOPp->io_rs2))
			   ? vlTOPp->RegFile__DOT__registers_30
			   : ((0x1dU == (IData)(vlTOPp->io_rs2))
			       ? vlTOPp->RegFile__DOT__registers_29
			       : ((0x1cU == (IData)(vlTOPp->io_rs2))
				   ? vlTOPp->RegFile__DOT__registers_28
				   : ((0x1bU == (IData)(vlTOPp->io_rs2))
				       ? vlTOPp->RegFile__DOT__registers_27
				       : ((0x1aU == (IData)(vlTOPp->io_rs2))
					   ? vlTOPp->RegFile__DOT__registers_26
					   : ((0x19U 
					       == (IData)(vlTOPp->io_rs2))
					       ? vlTOPp->RegFile__DOT__registers_25
					       : ((0x18U 
						   == (IData)(vlTOPp->io_rs2))
						   ? vlTOPp->RegFile__DOT__registers_24
						   : 
						  ((0x17U 
						    == (IData)(vlTOPp->io_rs2))
						    ? vlTOPp->RegFile__DOT__registers_23
						    : 
						   ((0x16U 
						     == (IData)(vlTOPp->io_rs2))
						     ? vlTOPp->RegFile__DOT__registers_22
						     : 
						    ((0x15U 
						      == (IData)(vlTOPp->io_rs2))
						      ? vlTOPp->RegFile__DOT__registers_21
						      : 
						     ((0x14U 
						       == (IData)(vlTOPp->io_rs2))
						       ? vlTOPp->RegFile__DOT__registers_20
						       : 
						      ((0x13U 
							== (IData)(vlTOPp->io_rs2))
						        ? vlTOPp->RegFile__DOT__registers_19
						        : 
						       ((0x12U 
							 == (IData)(vlTOPp->io_rs2))
							 ? vlTOPp->RegFile__DOT__registers_18
							 : 
							((0x11U 
							  == (IData)(vlTOPp->io_rs2))
							  ? vlTOPp->RegFile__DOT__registers_17
							  : 
							 ((0x10U 
							   == (IData)(vlTOPp->io_rs2))
							   ? vlTOPp->RegFile__DOT__registers_16
							   : 
							  ((0xfU 
							    == (IData)(vlTOPp->io_rs2))
							    ? vlTOPp->RegFile__DOT__registers_15
							    : 
							   ((0xeU 
							     == (IData)(vlTOPp->io_rs2))
							     ? vlTOPp->RegFile__DOT__registers_14
							     : 
							    ((0xdU 
							      == (IData)(vlTOPp->io_rs2))
							      ? vlTOPp->RegFile__DOT__registers_13
							      : 
							     ((0xcU 
							       == (IData)(vlTOPp->io_rs2))
							       ? vlTOPp->RegFile__DOT__registers_12
							       : 
							      ((0xbU 
								== (IData)(vlTOPp->io_rs2))
							        ? vlTOPp->RegFile__DOT__registers_11
							        : 
							       ((0xaU 
								 == (IData)(vlTOPp->io_rs2))
								 ? vlTOPp->RegFile__DOT__registers_10
								 : 
								((9U 
								  == (IData)(vlTOPp->io_rs2))
								  ? vlTOPp->RegFile__DOT__registers_9
								  : 
								 ((8U 
								   == (IData)(vlTOPp->io_rs2))
								   ? vlTOPp->RegFile__DOT__registers_8
								   : 
								  ((7U 
								    == (IData)(vlTOPp->io_rs2))
								    ? vlTOPp->RegFile__DOT__registers_7
								    : 
								   ((6U 
								     == (IData)(vlTOPp->io_rs2))
								     ? vlTOPp->RegFile__DOT__registers_6
								     : 
								    ((5U 
								      == (IData)(vlTOPp->io_rs2))
								      ? vlTOPp->RegFile__DOT__registers_5
								      : 
								     ((4U 
								       == (IData)(vlTOPp->io_rs2))
								       ? vlTOPp->RegFile__DOT__registers_4
								       : 
								      ((3U 
									== (IData)(vlTOPp->io_rs2))
								        ? vlTOPp->RegFile__DOT__registers_3
								        : 
								       ((2U 
									 == (IData)(vlTOPp->io_rs2))
									 ? vlTOPp->RegFile__DOT__registers_2
									 : 
									((1U 
									  == (IData)(vlTOPp->io_rs2))
									  ? vlTOPp->RegFile__DOT__registers_1
									  : vlTOPp->RegFile__DOT__registers_0)))))))))))))))))))))))))))))));
}

void VRegFile::_eval(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_eval\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__1(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
    }
    vlTOPp->_combo__TOP__2(vlSymsp);
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VRegFile::_eval_initial(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_eval_initial\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegFile::final() {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::final\n"); );
    // Variables
    VRegFile__Syms* __restrict vlSymsp = this->__VlSymsp;
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VRegFile::_eval_settle(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_eval_settle\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_combo__TOP__2(vlSymsp);
}

VL_INLINE_OPT QData VRegFile::_change_request(VRegFile__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_change_request\n"); );
    VRegFile* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VRegFile::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_RegWrite = VL_RAND_RESET_I(1);
    io_rs1 = VL_RAND_RESET_I(5);
    io_rs2 = VL_RAND_RESET_I(5);
    io_rd = VL_RAND_RESET_I(5);
    io_WriteData = VL_RAND_RESET_I(32);
    io_rd1 = VL_RAND_RESET_I(32);
    io_rd2 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_0 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_1 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_2 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_3 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_4 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_5 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_6 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_7 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_8 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_9 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_10 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_11 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_12 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_13 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_14 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_15 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_16 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_17 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_18 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_19 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_20 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_21 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_22 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_23 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_24 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_25 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_26 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_27 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_28 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_29 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_30 = VL_RAND_RESET_I(32);
    RegFile__DOT__registers_31 = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VRegFile::_configure_coverage(VRegFile__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VRegFile::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
