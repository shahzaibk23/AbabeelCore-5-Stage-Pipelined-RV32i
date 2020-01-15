package datapath

import chisel3.iotesters.PeekPokeTester

class IF_ID_Tests(c: IF_ID) extends PeekPokeTester(c){
  poke(c.io.pc_in, 0)
  poke(c.io.pc4_in, 0)
  poke(c.io.ins_in, 10)
  expect(c.io.ins_out, 0)
  step(1)
  
  expect(c.io.ins_out, 10)

}
