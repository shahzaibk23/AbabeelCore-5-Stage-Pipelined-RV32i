package datapath

import chisel3._

class StallUnit extends Module{

	val io = IO(new Bundle{
		val idExeMemRead = Input(UInt(1.W))
		//val idMemWrite = Input(UInt(1.W))
		val idExeRd = Input(UInt(5.W))
		val ifIdRs1 = Input(UInt(5.W))
		val ifIdRs2 = Input(UInt(5.W))
		val ifIdRd = Input(UInt(5.W))
		
		val inst_in = Input(UInt(32.W))
		val pc4_in = Input(UInt(32.W))

		val inst_out = Output(UInt(32.W))
		val pc4_out = Output(UInt(32.W))

		val hazard = Output(UInt(1.W))

	})
	
	val reg_inst = RegInit(0.U(32.W))
	val reg_pc4 = RegInit(0.U(32.W))
	
	reg_inst := io.inst_in
	reg_pc4 := io.pc4_in

	io.inst_out := reg_inst
	io.pc4_out := reg_pc4

	io.hazard := 0.U
	when(io.idExeMemRead === 1.U && (io.idExeRd === io.ifIdRs1 || io.idExeRd === io.ifIdRs2) && io.idExeRd =/= 0.U){
		io.hazard := 1.U
	}.otherwise{
		io.hazard := 0.U
	}

	
}
