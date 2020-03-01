;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit blankReg : 
  module blankReg : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip pc_in : UInt<32>, flip ins_in : UInt<32>, pc_out : UInt<32>, ins_out : UInt<32>}
    
    reg reg_pc : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[blankReg.scala 21:29]
    reg reg_ins : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[blankReg.scala 22:31]
    reg_pc <= io.pc_in @[blankReg.scala 25:16]
    io.pc_out <= reg_pc @[blankReg.scala 26:19]
    reg_ins <= io.ins_in @[blankReg.scala 28:17]
    io.ins_out <= reg_ins @[blankReg.scala 29:20]
    
