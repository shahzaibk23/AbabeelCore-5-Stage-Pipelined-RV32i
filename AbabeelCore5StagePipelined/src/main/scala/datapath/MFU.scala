package datapath

import chisel3._

class MemoryFwdUnit extends Module{

	val io = IO(new Bundle{
		val rs1 = Input(UInt(5.W))
		val rs2 = Input(UInt(5.W))
		val idExeRd = Input(UInt(5.W))
		val exeMemRd = Input(UInt(5.W))
		val memWrRd = Input(UInt(5.W))

		val idExeRegWrite = Input(UInt(1.W))
		val exeMemRegWrite = Input(UInt(1.W))
		val memWrRegWrite = Input(UInt(1.W))
		
		val fwdA = Output(UInt(2.W))
		val fwdB = Output(UInt(2.W))

	})
	
	io.fwdA := "b00".U
	io.fwdB := "b00".U
	
	//Mem-Forward
	when(io.memWrRegWrite === "b1".U && io.memWrRd =/= "b00000".U && (io.memWrRd === io.rs1 && io.memWrRd === io.rs2)){
		io.fwdA := "b11".U
		io.fwdB := "b11".U
	}.elsewhen(io.memWrRegWrite === "b1".U && io.memWrRd =/= "b00000".U && io.memWrRd === io.rs1){
		io.fwdA := "b11".U 
	}.elsewhen(io.memWrRegWrite === "b1".U && io.memWrRd =/= "b00000".U && io.memWrRd === io.rs2){
		io.fwdB := "b11".U
		
	}

	//Exe-Forward
	when(io.exeMemRegWrite === "b1".U && io.exeMemRd =/= "b00000".U && (io.exeMemRd === io.rs1 && io.exeMemRd === io.rs2)){
		io.fwdA := "b10".U
		io.fwdB := "b10".U
	}.elsewhen(io.exeMemRegWrite === "b1".U && io.exeMemRd =/= "b00000".U && io.exeMemRd === io.rs1){
		io.fwdA := "b10".U
	}.elsewhen(io.exeMemRegWrite === "b1".U && io.exeMemRd =/= "b00000".U && io.exeMemRd === io.rs2){
		io.fwdB := "b10".U
	}
	
	//ID-Forward
	when(io.idExeRegWrite === "b1".U && io.idExeRd =/= "b00000".U && (io.idExeRd === io.rs1 && io.idExeRd === io.rs2)){
		io.fwdA := "b01".U
		io.fwdB := "b01".U
	}.elsewhen(io.idExeRegWrite === "b1".U && io.idExeRd =/= "b00000".U && io.idExeRd === io.rs1){
		io.fwdA := "b01".U
	}.elsewhen(io.idExeRegWrite === "b1".U && io.idExeRd =/= "b00000".U && io.idExeRd === io.rs2){
		io.fwdB := "b01".U
	}

	
	



	
	
	

	
}
