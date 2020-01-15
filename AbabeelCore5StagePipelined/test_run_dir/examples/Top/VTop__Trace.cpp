// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VTop__Syms.h"


//======================

void VTop::traceChg(VerilatedVcd* vcdp, void* userthis, uint32_t code) {
    // Callback from vcd->dump()
    VTop* t=(VTop*)userthis;
    VTop__Syms* __restrict vlSymsp = t->__VlSymsp; // Setup global symbol table
    if (vlSymsp->getClearActivity()) {
	t->traceChgThis (vlSymsp, vcdp, code);
    }
}

//======================


void VTop::traceChgThis(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
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

void VTop::traceChgThis__2(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+1,(((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
			     & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)) 
				& (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)))));
	vcdp->chgBit  (c+2,(((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
			     & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load))));
	vcdp->chgBit  (c+3,(((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
			     | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
				| ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)) 
				   & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
				      & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
					 | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr) 
					    | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal) 
					       | (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui))))))))));
	vcdp->chgBus  (c+4,(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp),3);
	vcdp->chgBus  (c+5,(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel),2);
	vcdp->chgBit  (c+6,(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel));
	vcdp->chgBus  (c+7,(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel),2);
	vcdp->chgBus  (c+8,(vlTOPp->Top__DOT__regFile_io_WriteData),32);
	vcdp->chgBus  (c+9,(vlTOPp->Top__DOT__regFile_io_rd2),32);
	vcdp->chgBus  (c+10,(((0U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
			       ? (IData)(vlTOPp->Top__DOT__aluControl__DOT___T_18)
			       : ((4U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
				   ? 0U : ((5U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
					    ? 0U : 
					   ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
					     ? (0x10U 
						| (7U 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0xcU)))
					     : ((1U 
						 == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
						 ? 
						((1U 
						  == 
						  (7U 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0xcU)))
						  ? (IData)(vlTOPp->Top__DOT__aluControl__DOT___T_18)
						  : 
						 (7U 
						  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						     >> 0xcU)))
						 : 
						((3U 
						  == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
						  ? 0x1fU
						  : 0U))))))),5);
	vcdp->chgBus  (c+11,((IData)((VL_ULL(0xfffffffff) 
				      & ((0U == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
					  ? (((QData)((IData)(
							      (0xfU 
							       & VL_NEGATE_I((IData)(
										(1U 
										& ((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										+ vlTOPp->Top__DOT__idExe__DOT__reg_operandB) 
										>> 0x1fU))))))) 
					      << 0x20U) 
					     | (QData)((IData)(
							       (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
								+ vlTOPp->Top__DOT__idExe__DOT__reg_operandB))))
					  : ((1U == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
					      ? ((QData)((IData)(
								 (0x1fU 
								  & vlTOPp->Top__DOT__idExe__DOT__reg_operandA))) 
						 << 
						 (0x1fU 
						  & vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
					      : (((QData)((IData)(
								  (0xfU 
								   & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						  << 0x20U) 
						 | (QData)((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_20)))))))),32);
	vcdp->chgBus  (c+12,(vlTOPp->Top__DOT__insMem__DOT__mem___05FT_11_data),32);
	vcdp->chgBus  (c+13,(((IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg)
			       ? vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_data
			       : 0U)),32);
	vcdp->chgBus  (c+14,(((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel))
			       ? vlTOPp->Top__DOT__ifId__DOT__reg_pc
			       : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel))
				   ? vlTOPp->Top__DOT__ifId__DOT__reg_pc4
				   : ((0x1fU == (0x1fU 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0xfU)))
				       ? vlTOPp->Top__DOT__regFile__DOT__registers_31
				       : ((0x1eU == 
					   (0x1fU & 
					    (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					     >> 0xfU)))
					   ? vlTOPp->Top__DOT__regFile__DOT__registers_30
					   : ((0x1dU 
					       == (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0xfU)))
					       ? vlTOPp->Top__DOT__regFile__DOT__registers_29
					       : ((0x1cU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__regFile__DOT__registers_28
						   : 
						  ((0x1bU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__regFile__DOT__registers_27
						    : 
						   ((0x1aU 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__regFile__DOT__registers_26
						     : 
						    ((0x19U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__regFile__DOT__registers_25
						      : 
						     ((0x18U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__regFile__DOT__registers_24
						       : 
						      ((0x17U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__regFile__DOT__registers_23
						        : 
						       ((0x16U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__regFile__DOT__registers_22
							 : 
							((0x15U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__regFile__DOT__registers_21
							  : 
							 ((0x14U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__regFile__DOT__registers_20
							   : 
							  ((0x13U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__regFile__DOT__registers_19
							    : 
							   ((0x12U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__regFile__DOT__registers_18
							     : 
							    ((0x11U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__regFile__DOT__registers_17
							      : 
							     ((0x10U 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__regFile__DOT__registers_16
							       : 
							      ((0xfU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__regFile__DOT__registers_15
							        : 
							       ((0xeU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__regFile__DOT__registers_14
								 : 
								((0xdU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__regFile__DOT__registers_13
								  : 
								 ((0xcU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__regFile__DOT__registers_12
								   : 
								  ((0xbU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__regFile__DOT__registers_11
								    : 
								   ((0xaU 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__regFile__DOT__registers_10
								     : 
								    ((9U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__regFile__DOT__registers_9
								      : 
								     ((8U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__regFile__DOT__registers_8
								       : 
								      ((7U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__regFile__DOT__registers_7
								        : 
								       ((6U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__regFile__DOT__registers_6
									 : 
									((5U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__regFile__DOT__registers_5
									  : 
									 ((4U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__regFile__DOT__registers_4
									   : 
									  ((3U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__regFile__DOT__registers_3
									    : 
									   ((2U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0xfU)))
									     ? vlTOPp->Top__DOT__regFile__DOT__registers_2
									     : 
									    ((1U 
									      == 
									      (0x1fU 
									       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0xfU)))
									      ? vlTOPp->Top__DOT__regFile__DOT__registers_1
									      : vlTOPp->Top__DOT__regFile__DOT__registers_0)))))))))))))))))))))))))))))))))),32);
	vcdp->chgBus  (c+15,((((0U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
			       & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
			       ? ((((0x80000000U & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
				     ? 0xfffffU : 0U) 
				   << 0xcU) | (0xfffU 
					       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						  >> 0x14U)))
			       : (((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
				   & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
				   ? ((((0x80000000U 
					 & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
					 ? 0xfffffU
					 : 0U) << 0xcU) 
				      | ((0x800U & 
					  (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					   >> 0x14U)) 
					 | ((0x7e0U 
					     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						>> 0x14U)) 
					    | (0x1fU 
					       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						  >> 7U)))))
				   : (((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
				       & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
				       ? (IData)((VL_ULL(0x7fffffffffff) 
						  & ((QData)((IData)(
								     ((((0x80000000U 
									 & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
									 ? 0xfffU
									 : 0U) 
								       << 0x14U) 
								      | (0xfffffU 
									 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									    >> 0xcU))))) 
						     << 0xcU)))
				       : vlTOPp->Top__DOT__regFile_io_rd2)))),32);
	vcdp->chgBit  (c+16,(vlTOPp->Top__DOT__control__DOT__ID_io_Load));
	vcdp->chgBit  (c+17,(vlTOPp->Top__DOT__control__DOT__ID_io_Store));
	vcdp->chgBit  (c+18,(vlTOPp->Top__DOT__control__DOT__ID_io_Branch));
	vcdp->chgBit  (c+19,(vlTOPp->Top__DOT__control__DOT__ID_io_IType));
	vcdp->chgBit  (c+20,(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr));
	vcdp->chgBit  (c+21,(vlTOPp->Top__DOT__control__DOT__ID_io_Jal));
	vcdp->chgBit  (c+22,(vlTOPp->Top__DOT__control__DOT__ID_io_Lui));
	vcdp->chgBus  (c+23,(vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_data),32);
    }
}

void VTop::traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+24,((0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)),7);
	vcdp->chgBit  (c+25,(vlTOPp->Top__DOT__memWr__DOT__reg_regWrite));
	vcdp->chgBus  (c+26,((0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+27,((0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+28,(vlTOPp->Top__DOT__memWr__DOT__reg_rd),5);
	vcdp->chgBus  (c+29,(((0x1fU == (0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						  >> 0xfU)))
			       ? vlTOPp->Top__DOT__regFile__DOT__registers_31
			       : ((0x1eU == (0x1fU 
					     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						>> 0xfU)))
				   ? vlTOPp->Top__DOT__regFile__DOT__registers_30
				   : ((0x1dU == (0x1fU 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0xfU)))
				       ? vlTOPp->Top__DOT__regFile__DOT__registers_29
				       : ((0x1cU == 
					   (0x1fU & 
					    (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					     >> 0xfU)))
					   ? vlTOPp->Top__DOT__regFile__DOT__registers_28
					   : ((0x1bU 
					       == (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0xfU)))
					       ? vlTOPp->Top__DOT__regFile__DOT__registers_27
					       : ((0x1aU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						       >> 0xfU)))
						   ? vlTOPp->Top__DOT__regFile__DOT__registers_26
						   : 
						  ((0x19U 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							>> 0xfU)))
						    ? vlTOPp->Top__DOT__regFile__DOT__registers_25
						    : 
						   ((0x18U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							 >> 0xfU)))
						     ? vlTOPp->Top__DOT__regFile__DOT__registers_24
						     : 
						    ((0x17U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__regFile__DOT__registers_23
						      : 
						     ((0x16U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__regFile__DOT__registers_22
						       : 
						      ((0x15U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__regFile__DOT__registers_21
						        : 
						       ((0x14U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							     >> 0xfU)))
							 ? vlTOPp->Top__DOT__regFile__DOT__registers_20
							 : 
							((0x13U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							      >> 0xfU)))
							  ? vlTOPp->Top__DOT__regFile__DOT__registers_19
							  : 
							 ((0x12U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							       >> 0xfU)))
							   ? vlTOPp->Top__DOT__regFile__DOT__registers_18
							   : 
							  ((0x11U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								>> 0xfU)))
							    ? vlTOPp->Top__DOT__regFile__DOT__registers_17
							    : 
							   ((0x10U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								 >> 0xfU)))
							     ? vlTOPp->Top__DOT__regFile__DOT__registers_16
							     : 
							    ((0xfU 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								  >> 0xfU)))
							      ? vlTOPp->Top__DOT__regFile__DOT__registers_15
							      : 
							     ((0xeU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								   >> 0xfU)))
							       ? vlTOPp->Top__DOT__regFile__DOT__registers_14
							       : 
							      ((0xdU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								    >> 0xfU)))
							        ? vlTOPp->Top__DOT__regFile__DOT__registers_13
							        : 
							       ((0xcU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								     >> 0xfU)))
								 ? vlTOPp->Top__DOT__regFile__DOT__registers_12
								 : 
								((0xbU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								      >> 0xfU)))
								  ? vlTOPp->Top__DOT__regFile__DOT__registers_11
								  : 
								 ((0xaU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								       >> 0xfU)))
								   ? vlTOPp->Top__DOT__regFile__DOT__registers_10
								   : 
								  ((9U 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									>> 0xfU)))
								    ? vlTOPp->Top__DOT__regFile__DOT__registers_9
								    : 
								   ((8U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									 >> 0xfU)))
								     ? vlTOPp->Top__DOT__regFile__DOT__registers_8
								     : 
								    ((7U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									  >> 0xfU)))
								      ? vlTOPp->Top__DOT__regFile__DOT__registers_7
								      : 
								     ((6U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									   >> 0xfU)))
								       ? vlTOPp->Top__DOT__regFile__DOT__registers_6
								       : 
								      ((5U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									    >> 0xfU)))
								        ? vlTOPp->Top__DOT__regFile__DOT__registers_5
								        : 
								       ((4U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									     >> 0xfU)))
									 ? vlTOPp->Top__DOT__regFile__DOT__registers_4
									 : 
									((3U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									      >> 0xfU)))
									  ? vlTOPp->Top__DOT__regFile__DOT__registers_3
									  : 
									 ((2U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									       >> 0xfU)))
									   ? vlTOPp->Top__DOT__regFile__DOT__registers_2
									   : 
									  ((1U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0xfU)))
									    ? vlTOPp->Top__DOT__regFile__DOT__registers_1
									    : vlTOPp->Top__DOT__regFile__DOT__registers_0)))))))))))))))))))))))))))))))),32);
	vcdp->chgBus  (c+30,(vlTOPp->Top__DOT__ifId__DOT__reg_ins),32);
	vcdp->chgBus  (c+31,(((((0x80000000U & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0x800U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					    >> 0x14U)) 
				 | ((0x7e0U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					       >> 0x14U)) 
				    | (0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						>> 7U)))))),32);
	vcdp->chgBus  (c+32,((IData)((VL_ULL(0x7fffffffffff) 
				      & ((QData)((IData)(
							 ((((0x80000000U 
							     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
							     ? 0xfffU
							     : 0U) 
							   << 0x14U) 
							  | (0xfffffU 
							     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								>> 0xcU))))) 
					 << 0xcU)))),32);
	vcdp->chgBus  (c+33,(((((0x80000000U & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | (0xfffU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					   >> 0x14U)))),32);
	vcdp->chgBus  (c+34,((7U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+35,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 0x1eU))));
	vcdp->chgBus  (c+36,(vlTOPp->Top__DOT__idExe__DOT__reg_operandA),32);
	vcdp->chgBus  (c+37,(vlTOPp->Top__DOT__idExe__DOT__reg_operandB),32);
	vcdp->chgBus  (c+38,(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl),5);
	vcdp->chgBus  (c+39,(((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+40,(vlTOPp->Top__DOT__Pc__DOT__reg__024),32);
	vcdp->chgBus  (c+41,((0x3ffU & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+42,((0xffU & (vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput 
				       >> 2U))),10);
	vcdp->chgBus  (c+43,(vlTOPp->Top__DOT__exeMem__DOT__reg_strData),32);
	vcdp->chgBit  (c+44,(vlTOPp->Top__DOT__exeMem__DOT__reg_memWrite));
	vcdp->chgBit  (c+45,(vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg));
	vcdp->chgBus  (c+46,(vlTOPp->Top__DOT__ifId__DOT__reg_pc),32);
	vcdp->chgBus  (c+47,(vlTOPp->Top__DOT__ifId__DOT__reg_pc4),32);
	vcdp->chgBus  (c+48,((0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 7U))),5);
	vcdp->chgBit  (c+49,(vlTOPp->Top__DOT__idExe__DOT__reg_memWrite));
	vcdp->chgBit  (c+50,(vlTOPp->Top__DOT__idExe__DOT__reg_memToReg));
	vcdp->chgBus  (c+51,(vlTOPp->Top__DOT__idExe__DOT__reg_rd),5);
	vcdp->chgBus  (c+52,(vlTOPp->Top__DOT__idExe__DOT__reg_strData),32);
	vcdp->chgBit  (c+53,(vlTOPp->Top__DOT__idExe__DOT__reg_regWrite));
	vcdp->chgBus  (c+54,(vlTOPp->Top__DOT__exeMem__DOT__reg_rd),5);
	vcdp->chgBus  (c+55,(vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput),32);
	vcdp->chgBit  (c+56,(vlTOPp->Top__DOT__exeMem__DOT__reg_regWrite));
	vcdp->chgBit  (c+57,(vlTOPp->Top__DOT__memWr__DOT__reg_memToReg));
	vcdp->chgBus  (c+58,(vlTOPp->Top__DOT__memWr__DOT__reg_dataOut),32);
	vcdp->chgBus  (c+59,(vlTOPp->Top__DOT__memWr__DOT__reg_aluOutput),32);
	vcdp->chgBit  (c+60,((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins))));
	vcdp->chgBus  (c+61,(vlTOPp->Top__DOT__regFile__DOT__registers_0),32);
	vcdp->chgBus  (c+62,(vlTOPp->Top__DOT__regFile__DOT__registers_1),32);
	vcdp->chgBus  (c+63,(vlTOPp->Top__DOT__regFile__DOT__registers_2),32);
	vcdp->chgBus  (c+64,(vlTOPp->Top__DOT__regFile__DOT__registers_3),32);
	vcdp->chgBus  (c+65,(vlTOPp->Top__DOT__regFile__DOT__registers_4),32);
	vcdp->chgBus  (c+66,(vlTOPp->Top__DOT__regFile__DOT__registers_5),32);
	vcdp->chgBus  (c+67,(vlTOPp->Top__DOT__regFile__DOT__registers_6),32);
	vcdp->chgBus  (c+68,(vlTOPp->Top__DOT__regFile__DOT__registers_7),32);
	vcdp->chgBus  (c+69,(vlTOPp->Top__DOT__regFile__DOT__registers_8),32);
	vcdp->chgBus  (c+70,(vlTOPp->Top__DOT__regFile__DOT__registers_9),32);
	vcdp->chgBus  (c+71,(vlTOPp->Top__DOT__regFile__DOT__registers_10),32);
	vcdp->chgBus  (c+72,(vlTOPp->Top__DOT__regFile__DOT__registers_11),32);
	vcdp->chgBus  (c+73,(vlTOPp->Top__DOT__regFile__DOT__registers_12),32);
	vcdp->chgBus  (c+74,(vlTOPp->Top__DOT__regFile__DOT__registers_13),32);
	vcdp->chgBus  (c+75,(vlTOPp->Top__DOT__regFile__DOT__registers_14),32);
	vcdp->chgBus  (c+76,(vlTOPp->Top__DOT__regFile__DOT__registers_15),32);
	vcdp->chgBus  (c+77,(vlTOPp->Top__DOT__regFile__DOT__registers_16),32);
	vcdp->chgBus  (c+78,(vlTOPp->Top__DOT__regFile__DOT__registers_17),32);
	vcdp->chgBus  (c+79,(vlTOPp->Top__DOT__regFile__DOT__registers_18),32);
	vcdp->chgBus  (c+80,(vlTOPp->Top__DOT__regFile__DOT__registers_19),32);
	vcdp->chgBus  (c+81,(vlTOPp->Top__DOT__regFile__DOT__registers_20),32);
	vcdp->chgBus  (c+82,(vlTOPp->Top__DOT__regFile__DOT__registers_21),32);
	vcdp->chgBus  (c+83,(vlTOPp->Top__DOT__regFile__DOT__registers_22),32);
	vcdp->chgBus  (c+84,(vlTOPp->Top__DOT__regFile__DOT__registers_23),32);
	vcdp->chgBus  (c+85,(vlTOPp->Top__DOT__regFile__DOT__registers_24),32);
	vcdp->chgBus  (c+86,(vlTOPp->Top__DOT__regFile__DOT__registers_25),32);
	vcdp->chgBus  (c+87,(vlTOPp->Top__DOT__regFile__DOT__registers_26),32);
	vcdp->chgBus  (c+88,(vlTOPp->Top__DOT__regFile__DOT__registers_27),32);
	vcdp->chgBus  (c+89,(vlTOPp->Top__DOT__regFile__DOT__registers_28),32);
	vcdp->chgBus  (c+90,(vlTOPp->Top__DOT__regFile__DOT__registers_29),32);
	vcdp->chgBus  (c+91,(vlTOPp->Top__DOT__regFile__DOT__registers_30),32);
	vcdp->chgBus  (c+92,(vlTOPp->Top__DOT__regFile__DOT__registers_31),32);
	vcdp->chgBit  (c+93,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 7U))));
	vcdp->chgBus  (c+94,((0xfU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				      >> 8U))),4);
	vcdp->chgBus  (c+95,((0xffU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0xcU))),8);
	vcdp->chgBit  (c+96,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 0x14U))));
	vcdp->chgBus  (c+97,((0xfU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				      >> 0x15U))),4);
	vcdp->chgBus  (c+98,((0x3fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0x19U))),6);
	vcdp->chgBit  (c+99,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 0x1fU))));
	vcdp->chgBus  (c+100,(vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_addr_pipe_0),10);
	vcdp->chgBit  (c+101,(((~ (IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg)) 
			       & (IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memWrite))));
    }
}

void VTop::traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+102,(vlTOPp->clock));
	vcdp->chgBit  (c+103,(vlTOPp->reset));
	vcdp->chgBus  (c+104,(vlTOPp->io_main_RegOut),32);
    }
}
