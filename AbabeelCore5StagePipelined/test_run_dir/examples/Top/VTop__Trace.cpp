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
	vcdp->chgBit  (c+2,(vlTOPp->Top__DOT__control__DOT__CD_io_Branch));
	vcdp->chgBit  (c+3,(((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
			     & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load))));
	vcdp->chgBit  (c+4,(((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
			     | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
				| ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)) 
				   & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
				      & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
					 | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr) 
					    | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal) 
					       | (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui))))))))));
	vcdp->chgBus  (c+5,(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp),3);
	vcdp->chgBus  (c+6,(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel),2);
	vcdp->chgBit  (c+7,(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel));
	vcdp->chgBus  (c+8,(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel),2);
	vcdp->chgBus  (c+9,(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel),2);
	vcdp->chgBus  (c+10,(vlTOPp->Top__DOT__regFile_io_WriteData),32);
	vcdp->chgBus  (c+11,(vlTOPp->Top__DOT__regFile_io_rd1),32);
	vcdp->chgBus  (c+12,(vlTOPp->Top__DOT__regFile_io_rd2),32);
	vcdp->chgBus  (c+13,((vlTOPp->Top__DOT__immGen__DOT___T_46 
			      + vlTOPp->Top__DOT__ifId__DOT__reg_pc)),32);
	vcdp->chgBus  (c+14,((vlTOPp->Top__DOT__immGen__DOT___T_74 
			      + vlTOPp->Top__DOT__ifId__DOT__reg_pc)),32);
	vcdp->chgBus  (c+15,(vlTOPp->Top__DOT__immGen__DOT___T_26),32);
	vcdp->chgBus  (c+16,(((0U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
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
	vcdp->chgBus  (c+17,(vlTOPp->Top__DOT__alu_io_a),32);
	vcdp->chgBus  (c+18,(vlTOPp->Top__DOT__alu_io_b),32);
	vcdp->chgBus  (c+19,((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)),32);
	vcdp->chgBus  (c+20,(((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
			       ? (0xfffffffeU & (vlTOPp->Top__DOT__jalr_io_a 
						 + vlTOPp->Top__DOT__immGen__DOT___T_26))
			       : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
				   ? (vlTOPp->Top__DOT__immGen__DOT___T_74 
				      + vlTOPp->Top__DOT__ifId__DOT__reg_pc)
				   : ((IData)(vlTOPp->Top__DOT__SU_io_hazard)
				       ? vlTOPp->Top__DOT__ifId__DOT__reg_pc4
				       : ((IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Branch)
					   ? ((IData)(vlTOPp->Top__DOT__BU_io_branch)
					       ? ((1U 
						   == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
						   ? 
						  (vlTOPp->Top__DOT__immGen__DOT___T_46 
						   + vlTOPp->Top__DOT__ifId__DOT__reg_pc)
						   : 
						  ((IData)(4U) 
						   + vlTOPp->Top__DOT__Pc__DOT__reg__024))
					       : ((IData)(vlTOPp->Top__DOT___T_56)
						   ? vlTOPp->Top__DOT__ifId__DOT__reg_pc4
						   : 
						  ((IData)(vlTOPp->Top__DOT___T_73)
						    ? vlTOPp->Top__DOT__ifId__DOT__reg_pc4
						    : 
						   ((IData)(4U) 
						    + vlTOPp->Top__DOT__Pc__DOT__reg__024))))
					   : ((IData)(4U) 
					      + vlTOPp->Top__DOT__Pc__DOT__reg__024)))))),32);
	vcdp->chgBus  (c+21,(vlTOPp->Top__DOT__insMem__DOT__mem___05FT_11_data),32);
	vcdp->chgBus  (c+22,(vlTOPp->Top__DOT__jalr_io_a),32);
	vcdp->chgBus  (c+23,((0xfffffffeU & (vlTOPp->Top__DOT__jalr_io_a 
					     + vlTOPp->Top__DOT__immGen__DOT___T_26))),32);
	vcdp->chgBus  (c+24,(vlTOPp->Top__DOT__dataMem__DOT__mem___05FT_23_data),32);
	vcdp->chgBus  (c+25,(((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
			       ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
				        ? 0U : vlTOPp->Top__DOT__Pc__DOT__reg__024))),32);
	vcdp->chgBus  (c+26,(((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
			       ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
				        ? 0U : ((IData)(4U) 
						+ vlTOPp->Top__DOT__Pc__DOT__reg__024)))),32);
	vcdp->chgBus  (c+27,(((3U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
			       ? 0U : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_NextPcSel))
				        ? 0U : ((IData)(vlTOPp->Top__DOT__SU_io_hazard)
						 ? vlTOPp->Top__DOT__ifId__DOT__reg_ins
						 : 
						((IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Branch)
						  ? 
						 ((IData)(vlTOPp->Top__DOT__BU_io_branch)
						   ? 0U
						   : vlTOPp->Top__DOT___GEN_7)
						  : vlTOPp->Top__DOT___GEN_7))))),32);
	vcdp->chgBit  (c+28,(((~ (IData)(vlTOPp->Top__DOT__SU_io_hazard)) 
			      & ((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
				 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)) 
				    & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store))))));
	vcdp->chgBit  (c+29,(((~ (IData)(vlTOPp->Top__DOT__SU_io_hazard)) 
			      & ((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
				 & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)))));
	vcdp->chgBus  (c+30,(((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel))
			       ? vlTOPp->Top__DOT__ifId__DOT__reg_pc
			       : ((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel))
				   ? vlTOPp->Top__DOT__ifId__DOT__reg_pc4
				   : vlTOPp->Top__DOT__regFile_io_rd1))),32);
	vcdp->chgBus  (c+31,((((0U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
			       & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
			       ? vlTOPp->Top__DOT__immGen__DOT___T_26
			       : (((1U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
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
				   : (((2U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
				       & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
				       ? ((((0x80000000U 
					     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
					     ? 0xfffffU
					     : 0U) 
					   << 0xcU) 
					  | ((0x800U 
					      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						 >> 0x14U)) 
					     | ((0x7e0U 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0x14U)) 
						| (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 7U)))))
				       : vlTOPp->Top__DOT__regFile_io_rd2)))),32);
	vcdp->chgBus  (c+32,((0x1fU & ((IData)(vlTOPp->Top__DOT__SU_io_hazard)
				        ? 0U : (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						>> 7U)))),5);
	vcdp->chgBus  (c+33,(((IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memRead)
			       ? vlTOPp->Top__DOT__dataMem__DOT__mem___05FT_23_data
			       : ((0U == (IData)(vlTOPp->Top__DOT__SFU_io_fwd))
				   ? vlTOPp->Top__DOT__regFile_io_rd2
				   : ((1U == (IData)(vlTOPp->Top__DOT__SFU_io_fwd))
				       ? (IData)(vlTOPp->Top__DOT__alu__DOT___GEN_22)
				       : ((2U == (IData)(vlTOPp->Top__DOT__SFU_io_fwd))
					   ? vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput
					   : ((3U == (IData)(vlTOPp->Top__DOT__SFU_io_fwd))
					       ? vlTOPp->Top__DOT__memWr__DOT__reg_aluOutput
					       : vlTOPp->Top__DOT__regFile_io_rd2)))))),32);
	vcdp->chgBus  (c+34,(((IData)(vlTOPp->Top__DOT__SU_io_hazard)
			       ? 0U : ((0U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
				        ? (IData)(vlTOPp->Top__DOT__aluControl__DOT___T_18)
				        : ((4U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
					    ? 0U : 
					   ((5U == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
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
						   : 0U)))))))),5);
	vcdp->chgBit  (c+35,(((~ (IData)(vlTOPp->Top__DOT__SU_io_hazard)) 
			      & ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
				 | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
				    | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)) 
				       & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
					  & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
					     | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr) 
						| ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal) 
						   | (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)))))))))));
	vcdp->chgBus  (c+36,(vlTOPp->Top__DOT__hdu_io_forwardA),2);
	vcdp->chgBus  (c+37,(vlTOPp->Top__DOT__hdu_io_forwardB),2);
	vcdp->chgBit  (c+38,(vlTOPp->Top__DOT__SU_io_hazard));
	vcdp->chgBus  (c+39,(vlTOPp->Top__DOT__SFU_io_fwd),2);
	vcdp->chgBus  (c+40,(vlTOPp->Top__DOT__BU_io_rs1),32);
	vcdp->chgBus  (c+41,(vlTOPp->Top__DOT__BU_io_rs2),32);
	vcdp->chgBit  (c+42,(vlTOPp->Top__DOT__BU_io_branch));
	vcdp->chgBus  (c+43,(vlTOPp->Top__DOT__BFU_io_fwdA),2);
	vcdp->chgBus  (c+44,(vlTOPp->Top__DOT__BFU_io_fwdB),2);
	vcdp->chgBus  (c+45,(vlTOPp->Top__DOT__JFU_io_fwd),2);
	vcdp->chgBit  (c+46,(vlTOPp->Top__DOT__control__DOT__ID_io_Load));
	vcdp->chgBit  (c+47,(vlTOPp->Top__DOT__control__DOT__ID_io_Store));
	vcdp->chgBit  (c+48,(vlTOPp->Top__DOT__control__DOT__ID_io_Branch));
	vcdp->chgBit  (c+49,(vlTOPp->Top__DOT__control__DOT__ID_io_IType));
	vcdp->chgBit  (c+50,(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr));
	vcdp->chgBit  (c+51,(vlTOPp->Top__DOT__control__DOT__ID_io_Jal));
	vcdp->chgBit  (c+52,(vlTOPp->Top__DOT__control__DOT__ID_io_Lui));
    }
}

void VTop::traceChgThis__3(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBus  (c+53,((0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)),7);
	vcdp->chgBit  (c+54,(vlTOPp->Top__DOT__memWr__DOT__reg_regWrite));
	vcdp->chgBus  (c+55,((0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0xfU))),5);
	vcdp->chgBus  (c+56,((0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0x14U))),5);
	vcdp->chgBus  (c+57,(vlTOPp->Top__DOT__memWr__DOT__reg_rd),5);
	vcdp->chgBus  (c+58,(vlTOPp->Top__DOT__ifId__DOT__reg_ins),32);
	vcdp->chgBus  (c+59,(vlTOPp->Top__DOT__ifId__DOT__reg_pc),32);
	vcdp->chgBus  (c+60,(((((0x80000000U & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
				 ? 0xfffffU : 0U) << 0xcU) 
			      | ((0x800U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					    >> 0x14U)) 
				 | ((0x7e0U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					       >> 0x14U)) 
				    | (0x1fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						>> 7U)))))),32);
	vcdp->chgBus  (c+61,((IData)((VL_ULL(0x7fffffffffff) 
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
	vcdp->chgBus  (c+62,((7U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 0xcU))),3);
	vcdp->chgBit  (c+63,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				    >> 0x1eU))));
	vcdp->chgBus  (c+64,(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl),5);
	vcdp->chgBus  (c+65,(((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024)),32);
	vcdp->chgBus  (c+66,(vlTOPp->Top__DOT__Pc__DOT__reg__024),32);
	vcdp->chgBus  (c+67,((0x3ffU & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
					>> 2U))),10);
	vcdp->chgBus  (c+68,(vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput),32);
	vcdp->chgBus  (c+69,(vlTOPp->Top__DOT__exeMem__DOT__reg_strData),32);
	vcdp->chgBit  (c+70,(vlTOPp->Top__DOT__exeMem__DOT__reg_memWrite));
	vcdp->chgBit  (c+71,(vlTOPp->Top__DOT__exeMem__DOT__reg_memRead));
	vcdp->chgBus  (c+72,(vlTOPp->Top__DOT__ifId__DOT__reg_pc4),32);
	vcdp->chgBit  (c+73,(vlTOPp->Top__DOT__idExe__DOT__reg_memWrite));
	vcdp->chgBit  (c+74,(vlTOPp->Top__DOT__idExe__DOT__reg_memRead));
	vcdp->chgBus  (c+75,(vlTOPp->Top__DOT__idExe__DOT__reg_operandA),32);
	vcdp->chgBus  (c+76,(vlTOPp->Top__DOT__idExe__DOT__reg_operandB),32);
	vcdp->chgBus  (c+77,(vlTOPp->Top__DOT__idExe__DOT__reg_rd),5);
	vcdp->chgBus  (c+78,(vlTOPp->Top__DOT__idExe__DOT__reg_strData),32);
	vcdp->chgBit  (c+79,(vlTOPp->Top__DOT__idExe__DOT__reg_regWrite));
	vcdp->chgBus  (c+80,(vlTOPp->Top__DOT__idExe__DOT__reg_rs1Ins),5);
	vcdp->chgBus  (c+81,(vlTOPp->Top__DOT__idExe__DOT__reg_rs2Ins),5);
	vcdp->chgBus  (c+82,(vlTOPp->Top__DOT__exeMem__DOT__reg_rd),5);
	vcdp->chgBit  (c+83,(vlTOPp->Top__DOT__exeMem__DOT__reg_regWrite));
	vcdp->chgBit  (c+84,(vlTOPp->Top__DOT__memWr__DOT__reg_memToReg));
	vcdp->chgBus  (c+85,(vlTOPp->Top__DOT__memWr__DOT__reg_dataOut),32);
	vcdp->chgBus  (c+86,(vlTOPp->Top__DOT__memWr__DOT__reg_aluOutput),32);
	vcdp->chgBit  (c+87,((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins))));
	vcdp->chgBus  (c+88,(vlTOPp->Top__DOT__regFile__DOT__registers_0),32);
	vcdp->chgBus  (c+89,(vlTOPp->Top__DOT__regFile__DOT__registers_1),32);
	vcdp->chgBus  (c+90,(vlTOPp->Top__DOT__regFile__DOT__registers_2),32);
	vcdp->chgBus  (c+91,(vlTOPp->Top__DOT__regFile__DOT__registers_3),32);
	vcdp->chgBus  (c+92,(vlTOPp->Top__DOT__regFile__DOT__registers_4),32);
	vcdp->chgBus  (c+93,(vlTOPp->Top__DOT__regFile__DOT__registers_5),32);
	vcdp->chgBus  (c+94,(vlTOPp->Top__DOT__regFile__DOT__registers_6),32);
	vcdp->chgBus  (c+95,(vlTOPp->Top__DOT__regFile__DOT__registers_7),32);
	vcdp->chgBus  (c+96,(vlTOPp->Top__DOT__regFile__DOT__registers_8),32);
	vcdp->chgBus  (c+97,(vlTOPp->Top__DOT__regFile__DOT__registers_9),32);
	vcdp->chgBus  (c+98,(vlTOPp->Top__DOT__regFile__DOT__registers_10),32);
	vcdp->chgBus  (c+99,(vlTOPp->Top__DOT__regFile__DOT__registers_11),32);
	vcdp->chgBus  (c+100,(vlTOPp->Top__DOT__regFile__DOT__registers_12),32);
	vcdp->chgBus  (c+101,(vlTOPp->Top__DOT__regFile__DOT__registers_13),32);
	vcdp->chgBus  (c+102,(vlTOPp->Top__DOT__regFile__DOT__registers_14),32);
	vcdp->chgBus  (c+103,(vlTOPp->Top__DOT__regFile__DOT__registers_15),32);
	vcdp->chgBus  (c+104,(vlTOPp->Top__DOT__regFile__DOT__registers_16),32);
	vcdp->chgBus  (c+105,(vlTOPp->Top__DOT__regFile__DOT__registers_17),32);
	vcdp->chgBus  (c+106,(vlTOPp->Top__DOT__regFile__DOT__registers_18),32);
	vcdp->chgBus  (c+107,(vlTOPp->Top__DOT__regFile__DOT__registers_19),32);
	vcdp->chgBus  (c+108,(vlTOPp->Top__DOT__regFile__DOT__registers_20),32);
	vcdp->chgBus  (c+109,(vlTOPp->Top__DOT__regFile__DOT__registers_21),32);
	vcdp->chgBus  (c+110,(vlTOPp->Top__DOT__regFile__DOT__registers_22),32);
	vcdp->chgBus  (c+111,(vlTOPp->Top__DOT__regFile__DOT__registers_23),32);
	vcdp->chgBus  (c+112,(vlTOPp->Top__DOT__regFile__DOT__registers_24),32);
	vcdp->chgBus  (c+113,(vlTOPp->Top__DOT__regFile__DOT__registers_25),32);
	vcdp->chgBus  (c+114,(vlTOPp->Top__DOT__regFile__DOT__registers_26),32);
	vcdp->chgBus  (c+115,(vlTOPp->Top__DOT__regFile__DOT__registers_27),32);
	vcdp->chgBus  (c+116,(vlTOPp->Top__DOT__regFile__DOT__registers_28),32);
	vcdp->chgBus  (c+117,(vlTOPp->Top__DOT__regFile__DOT__registers_29),32);
	vcdp->chgBus  (c+118,(vlTOPp->Top__DOT__regFile__DOT__registers_30),32);
	vcdp->chgBus  (c+119,(vlTOPp->Top__DOT__regFile__DOT__registers_31),32);
	vcdp->chgBit  (c+120,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				     >> 7U))));
	vcdp->chgBus  (c+121,((0xfU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 8U))),4);
	vcdp->chgBus  (c+122,((0xffU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					>> 0xcU))),8);
	vcdp->chgBit  (c+123,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				     >> 0x14U))));
	vcdp->chgBus  (c+124,((0xfU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				       >> 0x15U))),4);
	vcdp->chgBus  (c+125,((0x3fU & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					>> 0x19U))),6);
	vcdp->chgBit  (c+126,((1U & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
				     >> 0x1fU))));
	vcdp->chgBus  (c+127,((0x3ffU & vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput)),10);
    }
}

void VTop::traceChgThis__4(VTop__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code) {
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    int c=code;
    if (0 && vcdp && c) {}  // Prevent unused
    // Body
    {
	vcdp->chgBit  (c+128,(vlTOPp->clock));
	vcdp->chgBit  (c+129,(vlTOPp->reset));
	vcdp->chgBus  (c+130,(vlTOPp->io_main_RegOut),32);
    }
}
