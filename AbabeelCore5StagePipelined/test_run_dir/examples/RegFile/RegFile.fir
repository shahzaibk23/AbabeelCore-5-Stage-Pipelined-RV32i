;buildInfoPackage: chisel3, version: 3.1.8, scalaVersion: 2.11.12, sbtVersion: 1.1.1, builtAtString: 2019-07-08 17:44:42.884, builtAtMillis: 1562607882884
circuit RegFile : 
  module RegFile : 
    input clock : Clock
    input reset : UInt<1>
    output io : {flip RegWrite : UInt<1>, flip rs1 : UInt<5>, flip rs2 : UInt<5>, flip rd : UInt<5>, flip WriteData : SInt<32>, rd1 : SInt<32>, rd2 : SInt<32>}
    
    wire _T_54 : SInt<32>[32] @[RegFile.scala 17:40]
    _T_54[0] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[1] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[2] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[3] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[4] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[5] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[6] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[7] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[8] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[9] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[10] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[11] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[12] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[13] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[14] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[15] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[16] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[17] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[18] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[19] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[20] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[21] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[22] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[23] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[24] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[25] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[26] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[27] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[28] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[29] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[30] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    _T_54[31] <= asSInt(UInt<32>("h00")) @[RegFile.scala 17:40]
    reg registers : SInt<32>[32], clock with : (reset => (reset, _T_54)) @[RegFile.scala 17:32]
    registers[0] <= asSInt(UInt<1>("h00")) @[RegFile.scala 18:22]
    io.rd1 <= registers[io.rs1] @[RegFile.scala 19:16]
    io.rd2 <= registers[io.rs2] @[RegFile.scala 20:16]
    node _T_265 = eq(io.RegWrite, UInt<1>("h01")) @[RegFile.scala 21:26]
    when _T_265 : @[RegFile.scala 21:34]
      registers[io.rd] <= io.WriteData @[RegFile.scala 22:34]
      skip @[RegFile.scala 21:34]
    
