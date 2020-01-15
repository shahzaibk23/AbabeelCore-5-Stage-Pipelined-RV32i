;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit IF_ID : 
  module IF_ID : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip pc_in : UInt<32>, flip pc4_in : UInt<32>, flip ins_in : UInt<32>, pc_out : UInt<32>, ins_out : UInt<32>, pc4_out : UInt<32>}
    
    reg reg_pc : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[IF_ID.scala 21:29]
    reg reg_pc4 : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[IF_ID.scala 22:30]
    reg reg_ins : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[IF_ID.scala 23:30]
    reg_pc <= io.pc_in @[IF_ID.scala 25:16]
    reg_pc4 <= io.pc4_in @[IF_ID.scala 26:17]
    reg_ins <= io.ins_in @[IF_ID.scala 27:17]
    io.pc_out <= reg_pc @[IF_ID.scala 29:19]
    io.pc4_out <= reg_pc4 @[IF_ID.scala 30:20]
    io.ins_out <= reg_ins @[IF_ID.scala 31:20]
    
