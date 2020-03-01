package datapath

import chisel3._
//import chisel3.util.experimental.loadMemoryFromFile

class MainMem extends Module{
	val io = IO(new Bundle{
		val Address = Input(UInt(32.W))
		val DataIn = Input(SInt(32.W))
		val DataOut = Output(SInt(32.W))
		val str = Input(UInt(1.W))
		val ld = Input(UInt(1.W))
	})

	val dMem = Mem(1024,UInt(32.W))
	io.DataOut := 0.S

	/*when(io.ld === 1.U){
		io.DataOut := (dMem(io.Address)).asSInt
	}.elsewhen(io.str === 1.U){
		dMem(io.Address) := (io.DataIn).asUInt
	}
	//loadMemoryFromFile(dMem, "/home/hellcaster/Memory.txt")
	*/

	val mem = Mem(1024,SInt(32.W))
	when(io.ld === 1.U){
		io.DataOut := mem(io.Address)
	}.otherwise{
		io.DataOut := DontCare
	}

	
	when(io.str === 1.U){
		mem(io.Address) := io.DataIn
	}.otherwise{
		io.DataOut := DontCare
	}

}

