package datapath

import chisel3._

class Top extends Module{
	val io = IO(new Bundle{
		//val main_Instruction = Input(UInt(32.W))
		//val main_PC = Input(UInt(32.W))
		val main_RegOut = Output(SInt(32.W))
	})


	

	//io.main_RegOut := 0.S	
	

	val control = Module(new Control())
	val regFile = Module(new RegFile())
	val immGen = Module(new ImmGen())
	val aluControl = Module(new AluControl())
	val alu = Module(new ALU())
	val Pc = Module(new PC())
	val insMem = Module(new InsMem())
	val jalr = Module(new JalrTarget())
	val dataMem = Module(new MainMem())
	val ifId = Module(new IF_ID())
	val idExe = Module(new ID_EXE())
	val exeMem = Module(new EXE_MEM())
	val memWr = Module(new MEM_WR())
	val hdu = Module(new HDU())
	val SU = Module(new StallUnit())
	val SFU = Module(new StoreFwdUnit())
	val BU = Module(new BranchUnit())
	val BFU = Module(new BranchFwdUnit())
	val JFU = Module(new JalrFwdUnit())
	
	//-----------------------------------------------IF------------------
	
	//PC
	Pc.io.input := Pc.io.pc4

	//Instruction
	insMem.io.wrAdder := Pc.io.pc(11,2)
	val main_ins = insMem.io.rData
	
	//IF_ID----in----
	ifId.io.pc_in := Pc.io.pc
	ifId.io.pc4_in := Pc.io.pc4
	ifId.io.ins_in := main_ins

	//------------------------------------------------ID------------------

	//opcode
	control.io.OpCode := ifId.io.ins_out(6,0)

	//Register
	//regFile.io.RegWrite := control.io.RegWrite
	regFile.io.rs1 := ifId.io.ins_out(19,15)
	regFile.io.rs2 := ifId.io.ins_out(24,20)
	//regFile.io.rd := ifId.io.ins_out(11,7)

	//ImmediateGen
	immGen.io.ins := ifId.io.ins_out
	immGen.io.PC := ifId.io.pc_out

	//aLUcONTROL
	aluControl.io.AluOp := control.io.AluOp
	aluControl.io.Func3 := ifId.io.ins_out(14,12)
	aluControl.io.Func7 := ifId.io.ins_out(30)

	//-----Structural-Sol-----

	when(memWr.io.rd_out === ifId.io.ins_out(19,15) && memWr.io.regWrite_out === 1.U && ifId.io.ins_out(19,15) =/= 0.U ){
		idExe.io.operandA_in := regFile.io.WriteData
	}

	when(memWr.io.rd_out === ifId.io.ins_out(24,20) && memWr.io.regWrite_out === 1.U && ifId.io.ins_out(24,20) =/= 0.U){
		idExe.io.operandB_in := regFile.io.WriteData
	}

	// Operand A
	when(control.io.Operand_aSel === "b01".U){
		idExe.io.operandA_in := (ifId.io.pc_out).asSInt
	}.elsewhen(control.io.Operand_aSel === "b10".U){
		idExe.io.operandA_in := (ifId.io.pc4_out).asSInt 
	}.otherwise{
		idExe.io.operandA_in := regFile.io.rd1
	}	

	//Operand B
	when(control.io.ExtendSel === "b00".U & control.io.Operand_bSel === 1.U){
		idExe.io.operandB_in := immGen.io.I_Imm
	}.elsewhen(control.io.ExtendSel === "b01".U & control.io.Operand_bSel === 1.U){
		idExe.io.operandB_in := immGen.io.U_Imm
	}.elsewhen(control.io.ExtendSel === "b10".U & control.io.Operand_bSel === 1.U){
		idExe.io.operandB_in := immGen.io.S_Imm
	}.otherwise{
		idExe.io.operandB_in := regFile.io.rd2
	}

	
	
	
	/*when(control.io.ExtendSel === "b01".U & control.io.Operand_bSel === 1.U && control.io.MemWrite === 1.U){
		idExe.io.operandB_in := immGen.io.S_Imm
	}*/

	
	//Branch-Stall  (exeMem.io.rd_out === ) 
	
	when(control.io.Branch === 1.U && ((exeMem.io.rd_out ===ifId.io.ins_out(19,15)))){

		idExe.io.memWrite_in := 0.U
		idExe.io.memRead_in :=0.U
		idExe.io.memToReg_in := 0.U
		idExe.io.operandAsel_in := 0.U
		idExe.io.operandBsel_in := 0.U
		idExe.io.aluCtrl_in := 0.U
		idExe.io.regWrite_in := 0.U
		idExe.io.strData_in := 0.S
		idExe.io.rd_in := 0.U
		//idExe.io.rs1Ins_in := 0.U
		//idExe.io.rs2Ins_in := 0.U
		idExe.io.hazard_in := 0.U
		idExe.io.pc_in :=0.U
		idExe.io.pc4_in := 0.U


		ifId.io.ins_in := ifId.io.ins_out
		Pc.io.input :=ifId.io.pc4_out

	}.elsewhen(control.io.Branch === 1.U && ((exeMem.io.rd_out ===ifId.io.ins_out(24,20)))){
		idExe.io.memWrite_in := 0.U
		idExe.io.memRead_in :=0.U
		idExe.io.memToReg_in := 0.U
		idExe.io.operandAsel_in := 0.U
		idExe.io.operandBsel_in := 0.U
		idExe.io.aluCtrl_in := 0.U
		idExe.io.regWrite_in := 0.U
		idExe.io.strData_in := 0.S
		idExe.io.rd_in := 0.U
		//idExe.io.rs1Ins_in := 0.U
		//idExe.io.rs2Ins_in := 0.U
		idExe.io.hazard_in := 0.U
		idExe.io.pc_in :=0.U
		idExe.io.pc4_in := 0.U


		ifId.io.ins_in := ifId.io.ins_out
		Pc.io.input :=ifId.io.pc4_out
	}

	//BranchFwdUnit

	BFU.io.rs1 := ifId.io.ins_out(19,15) //regFile.io.rd1
	BFU.io.rs2 := ifId.io.ins_out(24,20) //regFile.io.rd2
	BFU.io.idExeRd := idExe.io.rd_out
	BFU.io.exeMemRd := exeMem.io.rd_out
	BFU.io.memWrRd := memWr.io.rd_out
	BFU.io.idExeRegWrite := idExe.io.regWrite_out
	BFU.io.exeMemRegWrite := exeMem.io.regWrite_out
	BFU.io.memWrRegWrite := memWr.io.regWrite_out
	BFU.io.memMemRead := exeMem.io.memRead_out


	//BranchUnit
	//BU.io.rs1 := regFile.io.rd1
	//BU.io.rs2 := regFile.io.rd2
	
	when(BFU.io.fwdA === "b00".U){
		BU.io.rs1 := regFile.io.rd1
	}.elsewhen(BFU.io.fwdA === "b01".U){
		BU.io.rs1 := alu.io.output
	}.elsewhen(BFU.io.fwdA === "b10".U){
		BU.io.rs1 := exeMem.io.aluOutput_out
	}.elsewhen(BFU.io.fwdA === "b11".U){
		BU.io.rs1 := memWr.io.aluOutput_out
	}.otherwise{
		BU.io.rs1 := regFile.io.rd1
	}

	when(BFU.io.fwdB === "b00".U){
		BU.io.rs2 := regFile.io.rd2
	}.elsewhen(BFU.io.fwdB === "b01".U ){
		BU.io.rs2 := alu.io.output
	}.elsewhen(BFU.io.fwdB === "b10".U){
		BU.io.rs2 := exeMem.io.aluOutput_out
	}.elsewhen(BFU.io.fwdB === "b11".U){
		BU.io.rs2 := memWr.io.aluOutput_out
	}.otherwise{
		BU.io.rs2 := regFile.io.rd2
	}


	BU.io.ctrlBranch := control.io.Branch

	
	BU.io.func3 := ifId.io.ins_out(14,12)
	
	when(control.io.Branch === 1.U){
	
		when(BU.io.branch === 1.U){

			ifId.io.ins_in := 0.U
			when(control.io.NextPcSel === "b01".U){
				Pc.io.input := immGen.io.SB_Imm.asUInt
			}.otherwise{
				Pc.io.input := Pc.io.pc4
			}
			

		}.otherwise{

			val a = DontCare
		}

	}.otherwise{
		Pc.io.input := Pc.io.pc4
	}


	//--------SU------
	SU.io.idExeMemRead := idExe.io.memRead_out
	SU.io.idExeRd := idExe.io.rd_out
	SU.io.ifIdRs1 := ifId.io.ins_out(19,15)
	SU.io.ifIdRs2 := ifId.io.ins_out(24,20)
	SU.io.ifIdRd := ifId.io.ins_out(11,7)
	SU.io.inst_in := ifId.io.ins_out
	SU.io.pc4_in := ifId.io.pc4_out


	//-----ctrl-pins----

	idExe.io.memWrite_in := control.io.MemWrite
	idExe.io.memRead_in := control.io.MemRead
	idExe.io.memToReg_in := control.io.MemToReg
	idExe.io.operandAsel_in := control.io.Operand_aSel
	idExe.io.operandBsel_in := control.io.Operand_bSel
	idExe.io.aluCtrl_in := aluControl.io.AluC
	idExe.io.regWrite_in := control.io.RegWrite
	idExe.io.strData_in := regFile.io.rd2
	idExe.io.rd_in := ifId.io.ins_out(11,7)
	idExe.io.rs1Ins_in := ifId.io.ins_out(19,15)
	idExe.io.rs2Ins_in := ifId.io.ins_out(24,20)
	/*when(control.io.ExtendSel === "b10".U & control.io.Operand_bSel === 1.U){
		idExe.io.rs1Ins_in := 0.U
		//idExe.io.rs2Ins_in := 0.U
	}.otherwise{
		
		idExe.io.rs2Ins_in := ifId.io.ins_out(24,20)
		}*/
	idExe.io.hazard_in := SU.io.hazard
	idExe.io.pc_in := ifId.io.pc_out
	idExe.io.pc4_in := ifId.io.pc4_out
	
	when(SU.io.hazard === 1.U){
		idExe.io.memWrite_in := 0.U
		idExe.io.memRead_in :=0.U
		idExe.io.memToReg_in := 0.U
		idExe.io.operandAsel_in := 0.U
		idExe.io.operandBsel_in := 0.U
		idExe.io.aluCtrl_in := 0.U
		idExe.io.regWrite_in := 0.U
		idExe.io.strData_in := 0.S
		idExe.io.rd_in := 0.U
		//idExe.io.rs1Ins_in := 0.U
		//idExe.io.rs2Ins_in := 0.U
		idExe.io.hazard_in := 0.U
		idExe.io.pc_in :=0.U
		idExe.io.pc4_in := 0.U


		ifId.io.ins_in := ifId.io.ins_out
		Pc.io.input :=ifId.io.pc4_out

	}




	//----Store-Fwding-----
	SFU.io.rd := ifId.io.ins_out(24,20)
	SFU.io.idExeRd := idExe.io.rd_out
	SFU.io.exeMemRd := exeMem.io.rd_out
	SFU.io.memWrRd := memWr.io.rd_out

	SFU.io.idExeMemWrite := idExe.io.regWrite_out
	SFU.io.exeMemMemWrite := exeMem.io.regWrite_out
	SFU.io.memWrMemWrite := memWr.io.regWrite_out

	when(exeMem.io.memRead_out =/= 1.U){	
		when(SFU.io.fwd === "b00".U){
			idExe.io.strData_in := regFile.io.rd2
		}.elsewhen(SFU.io.fwd === "b01".U){
			idExe.io.strData_in := alu.io.output
		}.elsewhen(SFU.io.fwd === "b10".U){
			idExe.io.strData_in := exeMem.io.aluOutput_out
		}.elsewhen(SFU.io.fwd === "b11".U){
			idExe.io.strData_in := memWr.io.aluOutput_out
		}.otherwise{
			idExe.io.strData_in := regFile.io.rd2
		}
	}.otherwise{
		idExe.io.strData_in := dataMem.io.DataOut
	}


	//JFU

	JFU.io.rs1 := ifId.io.ins_out(19,15)
	JFU.io.idExeRd := idExe.io.rd_out
	JFU.io.exeMemRd := exeMem.io.rd_out
	JFU.io.memWrRd := memWr.io.rd_out
	JFU.io.idExeRegWrite := idExe.io.regWrite_out
	JFU.io.exeMemRegWrite := exeMem.io.regWrite_out
	JFU.io.memWrRegWrite := memWr.io.regWrite_out




	// JAlr-Target

	//jalr.io.a :=  regFile.io.rd1
	
	when(JFU.io.fwdA === "b00".U){
		jalr.io.a := regFile.io.rd1
	}.elsewhen(JFU.io.fwdA === "b01".U){
		jalr.io.a := alu.io.output
	}.elsewhen(JFU.io.fwdA === "b10".U){
		jalr.io.a := exeMem.io.aluOutput_out
	}.elsewhen(JFU.io.fwdA === "b11".U){
		jalr.io.a := memWr.io.aluOutput_out
	}.otherwise{
		jalr.io.a := regFile.io.rd1
	}	
	
	jalr.io.b := immGen.io.I_Imm

	//Next-PC-Sel

	when(control.io.NextPcSel === "b11".U){
		Pc.io.input := jalr.io.output.asUInt
		ifId.io.ins_in := 0.U
		ifId.io.pc_in := 0.U
		ifId.io.pc4_in := 0.U
	}.elsewhen(control.io.NextPcSel === "b10".U){
		Pc.io.input := immGen.io.UJ_Imm.asUInt
		ifId.io.ins_in := 0.U
		ifId.io.pc_in := 0.U
		ifId.io.pc4_in := 0.U
	}

	
	


	//ID_EXE------in--------



	//----------------------------------------------------EXE----------------

	//ALU
	alu.io.AluControl := idExe.io.aluCtrl_out
	//alu.io.a := idExe.io.operandA_out
	//alu.io.b := idExe.io.operandB_out

	
	//---HDU--------
	hdu.io.exRegWrite := exeMem.io.regWrite_out
	hdu.io.exRd := exeMem.io.rd_out
	hdu.io.idRs1 := idExe.io.rs1Ins_out
	hdu.io.idRs2 := idExe.io.rs2Ins_out
	hdu.io.operandAsel := idExe.io.operandAsel_out
	hdu.io.operandBsel := idExe.io.operandBsel_out
	hdu.io.memRegWrite := memWr.io.regWrite_out
	hdu.io.memRd := memWr.io.rd_out
	hdu.io.hazard := memWr.io.memToReg_out//idExe.io.hazard_out


	when(hdu.io.forwardA === "b00".U ){
		alu.io.a := idExe.io.operandA_out
	}.elsewhen(hdu.io.forwardA === "b01".U){
		alu.io.a := exeMem.io.aluOutput_out
	}.elsewhen(hdu.io.forwardA === "b10".U){
		alu.io.a := memWr.io.aluOutput_out
	}.otherwise{
		alu.io.a := idExe.io.operandA_out
	}
	
	when(hdu.io.forwardB === "b00".U ){
		alu.io.b := idExe.io.operandB_out
	}.elsewhen(hdu.io.forwardB === "b01".U){
		alu.io.b := exeMem.io.aluOutput_out
	}.elsewhen(hdu.io.forwardB === "b10".U){
		alu.io.b := memWr.io.aluOutput_out
	}.otherwise{
		alu.io.b := idExe.io.operandB_out
	}

	when(memWr.io.memToReg_out=== 1.U && memWr.io.rd_out === idExe.io.rs1Ins_out){
		alu.io.a := memWr.io.dataOut_out
	}
	
	when(memWr.io.memToReg_out=== 1.U && memWr.io.rd_out === idExe.io.rs2Ins_out){
		alu.io.b := memWr.io.dataOut_out
	}

	when(idExe.io.memWrite_out === 1.U){
		alu.io.b := idExe.io.operandB_out
	}
	

	
	
	//EXE_MEM------in------
	
	exeMem.io.memWrite_in := idExe.io.memWrite_out
	exeMem.io.memRead_in := idExe.io.memRead_out
	exeMem.io.memToReg_in := idExe.io.memToReg_out
	exeMem.io.rd_in := idExe.io.rd_out
	exeMem.io.strData_in := idExe.io.strData_out
	exeMem.io.aluOutput_in := alu.io.output
	exeMem.io.regWrite_in := idExe.io.regWrite_out
	exeMem.io.rs2Sel_in := idExe.io.rs2Ins_out
	exeMem.io.baseReg_in := idExe.io.operandA_out
	exeMem.io.offSet_in := idExe.io.operandB_out

	//--------------------------------------------------MEM-------------------

	//DataMemory
	dataMem.io.Address := (exeMem.io.aluOutput_out/*(9,2)*/).asUInt
	dataMem.io.str := exeMem.io.memWrite_out
	dataMem.io.ld := exeMem.io.memRead_out
	/*when(memWr.io.memToReg_out === 1.U && exeMem.io.rs2Sel_in === memWr.io.rd_out){
		dataMem.io.DataIn := memWr.io.dataOut_out
	}.otherwise{
		
	}*/
	dataMem.io.DataIn := exeMem.io.strData_out

	//MEM_WR----------in-------
	
	memWr.io.memToReg_in := exeMem.io.memToReg_out
	memWr.io.rd_in := exeMem.io.rd_out
	memWr.io.aluOutput_in := exeMem.io.aluOutput_out
	memWr.io.dataOut_in := dataMem.io.DataOut
	memWr.io.regWrite_in := exeMem.io.regWrite_out
	memWr.io.rs2Sel_in := exeMem.io.rs2Sel_out
	memWr.io.baseReg_in := exeMem.io.baseReg_out
	memWr.io.offSet_in := exeMem.io.offSet_out
	memWr.io.MemRead_in := exeMem.io.memRead_out
	memWr.io.memWrite_in := exeMem.io.memWrite_out


	//---------------------------------------------------WR-----------------------

	regFile.io.rd := memWr.io.rd_out
	regFile.io.RegWrite := memWr.io.regWrite_out

	when(memWr.io.memToReg_out === 1.U){
		regFile.io.WriteData := memWr.io.dataOut_out
	}.otherwise{
		when(regFile.io.RegWrite === 1.U){
			regFile.io.WriteData := memWr.io.aluOutput_out
		}.otherwise{
			regFile.io.WriteData := 0.S
		}
	}

	io.main_RegOut := regFile.io.WriteData
	



	
	
		
	/*
	// PC
	Pc.io.input := Pc.io.pc4
	
	// Instruction
	insMem.io.wrAdder := Pc.io.pc(11,2)
	 val main_Instruction = insMem.io.rData
	
	//opcode
	control.io.OpCode := main_Instruction(6,0)
	
	//Register
	regFile.io.RegWrite := control.io.RegWrite
	regFile.io.rs1 := main_Instruction(19,15)
	regFile.io.rs2 := main_Instruction(24,20)
	regFile.io.rd := main_Instruction(11,7)
	
	//ImmediTE
	immGen.io.ins := main_Instruction
	immGen.io.PC := Pc.io.pc

	//aLUcONTROL
	aluControl.io.AluOp := control.io.AluOp
	aluControl.io.Func3 := main_Instruction(14,12)
	aluControl.io.Func7 := main_Instruction(30)

	
	// Operand A
	when(control.io.Operand_aSel === "b01".U){
		alu.io.a := (Pc.io.pc).asSInt
	}.elsewhen(control.io.Operand_aSel === "b10".U){
		alu.io.a := (Pc.io.pc4).asSInt 
	}.otherwise{
		alu.io.a := regFile.io.rd1
	}	

	//Operand B
	when(control.io.ExtendSel === "b00".U & control.io.Operand_bSel === 1.U){
		alu.io.b := immGen.io.I_Imm
	}.elsewhen(control.io.ExtendSel === "b01".U & control.io.Operand_bSel === 1.U){
		alu.io.b := immGen.io.S_Imm
	}.elsewhen(control.io.ExtendSel === "b10".U & control.io.Operand_bSel === 1.U){
		alu.io.b := immGen.io.U_Imm
	}.otherwise{
		alu.io.b := regFile.io.rd2
	}

	alu.io.AluControl := aluControl.io.AluC

	//ALU
	
	//regFile.io.WriteData := alu.io.output



	//Jalr
	jalr.io.a := regFile.io.rd1
	jalr.io.b := immGen.io.I_Imm

	when(control.io.NextPcSel === "b11".U){
		Pc.io.input := (jalr.io.output).asUInt
	}.elsewhen(control.io.NextPcSel === "b01".U & (control.io.Branch & alu.io.AluBranch) === 1.U){0.00
		Pc.io.input := (immGen.io.SB_Imm).asUInt
	}.elsewhen(control.io.NextPcSel === "b10".U ){
		Pc.io.input := (immGen.io.UJ_Imm).asUInt
	}.otherwise{
		Pc.io.input := Pc.io.pc4
	}

	//DataMemory
	dataMem.io.Address := (alu.io.output(9,2)).asUInt
	dataMem.io.str := control.io.MemWrite
	dataMem.io.ld := control.io.MemRead
	dataMem.io.DataIn := regFile.io.rd2
	//regFile.io.WriteData := dataMem.io.DataOut  



	when(control.io.MemToReg === 1.U){
		regFile.io.WriteData :=  dataMem.io.DataOut
	}.otherwise{
		regFile.io.WriteData := alu.io.output
	}

	io.main_RegOut := regFile.io.WriteData

*/
}
