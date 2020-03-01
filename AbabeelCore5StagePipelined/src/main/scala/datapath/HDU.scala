package datapath

import chisel3._

class HDU extends Module{

	val io = IO(new Bundle{


		val exRegWrite = Input(UInt(1.W))
		val exRd = Input(UInt(5.W))
		val idRs1 = Input(UInt(5.W))
		val idRs2 = Input(UInt(5.W))
		val operandAsel = Input(UInt(2.W))
		val operandBsel = Input(UInt(1.W))

		val hazard = Input(UInt(1.W))

		val memRegWrite = Input(UInt(1.W))
		val memRd = Input(UInt(5.W))

		val forwardA = Output(UInt(2.W))
		val forwardB = Output(UInt(2.W))

	})
	

	io.forwardA := "b00".U
	io.forwardB := "b00".U

	//MEM-Hazaaard
	when(io.memRegWrite === "b1".U && io.memRd =/= "b00000".U && (io.memRd === io.idRs1 && io.memRd === io.idRs2)){
		io.forwardA := "b10".U
		io.forwardB := "b10".U
	}.elsewhen(io.memRegWrite === "b1".U && io.memRd =/= "b00000".U && io.memRd === io.idRs1){
		io.forwardA := "b10".U 
	}.elsewhen(io.memRegWrite === "b1".U && io.memRd =/= "b00000".U && io.memRd === io.idRs2){
		io.forwardB := "b10".U
		
	}

	
	//EX-Hazaaard
	when(io.exRegWrite === "b1".U && io.exRd =/= "b00000".U && (io.exRd === io.idRs1 && io.exRd === io.idRs2)){
		io.forwardA := "b01".U
		io.forwardB := "b01".U
	}.elsewhen(io.exRegWrite === "b1".U && io.exRd =/= "b00000".U && io.exRd === io.idRs1){
		io.forwardA := "b01".U
	}.elsewhen(io.exRegWrite === "b1".U && io.exRd =/= "b00000".U && io.exRd === io.idRs2){
		io.forwardB := "b01".U
	}

	//Stall-Hazard
	/*when(io.hazard === 1.U){
		when((io.memRd === io.idRs1 && io.memRd === io.idRs2) ||(io.exRd === io.idRs1 && io.exRd === io.idRs2) ){
			io.forwardA := "b11".U
			io.forwardB := "b11".U
		}.elsewhen(io.memRd === io.idRs1 ||  io.exRd === io.idRs1){
			io.forwardA := "b11".U 
		}.elsewhen(io.memRd === io.idRs2 || io.exRd === io.idRs2){
			io.forwardB := "b11".U
			
		}
	} */

	
	
	

}
