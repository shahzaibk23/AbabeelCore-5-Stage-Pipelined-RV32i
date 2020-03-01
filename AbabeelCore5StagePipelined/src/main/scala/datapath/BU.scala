package datapath

import chisel3._

class BranchUnit extends Module{

	val io = IO(new Bundle{
		val rs1 = Input(SInt(32.W))
		val rs2 = Input(SInt(32.W))
		val func3 = Input(UInt(3.W))
		val branch = Output(UInt(1.W))
		val ctrlBranch = Input(UInt(1.W))
		
	})

	io.branch := 0.U	
	
	when(io.func3 === "b000".U){		//beq
		when(io.rs1 === io.rs2 && io.ctrlBranch === 1.U){
			io.branch := 1.U
		}.otherwise{
			io.branch := 0.U
		}
	}.elsewhen(io.func3 === "b001".U ){	//bne
		when(io.rs1 =/= io.rs2 && io.ctrlBranch === 1.U){
			io.branch := 1.U
		}.otherwise{
			io.branch := 0.U
		}
	}.elsewhen(io.func3 === "b100".U){	//blt
		when(io.rs1 < io.rs2 && io.ctrlBranch === 1.U){
			io.branch := 1.U
		}.otherwise{
			io.branch := 0.U
		}
	}.elsewhen(io.func3 === "b101".U){	//bge
		when((io.rs1 >= io.rs2 || io.rs1 === io.rs2) && io.ctrlBranch === 1.U){
			io.branch := 1.U
		}.otherwise{
			io.branch := 0.U
		}
	}.elsewhen(io.func3 === "b111".U){	//bgeU
		val Ua = io.rs1.asUInt
		val Ub = io.rs2.asUInt
		when((Ua > Ub || Ua === Ub) && io.ctrlBranch === 1.U){
			io.branch := 1.U
		}.otherwise{
			io.branch := 0.U
		}
	}



	
	
	

	
}
