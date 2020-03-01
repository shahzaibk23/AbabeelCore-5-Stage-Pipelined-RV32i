package datapath

import chisel3._

class blankReg extends Module{

	val io = IO(new Bundle{


		val val_in = Input(SInt(32.W))

		val val_out = Output(SInt(32.W))

		

	})


	val reg_val = RegInit(0.S(32.W))
	

	reg_val := io.val_in

	io.val_out := reg_val


}
