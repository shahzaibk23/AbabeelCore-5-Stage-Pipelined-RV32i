;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit PC : 
  module PC : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip input : UInt<32>, pc4 : UInt<32>, pc : UInt<32>}
    
    reg reg : UInt<32>, clock with : (reset => (reset, UInt<32>("h00"))) @[PC.scala 12:26]
    node _T_14 = add(reg, UInt<3>("h04")) @[PC.scala 13:23]
    node _T_15 = tail(_T_14, 1) @[PC.scala 13:23]
    io.pc4 <= _T_15 @[PC.scala 13:16]
    io.pc <= reg @[PC.scala 14:15]
    
