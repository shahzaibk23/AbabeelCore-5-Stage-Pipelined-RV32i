package datapath

import chisel3._

class StoreFwdUnit extends Module{

	val io = IO(new Bundle{

		val rd = Input(UInt(5.W))
		val idExeRd = Input(UInt(5.W))
		val exeMemRd = Input(UInt(5.W))
		val memWrRd = Input(UInt(5.W))

		//val memMemRead = Input(UInt(1.W))

		val idExeMemWrite = Input(UInt(1.W))
		val exeMemMemWrite = Input(UInt(1.W))
		val memWrMemWrite = Input(UInt(1.W))
		
		val fwd = Output(UInt(2.W))

	})
	
	
	io.fwd := "b00".U
	
	//Mem-Forward
	when(io.memWrMemWrite === "b1".U && io.memWrRd =/= "b00000".U && io.memWrRd === io.rd){
		io.fwd := "b11".U
		
	}

	//Exe-Forward
	when(io.exeMemMemWrite === "b1".U && io.exeMemRd =/= "b00000".U && io.exeMemRd === io.rd){
		io.fwd := "b10".U
	}
	
	//ID-Forward
	when(io.idExeMemWrite === "b1".U && io.idExeRd =/= "b00000".U && io.idExeRd === io.rd){
		io.fwd := "b01".U
	}

	
	



	
	
	

	
}
