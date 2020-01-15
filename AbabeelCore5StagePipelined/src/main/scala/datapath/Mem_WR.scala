package datapath

import chisel3._

class MEM_WR extends Module{

	val io = IO(new Bundle{


		val memToReg_in = Input(UInt(1.W))
		val rd_in = Input(UInt(5.W))
		val dataOut_in = Input(SInt(32.W))
		val aluOutput_in = Input(SInt(32.W))
		val regWrite_in = Input(UInt(1.W))

		val memToReg_out = Output(UInt(1.W))
		val rd_out = Output(UInt(5.W))
		val dataOut_out = Output(SInt(32.W))
		val aluOutput_out = Output(SInt(32.W))
		val regWrite_out = Output(UInt(1.W))
		
	})


	val reg_memToReg = RegInit(0.U(1.W))
	val reg_rd = RegInit(0.U(5.W))
	val reg_dataOut = RegInit(0.S(32.W))
	val reg_aluOutput = RegInit(0.S(32.W))
	val reg_regWrite = RegInit(0.U(1.W))

	
	reg_memToReg := io.memToReg_in
	reg_rd := io.rd_in
	reg_dataOut := io.dataOut_in
	reg_aluOutput := io.aluOutput_in
	reg_regWrite := io.regWrite_in


	io.memToReg_out := reg_memToReg
	io.rd_out := reg_rd
	io.dataOut_out := reg_dataOut
	io.aluOutput_out := reg_aluOutput
	io.regWrite_out := reg_regWrite


	



}
