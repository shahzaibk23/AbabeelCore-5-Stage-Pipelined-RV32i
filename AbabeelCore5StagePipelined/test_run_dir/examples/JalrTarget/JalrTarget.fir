;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit JalrTarget : 
  module JalrTarget : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip a : UInt<32>, flip b : UInt<32>, output : UInt<32>}
    
    node _T_11 = add(io.a, io.b) @[JalrTarget.scala 12:29]
    node _T_12 = tail(_T_11, 1) @[JalrTarget.scala 12:29]
    node _T_14 = and(_T_12, UInt<36>("h0ffffffffe")) @[JalrTarget.scala 12:37]
    io.output <= _T_14 @[JalrTarget.scala 12:19]
    
