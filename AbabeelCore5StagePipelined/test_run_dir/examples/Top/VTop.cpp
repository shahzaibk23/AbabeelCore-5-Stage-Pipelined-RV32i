// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTop.h for the primary calling header

#include "VTop.h"              // For This
#include "VTop__Syms.h"

//--------------------
// STATIC VARIABLES


//--------------------

VL_CTOR_IMP(VTop) {
    VTop__Syms* __restrict vlSymsp = __VlSymsp = new VTop__Syms(this, name());
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VTop::__Vconfigure(VTop__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

VTop::~VTop() {
    delete __VlSymsp; __VlSymsp=NULL;
}

//--------------------


void VTop::eval() {
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp; // Setup global symbol table
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    VL_DEBUG_IF(VL_PRINTF("\n----TOP Evaluate VTop::eval\n"); );
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

void VTop::_eval_initial_loop(VTop__Syms* __restrict vlSymsp) {
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

void VTop::_initial__TOP__1(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_initial__TOP__1\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    //char	__VpadToAlign4[4];
    VL_SIGW(__Vtemp1,255,0,8);
    // Body
    // INITIAL at /home/hellcaster/chisel-tutorial/test_run_dir/examples/Top/Top.InsMem.mem.v:7
    __Vtemp1[0U] = 0x2e747874U;
    __Vtemp1[1U] = 0x74696f6eU;
    __Vtemp1[2U] = 0x74727563U;
    __Vtemp1[3U] = 0x2f496e73U;
    __Vtemp1[4U] = 0x73746572U;
    __Vtemp1[5U] = 0x6c6c6361U;
    __Vtemp1[6U] = 0x652f6865U;
    __Vtemp1[7U] = 0x2f686f6dU;
    VL_READMEM_W (true,32,1024, 0,8, __Vtemp1, vlTOPp->Top__DOT__insMem__DOT__mem
		  ,0,~0);
}

VL_INLINE_OPT void VTop::_sequent__TOP__2(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__2\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    VL_SIG8(__Vdlyvset__Top__DOT__dataMem__DOT__dMem__v0,0,0);
    //char	__VpadToAlign61[1];
    VL_SIG16(__Vdlyvdim0__Top__DOT__dataMem__DOT__dMem__v0,9,0);
    VL_SIG(__Vdlyvval__Top__DOT__dataMem__DOT__dMem__v0,31,0);
    // Body
    __Vdlyvset__Top__DOT__dataMem__DOT__dMem__v0 = 0U;
    // ALWAYS at Top.v:1952
    vlTOPp->Top__DOT__memWr__DOT__reg_memToReg = ((~ (IData)(vlTOPp->reset)) 
						  & (IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg));
    // ALWAYS at Top.v:1962
    vlTOPp->Top__DOT__memWr__DOT__reg_dataOut = ((IData)(vlTOPp->reset)
						  ? 0U
						  : 
						 ((IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg)
						   ? vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_data
						   : 0U));
    // ALWAYS at Top.v:1967
    vlTOPp->Top__DOT__memWr__DOT__reg_aluOutput = ((IData)(vlTOPp->reset)
						    ? 0U
						    : vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput);
    // ALWAYS at Top.v:1542
    if (vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg) {
	vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_addr_pipe_0 
	    = (0xffU & (vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput 
			>> 2U));
    }
    // ALWAYS at Top.v:1539
    if (((~ (IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg)) 
	 & (IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_memWrite))) {
	__Vdlyvval__Top__DOT__dataMem__DOT__dMem__v0 
	    = vlTOPp->Top__DOT__exeMem__DOT__reg_strData;
	__Vdlyvset__Top__DOT__dataMem__DOT__dMem__v0 = 1U;
	__Vdlyvdim0__Top__DOT__dataMem__DOT__dMem__v0 
	    = (0xffU & (vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput 
			>> 2U));
    }
    // ALWAYSPOST at Top.v:1540
    if (__Vdlyvset__Top__DOT__dataMem__DOT__dMem__v0) {
	vlTOPp->Top__DOT__dataMem__DOT__dMem[__Vdlyvdim0__Top__DOT__dataMem__DOT__dMem__v0] 
	    = __Vdlyvval__Top__DOT__dataMem__DOT__dMem__v0;
    }
    vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_data 
	= vlTOPp->Top__DOT__dataMem__DOT__dMem[vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_addr_pipe_0];
    // ALWAYS at Top.v:1873
    vlTOPp->Top__DOT__exeMem__DOT__reg_strData = ((IData)(vlTOPp->reset)
						   ? 0U
						   : vlTOPp->Top__DOT__idExe__DOT__reg_strData);
    // ALWAYS at Top.v:1863
    vlTOPp->Top__DOT__exeMem__DOT__reg_memToReg = (
						   (~ (IData)(vlTOPp->reset)) 
						   & (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_memToReg));
    // ALWAYS at Top.v:1853
    vlTOPp->Top__DOT__exeMem__DOT__reg_memWrite = (
						   (~ (IData)(vlTOPp->reset)) 
						   & (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_memWrite));
    // ALWAYS at Top.v:1878
    vlTOPp->Top__DOT__exeMem__DOT__reg_aluOutput = 
	((IData)(vlTOPp->reset) ? 0U : (IData)((VL_ULL(0xfffffffff) 
						& ((0U 
						    == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						    ? 
						   (((QData)((IData)(
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
						    : 
						   ((1U 
						     == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						     ? 
						    ((QData)((IData)(
								     (0x1fU 
								      & vlTOPp->Top__DOT__idExe__DOT__reg_operandA))) 
						     << 
						     (0x1fU 
						      & vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
						     : 
						    (((QData)((IData)(
								      (0xfU 
								       & VL_NEGATE_I((IData)(
										(1U 
										& (vlTOPp->Top__DOT__alu__DOT___GEN_20 
										>> 0x1fU))))))) 
						      << 0x20U) 
						     | (QData)((IData)(vlTOPp->Top__DOT__alu__DOT___GEN_20))))))));
    // ALWAYS at Top.v:1756
    vlTOPp->Top__DOT__idExe__DOT__reg_strData = ((IData)(vlTOPp->reset)
						  ? 0U
						  : vlTOPp->Top__DOT__regFile_io_rd2);
    // ALWAYS at Top.v:1736
    vlTOPp->Top__DOT__idExe__DOT__reg_memToReg = ((~ (IData)(vlTOPp->reset)) 
						  & ((0x33U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						     & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)));
    // ALWAYS at Top.v:1726
    vlTOPp->Top__DOT__idExe__DOT__reg_memWrite = ((~ (IData)(vlTOPp->reset)) 
						  & ((0x33U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						     & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)) 
							& (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store))));
    // ALWAYS at Top.v:1761
    vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl = ((IData)(vlTOPp->reset)
						  ? 0U
						  : 
						 ((0U 
						   == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
						   ? (IData)(vlTOPp->Top__DOT__aluControl__DOT___T_18)
						   : 
						  ((4U 
						    == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
						    ? 0U
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
						     ? 0U
						     : 
						    ((2U 
						      == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_AluOp))
						      ? 
						     (0x10U 
						      | (7U 
							 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							    >> 0xcU)))
						      : 
						     ((1U 
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
						        : 0U)))))));
    // ALWAYS at Top.v:1746
    vlTOPp->Top__DOT__idExe__DOT__reg_operandB = ((IData)(vlTOPp->reset)
						   ? 0U
						   : 
						  (((0U 
						     == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
						    & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
						    ? 
						   ((((0x80000000U 
						       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)
						       ? 0xfffffU
						       : 0U) 
						     << 0xcU) 
						    | (0xfffU 
						       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							  >> 0x14U)))
						    : 
						   (((1U 
						      == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
						     & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
						     ? 
						    ((((0x80000000U 
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
						     : 
						    (((2U 
						       == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel)) 
						      & (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel))
						      ? (IData)(
								(VL_ULL(0x7fffffffffff) 
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
						      : vlTOPp->Top__DOT__regFile_io_rd2))));
    // ALWAYS at Top.v:1741
    vlTOPp->Top__DOT__idExe__DOT__reg_operandA = ((IData)(vlTOPp->reset)
						   ? 0U
						   : 
						  ((1U 
						    == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel))
						    ? vlTOPp->Top__DOT__ifId__DOT__reg_pc
						    : 
						   ((2U 
						     == (IData)(vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel))
						     ? vlTOPp->Top__DOT__ifId__DOT__reg_pc4
						     : 
						    ((0x1fU 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							  >> 0xfU)))
						      ? vlTOPp->Top__DOT__regFile__DOT__registers_31
						      : 
						     ((0x1eU 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							   >> 0xfU)))
						       ? vlTOPp->Top__DOT__regFile__DOT__registers_30
						       : 
						      ((0x1dU 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							    >> 0xfU)))
						        ? vlTOPp->Top__DOT__regFile__DOT__registers_29
						        : 
						       ((0x1cU 
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
										 : vlTOPp->Top__DOT__regFile__DOT__registers_0))))))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__alu__DOT___T_29 = VL_LTS_III(1,32,32, vlTOPp->Top__DOT__idExe__DOT__reg_operandA, vlTOPp->Top__DOT__idExe__DOT__reg_operandB);
    vlTOPp->Top__DOT__alu__DOT___T_75 = (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
					 == vlTOPp->Top__DOT__idExe__DOT__reg_operandB);
    // ALWAYS at Top.v:1606
    vlTOPp->Top__DOT__ifId__DOT__reg_pc = ((IData)(vlTOPp->reset)
					    ? 0U : vlTOPp->Top__DOT__Pc__DOT__reg__024);
    // ALWAYS at Top.v:1611
    vlTOPp->Top__DOT__ifId__DOT__reg_pc4 = ((IData)(vlTOPp->reset)
					     ? 0U : 
					    ((IData)(4U) 
					     + vlTOPp->Top__DOT__Pc__DOT__reg__024));
    // ALWAYS at Top.v:1137
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x1fU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_31 = 0U;
	    }
	} else {
	    if ((0x1fU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_31 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1126
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x1eU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_30 = 0U;
	    }
	} else {
	    if ((0x1eU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_30 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1115
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x1dU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_29 = 0U;
	    }
	} else {
	    if ((0x1dU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_29 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1104
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x1cU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_28 = 0U;
	    }
	} else {
	    if ((0x1cU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_28 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1093
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x1bU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_27 = 0U;
	    }
	} else {
	    if ((0x1bU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_27 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1082
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x1aU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_26 = 0U;
	    }
	} else {
	    if ((0x1aU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_26 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1071
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x19U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_25 = 0U;
	    }
	} else {
	    if ((0x19U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_25 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1060
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x18U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_24 = 0U;
	    }
	} else {
	    if ((0x18U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_24 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1049
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x17U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_23 = 0U;
	    }
	} else {
	    if ((0x17U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_23 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1038
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x16U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_22 = 0U;
	    }
	} else {
	    if ((0x16U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_22 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1027
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x15U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_21 = 0U;
	    }
	} else {
	    if ((0x15U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_21 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1016
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x14U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_20 = 0U;
	    }
	} else {
	    if ((0x14U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_20 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:1005
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x13U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_19 = 0U;
	    }
	} else {
	    if ((0x13U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_19 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:994
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x12U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_18 = 0U;
	    }
	} else {
	    if ((0x12U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_18 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:983
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x11U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_17 = 0U;
	    }
	} else {
	    if ((0x11U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_17 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:972
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0x10U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_16 = 0U;
	    }
	} else {
	    if ((0x10U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_16 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:961
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0xfU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_15 = 0U;
	    }
	} else {
	    if ((0xfU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_15 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:950
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0xeU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_14 = 0U;
	    }
	} else {
	    if ((0xeU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_14 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:939
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0xdU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_13 = 0U;
	    }
	} else {
	    if ((0xdU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_13 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:928
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0xcU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_12 = 0U;
	    }
	} else {
	    if ((0xcU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_12 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:917
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0xbU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_11 = 0U;
	    }
	} else {
	    if ((0xbU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_11 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:906
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((0xaU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_10 = 0U;
	    }
	} else {
	    if ((0xaU == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_10 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:895
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((9U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_9 = 0U;
	    }
	} else {
	    if ((9U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_9 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:884
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((8U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_8 = 0U;
	    }
	} else {
	    if ((8U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_8 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:873
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((7U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_7 = 0U;
	    }
	} else {
	    if ((7U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_7 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:862
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((6U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_6 = 0U;
	    }
	} else {
	    if ((6U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_6 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:851
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((5U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_5 = 0U;
	    }
	} else {
	    if ((5U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_5 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:840
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((4U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_4 = 0U;
	    }
	} else {
	    if ((4U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_4 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:829
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((3U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_3 = 0U;
	    }
	} else {
	    if ((3U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_3 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:818
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((2U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_2 = 0U;
	    }
	} else {
	    if ((2U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_2 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:807
    if (vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite) {
	if ((0U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
	    if ((1U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_1 = 0U;
	    }
	} else {
	    if ((1U == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))) {
		vlTOPp->Top__DOT__regFile__DOT__registers_1 
		    = vlTOPp->Top__DOT__regFile_io_WriteData;
	    }
	}
    }
    // ALWAYS at Top.v:796
    vlTOPp->Top__DOT__regFile__DOT__registers_0 = ((IData)(vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite)
						    ? 
						   ((0U 
						     == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))
						     ? 0U
						     : 
						    ((0U 
						      == (IData)(vlTOPp->Top__DOT__memWr__DOT__reg_rd))
						      ? vlTOPp->Top__DOT__regFile_io_WriteData
						      : 0U))
						    : 0U);
    vlTOPp->Top__DOT__regFile_io_WriteData = ((IData)(vlTOPp->Top__DOT__memWr__DOT__reg_memToReg)
					       ? vlTOPp->Top__DOT__memWr__DOT__reg_dataOut
					       : vlTOPp->Top__DOT__memWr__DOT__reg_aluOutput);
    // ALWAYS at Top.v:1426
    vlTOPp->Top__DOT__Pc__DOT__reg__024 = vlTOPp->Top__DOT__Pc_io_input;
    // ALWAYS at Top.v:1957
    vlTOPp->Top__DOT__memWr__DOT__reg_rd = ((IData)(vlTOPp->reset)
					     ? 0U : (IData)(vlTOPp->Top__DOT__exeMem__DOT__reg_rd));
    vlTOPp->Top__DOT__Pc_io_input = ((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024);
    // ALWAYS at Top.v:1868
    vlTOPp->Top__DOT__exeMem__DOT__reg_rd = ((IData)(vlTOPp->reset)
					      ? 0U : (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_rd));
    // ALWAYS at Top.v:1751
    vlTOPp->Top__DOT__idExe__DOT__reg_rd = (0x1fU & 
					    ((IData)(vlTOPp->reset)
					      ? 0U : 
					     (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
					      >> 7U)));
    // ALWAYS at Top.v:1616
    vlTOPp->Top__DOT__ifId__DOT__reg_ins = ((IData)(vlTOPp->reset)
					     ? 0U : vlTOPp->Top__DOT__insMem__DOT__mem___05FT_11_data);
    vlTOPp->Top__DOT__insMem__DOT__mem___05FT_11_data 
	= vlTOPp->Top__DOT__insMem__DOT__mem[(0x3ffU 
					      & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
						 >> 2U))];
    vlTOPp->Top__DOT__aluControl__DOT___T_18 = ((8U 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0xcU)));
    vlTOPp->Top__DOT__regFile_io_rd2 = ((0x1fU == (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0x14U)))
					 ? vlTOPp->Top__DOT__regFile__DOT__registers_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0x14U)))
					     ? vlTOPp->Top__DOT__regFile__DOT__registers_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						     >> 0x14U)))
						 ? vlTOPp->Top__DOT__regFile__DOT__registers_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__regFile__DOT__registers_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__regFile__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__regFile__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__regFile__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__regFile__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__regFile__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__regFile__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__regFile__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__regFile__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__regFile__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__regFile__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__regFile__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__regFile__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__regFile__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__regFile__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__regFile__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__regFile__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__regFile__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__regFile__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__regFile__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__regFile__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__regFile__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__regFile__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__regFile__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__regFile__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__regFile__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__regFile__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__regFile__DOT__registers_1
									     : vlTOPp->Top__DOT__regFile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Load = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						  & (3U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)));
    vlTOPp->Top__DOT__control__DOT__ID_io_Store = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						      & (0x23U 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__ifId__DOT__reg_ins))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	 & ((3U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	    & ((0x23U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	       & (0x63U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)))));
    vlTOPp->Top__DOT__control__DOT__ID_io_IType = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						      & ((0x23U 
							  != 
							  (0x7fU 
							   & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							 & ((0x63U 
							     != 
							     (0x7fU 
							      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							    & (0x13U 
							       == 
							       (0x7fU 
								& vlTOPp->Top__DOT__ifId__DOT__reg_ins))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Jalr = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						  & ((3U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						     & ((0x23U 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							& ((0x63U 
							    != 
							    (0x7fU 
							     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							   & ((0x13U 
							       != 
							       (0x7fU 
								& vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							      & (0x67U 
								 == 
								 (0x7fU 
								  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Jal = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
								& (0x6fU 
								   == 
								   (0x7fU 
								    & vlTOPp->Top__DOT__ifId__DOT__reg_ins))))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Lui = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
								& ((0x6fU 
								    != 
								    (0x7fU 
								     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
								   & (0x37U 
								      == 
								      (0x7fU 
								       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)))))))));
}

void VTop::_settle__TOP__3(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__3\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_data 
	= vlTOPp->Top__DOT__dataMem__DOT__dMem[vlTOPp->Top__DOT__dataMem__DOT__dMem___05FT_20_addr_pipe_0];
    vlTOPp->Top__DOT__alu__DOT___T_29 = VL_LTS_III(1,32,32, vlTOPp->Top__DOT__idExe__DOT__reg_operandA, vlTOPp->Top__DOT__idExe__DOT__reg_operandB);
    vlTOPp->Top__DOT__alu__DOT___T_75 = (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
					 == vlTOPp->Top__DOT__idExe__DOT__reg_operandB);
    vlTOPp->Top__DOT__regFile_io_WriteData = ((IData)(vlTOPp->Top__DOT__memWr__DOT__reg_memToReg)
					       ? vlTOPp->Top__DOT__memWr__DOT__reg_dataOut
					       : vlTOPp->Top__DOT__memWr__DOT__reg_aluOutput);
    vlTOPp->Top__DOT__Pc_io_input = ((IData)(4U) + vlTOPp->Top__DOT__Pc__DOT__reg__024);
    vlTOPp->Top__DOT__insMem__DOT__mem___05FT_11_data 
	= vlTOPp->Top__DOT__insMem__DOT__mem[(0x3ffU 
					      & (vlTOPp->Top__DOT__Pc__DOT__reg__024 
						 >> 2U))];
    vlTOPp->Top__DOT__aluControl__DOT___T_18 = ((8U 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0x1bU)) 
						| (7U 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0xcU)));
    vlTOPp->Top__DOT__regFile_io_rd2 = ((0x1fU == (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0x14U)))
					 ? vlTOPp->Top__DOT__regFile__DOT__registers_31
					 : ((0x1eU 
					     == (0x1fU 
						 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						    >> 0x14U)))
					     ? vlTOPp->Top__DOT__regFile__DOT__registers_30
					     : ((0x1dU 
						 == 
						 (0x1fU 
						  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						     >> 0x14U)))
						 ? vlTOPp->Top__DOT__regFile__DOT__registers_29
						 : 
						((0x1cU 
						  == 
						  (0x1fU 
						   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						      >> 0x14U)))
						  ? vlTOPp->Top__DOT__regFile__DOT__registers_28
						  : 
						 ((0x1bU 
						   == 
						   (0x1fU 
						    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
						       >> 0x14U)))
						   ? vlTOPp->Top__DOT__regFile__DOT__registers_27
						   : 
						  ((0x1aU 
						    == 
						    (0x1fU 
						     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							>> 0x14U)))
						    ? vlTOPp->Top__DOT__regFile__DOT__registers_26
						    : 
						   ((0x19U 
						     == 
						     (0x1fU 
						      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							 >> 0x14U)))
						     ? vlTOPp->Top__DOT__regFile__DOT__registers_25
						     : 
						    ((0x18U 
						      == 
						      (0x1fU 
						       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							  >> 0x14U)))
						      ? vlTOPp->Top__DOT__regFile__DOT__registers_24
						      : 
						     ((0x17U 
						       == 
						       (0x1fU 
							& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							   >> 0x14U)))
						       ? vlTOPp->Top__DOT__regFile__DOT__registers_23
						       : 
						      ((0x16U 
							== 
							(0x1fU 
							 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							    >> 0x14U)))
						        ? vlTOPp->Top__DOT__regFile__DOT__registers_22
						        : 
						       ((0x15U 
							 == 
							 (0x1fU 
							  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							     >> 0x14U)))
							 ? vlTOPp->Top__DOT__regFile__DOT__registers_21
							 : 
							((0x14U 
							  == 
							  (0x1fU 
							   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							      >> 0x14U)))
							  ? vlTOPp->Top__DOT__regFile__DOT__registers_20
							  : 
							 ((0x13U 
							   == 
							   (0x1fU 
							    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
							       >> 0x14U)))
							   ? vlTOPp->Top__DOT__regFile__DOT__registers_19
							   : 
							  ((0x12U 
							    == 
							    (0x1fU 
							     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								>> 0x14U)))
							    ? vlTOPp->Top__DOT__regFile__DOT__registers_18
							    : 
							   ((0x11U 
							     == 
							     (0x1fU 
							      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								 >> 0x14U)))
							     ? vlTOPp->Top__DOT__regFile__DOT__registers_17
							     : 
							    ((0x10U 
							      == 
							      (0x1fU 
							       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								  >> 0x14U)))
							      ? vlTOPp->Top__DOT__regFile__DOT__registers_16
							      : 
							     ((0xfU 
							       == 
							       (0x1fU 
								& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								   >> 0x14U)))
							       ? vlTOPp->Top__DOT__regFile__DOT__registers_15
							       : 
							      ((0xeU 
								== 
								(0x1fU 
								 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								    >> 0x14U)))
							        ? vlTOPp->Top__DOT__regFile__DOT__registers_14
							        : 
							       ((0xdU 
								 == 
								 (0x1fU 
								  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								     >> 0x14U)))
								 ? vlTOPp->Top__DOT__regFile__DOT__registers_13
								 : 
								((0xcU 
								  == 
								  (0x1fU 
								   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								      >> 0x14U)))
								  ? vlTOPp->Top__DOT__regFile__DOT__registers_12
								  : 
								 ((0xbU 
								   == 
								   (0x1fU 
								    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
								       >> 0x14U)))
								   ? vlTOPp->Top__DOT__regFile__DOT__registers_11
								   : 
								  ((0xaU 
								    == 
								    (0x1fU 
								     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									>> 0x14U)))
								    ? vlTOPp->Top__DOT__regFile__DOT__registers_10
								    : 
								   ((9U 
								     == 
								     (0x1fU 
								      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									 >> 0x14U)))
								     ? vlTOPp->Top__DOT__regFile__DOT__registers_9
								     : 
								    ((8U 
								      == 
								      (0x1fU 
								       & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									  >> 0x14U)))
								      ? vlTOPp->Top__DOT__regFile__DOT__registers_8
								      : 
								     ((7U 
								       == 
								       (0x1fU 
									& (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									   >> 0x14U)))
								       ? vlTOPp->Top__DOT__regFile__DOT__registers_7
								       : 
								      ((6U 
									== 
									(0x1fU 
									 & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									    >> 0x14U)))
								        ? vlTOPp->Top__DOT__regFile__DOT__registers_6
								        : 
								       ((5U 
									 == 
									 (0x1fU 
									  & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									     >> 0x14U)))
									 ? vlTOPp->Top__DOT__regFile__DOT__registers_5
									 : 
									((4U 
									  == 
									  (0x1fU 
									   & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									      >> 0x14U)))
									  ? vlTOPp->Top__DOT__regFile__DOT__registers_4
									  : 
									 ((3U 
									   == 
									   (0x1fU 
									    & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
									       >> 0x14U)))
									   ? vlTOPp->Top__DOT__regFile__DOT__registers_3
									   : 
									  ((2U 
									    == 
									    (0x1fU 
									     & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0x14U)))
									    ? vlTOPp->Top__DOT__regFile__DOT__registers_2
									    : 
									   ((1U 
									     == 
									     (0x1fU 
									      & (vlTOPp->Top__DOT__ifId__DOT__reg_ins 
										>> 0x14U)))
									     ? vlTOPp->Top__DOT__regFile__DOT__registers_1
									     : vlTOPp->Top__DOT__regFile__DOT__registers_0)))))))))))))))))))))))))))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Load = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						  & (3U 
						     == 
						     (0x7fU 
						      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)));
    vlTOPp->Top__DOT__control__DOT__ID_io_Store = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						      & (0x23U 
							 == 
							 (0x7fU 
							  & vlTOPp->Top__DOT__ifId__DOT__reg_ins))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Branch = 
	((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	 & ((3U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	    & ((0x23U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	       & (0x63U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)))));
    vlTOPp->Top__DOT__control__DOT__ID_io_IType = (
						   (0x33U 
						    != 
						    (0x7fU 
						     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						   & ((3U 
						       != 
						       (0x7fU 
							& vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						      & ((0x23U 
							  != 
							  (0x7fU 
							   & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							 & ((0x63U 
							     != 
							     (0x7fU 
							      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							    & (0x13U 
							       == 
							       (0x7fU 
								& vlTOPp->Top__DOT__ifId__DOT__reg_ins))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Jalr = ((0x33U 
						   != 
						   (0x7fU 
						    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						  & ((3U 
						      != 
						      (0x7fU 
						       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						     & ((0x23U 
							 != 
							 (0x7fU 
							  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							& ((0x63U 
							    != 
							    (0x7fU 
							     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							   & ((0x13U 
							       != 
							       (0x7fU 
								& vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							      & (0x67U 
								 == 
								 (0x7fU 
								  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Jal = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
								& (0x6fU 
								   == 
								   (0x7fU 
								    & vlTOPp->Top__DOT__ifId__DOT__reg_ins))))))));
    vlTOPp->Top__DOT__control__DOT__ID_io_Lui = ((0x33U 
						  != 
						  (0x7fU 
						   & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						 & ((3U 
						     != 
						     (0x7fU 
						      & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						    & ((0x23U 
							!= 
							(0x7fU 
							 & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
						       & ((0x63U 
							   != 
							   (0x7fU 
							    & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							  & ((0x13U 
							      != 
							      (0x7fU 
							       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
							     & ((0x67U 
								 != 
								 (0x7fU 
								  & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
								& ((0x6fU 
								    != 
								    (0x7fU 
								     & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
								   & (0x37U 
								      == 
								      (0x7fU 
								       & vlTOPp->Top__DOT__ifId__DOT__reg_ins)))))))));
    vlTOPp->Top__DOT__alu__DOT___GEN_20 = ((2U == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
					    ? ((0xfffffffcU 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
									     ? 1U
									     : 0U) 
									   >> 1U)))) 
						   << 2U)) 
					       | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
						   ? 1U
						   : 0U))
					    : (((3U 
						 == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl)) 
						| (0x16U 
						   == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl)))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										< vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						       < vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						       ? 1U
						       : 0U))
					        : (
						   (4U 
						    == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						    ? 
						   (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						    ^ vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						     ? 
						    ((0x1fU 
						      >= vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						      ? 
						     (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						      >> vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						      : 0U)
						     : 
						    ((6U 
						      == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						      ? 
						     (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						      | vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						       ? 
						      (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						       & vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						       : 
						      ((8U 
							== (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						        ? 
						       (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
							- vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						        : 
						       ((0xdU 
							 == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							 ? 
							((0xffffffe0U 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1fU 
										& vlTOPp->Top__DOT__idExe__DOT__reg_operandA) 
										>> 
										(0x1fU 
										& vlTOPp->Top__DOT__idExe__DOT__reg_operandB)) 
										>> 4U)))) 
							     << 5U)) 
							 | (0x1fU 
							    & ((0x1fU 
								& vlTOPp->Top__DOT__idExe__DOT__reg_operandA) 
							       >> 
							       (0x1fU 
								& vlTOPp->Top__DOT__idExe__DOT__reg_operandB))))
							 : 
							((0x10U 
							  == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
							      ? 1U
							      : 0U))
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
										 ? 0U
										 : 1U) 
										>> 1U)))) 
							       << 2U)) 
							   | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
							       ? 0U
							       : 1U))
							   : 
							  ((0x14U 
							    == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
							        ? 1U
							        : 0U))
							    : 
							   ((0x15U 
							     == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							     ? 
							    ((0xfffffffcU 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& ((((IData)(vlTOPp->Top__DOT__alu__DOT___T_75) 
										| VL_GTS_III(1,32,32, vlTOPp->Top__DOT__idExe__DOT__reg_operandA, vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								 << 2U)) 
							     | (((IData)(vlTOPp->Top__DOT__alu__DOT___T_75) 
								 | VL_GTS_III(1,32,32, vlTOPp->Top__DOT__idExe__DOT__reg_operandA, vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
								 ? 1U
								 : 0U))
							     : 
							    ((0x17U 
							      == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							      ? 
							     ((0xfffffffcU 
							       & (VL_NEGATE_I((IData)(
										(1U 
										& ((((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										== vlTOPp->Top__DOT__idExe__DOT__reg_operandB) 
										| (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										> vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								  << 2U)) 
							      | (((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
								   == vlTOPp->Top__DOT__idExe__DOT__reg_operandB) 
								  | (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
								     > vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
								  ? 1U
								  : 0U))
							      : 
							     ((0x1fU 
							       == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							       ? vlTOPp->Top__DOT__idExe__DOT__reg_operandA
							       : 0U))))))))))))));
    vlTOPp->io_main_RegOut = vlTOPp->Top__DOT__regFile_io_WriteData;
    vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	   | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
	      | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)) 
		 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
		       | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr) 
			  | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal) 
			     | (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui))))))));
    vlTOPp->Top__DOT__control__DOT__CD_io_AluOp = (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__ifId__DOT__reg_ins))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)
						     ? 4U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)
						      ? 5U
						      : 
						     ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType)
						        ? 1U
						        : 
						       ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr)
							 ? 3U
							 : 
							((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal)
							  ? 3U
							  : 
							 ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)
							   ? 6U
							   : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)
			      ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)
				       ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType)
					        ? 0U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)
						      ? 3U
						      : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CD__DOT___GEN_12 
	= ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr)) 
	   & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal)) 
	      & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)));
}

VL_INLINE_OPT void VTop::_sequent__TOP__4(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_sequent__TOP__4\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__alu__DOT___GEN_20 = ((2U == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
					    ? ((0xfffffffcU 
						& (VL_NEGATE_I((IData)(
								       (1U 
									& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
									     ? 1U
									     : 0U) 
									   >> 1U)))) 
						   << 2U)) 
					       | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
						   ? 1U
						   : 0U))
					    : (((3U 
						 == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl)) 
						| (0x16U 
						   == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl)))
					        ? (
						   (0xfffffffcU 
						    & (VL_NEGATE_I((IData)(
									   (1U 
									    & (((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										< vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
										 ? 1U
										 : 0U) 
									       >> 1U)))) 
						       << 2U)) 
						   | ((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						       < vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						       ? 1U
						       : 0U))
					        : (
						   (4U 
						    == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						    ? 
						   (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						    ^ vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						    : 
						   ((5U 
						     == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						     ? 
						    ((0x1fU 
						      >= vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						      ? 
						     (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						      >> vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						      : 0U)
						     : 
						    ((6U 
						      == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						      ? 
						     (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						      | vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						      : 
						     ((7U 
						       == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						       ? 
						      (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
						       & vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						       : 
						      ((8U 
							== (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
						        ? 
						       (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
							- vlTOPp->Top__DOT__idExe__DOT__reg_operandB)
						        : 
						       ((0xdU 
							 == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							 ? 
							((0xffffffe0U 
							  & (VL_NEGATE_I((IData)(
										(1U 
										& (((0x1fU 
										& vlTOPp->Top__DOT__idExe__DOT__reg_operandA) 
										>> 
										(0x1fU 
										& vlTOPp->Top__DOT__idExe__DOT__reg_operandB)) 
										>> 4U)))) 
							     << 5U)) 
							 | (0x1fU 
							    & ((0x1fU 
								& vlTOPp->Top__DOT__idExe__DOT__reg_operandA) 
							       >> 
							       (0x1fU 
								& vlTOPp->Top__DOT__idExe__DOT__reg_operandB))))
							 : 
							((0x10U 
							  == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							  ? 
							 ((0xfffffffcU 
							   & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
							      << 2U)) 
							  | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
							      ? 1U
							      : 0U))
							  : 
							 ((0x11U 
							   == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							   ? 
							  ((0xfffffffcU 
							    & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
										 ? 0U
										 : 1U) 
										>> 1U)))) 
							       << 2U)) 
							   | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_75)
							       ? 0U
							       : 1U))
							   : 
							  ((0x14U 
							    == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							    ? 
							   ((0xfffffffcU 
							     & (VL_NEGATE_I((IData)(
										(1U 
										& (((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								<< 2U)) 
							    | ((IData)(vlTOPp->Top__DOT__alu__DOT___T_29)
							        ? 1U
							        : 0U))
							    : 
							   ((0x15U 
							     == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							     ? 
							    ((0xfffffffcU 
							      & (VL_NEGATE_I((IData)(
										(1U 
										& ((((IData)(vlTOPp->Top__DOT__alu__DOT___T_75) 
										| VL_GTS_III(1,32,32, vlTOPp->Top__DOT__idExe__DOT__reg_operandA, vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								 << 2U)) 
							     | (((IData)(vlTOPp->Top__DOT__alu__DOT___T_75) 
								 | VL_GTS_III(1,32,32, vlTOPp->Top__DOT__idExe__DOT__reg_operandA, vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
								 ? 1U
								 : 0U))
							     : 
							    ((0x17U 
							      == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							      ? 
							     ((0xfffffffcU 
							       & (VL_NEGATE_I((IData)(
										(1U 
										& ((((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										== vlTOPp->Top__DOT__idExe__DOT__reg_operandB) 
										| (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
										> vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
										 ? 1U
										 : 0U) 
										>> 1U)))) 
								  << 2U)) 
							      | (((vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
								   == vlTOPp->Top__DOT__idExe__DOT__reg_operandB) 
								  | (vlTOPp->Top__DOT__idExe__DOT__reg_operandA 
								     > vlTOPp->Top__DOT__idExe__DOT__reg_operandB))
								  ? 1U
								  : 0U))
							      : 
							     ((0x1fU 
							       == (IData)(vlTOPp->Top__DOT__idExe__DOT__reg_aluCtrl))
							       ? vlTOPp->Top__DOT__idExe__DOT__reg_operandA
							       : 0U))))))))))))));
    vlTOPp->io_main_RegOut = vlTOPp->Top__DOT__regFile_io_WriteData;
    vlTOPp->Top__DOT__control__DOT__CD_io_RegWrite 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	   | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
	      | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)) 
		 & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
		       | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr) 
			  | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal) 
			     | (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui))))))));
    vlTOPp->Top__DOT__control__DOT__CD_io_AluOp = (
						   (0x33U 
						    == 
						    (0x7fU 
						     & vlTOPp->Top__DOT__ifId__DOT__reg_ins))
						    ? 0U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)
						     ? 4U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)
						      ? 5U
						      : 
						     ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)
						       ? 2U
						       : 
						      ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType)
						        ? 1U
						        : 
						       ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr)
							 ? 3U
							 : 
							((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal)
							  ? 3U
							  : 
							 ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)
							   ? 6U
							   : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CD_io_Operand_aSel 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)
			      ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)
				       ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType)
					        ? 0U
					        : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr)
						    ? 2U
						    : 
						   ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal)
						     ? 2U
						     : 
						    ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)
						      ? 3U
						      : 0U))))))));
    vlTOPp->Top__DOT__control__DOT__CD__DOT___GEN_12 
	= ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jalr)) 
	   & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Jal)) 
	      & (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Lui)));
    vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel 
	= ((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	   & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
	      | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store) 
		 | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
		       | (IData)(vlTOPp->Top__DOT__control__DOT__CD__DOT___GEN_12))))));
    vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)
			      ? 2U : ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
				      & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType)) 
					 & (IData)(vlTOPp->Top__DOT__control__DOT__CD__DOT___GEN_12))))));
}

void VTop::_settle__TOP__5(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_settle__TOP__5\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->Top__DOT__control__DOT__CD_io_Operand_bSel 
	= ((0x33U != (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins)) 
	   & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load) 
	      | ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store) 
		 | ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
		    & ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType) 
		       | (IData)(vlTOPp->Top__DOT__control__DOT__CD__DOT___GEN_12))))));
    vlTOPp->Top__DOT__control__DOT__CD_io_ExtendSel 
	= ((0x33U == (0x7fU & vlTOPp->Top__DOT__ifId__DOT__reg_ins))
	    ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Load)
		     ? 0U : ((IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Store)
			      ? 2U : ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_Branch)) 
				      & ((~ (IData)(vlTOPp->Top__DOT__control__DOT__ID_io_IType)) 
					 & (IData)(vlTOPp->Top__DOT__control__DOT__CD__DOT___GEN_12))))));
}

void VTop::_eval(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlTOPp->clock) & (~ (IData)(vlTOPp->__Vclklast__TOP__clock)))) {
	vlTOPp->_sequent__TOP__2(vlSymsp);
	vlTOPp->__Vm_traceActivity = (2U | vlTOPp->__Vm_traceActivity);
	vlTOPp->_sequent__TOP__4(vlSymsp);
    }
    // Final
    vlTOPp->__Vclklast__TOP__clock = vlTOPp->clock;
}

void VTop::_eval_initial(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_initial\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_initial__TOP__1(vlSymsp);
}

void VTop::final() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::final\n"); );
    // Variables
    VTop__Syms* __restrict vlSymsp = this->__VlSymsp;
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VTop::_eval_settle(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_eval_settle\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__3(vlSymsp);
    vlTOPp->__Vm_traceActivity = (1U | vlTOPp->__Vm_traceActivity);
    vlTOPp->_settle__TOP__5(vlSymsp);
}

VL_INLINE_OPT QData VTop::_change_request(VTop__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_change_request\n"); );
    VTop* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    // Change detection
    QData __req = false;  // Logically a bool
    return __req;
}

void VTop::_ctor_var_reset() {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_ctor_var_reset\n"); );
    // Body
    clock = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    io_main_RegOut = VL_RAND_RESET_I(32);
    Top__DOT__regFile_io_WriteData = VL_RAND_RESET_I(32);
    Top__DOT__regFile_io_rd2 = VL_RAND_RESET_I(32);
    Top__DOT__Pc_io_input = VL_RAND_RESET_I(32);
    Top__DOT__control__DOT__ID_io_Load = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__ID_io_Store = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__ID_io_Branch = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__ID_io_IType = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__ID_io_Jalr = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__ID_io_Jal = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__ID_io_Lui = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__CD_io_RegWrite = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__CD_io_AluOp = VL_RAND_RESET_I(3);
    Top__DOT__control__DOT__CD_io_Operand_aSel = VL_RAND_RESET_I(2);
    Top__DOT__control__DOT__CD_io_Operand_bSel = VL_RAND_RESET_I(1);
    Top__DOT__control__DOT__CD_io_ExtendSel = VL_RAND_RESET_I(2);
    Top__DOT__control__DOT__CD__DOT___GEN_12 = VL_RAND_RESET_I(1);
    Top__DOT__regFile__DOT__registers_0 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_1 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_2 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_3 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_4 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_5 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_6 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_7 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_8 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_9 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_10 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_11 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_12 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_13 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_14 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_15 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_16 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_17 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_18 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_19 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_20 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_21 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_22 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_23 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_24 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_25 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_26 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_27 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_28 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_29 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_30 = VL_RAND_RESET_I(32);
    Top__DOT__regFile__DOT__registers_31 = VL_RAND_RESET_I(32);
    Top__DOT__aluControl__DOT___T_18 = VL_RAND_RESET_I(5);
    Top__DOT__alu__DOT___T_29 = VL_RAND_RESET_I(1);
    Top__DOT__alu__DOT___T_75 = VL_RAND_RESET_I(1);
    Top__DOT__alu__DOT___GEN_20 = VL_RAND_RESET_I(32);
    Top__DOT__Pc__DOT__reg__024 = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__insMem__DOT__mem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__insMem__DOT__mem___05FT_11_data = VL_RAND_RESET_I(32);
    { int __Vi0=0; for (; __Vi0<1024; ++__Vi0) {
	    Top__DOT__dataMem__DOT__dMem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    Top__DOT__dataMem__DOT__dMem___05FT_20_data = VL_RAND_RESET_I(32);
    Top__DOT__dataMem__DOT__dMem___05FT_20_addr_pipe_0 = VL_RAND_RESET_I(10);
    Top__DOT__ifId__DOT__reg_pc = VL_RAND_RESET_I(32);
    Top__DOT__ifId__DOT__reg_pc4 = VL_RAND_RESET_I(32);
    Top__DOT__ifId__DOT__reg_ins = VL_RAND_RESET_I(32);
    Top__DOT__idExe__DOT__reg_memWrite = VL_RAND_RESET_I(1);
    Top__DOT__idExe__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Top__DOT__idExe__DOT__reg_operandA = VL_RAND_RESET_I(32);
    Top__DOT__idExe__DOT__reg_operandB = VL_RAND_RESET_I(32);
    Top__DOT__idExe__DOT__reg_rd = VL_RAND_RESET_I(5);
    Top__DOT__idExe__DOT__reg_strData = VL_RAND_RESET_I(32);
    Top__DOT__idExe__DOT__reg_aluCtrl = VL_RAND_RESET_I(5);
    Top__DOT__exeMem__DOT__reg_memWrite = VL_RAND_RESET_I(1);
    Top__DOT__exeMem__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Top__DOT__exeMem__DOT__reg_rd = VL_RAND_RESET_I(5);
    Top__DOT__exeMem__DOT__reg_strData = VL_RAND_RESET_I(32);
    Top__DOT__exeMem__DOT__reg_aluOutput = VL_RAND_RESET_I(32);
    Top__DOT__memWr__DOT__reg_memToReg = VL_RAND_RESET_I(1);
    Top__DOT__memWr__DOT__reg_rd = VL_RAND_RESET_I(5);
    Top__DOT__memWr__DOT__reg_dataOut = VL_RAND_RESET_I(32);
    Top__DOT__memWr__DOT__reg_aluOutput = VL_RAND_RESET_I(32);
    __Vclklast__TOP__clock = VL_RAND_RESET_I(1);
    __Vm_traceActivity = VL_RAND_RESET_I(32);
}

void VTop::_configure_coverage(VTop__Syms* __restrict vlSymsp, bool first) {
    VL_DEBUG_IF(VL_PRINTF("    VTop::_configure_coverage\n"); );
    // Body
    if (0 && vlSymsp && first) {} // Prevent unused
}
