module HDU(
  input        clock,
  input        reset,
  input        io_exRegWrite,
  input  [4:0] io_exRd,
  input  [4:0] io_idRs1,
  input  [4:0] io_idRs2,
  input  [1:0] io_operandAsel,
  input        io_operandBsel,
  input        io_hazard,
  input        io_memRegWrite,
  input  [4:0] io_memRd,
  output [1:0] io_forwardA,
  output [1:0] io_forwardB
);
  wire  _T_32; // @[HDU.scala 32:52]
  wire  _T_33; // @[HDU.scala 32:40]
  wire  _T_34; // @[HDU.scala 32:80]
  wire  _T_35; // @[HDU.scala 32:105]
  wire  _T_36; // @[HDU.scala 32:93]
  wire  _T_37; // @[HDU.scala 32:67]
  wire  _T_46; // @[HDU.scala 35:73]
  wire  _T_54; // @[HDU.scala 37:73]
  wire [1:0] _GEN_0; // @[HDU.scala 37:98]
  wire [1:0] _GEN_1; // @[HDU.scala 35:98]
  wire [1:0] _GEN_2; // @[HDU.scala 35:98]
  wire [1:0] _GEN_3; // @[HDU.scala 32:119]
  wire [1:0] _GEN_4; // @[HDU.scala 32:119]
  wire  _T_59; // @[HDU.scala 44:50]
  wire  _T_60; // @[HDU.scala 44:39]
  wire  _T_61; // @[HDU.scala 44:77]
  wire  _T_62; // @[HDU.scala 44:101]
  wire  _T_63; // @[HDU.scala 44:90]
  wire  _T_64; // @[HDU.scala 44:65]
  wire  _T_73; // @[HDU.scala 47:71]
  wire  _T_81; // @[HDU.scala 49:71]
  wire [1:0] _GEN_5; // @[HDU.scala 49:95]
  wire [1:0] _GEN_6; // @[HDU.scala 47:95]
  wire [1:0] _GEN_7; // @[HDU.scala 47:95]
  assign _T_32 = io_memRd != 5'h0; // @[HDU.scala 32:52]
  assign _T_33 = io_memRegWrite & _T_32; // @[HDU.scala 32:40]
  assign _T_34 = io_memRd == io_idRs1; // @[HDU.scala 32:80]
  assign _T_35 = io_memRd == io_idRs2; // @[HDU.scala 32:105]
  assign _T_36 = _T_34 & _T_35; // @[HDU.scala 32:93]
  assign _T_37 = _T_33 & _T_36; // @[HDU.scala 32:67]
  assign _T_46 = _T_33 & _T_34; // @[HDU.scala 35:73]
  assign _T_54 = _T_33 & _T_35; // @[HDU.scala 37:73]
  assign _GEN_0 = _T_54 ? 2'h2 : 2'h0; // @[HDU.scala 37:98]
  assign _GEN_1 = _T_46 ? 2'h2 : 2'h0; // @[HDU.scala 35:98]
  assign _GEN_2 = _T_46 ? 2'h0 : _GEN_0; // @[HDU.scala 35:98]
  assign _GEN_3 = _T_37 ? 2'h2 : _GEN_1; // @[HDU.scala 32:119]
  assign _GEN_4 = _T_37 ? 2'h2 : _GEN_2; // @[HDU.scala 32:119]
  assign _T_59 = io_exRd != 5'h0; // @[HDU.scala 44:50]
  assign _T_60 = io_exRegWrite & _T_59; // @[HDU.scala 44:39]
  assign _T_61 = io_exRd == io_idRs1; // @[HDU.scala 44:77]
  assign _T_62 = io_exRd == io_idRs2; // @[HDU.scala 44:101]
  assign _T_63 = _T_61 & _T_62; // @[HDU.scala 44:90]
  assign _T_64 = _T_60 & _T_63; // @[HDU.scala 44:65]
  assign _T_73 = _T_60 & _T_61; // @[HDU.scala 47:71]
  assign _T_81 = _T_60 & _T_62; // @[HDU.scala 49:71]
  assign _GEN_5 = _T_81 ? 2'h1 : _GEN_4; // @[HDU.scala 49:95]
  assign _GEN_6 = _T_73 ? 2'h1 : _GEN_3; // @[HDU.scala 47:95]
  assign _GEN_7 = _T_73 ? _GEN_4 : _GEN_5; // @[HDU.scala 47:95]
  assign io_forwardA = _T_64 ? 2'h1 : _GEN_6; // @[HDU.scala 28:21 HDU.scala 33:29 HDU.scala 36:29 HDU.scala 45:29 HDU.scala 48:29]
  assign io_forwardB = _T_64 ? 2'h1 : _GEN_7; // @[HDU.scala 29:21 HDU.scala 34:29 HDU.scala 38:29 HDU.scala 46:29 HDU.scala 50:29]
endmodule
