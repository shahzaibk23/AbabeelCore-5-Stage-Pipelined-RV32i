;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit MainMem : 
  module MainMem : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip Address : UInt<10>, flip DataIn : SInt<32>, DataOut : SInt<32>, flip str : UInt<1>, flip ld : UInt<1>}
    
    smem dMem : UInt<32>[1024] @[MainMem.scala 15:31]
    io.DataOut <= asSInt(UInt<1>("h00")) @[MainMem.scala 16:20]
    node _T_19 = eq(io.ld, UInt<1>("h01")) @[MainMem.scala 18:20]
    when _T_19 : @[MainMem.scala 18:28]
      infer mport _T_20 = dMem[io.Address], clock @[MainMem.scala 19:36]
      node _T_21 = asSInt(_T_20) @[MainMem.scala 19:50]
      io.DataOut <= _T_21 @[MainMem.scala 19:28]
      skip @[MainMem.scala 18:28]
    else : @[MainMem.scala 20:35]
      node _T_23 = eq(io.str, UInt<1>("h01")) @[MainMem.scala 20:27]
      when _T_23 : @[MainMem.scala 20:35]
        infer mport _T_24 = dMem[io.Address], clock @[MainMem.scala 21:21]
        node _T_25 = asUInt(io.DataIn) @[MainMem.scala 21:49]
        _T_24 <= _T_25 @[MainMem.scala 21:34]
        skip @[MainMem.scala 20:35]
    
