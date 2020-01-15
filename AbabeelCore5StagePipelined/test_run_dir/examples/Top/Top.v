module ITD(
  input  [6:0] io_opCode,
  output       io_RType,
  output       io_Load,
  output       io_Store,
  output       io_Branch,
  output       io_IType,
  output       io_Jalr,
  output       io_Jal,
  output       io_Lui
);
  wire  _T_32; // @[ITD.scala 27:24]
  wire  _T_35; // @[ITD.scala 29:30]
  wire  _T_38; // @[ITD.scala 31:30]
  wire  _T_41; // @[ITD.scala 33:30]
  wire  _T_44; // @[ITD.scala 35:30]
  wire  _T_47; // @[ITD.scala 37:30]
  wire  _T_50; // @[ITD.scala 39:30]
  wire  _T_53; // @[ITD.scala 41:30]
  wire  _GEN_2; // @[ITD.scala 39:47]
  wire  _GEN_4; // @[ITD.scala 37:47]
  wire  _GEN_5; // @[ITD.scala 37:47]
  wire  _GEN_7; // @[ITD.scala 35:47]
  wire  _GEN_8; // @[ITD.scala 35:47]
  wire  _GEN_9; // @[ITD.scala 35:47]
  wire  _GEN_11; // @[ITD.scala 33:47]
  wire  _GEN_12; // @[ITD.scala 33:47]
  wire  _GEN_13; // @[ITD.scala 33:47]
  wire  _GEN_14; // @[ITD.scala 33:47]
  wire  _GEN_16; // @[ITD.scala 31:47]
  wire  _GEN_17; // @[ITD.scala 31:47]
  wire  _GEN_18; // @[ITD.scala 31:47]
  wire  _GEN_19; // @[ITD.scala 31:47]
  wire  _GEN_20; // @[ITD.scala 31:47]
  wire  _GEN_22; // @[ITD.scala 29:47]
  wire  _GEN_23; // @[ITD.scala 29:47]
  wire  _GEN_24; // @[ITD.scala 29:47]
  wire  _GEN_25; // @[ITD.scala 29:47]
  wire  _GEN_26; // @[ITD.scala 29:47]
  wire  _GEN_27; // @[ITD.scala 29:47]
  assign _T_32 = io_opCode == 7'h33; // @[ITD.scala 27:24]
  assign _T_35 = io_opCode == 7'h3; // @[ITD.scala 29:30]
  assign _T_38 = io_opCode == 7'h23; // @[ITD.scala 31:30]
  assign _T_41 = io_opCode == 7'h63; // @[ITD.scala 33:30]
  assign _T_44 = io_opCode == 7'h13; // @[ITD.scala 35:30]
  assign _T_47 = io_opCode == 7'h67; // @[ITD.scala 37:30]
  assign _T_50 = io_opCode == 7'h6f; // @[ITD.scala 39:30]
  assign _T_53 = io_opCode == 7'h37; // @[ITD.scala 41:30]
  assign _GEN_2 = _T_50 ? 1'h0 : _T_53; // @[ITD.scala 39:47]
  assign _GEN_4 = _T_47 ? 1'h0 : _T_50; // @[ITD.scala 37:47]
  assign _GEN_5 = _T_47 ? 1'h0 : _GEN_2; // @[ITD.scala 37:47]
  assign _GEN_7 = _T_44 ? 1'h0 : _T_47; // @[ITD.scala 35:47]
  assign _GEN_8 = _T_44 ? 1'h0 : _GEN_4; // @[ITD.scala 35:47]
  assign _GEN_9 = _T_44 ? 1'h0 : _GEN_5; // @[ITD.scala 35:47]
  assign _GEN_11 = _T_41 ? 1'h0 : _T_44; // @[ITD.scala 33:47]
  assign _GEN_12 = _T_41 ? 1'h0 : _GEN_7; // @[ITD.scala 33:47]
  assign _GEN_13 = _T_41 ? 1'h0 : _GEN_8; // @[ITD.scala 33:47]
  assign _GEN_14 = _T_41 ? 1'h0 : _GEN_9; // @[ITD.scala 33:47]
  assign _GEN_16 = _T_38 ? 1'h0 : _T_41; // @[ITD.scala 31:47]
  assign _GEN_17 = _T_38 ? 1'h0 : _GEN_11; // @[ITD.scala 31:47]
  assign _GEN_18 = _T_38 ? 1'h0 : _GEN_12; // @[ITD.scala 31:47]
  assign _GEN_19 = _T_38 ? 1'h0 : _GEN_13; // @[ITD.scala 31:47]
  assign _GEN_20 = _T_38 ? 1'h0 : _GEN_14; // @[ITD.scala 31:47]
  assign _GEN_22 = _T_35 ? 1'h0 : _T_38; // @[ITD.scala 29:47]
  assign _GEN_23 = _T_35 ? 1'h0 : _GEN_16; // @[ITD.scala 29:47]
  assign _GEN_24 = _T_35 ? 1'h0 : _GEN_17; // @[ITD.scala 29:47]
  assign _GEN_25 = _T_35 ? 1'h0 : _GEN_18; // @[ITD.scala 29:47]
  assign _GEN_26 = _T_35 ? 1'h0 : _GEN_19; // @[ITD.scala 29:47]
  assign _GEN_27 = _T_35 ? 1'h0 : _GEN_20; // @[ITD.scala 29:47]
  assign io_RType = io_opCode == 7'h33; // @[ITD.scala 18:18 ITD.scala 28:26]
  assign io_Load = _T_32 ? 1'h0 : _T_35; // @[ITD.scala 19:17 ITD.scala 30:25]
  assign io_Store = _T_32 ? 1'h0 : _GEN_22; // @[ITD.scala 20:18 ITD.scala 32:26]
  assign io_Branch = _T_32 ? 1'h0 : _GEN_23; // @[ITD.scala 21:19 ITD.scala 34:27]
  assign io_IType = _T_32 ? 1'h0 : _GEN_24; // @[ITD.scala 22:18 ITD.scala 36:26]
  assign io_Jalr = _T_32 ? 1'h0 : _GEN_25; // @[ITD.scala 23:17 ITD.scala 38:25]
  assign io_Jal = _T_32 ? 1'h0 : _GEN_26; // @[ITD.scala 24:16 ITD.scala 40:24]
  assign io_Lui = _T_32 ? 1'h0 : _GEN_27; // @[ITD.scala 25:16 ITD.scala 42:24]
endmodule
module CD(
  input        io_RType,
  input        io_Load,
  input        io_Store,
  input        io_SBType,
  input        io_IType,
  input        io_Jalr,
  input        io_Jal,
  input        io_Lui,
  output       io_MemWrite,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemToReg,
  output [2:0] io_AluOp,
  output [1:0] io_Operand_aSel,
  output       io_Operand_bSel,
  output [1:0] io_ExtendSel
);
  wire [2:0] _GEN_1; // @[CD.scala 73:43]
  wire [1:0] _GEN_2; // @[CD.scala 73:43]
  wire  _GEN_3; // @[CD.scala 67:43]
  wire [2:0] _GEN_4; // @[CD.scala 67:43]
  wire [1:0] _GEN_5; // @[CD.scala 67:43]
  wire  _GEN_7; // @[CD.scala 67:43]
  wire  _GEN_8; // @[CD.scala 62:44]
  wire [2:0] _GEN_9; // @[CD.scala 62:44]
  wire [1:0] _GEN_10; // @[CD.scala 62:44]
  wire  _GEN_12; // @[CD.scala 62:44]
  wire  _GEN_13; // @[CD.scala 58:45]
  wire [2:0] _GEN_14; // @[CD.scala 58:45]
  wire  _GEN_15; // @[CD.scala 58:45]
  wire [1:0] _GEN_16; // @[CD.scala 58:45]
  wire  _GEN_18; // @[CD.scala 58:45]
  wire [2:0] _GEN_20; // @[CD.scala 54:46]
  wire  _GEN_22; // @[CD.scala 54:46]
  wire  _GEN_23; // @[CD.scala 54:46]
  wire [1:0] _GEN_24; // @[CD.scala 54:46]
  wire  _GEN_25; // @[CD.scala 54:46]
  wire [2:0] _GEN_27; // @[CD.scala 49:45]
  wire  _GEN_28; // @[CD.scala 49:45]
  wire [1:0] _GEN_29; // @[CD.scala 49:45]
  wire  _GEN_32; // @[CD.scala 49:45]
  wire [1:0] _GEN_33; // @[CD.scala 49:45]
  wire  _GEN_35; // @[CD.scala 43:44]
  wire [2:0] _GEN_36; // @[CD.scala 43:44]
  wire  _GEN_37; // @[CD.scala 43:44]
  wire  _GEN_38; // @[CD.scala 43:44]
  wire [1:0] _GEN_39; // @[CD.scala 43:44]
  wire [1:0] _GEN_42; // @[CD.scala 43:44]
  assign _GEN_1 = io_Lui ? 3'h6 : 3'h0; // @[CD.scala 73:43]
  assign _GEN_2 = io_Lui ? 2'h3 : 2'h0; // @[CD.scala 73:43]
  assign _GEN_3 = io_Jal ? 1'h1 : io_Lui; // @[CD.scala 67:43]
  assign _GEN_4 = io_Jal ? 3'h3 : _GEN_1; // @[CD.scala 67:43]
  assign _GEN_5 = io_Jal ? 2'h2 : _GEN_2; // @[CD.scala 67:43]
  assign _GEN_7 = io_Jal ? 1'h0 : io_Lui; // @[CD.scala 67:43]
  assign _GEN_8 = io_Jalr ? 1'h1 : _GEN_3; // @[CD.scala 62:44]
  assign _GEN_9 = io_Jalr ? 3'h3 : _GEN_4; // @[CD.scala 62:44]
  assign _GEN_10 = io_Jalr ? 2'h2 : _GEN_5; // @[CD.scala 62:44]
  assign _GEN_12 = io_Jalr ? 1'h0 : _GEN_7; // @[CD.scala 62:44]
  assign _GEN_13 = io_IType ? 1'h1 : _GEN_8; // @[CD.scala 58:45]
  assign _GEN_14 = io_IType ? 3'h1 : _GEN_9; // @[CD.scala 58:45]
  assign _GEN_15 = io_IType ? 1'h1 : _GEN_12; // @[CD.scala 58:45]
  assign _GEN_16 = io_IType ? 2'h0 : _GEN_10; // @[CD.scala 58:45]
  assign _GEN_18 = io_IType ? 1'h0 : _GEN_12; // @[CD.scala 58:45]
  assign _GEN_20 = io_SBType ? 3'h2 : _GEN_14; // @[CD.scala 54:46]
  assign _GEN_22 = io_SBType ? 1'h0 : _GEN_13; // @[CD.scala 54:46]
  assign _GEN_23 = io_SBType ? 1'h0 : _GEN_15; // @[CD.scala 54:46]
  assign _GEN_24 = io_SBType ? 2'h0 : _GEN_16; // @[CD.scala 54:46]
  assign _GEN_25 = io_SBType ? 1'h0 : _GEN_18; // @[CD.scala 54:46]
  assign _GEN_27 = io_Store ? 3'h5 : _GEN_20; // @[CD.scala 49:45]
  assign _GEN_28 = io_Store ? 1'h1 : _GEN_23; // @[CD.scala 49:45]
  assign _GEN_29 = io_Store ? 2'h2 : {{1'd0}, _GEN_25}; // @[CD.scala 49:45]
  assign _GEN_32 = io_Store ? 1'h0 : _GEN_22; // @[CD.scala 49:45]
  assign _GEN_33 = io_Store ? 2'h0 : _GEN_24; // @[CD.scala 49:45]
  assign _GEN_35 = io_Load ? 1'h1 : _GEN_32; // @[CD.scala 43:44]
  assign _GEN_36 = io_Load ? 3'h4 : _GEN_27; // @[CD.scala 43:44]
  assign _GEN_37 = io_Load ? 1'h1 : _GEN_28; // @[CD.scala 43:44]
  assign _GEN_38 = io_Load ? 1'h0 : io_Store; // @[CD.scala 43:44]
  assign _GEN_39 = io_Load ? 2'h0 : _GEN_29; // @[CD.scala 43:44]
  assign _GEN_42 = io_Load ? 2'h0 : _GEN_33; // @[CD.scala 43:44]
  assign io_MemWrite = io_RType ? 1'h0 : _GEN_38; // @[CD.scala 29:29 CD.scala 50:37]
  assign io_MemRead = io_RType ? 1'h0 : io_Load; // @[CD.scala 31:28 CD.scala 44:36]
  assign io_RegWrite = io_RType ? 1'h1 : _GEN_35; // @[CD.scala 32:29 CD.scala 42:37 CD.scala 45:37 CD.scala 59:37 CD.scala 63:37 CD.scala 68:37 CD.scala 74:37]
  assign io_MemToReg = io_RType ? 1'h0 : io_Load; // @[CD.scala 33:29 CD.scala 46:37]
  assign io_AluOp = io_RType ? 3'h0 : _GEN_36; // @[CD.scala 34:26 CD.scala 47:34 CD.scala 51:34 CD.scala 56:34 CD.scala 60:34 CD.scala 64:34 CD.scala 69:34 CD.scala 75:34]
  assign io_Operand_aSel = io_RType ? 2'h0 : _GEN_42; // @[CD.scala 35:33 CD.scala 65:41 CD.scala 70:41 CD.scala 76:41]
  assign io_Operand_bSel = io_RType ? 1'h0 : _GEN_37; // @[CD.scala 36:33 CD.scala 48:41 CD.scala 52:41 CD.scala 61:41 CD.scala 77:41]
  assign io_ExtendSel = io_RType ? 2'h0 : _GEN_39; // @[CD.scala 37:30 CD.scala 53:38 CD.scala 78:38]
endmodule
module Control(
  input  [6:0] io_OpCode,
  output       io_MemWrite,
  output       io_MemRead,
  output       io_RegWrite,
  output       io_MemToReg,
  output [2:0] io_AluOp,
  output [1:0] io_Operand_aSel,
  output       io_Operand_bSel,
  output [1:0] io_ExtendSel
);
  wire [6:0] ID_io_opCode; // @[Control.scala 21:32]
  wire  ID_io_RType; // @[Control.scala 21:32]
  wire  ID_io_Load; // @[Control.scala 21:32]
  wire  ID_io_Store; // @[Control.scala 21:32]
  wire  ID_io_Branch; // @[Control.scala 21:32]
  wire  ID_io_IType; // @[Control.scala 21:32]
  wire  ID_io_Jalr; // @[Control.scala 21:32]
  wire  ID_io_Jal; // @[Control.scala 21:32]
  wire  ID_io_Lui; // @[Control.scala 21:32]
  wire  CD_io_RType; // @[Control.scala 22:32]
  wire  CD_io_Load; // @[Control.scala 22:32]
  wire  CD_io_Store; // @[Control.scala 22:32]
  wire  CD_io_SBType; // @[Control.scala 22:32]
  wire  CD_io_IType; // @[Control.scala 22:32]
  wire  CD_io_Jalr; // @[Control.scala 22:32]
  wire  CD_io_Jal; // @[Control.scala 22:32]
  wire  CD_io_Lui; // @[Control.scala 22:32]
  wire  CD_io_MemWrite; // @[Control.scala 22:32]
  wire  CD_io_MemRead; // @[Control.scala 22:32]
  wire  CD_io_RegWrite; // @[Control.scala 22:32]
  wire  CD_io_MemToReg; // @[Control.scala 22:32]
  wire [2:0] CD_io_AluOp; // @[Control.scala 22:32]
  wire [1:0] CD_io_Operand_aSel; // @[Control.scala 22:32]
  wire  CD_io_Operand_bSel; // @[Control.scala 22:32]
  wire [1:0] CD_io_ExtendSel; // @[Control.scala 22:32]
  ITD ID ( // @[Control.scala 21:32]
    .io_opCode(ID_io_opCode),
    .io_RType(ID_io_RType),
    .io_Load(ID_io_Load),
    .io_Store(ID_io_Store),
    .io_Branch(ID_io_Branch),
    .io_IType(ID_io_IType),
    .io_Jalr(ID_io_Jalr),
    .io_Jal(ID_io_Jal),
    .io_Lui(ID_io_Lui)
  );
  CD CD ( // @[Control.scala 22:32]
    .io_RType(CD_io_RType),
    .io_Load(CD_io_Load),
    .io_Store(CD_io_Store),
    .io_SBType(CD_io_SBType),
    .io_IType(CD_io_IType),
    .io_Jalr(CD_io_Jalr),
    .io_Jal(CD_io_Jal),
    .io_Lui(CD_io_Lui),
    .io_MemWrite(CD_io_MemWrite),
    .io_MemRead(CD_io_MemRead),
    .io_RegWrite(CD_io_RegWrite),
    .io_MemToReg(CD_io_MemToReg),
    .io_AluOp(CD_io_AluOp),
    .io_Operand_aSel(CD_io_Operand_aSel),
    .io_Operand_bSel(CD_io_Operand_bSel),
    .io_ExtendSel(CD_io_ExtendSel)
  );
  assign io_MemWrite = CD_io_MemWrite; // @[Control.scala 36:29]
  assign io_MemRead = CD_io_MemRead; // @[Control.scala 38:28]
  assign io_RegWrite = CD_io_RegWrite; // @[Control.scala 39:29]
  assign io_MemToReg = CD_io_MemToReg; // @[Control.scala 40:29]
  assign io_AluOp = CD_io_AluOp; // @[Control.scala 41:26]
  assign io_Operand_aSel = CD_io_Operand_aSel; // @[Control.scala 42:33]
  assign io_Operand_bSel = CD_io_Operand_bSel; // @[Control.scala 43:33]
  assign io_ExtendSel = CD_io_ExtendSel; // @[Control.scala 44:30]
  assign ID_io_opCode = io_OpCode; // @[Control.scala 24:30]
  assign CD_io_RType = ID_io_RType; // @[Control.scala 27:29]
  assign CD_io_Load = ID_io_Load; // @[Control.scala 28:28]
  assign CD_io_Store = ID_io_Store; // @[Control.scala 29:29]
  assign CD_io_SBType = ID_io_Branch; // @[Control.scala 30:30]
  assign CD_io_IType = ID_io_IType; // @[Control.scala 31:29]
  assign CD_io_Jalr = ID_io_Jalr; // @[Control.scala 32:28]
  assign CD_io_Jal = ID_io_Jal; // @[Control.scala 33:27]
  assign CD_io_Lui = ID_io_Lui; // @[Control.scala 34:27]
endmodule
module RegFile(
  input         clock,
  input         io_RegWrite,
  input  [4:0]  io_rs1,
  input  [4:0]  io_rs2,
  input  [4:0]  io_rd,
  input  [31:0] io_WriteData,
  output [31:0] io_rd1,
  output [31:0] io_rd2
);
  reg [31:0] registers_0; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_0;
  reg [31:0] registers_1; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_1;
  reg [31:0] registers_2; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_2;
  reg [31:0] registers_3; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_3;
  reg [31:0] registers_4; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_4;
  reg [31:0] registers_5; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_5;
  reg [31:0] registers_6; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_6;
  reg [31:0] registers_7; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_7;
  reg [31:0] registers_8; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_8;
  reg [31:0] registers_9; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_9;
  reg [31:0] registers_10; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_10;
  reg [31:0] registers_11; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_11;
  reg [31:0] registers_12; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_12;
  reg [31:0] registers_13; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_13;
  reg [31:0] registers_14; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_14;
  reg [31:0] registers_15; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_15;
  reg [31:0] registers_16; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_16;
  reg [31:0] registers_17; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_17;
  reg [31:0] registers_18; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_18;
  reg [31:0] registers_19; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_19;
  reg [31:0] registers_20; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_20;
  reg [31:0] registers_21; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_21;
  reg [31:0] registers_22; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_22;
  reg [31:0] registers_23; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_23;
  reg [31:0] registers_24; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_24;
  reg [31:0] registers_25; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_25;
  reg [31:0] registers_26; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_26;
  reg [31:0] registers_27; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_27;
  reg [31:0] registers_28; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_28;
  reg [31:0] registers_29; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_29;
  reg [31:0] registers_30; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_30;
  reg [31:0] registers_31; // @[RegFile.scala 17:28]
  reg [31:0] _RAND_31;
  wire [31:0] _GEN_1; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_2; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_3; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_4; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_5; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_6; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_7; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_8; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_9; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_10; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_11; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_12; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_13; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_14; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_15; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_16; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_17; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_18; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_19; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_20; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_21; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_22; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_23; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_24; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_25; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_26; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_27; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_28; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_29; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_30; // @[RegFile.scala 19:16]
  wire [31:0] _GEN_33; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_34; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_35; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_36; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_37; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_38; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_39; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_40; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_41; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_42; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_43; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_44; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_45; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_46; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_47; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_48; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_49; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_50; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_51; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_52; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_53; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_54; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_55; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_56; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_57; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_58; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_59; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_60; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_61; // @[RegFile.scala 20:16]
  wire [31:0] _GEN_62; // @[RegFile.scala 20:16]
  wire  _T_62; // @[RegFile.scala 22:28]
  wire [31:0] _GEN_65; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_66; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_67; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_68; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_69; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_70; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_71; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_72; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_73; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_74; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_75; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_76; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_77; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_78; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_79; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_80; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_81; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_82; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_83; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_84; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_85; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_86; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_87; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_88; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_89; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_90; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_91; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_92; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_93; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_94; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_95; // @[RegFile.scala 23:42]
  wire [31:0] _GEN_96; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_97; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_98; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_99; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_100; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_101; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_102; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_103; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_104; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_105; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_106; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_107; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_108; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_109; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_110; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_111; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_112; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_113; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_114; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_115; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_116; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_117; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_118; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_119; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_120; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_121; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_122; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_123; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_124; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_125; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_126; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_127; // @[RegFile.scala 25:42]
  wire [31:0] _GEN_129; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_130; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_131; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_132; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_133; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_134; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_135; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_136; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_137; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_138; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_139; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_140; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_141; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_142; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_143; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_144; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_145; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_146; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_147; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_148; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_149; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_150; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_151; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_152; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_153; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_154; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_155; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_156; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_157; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_158; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_159; // @[RegFile.scala 22:43]
  wire [31:0] _GEN_160; // @[RegFile.scala 22:43]
  assign _GEN_1 = 5'h1 == io_rs1 ? $signed(registers_1) : $signed(registers_0); // @[RegFile.scala 19:16]
  assign _GEN_2 = 5'h2 == io_rs1 ? $signed(registers_2) : $signed(_GEN_1); // @[RegFile.scala 19:16]
  assign _GEN_3 = 5'h3 == io_rs1 ? $signed(registers_3) : $signed(_GEN_2); // @[RegFile.scala 19:16]
  assign _GEN_4 = 5'h4 == io_rs1 ? $signed(registers_4) : $signed(_GEN_3); // @[RegFile.scala 19:16]
  assign _GEN_5 = 5'h5 == io_rs1 ? $signed(registers_5) : $signed(_GEN_4); // @[RegFile.scala 19:16]
  assign _GEN_6 = 5'h6 == io_rs1 ? $signed(registers_6) : $signed(_GEN_5); // @[RegFile.scala 19:16]
  assign _GEN_7 = 5'h7 == io_rs1 ? $signed(registers_7) : $signed(_GEN_6); // @[RegFile.scala 19:16]
  assign _GEN_8 = 5'h8 == io_rs1 ? $signed(registers_8) : $signed(_GEN_7); // @[RegFile.scala 19:16]
  assign _GEN_9 = 5'h9 == io_rs1 ? $signed(registers_9) : $signed(_GEN_8); // @[RegFile.scala 19:16]
  assign _GEN_10 = 5'ha == io_rs1 ? $signed(registers_10) : $signed(_GEN_9); // @[RegFile.scala 19:16]
  assign _GEN_11 = 5'hb == io_rs1 ? $signed(registers_11) : $signed(_GEN_10); // @[RegFile.scala 19:16]
  assign _GEN_12 = 5'hc == io_rs1 ? $signed(registers_12) : $signed(_GEN_11); // @[RegFile.scala 19:16]
  assign _GEN_13 = 5'hd == io_rs1 ? $signed(registers_13) : $signed(_GEN_12); // @[RegFile.scala 19:16]
  assign _GEN_14 = 5'he == io_rs1 ? $signed(registers_14) : $signed(_GEN_13); // @[RegFile.scala 19:16]
  assign _GEN_15 = 5'hf == io_rs1 ? $signed(registers_15) : $signed(_GEN_14); // @[RegFile.scala 19:16]
  assign _GEN_16 = 5'h10 == io_rs1 ? $signed(registers_16) : $signed(_GEN_15); // @[RegFile.scala 19:16]
  assign _GEN_17 = 5'h11 == io_rs1 ? $signed(registers_17) : $signed(_GEN_16); // @[RegFile.scala 19:16]
  assign _GEN_18 = 5'h12 == io_rs1 ? $signed(registers_18) : $signed(_GEN_17); // @[RegFile.scala 19:16]
  assign _GEN_19 = 5'h13 == io_rs1 ? $signed(registers_19) : $signed(_GEN_18); // @[RegFile.scala 19:16]
  assign _GEN_20 = 5'h14 == io_rs1 ? $signed(registers_20) : $signed(_GEN_19); // @[RegFile.scala 19:16]
  assign _GEN_21 = 5'h15 == io_rs1 ? $signed(registers_21) : $signed(_GEN_20); // @[RegFile.scala 19:16]
  assign _GEN_22 = 5'h16 == io_rs1 ? $signed(registers_22) : $signed(_GEN_21); // @[RegFile.scala 19:16]
  assign _GEN_23 = 5'h17 == io_rs1 ? $signed(registers_23) : $signed(_GEN_22); // @[RegFile.scala 19:16]
  assign _GEN_24 = 5'h18 == io_rs1 ? $signed(registers_24) : $signed(_GEN_23); // @[RegFile.scala 19:16]
  assign _GEN_25 = 5'h19 == io_rs1 ? $signed(registers_25) : $signed(_GEN_24); // @[RegFile.scala 19:16]
  assign _GEN_26 = 5'h1a == io_rs1 ? $signed(registers_26) : $signed(_GEN_25); // @[RegFile.scala 19:16]
  assign _GEN_27 = 5'h1b == io_rs1 ? $signed(registers_27) : $signed(_GEN_26); // @[RegFile.scala 19:16]
  assign _GEN_28 = 5'h1c == io_rs1 ? $signed(registers_28) : $signed(_GEN_27); // @[RegFile.scala 19:16]
  assign _GEN_29 = 5'h1d == io_rs1 ? $signed(registers_29) : $signed(_GEN_28); // @[RegFile.scala 19:16]
  assign _GEN_30 = 5'h1e == io_rs1 ? $signed(registers_30) : $signed(_GEN_29); // @[RegFile.scala 19:16]
  assign _GEN_33 = 5'h1 == io_rs2 ? $signed(registers_1) : $signed(registers_0); // @[RegFile.scala 20:16]
  assign _GEN_34 = 5'h2 == io_rs2 ? $signed(registers_2) : $signed(_GEN_33); // @[RegFile.scala 20:16]
  assign _GEN_35 = 5'h3 == io_rs2 ? $signed(registers_3) : $signed(_GEN_34); // @[RegFile.scala 20:16]
  assign _GEN_36 = 5'h4 == io_rs2 ? $signed(registers_4) : $signed(_GEN_35); // @[RegFile.scala 20:16]
  assign _GEN_37 = 5'h5 == io_rs2 ? $signed(registers_5) : $signed(_GEN_36); // @[RegFile.scala 20:16]
  assign _GEN_38 = 5'h6 == io_rs2 ? $signed(registers_6) : $signed(_GEN_37); // @[RegFile.scala 20:16]
  assign _GEN_39 = 5'h7 == io_rs2 ? $signed(registers_7) : $signed(_GEN_38); // @[RegFile.scala 20:16]
  assign _GEN_40 = 5'h8 == io_rs2 ? $signed(registers_8) : $signed(_GEN_39); // @[RegFile.scala 20:16]
  assign _GEN_41 = 5'h9 == io_rs2 ? $signed(registers_9) : $signed(_GEN_40); // @[RegFile.scala 20:16]
  assign _GEN_42 = 5'ha == io_rs2 ? $signed(registers_10) : $signed(_GEN_41); // @[RegFile.scala 20:16]
  assign _GEN_43 = 5'hb == io_rs2 ? $signed(registers_11) : $signed(_GEN_42); // @[RegFile.scala 20:16]
  assign _GEN_44 = 5'hc == io_rs2 ? $signed(registers_12) : $signed(_GEN_43); // @[RegFile.scala 20:16]
  assign _GEN_45 = 5'hd == io_rs2 ? $signed(registers_13) : $signed(_GEN_44); // @[RegFile.scala 20:16]
  assign _GEN_46 = 5'he == io_rs2 ? $signed(registers_14) : $signed(_GEN_45); // @[RegFile.scala 20:16]
  assign _GEN_47 = 5'hf == io_rs2 ? $signed(registers_15) : $signed(_GEN_46); // @[RegFile.scala 20:16]
  assign _GEN_48 = 5'h10 == io_rs2 ? $signed(registers_16) : $signed(_GEN_47); // @[RegFile.scala 20:16]
  assign _GEN_49 = 5'h11 == io_rs2 ? $signed(registers_17) : $signed(_GEN_48); // @[RegFile.scala 20:16]
  assign _GEN_50 = 5'h12 == io_rs2 ? $signed(registers_18) : $signed(_GEN_49); // @[RegFile.scala 20:16]
  assign _GEN_51 = 5'h13 == io_rs2 ? $signed(registers_19) : $signed(_GEN_50); // @[RegFile.scala 20:16]
  assign _GEN_52 = 5'h14 == io_rs2 ? $signed(registers_20) : $signed(_GEN_51); // @[RegFile.scala 20:16]
  assign _GEN_53 = 5'h15 == io_rs2 ? $signed(registers_21) : $signed(_GEN_52); // @[RegFile.scala 20:16]
  assign _GEN_54 = 5'h16 == io_rs2 ? $signed(registers_22) : $signed(_GEN_53); // @[RegFile.scala 20:16]
  assign _GEN_55 = 5'h17 == io_rs2 ? $signed(registers_23) : $signed(_GEN_54); // @[RegFile.scala 20:16]
  assign _GEN_56 = 5'h18 == io_rs2 ? $signed(registers_24) : $signed(_GEN_55); // @[RegFile.scala 20:16]
  assign _GEN_57 = 5'h19 == io_rs2 ? $signed(registers_25) : $signed(_GEN_56); // @[RegFile.scala 20:16]
  assign _GEN_58 = 5'h1a == io_rs2 ? $signed(registers_26) : $signed(_GEN_57); // @[RegFile.scala 20:16]
  assign _GEN_59 = 5'h1b == io_rs2 ? $signed(registers_27) : $signed(_GEN_58); // @[RegFile.scala 20:16]
  assign _GEN_60 = 5'h1c == io_rs2 ? $signed(registers_28) : $signed(_GEN_59); // @[RegFile.scala 20:16]
  assign _GEN_61 = 5'h1d == io_rs2 ? $signed(registers_29) : $signed(_GEN_60); // @[RegFile.scala 20:16]
  assign _GEN_62 = 5'h1e == io_rs2 ? $signed(registers_30) : $signed(_GEN_61); // @[RegFile.scala 20:16]
  assign _T_62 = io_rd == 5'h0; // @[RegFile.scala 22:28]
  assign _GEN_65 = 5'h1 == io_rd ? $signed(32'sh0) : $signed(registers_1); // @[RegFile.scala 23:42]
  assign _GEN_66 = 5'h2 == io_rd ? $signed(32'sh0) : $signed(registers_2); // @[RegFile.scala 23:42]
  assign _GEN_67 = 5'h3 == io_rd ? $signed(32'sh0) : $signed(registers_3); // @[RegFile.scala 23:42]
  assign _GEN_68 = 5'h4 == io_rd ? $signed(32'sh0) : $signed(registers_4); // @[RegFile.scala 23:42]
  assign _GEN_69 = 5'h5 == io_rd ? $signed(32'sh0) : $signed(registers_5); // @[RegFile.scala 23:42]
  assign _GEN_70 = 5'h6 == io_rd ? $signed(32'sh0) : $signed(registers_6); // @[RegFile.scala 23:42]
  assign _GEN_71 = 5'h7 == io_rd ? $signed(32'sh0) : $signed(registers_7); // @[RegFile.scala 23:42]
  assign _GEN_72 = 5'h8 == io_rd ? $signed(32'sh0) : $signed(registers_8); // @[RegFile.scala 23:42]
  assign _GEN_73 = 5'h9 == io_rd ? $signed(32'sh0) : $signed(registers_9); // @[RegFile.scala 23:42]
  assign _GEN_74 = 5'ha == io_rd ? $signed(32'sh0) : $signed(registers_10); // @[RegFile.scala 23:42]
  assign _GEN_75 = 5'hb == io_rd ? $signed(32'sh0) : $signed(registers_11); // @[RegFile.scala 23:42]
  assign _GEN_76 = 5'hc == io_rd ? $signed(32'sh0) : $signed(registers_12); // @[RegFile.scala 23:42]
  assign _GEN_77 = 5'hd == io_rd ? $signed(32'sh0) : $signed(registers_13); // @[RegFile.scala 23:42]
  assign _GEN_78 = 5'he == io_rd ? $signed(32'sh0) : $signed(registers_14); // @[RegFile.scala 23:42]
  assign _GEN_79 = 5'hf == io_rd ? $signed(32'sh0) : $signed(registers_15); // @[RegFile.scala 23:42]
  assign _GEN_80 = 5'h10 == io_rd ? $signed(32'sh0) : $signed(registers_16); // @[RegFile.scala 23:42]
  assign _GEN_81 = 5'h11 == io_rd ? $signed(32'sh0) : $signed(registers_17); // @[RegFile.scala 23:42]
  assign _GEN_82 = 5'h12 == io_rd ? $signed(32'sh0) : $signed(registers_18); // @[RegFile.scala 23:42]
  assign _GEN_83 = 5'h13 == io_rd ? $signed(32'sh0) : $signed(registers_19); // @[RegFile.scala 23:42]
  assign _GEN_84 = 5'h14 == io_rd ? $signed(32'sh0) : $signed(registers_20); // @[RegFile.scala 23:42]
  assign _GEN_85 = 5'h15 == io_rd ? $signed(32'sh0) : $signed(registers_21); // @[RegFile.scala 23:42]
  assign _GEN_86 = 5'h16 == io_rd ? $signed(32'sh0) : $signed(registers_22); // @[RegFile.scala 23:42]
  assign _GEN_87 = 5'h17 == io_rd ? $signed(32'sh0) : $signed(registers_23); // @[RegFile.scala 23:42]
  assign _GEN_88 = 5'h18 == io_rd ? $signed(32'sh0) : $signed(registers_24); // @[RegFile.scala 23:42]
  assign _GEN_89 = 5'h19 == io_rd ? $signed(32'sh0) : $signed(registers_25); // @[RegFile.scala 23:42]
  assign _GEN_90 = 5'h1a == io_rd ? $signed(32'sh0) : $signed(registers_26); // @[RegFile.scala 23:42]
  assign _GEN_91 = 5'h1b == io_rd ? $signed(32'sh0) : $signed(registers_27); // @[RegFile.scala 23:42]
  assign _GEN_92 = 5'h1c == io_rd ? $signed(32'sh0) : $signed(registers_28); // @[RegFile.scala 23:42]
  assign _GEN_93 = 5'h1d == io_rd ? $signed(32'sh0) : $signed(registers_29); // @[RegFile.scala 23:42]
  assign _GEN_94 = 5'h1e == io_rd ? $signed(32'sh0) : $signed(registers_30); // @[RegFile.scala 23:42]
  assign _GEN_95 = 5'h1f == io_rd ? $signed(32'sh0) : $signed(registers_31); // @[RegFile.scala 23:42]
  assign _GEN_96 = 5'h0 == io_rd ? $signed(io_WriteData) : $signed(32'sh0); // @[RegFile.scala 25:42]
  assign _GEN_97 = 5'h1 == io_rd ? $signed(io_WriteData) : $signed(registers_1); // @[RegFile.scala 25:42]
  assign _GEN_98 = 5'h2 == io_rd ? $signed(io_WriteData) : $signed(registers_2); // @[RegFile.scala 25:42]
  assign _GEN_99 = 5'h3 == io_rd ? $signed(io_WriteData) : $signed(registers_3); // @[RegFile.scala 25:42]
  assign _GEN_100 = 5'h4 == io_rd ? $signed(io_WriteData) : $signed(registers_4); // @[RegFile.scala 25:42]
  assign _GEN_101 = 5'h5 == io_rd ? $signed(io_WriteData) : $signed(registers_5); // @[RegFile.scala 25:42]
  assign _GEN_102 = 5'h6 == io_rd ? $signed(io_WriteData) : $signed(registers_6); // @[RegFile.scala 25:42]
  assign _GEN_103 = 5'h7 == io_rd ? $signed(io_WriteData) : $signed(registers_7); // @[RegFile.scala 25:42]
  assign _GEN_104 = 5'h8 == io_rd ? $signed(io_WriteData) : $signed(registers_8); // @[RegFile.scala 25:42]
  assign _GEN_105 = 5'h9 == io_rd ? $signed(io_WriteData) : $signed(registers_9); // @[RegFile.scala 25:42]
  assign _GEN_106 = 5'ha == io_rd ? $signed(io_WriteData) : $signed(registers_10); // @[RegFile.scala 25:42]
  assign _GEN_107 = 5'hb == io_rd ? $signed(io_WriteData) : $signed(registers_11); // @[RegFile.scala 25:42]
  assign _GEN_108 = 5'hc == io_rd ? $signed(io_WriteData) : $signed(registers_12); // @[RegFile.scala 25:42]
  assign _GEN_109 = 5'hd == io_rd ? $signed(io_WriteData) : $signed(registers_13); // @[RegFile.scala 25:42]
  assign _GEN_110 = 5'he == io_rd ? $signed(io_WriteData) : $signed(registers_14); // @[RegFile.scala 25:42]
  assign _GEN_111 = 5'hf == io_rd ? $signed(io_WriteData) : $signed(registers_15); // @[RegFile.scala 25:42]
  assign _GEN_112 = 5'h10 == io_rd ? $signed(io_WriteData) : $signed(registers_16); // @[RegFile.scala 25:42]
  assign _GEN_113 = 5'h11 == io_rd ? $signed(io_WriteData) : $signed(registers_17); // @[RegFile.scala 25:42]
  assign _GEN_114 = 5'h12 == io_rd ? $signed(io_WriteData) : $signed(registers_18); // @[RegFile.scala 25:42]
  assign _GEN_115 = 5'h13 == io_rd ? $signed(io_WriteData) : $signed(registers_19); // @[RegFile.scala 25:42]
  assign _GEN_116 = 5'h14 == io_rd ? $signed(io_WriteData) : $signed(registers_20); // @[RegFile.scala 25:42]
  assign _GEN_117 = 5'h15 == io_rd ? $signed(io_WriteData) : $signed(registers_21); // @[RegFile.scala 25:42]
  assign _GEN_118 = 5'h16 == io_rd ? $signed(io_WriteData) : $signed(registers_22); // @[RegFile.scala 25:42]
  assign _GEN_119 = 5'h17 == io_rd ? $signed(io_WriteData) : $signed(registers_23); // @[RegFile.scala 25:42]
  assign _GEN_120 = 5'h18 == io_rd ? $signed(io_WriteData) : $signed(registers_24); // @[RegFile.scala 25:42]
  assign _GEN_121 = 5'h19 == io_rd ? $signed(io_WriteData) : $signed(registers_25); // @[RegFile.scala 25:42]
  assign _GEN_122 = 5'h1a == io_rd ? $signed(io_WriteData) : $signed(registers_26); // @[RegFile.scala 25:42]
  assign _GEN_123 = 5'h1b == io_rd ? $signed(io_WriteData) : $signed(registers_27); // @[RegFile.scala 25:42]
  assign _GEN_124 = 5'h1c == io_rd ? $signed(io_WriteData) : $signed(registers_28); // @[RegFile.scala 25:42]
  assign _GEN_125 = 5'h1d == io_rd ? $signed(io_WriteData) : $signed(registers_29); // @[RegFile.scala 25:42]
  assign _GEN_126 = 5'h1e == io_rd ? $signed(io_WriteData) : $signed(registers_30); // @[RegFile.scala 25:42]
  assign _GEN_127 = 5'h1f == io_rd ? $signed(io_WriteData) : $signed(registers_31); // @[RegFile.scala 25:42]
  assign _GEN_129 = _T_62 ? $signed(32'sh0) : $signed(_GEN_96); // @[RegFile.scala 22:43]
  assign _GEN_130 = _T_62 ? $signed(_GEN_65) : $signed(_GEN_97); // @[RegFile.scala 22:43]
  assign _GEN_131 = _T_62 ? $signed(_GEN_66) : $signed(_GEN_98); // @[RegFile.scala 22:43]
  assign _GEN_132 = _T_62 ? $signed(_GEN_67) : $signed(_GEN_99); // @[RegFile.scala 22:43]
  assign _GEN_133 = _T_62 ? $signed(_GEN_68) : $signed(_GEN_100); // @[RegFile.scala 22:43]
  assign _GEN_134 = _T_62 ? $signed(_GEN_69) : $signed(_GEN_101); // @[RegFile.scala 22:43]
  assign _GEN_135 = _T_62 ? $signed(_GEN_70) : $signed(_GEN_102); // @[RegFile.scala 22:43]
  assign _GEN_136 = _T_62 ? $signed(_GEN_71) : $signed(_GEN_103); // @[RegFile.scala 22:43]
  assign _GEN_137 = _T_62 ? $signed(_GEN_72) : $signed(_GEN_104); // @[RegFile.scala 22:43]
  assign _GEN_138 = _T_62 ? $signed(_GEN_73) : $signed(_GEN_105); // @[RegFile.scala 22:43]
  assign _GEN_139 = _T_62 ? $signed(_GEN_74) : $signed(_GEN_106); // @[RegFile.scala 22:43]
  assign _GEN_140 = _T_62 ? $signed(_GEN_75) : $signed(_GEN_107); // @[RegFile.scala 22:43]
  assign _GEN_141 = _T_62 ? $signed(_GEN_76) : $signed(_GEN_108); // @[RegFile.scala 22:43]
  assign _GEN_142 = _T_62 ? $signed(_GEN_77) : $signed(_GEN_109); // @[RegFile.scala 22:43]
  assign _GEN_143 = _T_62 ? $signed(_GEN_78) : $signed(_GEN_110); // @[RegFile.scala 22:43]
  assign _GEN_144 = _T_62 ? $signed(_GEN_79) : $signed(_GEN_111); // @[RegFile.scala 22:43]
  assign _GEN_145 = _T_62 ? $signed(_GEN_80) : $signed(_GEN_112); // @[RegFile.scala 22:43]
  assign _GEN_146 = _T_62 ? $signed(_GEN_81) : $signed(_GEN_113); // @[RegFile.scala 22:43]
  assign _GEN_147 = _T_62 ? $signed(_GEN_82) : $signed(_GEN_114); // @[RegFile.scala 22:43]
  assign _GEN_148 = _T_62 ? $signed(_GEN_83) : $signed(_GEN_115); // @[RegFile.scala 22:43]
  assign _GEN_149 = _T_62 ? $signed(_GEN_84) : $signed(_GEN_116); // @[RegFile.scala 22:43]
  assign _GEN_150 = _T_62 ? $signed(_GEN_85) : $signed(_GEN_117); // @[RegFile.scala 22:43]
  assign _GEN_151 = _T_62 ? $signed(_GEN_86) : $signed(_GEN_118); // @[RegFile.scala 22:43]
  assign _GEN_152 = _T_62 ? $signed(_GEN_87) : $signed(_GEN_119); // @[RegFile.scala 22:43]
  assign _GEN_153 = _T_62 ? $signed(_GEN_88) : $signed(_GEN_120); // @[RegFile.scala 22:43]
  assign _GEN_154 = _T_62 ? $signed(_GEN_89) : $signed(_GEN_121); // @[RegFile.scala 22:43]
  assign _GEN_155 = _T_62 ? $signed(_GEN_90) : $signed(_GEN_122); // @[RegFile.scala 22:43]
  assign _GEN_156 = _T_62 ? $signed(_GEN_91) : $signed(_GEN_123); // @[RegFile.scala 22:43]
  assign _GEN_157 = _T_62 ? $signed(_GEN_92) : $signed(_GEN_124); // @[RegFile.scala 22:43]
  assign _GEN_158 = _T_62 ? $signed(_GEN_93) : $signed(_GEN_125); // @[RegFile.scala 22:43]
  assign _GEN_159 = _T_62 ? $signed(_GEN_94) : $signed(_GEN_126); // @[RegFile.scala 22:43]
  assign _GEN_160 = _T_62 ? $signed(_GEN_95) : $signed(_GEN_127); // @[RegFile.scala 22:43]
  assign io_rd1 = 5'h1f == io_rs1 ? $signed(registers_31) : $signed(_GEN_30); // @[RegFile.scala 19:16]
  assign io_rd2 = 5'h1f == io_rs2 ? $signed(registers_31) : $signed(_GEN_62); // @[RegFile.scala 20:16]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  registers_0 = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  registers_1 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  registers_2 = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  registers_3 = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  registers_4 = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  registers_5 = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  registers_6 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  registers_7 = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  registers_8 = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  registers_9 = _RAND_9[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  registers_10 = _RAND_10[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  registers_11 = _RAND_11[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  registers_12 = _RAND_12[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  registers_13 = _RAND_13[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  registers_14 = _RAND_14[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  registers_15 = _RAND_15[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  registers_16 = _RAND_16[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  registers_17 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  registers_18 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  registers_19 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  registers_20 = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  registers_21 = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  registers_22 = _RAND_22[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  registers_23 = _RAND_23[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  registers_24 = _RAND_24[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  registers_25 = _RAND_25[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  registers_26 = _RAND_26[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  registers_27 = _RAND_27[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  registers_28 = _RAND_28[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  registers_29 = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  registers_30 = _RAND_30[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  registers_31 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (io_RegWrite) begin
      if (_T_62) begin
        registers_0 <= 32'sh0;
      end else begin
        if (5'h0 == io_rd) begin
          registers_0 <= io_WriteData;
        end else begin
          registers_0 <= 32'sh0;
        end
      end
    end else begin
      registers_0 <= 32'sh0;
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1 == io_rd) begin
          registers_1 <= 32'sh0;
        end
      end else begin
        if (5'h1 == io_rd) begin
          registers_1 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h2 == io_rd) begin
          registers_2 <= 32'sh0;
        end
      end else begin
        if (5'h2 == io_rd) begin
          registers_2 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h3 == io_rd) begin
          registers_3 <= 32'sh0;
        end
      end else begin
        if (5'h3 == io_rd) begin
          registers_3 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h4 == io_rd) begin
          registers_4 <= 32'sh0;
        end
      end else begin
        if (5'h4 == io_rd) begin
          registers_4 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h5 == io_rd) begin
          registers_5 <= 32'sh0;
        end
      end else begin
        if (5'h5 == io_rd) begin
          registers_5 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h6 == io_rd) begin
          registers_6 <= 32'sh0;
        end
      end else begin
        if (5'h6 == io_rd) begin
          registers_6 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h7 == io_rd) begin
          registers_7 <= 32'sh0;
        end
      end else begin
        if (5'h7 == io_rd) begin
          registers_7 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h8 == io_rd) begin
          registers_8 <= 32'sh0;
        end
      end else begin
        if (5'h8 == io_rd) begin
          registers_8 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h9 == io_rd) begin
          registers_9 <= 32'sh0;
        end
      end else begin
        if (5'h9 == io_rd) begin
          registers_9 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'ha == io_rd) begin
          registers_10 <= 32'sh0;
        end
      end else begin
        if (5'ha == io_rd) begin
          registers_10 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hb == io_rd) begin
          registers_11 <= 32'sh0;
        end
      end else begin
        if (5'hb == io_rd) begin
          registers_11 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hc == io_rd) begin
          registers_12 <= 32'sh0;
        end
      end else begin
        if (5'hc == io_rd) begin
          registers_12 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hd == io_rd) begin
          registers_13 <= 32'sh0;
        end
      end else begin
        if (5'hd == io_rd) begin
          registers_13 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'he == io_rd) begin
          registers_14 <= 32'sh0;
        end
      end else begin
        if (5'he == io_rd) begin
          registers_14 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'hf == io_rd) begin
          registers_15 <= 32'sh0;
        end
      end else begin
        if (5'hf == io_rd) begin
          registers_15 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h10 == io_rd) begin
          registers_16 <= 32'sh0;
        end
      end else begin
        if (5'h10 == io_rd) begin
          registers_16 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h11 == io_rd) begin
          registers_17 <= 32'sh0;
        end
      end else begin
        if (5'h11 == io_rd) begin
          registers_17 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h12 == io_rd) begin
          registers_18 <= 32'sh0;
        end
      end else begin
        if (5'h12 == io_rd) begin
          registers_18 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h13 == io_rd) begin
          registers_19 <= 32'sh0;
        end
      end else begin
        if (5'h13 == io_rd) begin
          registers_19 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h14 == io_rd) begin
          registers_20 <= 32'sh0;
        end
      end else begin
        if (5'h14 == io_rd) begin
          registers_20 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h15 == io_rd) begin
          registers_21 <= 32'sh0;
        end
      end else begin
        if (5'h15 == io_rd) begin
          registers_21 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h16 == io_rd) begin
          registers_22 <= 32'sh0;
        end
      end else begin
        if (5'h16 == io_rd) begin
          registers_22 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h17 == io_rd) begin
          registers_23 <= 32'sh0;
        end
      end else begin
        if (5'h17 == io_rd) begin
          registers_23 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h18 == io_rd) begin
          registers_24 <= 32'sh0;
        end
      end else begin
        if (5'h18 == io_rd) begin
          registers_24 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h19 == io_rd) begin
          registers_25 <= 32'sh0;
        end
      end else begin
        if (5'h19 == io_rd) begin
          registers_25 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1a == io_rd) begin
          registers_26 <= 32'sh0;
        end
      end else begin
        if (5'h1a == io_rd) begin
          registers_26 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1b == io_rd) begin
          registers_27 <= 32'sh0;
        end
      end else begin
        if (5'h1b == io_rd) begin
          registers_27 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1c == io_rd) begin
          registers_28 <= 32'sh0;
        end
      end else begin
        if (5'h1c == io_rd) begin
          registers_28 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1d == io_rd) begin
          registers_29 <= 32'sh0;
        end
      end else begin
        if (5'h1d == io_rd) begin
          registers_29 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1e == io_rd) begin
          registers_30 <= 32'sh0;
        end
      end else begin
        if (5'h1e == io_rd) begin
          registers_30 <= io_WriteData;
        end
      end
    end
    if (io_RegWrite) begin
      if (_T_62) begin
        if (5'h1f == io_rd) begin
          registers_31 <= 32'sh0;
        end
      end else begin
        if (5'h1f == io_rd) begin
          registers_31 <= io_WriteData;
        end
      end
    end
  end
endmodule
module ImmGen(
  input  [31:0] io_ins,
  output [31:0] io_S_Imm,
  output [31:0] io_U_Imm,
  output [31:0] io_I_Imm
);
  wire  imm7; // @[ImmGen.scala 18:34]
  wire [3:0] imm11; // @[ImmGen.scala 19:35]
  wire [7:0] imm19; // @[ImmGen.scala 20:35]
  wire  imm20; // @[ImmGen.scala 21:35]
  wire [3:0] imm24; // @[ImmGen.scala 22:35]
  wire [5:0] imm30; // @[ImmGen.scala 23:35]
  wire  imm31; // @[ImmGen.scala 24:35]
  wire [19:0] _T_22; // @[Bitwise.scala 72:12]
  wire [31:0] _T_26; // @[Cat.scala 30:58]
  wire [31:0] _T_35; // @[Cat.scala 30:58]
  wire [11:0] _T_55; // @[Bitwise.scala 72:12]
  wire [31:0] _T_60; // @[Cat.scala 30:58]
  wire [46:0] _GEN_0; // @[ImmGen.scala 29:80]
  wire [46:0] _T_62; // @[ImmGen.scala 29:80]
  wire [46:0] _T_63; // @[ImmGen.scala 29:91]
  wire [31:0] _GEN_1; // @[ImmGen.scala 29:26]
  assign imm7 = io_ins[7]; // @[ImmGen.scala 18:34]
  assign imm11 = io_ins[11:8]; // @[ImmGen.scala 19:35]
  assign imm19 = io_ins[19:12]; // @[ImmGen.scala 20:35]
  assign imm20 = io_ins[20]; // @[ImmGen.scala 21:35]
  assign imm24 = io_ins[24:21]; // @[ImmGen.scala 22:35]
  assign imm30 = io_ins[30:25]; // @[ImmGen.scala 23:35]
  assign imm31 = io_ins[31]; // @[ImmGen.scala 24:35]
  assign _T_22 = imm31 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12]
  assign _T_26 = {_T_22,imm31,imm30,imm24,imm20}; // @[Cat.scala 30:58]
  assign _T_35 = {_T_22,imm31,imm30,imm11,imm7}; // @[Cat.scala 30:58]
  assign _T_55 = imm31 ? 12'hfff : 12'h0; // @[Bitwise.scala 72:12]
  assign _T_60 = {_T_55,imm31,imm30,imm24,imm20,imm19}; // @[Cat.scala 30:58]
  assign _GEN_0 = {{15'd0}, _T_60}; // @[ImmGen.scala 29:80]
  assign _T_62 = _GEN_0 << 4'hc; // @[ImmGen.scala 29:80]
  assign _T_63 = $signed(_T_62); // @[ImmGen.scala 29:91]
  assign io_S_Imm = $signed(_T_35); // @[ImmGen.scala 27:26]
  assign _GEN_1 = _T_63[31:0]; // @[ImmGen.scala 29:26]
  assign io_U_Imm = $signed(_GEN_1); // @[ImmGen.scala 29:26]
  assign io_I_Imm = $signed(_T_26); // @[ImmGen.scala 26:26]
endmodule
module AluControl(
  input  [2:0] io_AluOp,
  input  [2:0] io_Func3,
  input        io_Func7,
  output [4:0] io_AluC
);
  wire  _T_15; // @[AluControl.scala 18:23]
  wire [4:0] _T_18; // @[Cat.scala 30:58]
  wire  _T_20; // @[AluControl.scala 20:29]
  wire  _T_23; // @[AluControl.scala 22:29]
  wire  _T_26; // @[AluControl.scala 24:29]
  wire [4:0] _T_28; // @[Cat.scala 30:58]
  wire  _T_30; // @[AluControl.scala 26:29]
  wire  _T_32; // @[AluControl.scala 27:31]
  wire [3:0] _T_37; // @[Cat.scala 30:58]
  wire [4:0] _GEN_0; // @[AluControl.scala 27:44]
  wire  _T_39; // @[AluControl.scala 32:29]
  wire [4:0] _GEN_2; // @[AluControl.scala 32:42]
  wire [4:0] _GEN_3; // @[AluControl.scala 26:42]
  wire [4:0] _GEN_4; // @[AluControl.scala 24:42]
  wire [4:0] _GEN_5; // @[AluControl.scala 22:42]
  wire [4:0] _GEN_6; // @[AluControl.scala 20:42]
  assign _T_15 = io_AluOp == 3'h0; // @[AluControl.scala 18:23]
  assign _T_18 = {1'h0,io_Func7,io_Func3}; // @[Cat.scala 30:58]
  assign _T_20 = io_AluOp == 3'h4; // @[AluControl.scala 20:29]
  assign _T_23 = io_AluOp == 3'h5; // @[AluControl.scala 22:29]
  assign _T_26 = io_AluOp == 3'h2; // @[AluControl.scala 24:29]
  assign _T_28 = {2'h2,io_Func3}; // @[Cat.scala 30:58]
  assign _T_30 = io_AluOp == 3'h1; // @[AluControl.scala 26:29]
  assign _T_32 = io_Func3 == 3'h1; // @[AluControl.scala 27:31]
  assign _T_37 = {1'h0,io_Func3}; // @[Cat.scala 30:58]
  assign _GEN_0 = _T_32 ? _T_18 : {{1'd0}, _T_37}; // @[AluControl.scala 27:44]
  assign _T_39 = io_AluOp == 3'h3; // @[AluControl.scala 32:29]
  assign _GEN_2 = _T_39 ? 5'h1f : 5'h0; // @[AluControl.scala 32:42]
  assign _GEN_3 = _T_30 ? _GEN_0 : _GEN_2; // @[AluControl.scala 26:42]
  assign _GEN_4 = _T_26 ? _T_28 : _GEN_3; // @[AluControl.scala 24:42]
  assign _GEN_5 = _T_23 ? 5'h0 : _GEN_4; // @[AluControl.scala 22:42]
  assign _GEN_6 = _T_20 ? 5'h0 : _GEN_5; // @[AluControl.scala 20:42]
  assign io_AluC = _T_15 ? _T_18 : _GEN_6; // @[AluControl.scala 16:17 AluControl.scala 19:25 AluControl.scala 21:25 AluControl.scala 23:25 AluControl.scala 25:25 AluControl.scala 28:33 AluControl.scala 30:33 AluControl.scala 33:25 AluControl.scala 35:25]
endmodule
module ALU(
  input  [31:0] io_a,
  input  [31:0] io_b,
  input  [4:0]  io_AluControl,
  output [31:0] io_output
);
  wire  _T_17; // @[ALU.scala 16:28]
  wire [32:0] _T_18; // @[ALU.scala 17:35]
  wire [31:0] _T_19; // @[ALU.scala 17:35]
  wire [31:0] _T_20; // @[ALU.scala 17:35]
  wire  _T_22; // @[ALU.scala 18:34]
  wire [4:0] _T_23; // @[ALU.scala 19:34]
  wire [4:0] _T_24; // @[ALU.scala 19:47]
  wire [35:0] _GEN_24; // @[ALU.scala 19:40]
  wire [35:0] _T_25; // @[ALU.scala 19:40]
  wire [35:0] _T_26; // @[ALU.scala 19:54]
  wire  _T_28; // @[ALU.scala 20:34]
  wire  _T_29; // @[ALU.scala 21:27]
  wire [1:0] _GEN_0; // @[ALU.scala 21:34]
  wire  _T_33; // @[ALU.scala 26:35]
  wire  _T_35; // @[ALU.scala 26:68]
  wire  _T_36; // @[ALU.scala 26:51]
  wire [31:0] _T_37; // @[ALU.scala 27:31]
  wire [31:0] _T_38; // @[ALU.scala 28:31]
  wire  _T_39; // @[ALU.scala 29:25]
  wire [1:0] _GEN_1; // @[ALU.scala 29:30]
  wire  _T_43; // @[ALU.scala 34:34]
  wire [31:0] _T_44; // @[ALU.scala 35:35]
  wire [31:0] _T_45; // @[ALU.scala 35:35]
  wire  _T_47; // @[ALU.scala 36:34]
  wire [31:0] _T_52; // @[ALU.scala 39:41]
  wire [31:0] _T_53; // @[ALU.scala 40:36]
  wire  _T_55; // @[ALU.scala 41:34]
  wire [31:0] _T_56; // @[ALU.scala 42:35]
  wire [31:0] _T_57; // @[ALU.scala 42:35]
  wire  _T_59; // @[ALU.scala 43:34]
  wire [31:0] _T_60; // @[ALU.scala 44:35]
  wire [31:0] _T_61; // @[ALU.scala 44:35]
  wire  _T_63; // @[ALU.scala 45:34]
  wire [32:0] _T_64; // @[ALU.scala 46:35]
  wire [31:0] _T_65; // @[ALU.scala 46:35]
  wire [31:0] _T_66; // @[ALU.scala 46:35]
  wire  _T_68; // @[ALU.scala 47:34]
  wire [4:0] _T_71; // @[ALU.scala 48:41]
  wire [4:0] _T_72; // @[ALU.scala 48:55]
  wire  _T_74; // @[ALU.scala 49:34]
  wire  _T_75; // @[ALU.scala 50:27]
  wire [1:0] _GEN_2; // @[ALU.scala 50:36]
  wire  _T_79; // @[ALU.scala 55:34]
  wire [1:0] _GEN_3; // @[ALU.scala 56:36]
  wire  _T_84; // @[ALU.scala 61:34]
  wire  _T_89; // @[ALU.scala 67:34]
  wire  _T_91; // @[ALU.scala 68:46]
  wire  _T_92; // @[ALU.scala 68:38]
  wire [1:0] _GEN_5; // @[ALU.scala 68:54]
  wire  _T_96; // @[ALU.scala 73:34]
  wire  _T_99; // @[ALU.scala 76:26]
  wire  _T_100; // @[ALU.scala 76:40]
  wire  _T_101; // @[ALU.scala 76:34]
  wire [1:0] _GEN_6; // @[ALU.scala 76:46]
  wire  _T_105; // @[ALU.scala 81:34]
  wire [31:0] _GEN_7; // @[ALU.scala 81:49]
  wire [31:0] _GEN_8; // @[ALU.scala 73:49]
  wire [31:0] _GEN_9; // @[ALU.scala 67:49]
  wire [31:0] _GEN_10; // @[ALU.scala 61:49]
  wire [31:0] _GEN_11; // @[ALU.scala 55:49]
  wire [31:0] _GEN_12; // @[ALU.scala 49:49]
  wire [31:0] _GEN_13; // @[ALU.scala 47:49]
  wire [31:0] _GEN_14; // @[ALU.scala 45:49]
  wire [31:0] _GEN_15; // @[ALU.scala 43:49]
  wire [31:0] _GEN_16; // @[ALU.scala 41:49]
  wire [31:0] _GEN_17; // @[ALU.scala 36:49]
  wire [31:0] _GEN_18; // @[ALU.scala 34:49]
  wire [31:0] _GEN_19; // @[ALU.scala 26:84]
  wire [31:0] _GEN_20; // @[ALU.scala 20:49]
  wire [35:0] _GEN_21; // @[ALU.scala 18:49]
  wire [35:0] _GEN_22; // @[ALU.scala 16:43]
  wire [31:0] _GEN_25; // @[ALU.scala 14:19 ALU.scala 17:27 ALU.scala 19:26 ALU.scala 22:35 ALU.scala 24:35 ALU.scala 30:35 ALU.scala 32:35 ALU.scala 35:27 ALU.scala 40:27 ALU.scala 42:27 ALU.scala 44:27 ALU.scala 46:27 ALU.scala 48:27 ALU.scala 51:35 ALU.scala 53:35 ALU.scala 57:35 ALU.scala 59:35 ALU.scala 63:35 ALU.scala 65:35 ALU.scala 69:35 ALU.scala 71:35 ALU.scala 77:35 ALU.scala 79:35 ALU.scala 82:27]
  assign _T_17 = io_AluControl == 5'h0; // @[ALU.scala 16:28]
  assign _T_18 = $signed(io_a) + $signed(io_b); // @[ALU.scala 17:35]
  assign _T_19 = $signed(io_a) + $signed(io_b); // @[ALU.scala 17:35]
  assign _T_20 = $signed(_T_19); // @[ALU.scala 17:35]
  assign _T_22 = io_AluControl == 5'h1; // @[ALU.scala 18:34]
  assign _T_23 = io_a[4:0]; // @[ALU.scala 19:34]
  assign _T_24 = io_b[4:0]; // @[ALU.scala 19:47]
  assign _GEN_24 = {{31'd0}, _T_23}; // @[ALU.scala 19:40]
  assign _T_25 = _GEN_24 << _T_24; // @[ALU.scala 19:40]
  assign _T_26 = $signed(_T_25); // @[ALU.scala 19:54]
  assign _T_28 = io_AluControl == 5'h2; // @[ALU.scala 20:34]
  assign _T_29 = $signed(io_a) < $signed(io_b); // @[ALU.scala 21:27]
  assign _GEN_0 = _T_29 ? $signed(2'sh1) : $signed(2'sh0); // @[ALU.scala 21:34]
  assign _T_33 = io_AluControl == 5'h3; // @[ALU.scala 26:35]
  assign _T_35 = io_AluControl == 5'h16; // @[ALU.scala 26:68]
  assign _T_36 = _T_33 | _T_35; // @[ALU.scala 26:51]
  assign _T_37 = $unsigned(io_a); // @[ALU.scala 27:31]
  assign _T_38 = $unsigned(io_b); // @[ALU.scala 28:31]
  assign _T_39 = _T_37 < _T_38; // @[ALU.scala 29:25]
  assign _GEN_1 = _T_39 ? $signed(2'sh1) : $signed(2'sh0); // @[ALU.scala 29:30]
  assign _T_43 = io_AluControl == 5'h4; // @[ALU.scala 34:34]
  assign _T_44 = $signed(io_a) ^ $signed(io_b); // @[ALU.scala 35:35]
  assign _T_45 = $signed(_T_44); // @[ALU.scala 35:35]
  assign _T_47 = io_AluControl == 5'h5; // @[ALU.scala 36:34]
  assign _T_52 = _T_37 >> _T_38; // @[ALU.scala 39:41]
  assign _T_53 = $signed(_T_52); // @[ALU.scala 40:36]
  assign _T_55 = io_AluControl == 5'h6; // @[ALU.scala 41:34]
  assign _T_56 = $signed(io_a) | $signed(io_b); // @[ALU.scala 42:35]
  assign _T_57 = $signed(_T_56); // @[ALU.scala 42:35]
  assign _T_59 = io_AluControl == 5'h7; // @[ALU.scala 43:34]
  assign _T_60 = $signed(io_a) & $signed(io_b); // @[ALU.scala 44:35]
  assign _T_61 = $signed(_T_60); // @[ALU.scala 44:35]
  assign _T_63 = io_AluControl == 5'h8; // @[ALU.scala 45:34]
  assign _T_64 = $signed(io_a) - $signed(io_b); // @[ALU.scala 46:35]
  assign _T_65 = $signed(io_a) - $signed(io_b); // @[ALU.scala 46:35]
  assign _T_66 = $signed(_T_65); // @[ALU.scala 46:35]
  assign _T_68 = io_AluControl == 5'hd; // @[ALU.scala 47:34]
  assign _T_71 = _T_23 >> _T_24; // @[ALU.scala 48:41]
  assign _T_72 = $signed(_T_71); // @[ALU.scala 48:55]
  assign _T_74 = io_AluControl == 5'h10; // @[ALU.scala 49:34]
  assign _T_75 = $signed(io_a) == $signed(io_b); // @[ALU.scala 50:27]
  assign _GEN_2 = _T_75 ? $signed(2'sh1) : $signed(2'sh0); // @[ALU.scala 50:36]
  assign _T_79 = io_AluControl == 5'h11; // @[ALU.scala 55:34]
  assign _GEN_3 = _T_75 ? $signed(2'sh0) : $signed(2'sh1); // @[ALU.scala 56:36]
  assign _T_84 = io_AluControl == 5'h14; // @[ALU.scala 61:34]
  assign _T_89 = io_AluControl == 5'h15; // @[ALU.scala 67:34]
  assign _T_91 = $signed(io_a) > $signed(io_b); // @[ALU.scala 68:46]
  assign _T_92 = _T_75 | _T_91; // @[ALU.scala 68:38]
  assign _GEN_5 = _T_92 ? $signed(2'sh1) : $signed(2'sh0); // @[ALU.scala 68:54]
  assign _T_96 = io_AluControl == 5'h17; // @[ALU.scala 73:34]
  assign _T_99 = _T_37 == _T_38; // @[ALU.scala 76:26]
  assign _T_100 = _T_37 > _T_38; // @[ALU.scala 76:40]
  assign _T_101 = _T_99 | _T_100; // @[ALU.scala 76:34]
  assign _GEN_6 = _T_101 ? $signed(2'sh1) : $signed(2'sh0); // @[ALU.scala 76:46]
  assign _T_105 = io_AluControl == 5'h1f; // @[ALU.scala 81:34]
  assign _GEN_7 = _T_105 ? $signed(io_a) : $signed(32'sh0); // @[ALU.scala 81:49]
  assign _GEN_8 = _T_96 ? $signed({{30{_GEN_6[1]}},_GEN_6}) : $signed(_GEN_7); // @[ALU.scala 73:49]
  assign _GEN_9 = _T_89 ? $signed({{30{_GEN_5[1]}},_GEN_5}) : $signed(_GEN_8); // @[ALU.scala 67:49]
  assign _GEN_10 = _T_84 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_9); // @[ALU.scala 61:49]
  assign _GEN_11 = _T_79 ? $signed({{30{_GEN_3[1]}},_GEN_3}) : $signed(_GEN_10); // @[ALU.scala 55:49]
  assign _GEN_12 = _T_74 ? $signed({{30{_GEN_2[1]}},_GEN_2}) : $signed(_GEN_11); // @[ALU.scala 49:49]
  assign _GEN_13 = _T_68 ? $signed({{27{_T_72[4]}},_T_72}) : $signed(_GEN_12); // @[ALU.scala 47:49]
  assign _GEN_14 = _T_63 ? $signed(_T_66) : $signed(_GEN_13); // @[ALU.scala 45:49]
  assign _GEN_15 = _T_59 ? $signed(_T_61) : $signed(_GEN_14); // @[ALU.scala 43:49]
  assign _GEN_16 = _T_55 ? $signed(_T_57) : $signed(_GEN_15); // @[ALU.scala 41:49]
  assign _GEN_17 = _T_47 ? $signed(_T_53) : $signed(_GEN_16); // @[ALU.scala 36:49]
  assign _GEN_18 = _T_43 ? $signed(_T_45) : $signed(_GEN_17); // @[ALU.scala 34:49]
  assign _GEN_19 = _T_36 ? $signed({{30{_GEN_1[1]}},_GEN_1}) : $signed(_GEN_18); // @[ALU.scala 26:84]
  assign _GEN_20 = _T_28 ? $signed({{30{_GEN_0[1]}},_GEN_0}) : $signed(_GEN_19); // @[ALU.scala 20:49]
  assign _GEN_21 = _T_22 ? $signed(_T_26) : $signed({{4{_GEN_20[31]}},_GEN_20}); // @[ALU.scala 18:49]
  assign _GEN_22 = _T_17 ? $signed({{4{_T_20[31]}},_T_20}) : $signed(_GEN_21); // @[ALU.scala 16:43]
  assign _GEN_25 = _GEN_22[31:0]; // @[ALU.scala 14:19 ALU.scala 17:27 ALU.scala 19:26 ALU.scala 22:35 ALU.scala 24:35 ALU.scala 30:35 ALU.scala 32:35 ALU.scala 35:27 ALU.scala 40:27 ALU.scala 42:27 ALU.scala 44:27 ALU.scala 46:27 ALU.scala 48:27 ALU.scala 51:35 ALU.scala 53:35 ALU.scala 57:35 ALU.scala 59:35 ALU.scala 63:35 ALU.scala 65:35 ALU.scala 69:35 ALU.scala 71:35 ALU.scala 77:35 ALU.scala 79:35 ALU.scala 82:27]
  assign io_output = $signed(_GEN_25); // @[ALU.scala 14:19 ALU.scala 17:27 ALU.scala 19:26 ALU.scala 22:35 ALU.scala 24:35 ALU.scala 30:35 ALU.scala 32:35 ALU.scala 35:27 ALU.scala 40:27 ALU.scala 42:27 ALU.scala 44:27 ALU.scala 46:27 ALU.scala 48:27 ALU.scala 51:35 ALU.scala 53:35 ALU.scala 57:35 ALU.scala 59:35 ALU.scala 63:35 ALU.scala 65:35 ALU.scala 69:35 ALU.scala 71:35 ALU.scala 77:35 ALU.scala 79:35 ALU.scala 82:27]
endmodule
module PC(
  input         clock,
  input         reset,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pc
);
  reg [31:0] reg$; // @[PC.scala 12:26]
  reg [31:0] _RAND_0;
  wire [32:0] _T_14; // @[PC.scala 14:23]
  assign _T_14 = reg$ + 32'h4; // @[PC.scala 14:23]
  assign io_pc4 = reg$ + 32'h4; // @[PC.scala 14:16]
  assign io_pc = reg$; // @[PC.scala 15:15]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg$ = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg$ <= 32'h0;
    end else begin
      reg$ <= io_input;
    end
  end
endmodule
module InsMem(
  input         clock,
  input  [9:0]  io_wrAdder,
  output [31:0] io_rData
);
  reg [31:0] mem [0:1023]; // @[InsMem.scala 12:22]
  reg [31:0] _RAND_0;
  wire [31:0] mem__T_11_data; // @[InsMem.scala 12:22]
  wire [9:0] mem__T_11_addr; // @[InsMem.scala 12:22]
  assign mem__T_11_addr = io_wrAdder;
  assign mem__T_11_data = mem[mem__T_11_addr]; // @[InsMem.scala 12:22]
  assign io_rData = mem__T_11_data; // @[InsMem.scala 13:18]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    mem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
endmodule
module MainMem(
  input         clock,
  input  [9:0]  io_Address,
  input  [31:0] io_DataIn,
  output [31:0] io_DataOut,
  input         io_str,
  input         io_ld
);
  reg [31:0] dMem [0:1023]; // @[MainMem.scala 15:31]
  reg [31:0] _RAND_0;
  wire [31:0] dMem__T_20_data; // @[MainMem.scala 15:31]
  wire [9:0] dMem__T_20_addr; // @[MainMem.scala 15:31]
  wire [31:0] dMem__T_24_data; // @[MainMem.scala 15:31]
  wire [9:0] dMem__T_24_addr; // @[MainMem.scala 15:31]
  wire  dMem__T_24_mask; // @[MainMem.scala 15:31]
  wire  dMem__T_24_en; // @[MainMem.scala 15:31]
  wire  _T_19; // @[MainMem.scala 18:20]
  wire [31:0] _T_21; // @[MainMem.scala 19:50]
  reg [9:0] dMem__T_20_addr_pipe_0;
  reg [31:0] _RAND_1;
  assign dMem__T_20_addr = dMem__T_20_addr_pipe_0;
  assign dMem__T_20_data = dMem[dMem__T_20_addr]; // @[MainMem.scala 15:31]
  assign dMem__T_24_data = $unsigned(io_DataIn);
  assign dMem__T_24_addr = io_Address;
  assign dMem__T_24_mask = 1'h1;
  assign dMem__T_24_en = io_ld ? 1'h0 : io_str;
  assign _T_19 = io_ld; // @[MainMem.scala 18:20]
  assign _T_21 = $signed(dMem__T_20_data); // @[MainMem.scala 19:50]
  assign io_DataOut = io_ld ? $signed(_T_21) : $signed(32'sh0); // @[MainMem.scala 16:20 MainMem.scala 19:28]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 1024; initvar = initvar+1)
    dMem[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  dMem__T_20_addr_pipe_0 = _RAND_1[9:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(dMem__T_24_en & dMem__T_24_mask) begin
      dMem[dMem__T_24_addr] <= dMem__T_24_data; // @[MainMem.scala 15:31]
    end
    if (_T_19) begin
      dMem__T_20_addr_pipe_0 <= io_Address;
    end
  end
endmodule
module IF_ID(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  input  [31:0] io_pc4_in,
  input  [31:0] io_ins_in,
  output [31:0] io_pc_out,
  output [31:0] io_ins_out,
  output [31:0] io_pc4_out
);
  reg [31:0] reg_pc; // @[IF_ID.scala 21:29]
  reg [31:0] _RAND_0;
  reg [31:0] reg_pc4; // @[IF_ID.scala 22:30]
  reg [31:0] _RAND_1;
  reg [31:0] reg_ins; // @[IF_ID.scala 23:30]
  reg [31:0] _RAND_2;
  assign io_pc_out = reg_pc; // @[IF_ID.scala 29:19]
  assign io_ins_out = reg_ins; // @[IF_ID.scala 31:20]
  assign io_pc4_out = reg_pc4; // @[IF_ID.scala 30:20]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_pc4 = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_ins = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_pc <= 32'h0;
    end else begin
      reg_pc <= io_pc_in;
    end
    if (reset) begin
      reg_pc4 <= 32'h0;
    end else begin
      reg_pc4 <= io_pc4_in;
    end
    if (reset) begin
      reg_ins <= 32'h0;
    end else begin
      reg_ins <= io_ins_in;
    end
  end
endmodule
module ID_EXE(
  input         clock,
  input         reset,
  input         io_memWrite_in,
  input         io_memRead_in,
  input         io_memToReg_in,
  input  [31:0] io_operandA_in,
  input  [31:0] io_operandB_in,
  input  [4:0]  io_rd_in,
  input  [31:0] io_strData_in,
  input  [4:0]  io_aluCtrl_in,
  input         io_regWrite_in,
  output        io_memWrite_out,
  output        io_memRead_out,
  output        io_memToReg_out,
  output [31:0] io_operandA_out,
  output [31:0] io_operandB_out,
  output [4:0]  io_rd_out,
  output [31:0] io_strData_out,
  output [4:0]  io_aluCtrl_out,
  output        io_regWrite_out
);
  reg  reg_memWrite; // @[ID_EXE.scala 33:35]
  reg [31:0] _RAND_0;
  reg  reg_memRead; // @[ID_EXE.scala 34:34]
  reg [31:0] _RAND_1;
  reg  reg_memToReg; // @[ID_EXE.scala 35:35]
  reg [31:0] _RAND_2;
  reg [31:0] reg_operandA; // @[ID_EXE.scala 36:35]
  reg [31:0] _RAND_3;
  reg [31:0] reg_operandB; // @[ID_EXE.scala 37:35]
  reg [31:0] _RAND_4;
  reg [4:0] reg_rd; // @[ID_EXE.scala 38:29]
  reg [31:0] _RAND_5;
  reg [31:0] reg_strData; // @[ID_EXE.scala 39:34]
  reg [31:0] _RAND_6;
  reg [4:0] reg_aluCtrl; // @[ID_EXE.scala 40:34]
  reg [31:0] _RAND_7;
  reg  reg_regWrite; // @[ID_EXE.scala 41:35]
  reg [31:0] _RAND_8;
  assign io_memWrite_out = reg_memWrite; // @[ID_EXE.scala 54:25]
  assign io_memRead_out = reg_memRead; // @[ID_EXE.scala 55:24]
  assign io_memToReg_out = reg_memToReg; // @[ID_EXE.scala 56:25]
  assign io_operandA_out = reg_operandA; // @[ID_EXE.scala 57:25]
  assign io_operandB_out = reg_operandB; // @[ID_EXE.scala 58:25]
  assign io_rd_out = reg_rd; // @[ID_EXE.scala 59:19]
  assign io_strData_out = reg_strData; // @[ID_EXE.scala 60:24]
  assign io_aluCtrl_out = reg_aluCtrl; // @[ID_EXE.scala 61:24]
  assign io_regWrite_out = reg_regWrite; // @[ID_EXE.scala 62:25]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_memWrite = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_memRead = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_memToReg = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_operandA = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_operandB = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_rd = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_strData = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_aluCtrl = _RAND_7[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg_regWrite = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_memWrite <= 1'h0;
    end else begin
      reg_memWrite <= io_memWrite_in;
    end
    if (reset) begin
      reg_memRead <= 1'h0;
    end else begin
      reg_memRead <= io_memRead_in;
    end
    if (reset) begin
      reg_memToReg <= 1'h0;
    end else begin
      reg_memToReg <= io_memToReg_in;
    end
    if (reset) begin
      reg_operandA <= 32'sh0;
    end else begin
      reg_operandA <= io_operandA_in;
    end
    if (reset) begin
      reg_operandB <= 32'sh0;
    end else begin
      reg_operandB <= io_operandB_in;
    end
    if (reset) begin
      reg_rd <= 5'h0;
    end else begin
      reg_rd <= io_rd_in;
    end
    if (reset) begin
      reg_strData <= 32'sh0;
    end else begin
      reg_strData <= io_strData_in;
    end
    if (reset) begin
      reg_aluCtrl <= 5'h0;
    end else begin
      reg_aluCtrl <= io_aluCtrl_in;
    end
    if (reset) begin
      reg_regWrite <= 1'h0;
    end else begin
      reg_regWrite <= io_regWrite_in;
    end
  end
endmodule
module EXE_MEM(
  input         clock,
  input         reset,
  input         io_memWrite_in,
  input         io_memRead_in,
  input         io_memToReg_in,
  input  [4:0]  io_rd_in,
  input  [31:0] io_aluOutput_in,
  input  [31:0] io_strData_in,
  input         io_regWrite_in,
  output        io_memWrite_out,
  output        io_memRead_out,
  output        io_memToReg_out,
  output [4:0]  io_rd_out,
  output [31:0] io_strData_out,
  output [31:0] io_aluOutput_out,
  output        io_regWrite_out
);
  reg  reg_memWrite; // @[EXE_Mem.scala 29:35]
  reg [31:0] _RAND_0;
  reg  reg_memRead; // @[EXE_Mem.scala 30:34]
  reg [31:0] _RAND_1;
  reg  reg_memToReg; // @[EXE_Mem.scala 31:35]
  reg [31:0] _RAND_2;
  reg [4:0] reg_rd; // @[EXE_Mem.scala 32:29]
  reg [31:0] _RAND_3;
  reg [31:0] reg_strData; // @[EXE_Mem.scala 33:34]
  reg [31:0] _RAND_4;
  reg [31:0] reg_aluOutput; // @[EXE_Mem.scala 34:36]
  reg [31:0] _RAND_5;
  reg  reg_regWrite; // @[EXE_Mem.scala 35:35]
  reg [31:0] _RAND_6;
  assign io_memWrite_out = reg_memWrite; // @[EXE_Mem.scala 46:25]
  assign io_memRead_out = reg_memRead; // @[EXE_Mem.scala 47:24]
  assign io_memToReg_out = reg_memToReg; // @[EXE_Mem.scala 48:25]
  assign io_rd_out = reg_rd; // @[EXE_Mem.scala 49:19]
  assign io_strData_out = reg_strData; // @[EXE_Mem.scala 50:24]
  assign io_aluOutput_out = reg_aluOutput; // @[EXE_Mem.scala 51:26]
  assign io_regWrite_out = reg_regWrite; // @[EXE_Mem.scala 52:25]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_memWrite = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_memRead = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_memToReg = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_rd = _RAND_3[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_strData = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_aluOutput = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_regWrite = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_memWrite <= 1'h0;
    end else begin
      reg_memWrite <= io_memWrite_in;
    end
    if (reset) begin
      reg_memRead <= 1'h0;
    end else begin
      reg_memRead <= io_memRead_in;
    end
    if (reset) begin
      reg_memToReg <= 1'h0;
    end else begin
      reg_memToReg <= io_memToReg_in;
    end
    if (reset) begin
      reg_rd <= 5'h0;
    end else begin
      reg_rd <= io_rd_in;
    end
    if (reset) begin
      reg_strData <= 32'sh0;
    end else begin
      reg_strData <= io_strData_in;
    end
    if (reset) begin
      reg_aluOutput <= 32'sh0;
    end else begin
      reg_aluOutput <= io_aluOutput_in;
    end
    if (reset) begin
      reg_regWrite <= 1'h0;
    end else begin
      reg_regWrite <= io_regWrite_in;
    end
  end
endmodule
module MEM_WR(
  input         clock,
  input         reset,
  input         io_memToReg_in,
  input  [4:0]  io_rd_in,
  input  [31:0] io_dataOut_in,
  input  [31:0] io_aluOutput_in,
  input         io_regWrite_in,
  output        io_memToReg_out,
  output [4:0]  io_rd_out,
  output [31:0] io_dataOut_out,
  output [31:0] io_aluOutput_out,
  output        io_regWrite_out
);
  reg  reg_memToReg; // @[Mem_WR.scala 25:35]
  reg [31:0] _RAND_0;
  reg [4:0] reg_rd; // @[Mem_WR.scala 26:29]
  reg [31:0] _RAND_1;
  reg [31:0] reg_dataOut; // @[Mem_WR.scala 27:34]
  reg [31:0] _RAND_2;
  reg [31:0] reg_aluOutput; // @[Mem_WR.scala 28:36]
  reg [31:0] _RAND_3;
  reg  reg_regWrite; // @[Mem_WR.scala 29:35]
  reg [31:0] _RAND_4;
  assign io_memToReg_out = reg_memToReg; // @[Mem_WR.scala 39:25]
  assign io_rd_out = reg_rd; // @[Mem_WR.scala 40:19]
  assign io_dataOut_out = reg_dataOut; // @[Mem_WR.scala 41:24]
  assign io_aluOutput_out = reg_aluOutput; // @[Mem_WR.scala 42:26]
  assign io_regWrite_out = reg_regWrite; // @[Mem_WR.scala 43:25]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_memToReg = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_rd = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_dataOut = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_aluOutput = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_regWrite = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_memToReg <= 1'h0;
    end else begin
      reg_memToReg <= io_memToReg_in;
    end
    if (reset) begin
      reg_rd <= 5'h0;
    end else begin
      reg_rd <= io_rd_in;
    end
    if (reset) begin
      reg_dataOut <= 32'sh0;
    end else begin
      reg_dataOut <= io_dataOut_in;
    end
    if (reset) begin
      reg_aluOutput <= 32'sh0;
    end else begin
      reg_aluOutput <= io_aluOutput_in;
    end
    if (reset) begin
      reg_regWrite <= 1'h0;
    end else begin
      reg_regWrite <= io_regWrite_in;
    end
  end
endmodule
module Top(
  input         clock,
  input         reset,
  output [31:0] io_main_RegOut
);
  wire [6:0] control_io_OpCode; // @[Top.scala 18:29]
  wire  control_io_MemWrite; // @[Top.scala 18:29]
  wire  control_io_MemRead; // @[Top.scala 18:29]
  wire  control_io_RegWrite; // @[Top.scala 18:29]
  wire  control_io_MemToReg; // @[Top.scala 18:29]
  wire [2:0] control_io_AluOp; // @[Top.scala 18:29]
  wire [1:0] control_io_Operand_aSel; // @[Top.scala 18:29]
  wire  control_io_Operand_bSel; // @[Top.scala 18:29]
  wire [1:0] control_io_ExtendSel; // @[Top.scala 18:29]
  wire  regFile_clock; // @[Top.scala 19:29]
  wire  regFile_io_RegWrite; // @[Top.scala 19:29]
  wire [4:0] regFile_io_rs1; // @[Top.scala 19:29]
  wire [4:0] regFile_io_rs2; // @[Top.scala 19:29]
  wire [4:0] regFile_io_rd; // @[Top.scala 19:29]
  wire [31:0] regFile_io_WriteData; // @[Top.scala 19:29]
  wire [31:0] regFile_io_rd1; // @[Top.scala 19:29]
  wire [31:0] regFile_io_rd2; // @[Top.scala 19:29]
  wire [31:0] immGen_io_ins; // @[Top.scala 20:28]
  wire [31:0] immGen_io_S_Imm; // @[Top.scala 20:28]
  wire [31:0] immGen_io_U_Imm; // @[Top.scala 20:28]
  wire [31:0] immGen_io_I_Imm; // @[Top.scala 20:28]
  wire [2:0] aluControl_io_AluOp; // @[Top.scala 21:32]
  wire [2:0] aluControl_io_Func3; // @[Top.scala 21:32]
  wire  aluControl_io_Func7; // @[Top.scala 21:32]
  wire [4:0] aluControl_io_AluC; // @[Top.scala 21:32]
  wire [31:0] alu_io_a; // @[Top.scala 22:25]
  wire [31:0] alu_io_b; // @[Top.scala 22:25]
  wire [4:0] alu_io_AluControl; // @[Top.scala 22:25]
  wire [31:0] alu_io_output; // @[Top.scala 22:25]
  wire  Pc_clock; // @[Top.scala 23:24]
  wire  Pc_reset; // @[Top.scala 23:24]
  wire [31:0] Pc_io_input; // @[Top.scala 23:24]
  wire [31:0] Pc_io_pc4; // @[Top.scala 23:24]
  wire [31:0] Pc_io_pc; // @[Top.scala 23:24]
  wire  insMem_clock; // @[Top.scala 24:28]
  wire [9:0] insMem_io_wrAdder; // @[Top.scala 24:28]
  wire [31:0] insMem_io_rData; // @[Top.scala 24:28]
  wire  dataMem_clock; // @[Top.scala 26:29]
  wire [9:0] dataMem_io_Address; // @[Top.scala 26:29]
  wire [31:0] dataMem_io_DataIn; // @[Top.scala 26:29]
  wire [31:0] dataMem_io_DataOut; // @[Top.scala 26:29]
  wire  dataMem_io_str; // @[Top.scala 26:29]
  wire  dataMem_io_ld; // @[Top.scala 26:29]
  wire  ifId_clock; // @[Top.scala 27:26]
  wire  ifId_reset; // @[Top.scala 27:26]
  wire [31:0] ifId_io_pc_in; // @[Top.scala 27:26]
  wire [31:0] ifId_io_pc4_in; // @[Top.scala 27:26]
  wire [31:0] ifId_io_ins_in; // @[Top.scala 27:26]
  wire [31:0] ifId_io_pc_out; // @[Top.scala 27:26]
  wire [31:0] ifId_io_ins_out; // @[Top.scala 27:26]
  wire [31:0] ifId_io_pc4_out; // @[Top.scala 27:26]
  wire  idExe_clock; // @[Top.scala 28:27]
  wire  idExe_reset; // @[Top.scala 28:27]
  wire  idExe_io_memWrite_in; // @[Top.scala 28:27]
  wire  idExe_io_memRead_in; // @[Top.scala 28:27]
  wire  idExe_io_memToReg_in; // @[Top.scala 28:27]
  wire [31:0] idExe_io_operandA_in; // @[Top.scala 28:27]
  wire [31:0] idExe_io_operandB_in; // @[Top.scala 28:27]
  wire [4:0] idExe_io_rd_in; // @[Top.scala 28:27]
  wire [31:0] idExe_io_strData_in; // @[Top.scala 28:27]
  wire [4:0] idExe_io_aluCtrl_in; // @[Top.scala 28:27]
  wire  idExe_io_regWrite_in; // @[Top.scala 28:27]
  wire  idExe_io_memWrite_out; // @[Top.scala 28:27]
  wire  idExe_io_memRead_out; // @[Top.scala 28:27]
  wire  idExe_io_memToReg_out; // @[Top.scala 28:27]
  wire [31:0] idExe_io_operandA_out; // @[Top.scala 28:27]
  wire [31:0] idExe_io_operandB_out; // @[Top.scala 28:27]
  wire [4:0] idExe_io_rd_out; // @[Top.scala 28:27]
  wire [31:0] idExe_io_strData_out; // @[Top.scala 28:27]
  wire [4:0] idExe_io_aluCtrl_out; // @[Top.scala 28:27]
  wire  idExe_io_regWrite_out; // @[Top.scala 28:27]
  wire  exeMem_clock; // @[Top.scala 29:28]
  wire  exeMem_reset; // @[Top.scala 29:28]
  wire  exeMem_io_memWrite_in; // @[Top.scala 29:28]
  wire  exeMem_io_memRead_in; // @[Top.scala 29:28]
  wire  exeMem_io_memToReg_in; // @[Top.scala 29:28]
  wire [4:0] exeMem_io_rd_in; // @[Top.scala 29:28]
  wire [31:0] exeMem_io_aluOutput_in; // @[Top.scala 29:28]
  wire [31:0] exeMem_io_strData_in; // @[Top.scala 29:28]
  wire  exeMem_io_regWrite_in; // @[Top.scala 29:28]
  wire  exeMem_io_memWrite_out; // @[Top.scala 29:28]
  wire  exeMem_io_memRead_out; // @[Top.scala 29:28]
  wire  exeMem_io_memToReg_out; // @[Top.scala 29:28]
  wire [4:0] exeMem_io_rd_out; // @[Top.scala 29:28]
  wire [31:0] exeMem_io_strData_out; // @[Top.scala 29:28]
  wire [31:0] exeMem_io_aluOutput_out; // @[Top.scala 29:28]
  wire  exeMem_io_regWrite_out; // @[Top.scala 29:28]
  wire  memWr_clock; // @[Top.scala 30:27]
  wire  memWr_reset; // @[Top.scala 30:27]
  wire  memWr_io_memToReg_in; // @[Top.scala 30:27]
  wire [4:0] memWr_io_rd_in; // @[Top.scala 30:27]
  wire [31:0] memWr_io_dataOut_in; // @[Top.scala 30:27]
  wire [31:0] memWr_io_aluOutput_in; // @[Top.scala 30:27]
  wire  memWr_io_regWrite_in; // @[Top.scala 30:27]
  wire  memWr_io_memToReg_out; // @[Top.scala 30:27]
  wire [4:0] memWr_io_rd_out; // @[Top.scala 30:27]
  wire [31:0] memWr_io_dataOut_out; // @[Top.scala 30:27]
  wire [31:0] memWr_io_aluOutput_out; // @[Top.scala 30:27]
  wire  memWr_io_regWrite_out; // @[Top.scala 30:27]
  wire  _T_14; // @[Top.scala 67:38]
  wire [31:0] _T_15; // @[Top.scala 68:58]
  wire  _T_17; // @[Top.scala 69:44]
  wire [31:0] _T_18; // @[Top.scala 70:59]
  wire [31:0] _GEN_0; // @[Top.scala 69:56]
  wire  _T_20; // @[Top.scala 76:35]
  wire  _T_22; // @[Top.scala 76:73]
  wire  _T_23; // @[Top.scala 76:47]
  wire  _T_25; // @[Top.scala 78:41]
  wire  _T_28; // @[Top.scala 78:53]
  wire  _T_30; // @[Top.scala 80:41]
  wire  _T_33; // @[Top.scala 80:53]
  wire [31:0] _GEN_2; // @[Top.scala 80:87]
  wire [31:0] _GEN_3; // @[Top.scala 78:87]
  wire [7:0] _T_35; // @[Top.scala 115:55]
  wire  _T_37; // @[Top.scala 135:36]
  wire  _T_39; // @[Top.scala 138:42]
  wire [31:0] _GEN_5; // @[Top.scala 138:50]
  Control control ( // @[Top.scala 18:29]
    .io_OpCode(control_io_OpCode),
    .io_MemWrite(control_io_MemWrite),
    .io_MemRead(control_io_MemRead),
    .io_RegWrite(control_io_RegWrite),
    .io_MemToReg(control_io_MemToReg),
    .io_AluOp(control_io_AluOp),
    .io_Operand_aSel(control_io_Operand_aSel),
    .io_Operand_bSel(control_io_Operand_bSel),
    .io_ExtendSel(control_io_ExtendSel)
  );
  RegFile regFile ( // @[Top.scala 19:29]
    .clock(regFile_clock),
    .io_RegWrite(regFile_io_RegWrite),
    .io_rs1(regFile_io_rs1),
    .io_rs2(regFile_io_rs2),
    .io_rd(regFile_io_rd),
    .io_WriteData(regFile_io_WriteData),
    .io_rd1(regFile_io_rd1),
    .io_rd2(regFile_io_rd2)
  );
  ImmGen immGen ( // @[Top.scala 20:28]
    .io_ins(immGen_io_ins),
    .io_S_Imm(immGen_io_S_Imm),
    .io_U_Imm(immGen_io_U_Imm),
    .io_I_Imm(immGen_io_I_Imm)
  );
  AluControl aluControl ( // @[Top.scala 21:32]
    .io_AluOp(aluControl_io_AluOp),
    .io_Func3(aluControl_io_Func3),
    .io_Func7(aluControl_io_Func7),
    .io_AluC(aluControl_io_AluC)
  );
  ALU alu ( // @[Top.scala 22:25]
    .io_a(alu_io_a),
    .io_b(alu_io_b),
    .io_AluControl(alu_io_AluControl),
    .io_output(alu_io_output)
  );
  PC Pc ( // @[Top.scala 23:24]
    .clock(Pc_clock),
    .reset(Pc_reset),
    .io_input(Pc_io_input),
    .io_pc4(Pc_io_pc4),
    .io_pc(Pc_io_pc)
  );
  InsMem insMem ( // @[Top.scala 24:28]
    .clock(insMem_clock),
    .io_wrAdder(insMem_io_wrAdder),
    .io_rData(insMem_io_rData)
  );
  MainMem dataMem ( // @[Top.scala 26:29]
    .clock(dataMem_clock),
    .io_Address(dataMem_io_Address),
    .io_DataIn(dataMem_io_DataIn),
    .io_DataOut(dataMem_io_DataOut),
    .io_str(dataMem_io_str),
    .io_ld(dataMem_io_ld)
  );
  IF_ID ifId ( // @[Top.scala 27:26]
    .clock(ifId_clock),
    .reset(ifId_reset),
    .io_pc_in(ifId_io_pc_in),
    .io_pc4_in(ifId_io_pc4_in),
    .io_ins_in(ifId_io_ins_in),
    .io_pc_out(ifId_io_pc_out),
    .io_ins_out(ifId_io_ins_out),
    .io_pc4_out(ifId_io_pc4_out)
  );
  ID_EXE idExe ( // @[Top.scala 28:27]
    .clock(idExe_clock),
    .reset(idExe_reset),
    .io_memWrite_in(idExe_io_memWrite_in),
    .io_memRead_in(idExe_io_memRead_in),
    .io_memToReg_in(idExe_io_memToReg_in),
    .io_operandA_in(idExe_io_operandA_in),
    .io_operandB_in(idExe_io_operandB_in),
    .io_rd_in(idExe_io_rd_in),
    .io_strData_in(idExe_io_strData_in),
    .io_aluCtrl_in(idExe_io_aluCtrl_in),
    .io_regWrite_in(idExe_io_regWrite_in),
    .io_memWrite_out(idExe_io_memWrite_out),
    .io_memRead_out(idExe_io_memRead_out),
    .io_memToReg_out(idExe_io_memToReg_out),
    .io_operandA_out(idExe_io_operandA_out),
    .io_operandB_out(idExe_io_operandB_out),
    .io_rd_out(idExe_io_rd_out),
    .io_strData_out(idExe_io_strData_out),
    .io_aluCtrl_out(idExe_io_aluCtrl_out),
    .io_regWrite_out(idExe_io_regWrite_out)
  );
  EXE_MEM exeMem ( // @[Top.scala 29:28]
    .clock(exeMem_clock),
    .reset(exeMem_reset),
    .io_memWrite_in(exeMem_io_memWrite_in),
    .io_memRead_in(exeMem_io_memRead_in),
    .io_memToReg_in(exeMem_io_memToReg_in),
    .io_rd_in(exeMem_io_rd_in),
    .io_aluOutput_in(exeMem_io_aluOutput_in),
    .io_strData_in(exeMem_io_strData_in),
    .io_regWrite_in(exeMem_io_regWrite_in),
    .io_memWrite_out(exeMem_io_memWrite_out),
    .io_memRead_out(exeMem_io_memRead_out),
    .io_memToReg_out(exeMem_io_memToReg_out),
    .io_rd_out(exeMem_io_rd_out),
    .io_strData_out(exeMem_io_strData_out),
    .io_aluOutput_out(exeMem_io_aluOutput_out),
    .io_regWrite_out(exeMem_io_regWrite_out)
  );
  MEM_WR memWr ( // @[Top.scala 30:27]
    .clock(memWr_clock),
    .reset(memWr_reset),
    .io_memToReg_in(memWr_io_memToReg_in),
    .io_rd_in(memWr_io_rd_in),
    .io_dataOut_in(memWr_io_dataOut_in),
    .io_aluOutput_in(memWr_io_aluOutput_in),
    .io_regWrite_in(memWr_io_regWrite_in),
    .io_memToReg_out(memWr_io_memToReg_out),
    .io_rd_out(memWr_io_rd_out),
    .io_dataOut_out(memWr_io_dataOut_out),
    .io_aluOutput_out(memWr_io_aluOutput_out),
    .io_regWrite_out(memWr_io_regWrite_out)
  );
  assign _T_14 = control_io_Operand_aSel == 2'h1; // @[Top.scala 67:38]
  assign _T_15 = $signed(ifId_io_pc_out); // @[Top.scala 68:58]
  assign _T_17 = control_io_Operand_aSel == 2'h2; // @[Top.scala 69:44]
  assign _T_18 = $signed(ifId_io_pc4_out); // @[Top.scala 70:59]
  assign _GEN_0 = _T_17 ? $signed(_T_18) : $signed(regFile_io_rd1); // @[Top.scala 69:56]
  assign _T_20 = control_io_ExtendSel == 2'h0; // @[Top.scala 76:35]
  assign _T_22 = control_io_Operand_bSel; // @[Top.scala 76:73]
  assign _T_23 = _T_20 & _T_22; // @[Top.scala 76:47]
  assign _T_25 = control_io_ExtendSel == 2'h1; // @[Top.scala 78:41]
  assign _T_28 = _T_25 & _T_22; // @[Top.scala 78:53]
  assign _T_30 = control_io_ExtendSel == 2'h2; // @[Top.scala 80:41]
  assign _T_33 = _T_30 & _T_22; // @[Top.scala 80:53]
  assign _GEN_2 = _T_33 ? $signed(immGen_io_U_Imm) : $signed(regFile_io_rd2); // @[Top.scala 80:87]
  assign _GEN_3 = _T_28 ? $signed(immGen_io_S_Imm) : $signed(_GEN_2); // @[Top.scala 78:87]
  assign _T_35 = exeMem_io_aluOutput_out[9:2]; // @[Top.scala 115:55]
  assign _T_37 = memWr_io_memToReg_out; // @[Top.scala 135:36]
  assign _T_39 = regFile_io_RegWrite; // @[Top.scala 138:42]
  assign _GEN_5 = _T_39 ? $signed(memWr_io_aluOutput_out) : $signed(32'sh0); // @[Top.scala 138:50]
  assign io_main_RegOut = regFile_io_WriteData; // @[Top.scala 145:24]
  assign control_io_OpCode = ifId_io_ins_out[6:0]; // @[Top.scala 49:27]
  assign regFile_clock = clock;
  assign regFile_io_RegWrite = memWr_io_regWrite_out; // @[Top.scala 133:29]
  assign regFile_io_rs1 = ifId_io_ins_out[19:15]; // @[Top.scala 53:24]
  assign regFile_io_rs2 = ifId_io_ins_out[24:20]; // @[Top.scala 54:24]
  assign regFile_io_rd = memWr_io_rd_out; // @[Top.scala 132:23]
  assign regFile_io_WriteData = _T_37 ? $signed(memWr_io_dataOut_out) : $signed(_GEN_5); // @[Top.scala 136:38 Top.scala 139:46 Top.scala 141:46]
  assign immGen_io_ins = ifId_io_ins_out; // @[Top.scala 58:23]
  assign aluControl_io_AluOp = control_io_AluOp; // @[Top.scala 62:29]
  assign aluControl_io_Func3 = ifId_io_ins_out[14:12]; // @[Top.scala 63:29]
  assign aluControl_io_Func7 = ifId_io_ins_out[30]; // @[Top.scala 64:29]
  assign alu_io_a = idExe_io_operandA_out; // @[Top.scala 99:18]
  assign alu_io_b = idExe_io_operandB_out; // @[Top.scala 100:18]
  assign alu_io_AluControl = idExe_io_aluCtrl_out; // @[Top.scala 98:27]
  assign Pc_clock = clock;
  assign Pc_reset = reset;
  assign Pc_io_input = Pc_io_pc4; // @[Top.scala 35:21]
  assign insMem_clock = clock;
  assign insMem_io_wrAdder = Pc_io_pc[11:2]; // @[Top.scala 38:27]
  assign dataMem_clock = clock;
  assign dataMem_io_Address = {{2'd0}, _T_35}; // @[Top.scala 115:28]
  assign dataMem_io_DataIn = exeMem_io_strData_out; // @[Top.scala 118:27]
  assign dataMem_io_str = exeMem_io_memWrite_out; // @[Top.scala 116:24]
  assign dataMem_io_ld = exeMem_io_memRead_out; // @[Top.scala 117:23]
  assign ifId_clock = clock;
  assign ifId_reset = reset;
  assign ifId_io_pc_in = Pc_io_pc; // @[Top.scala 42:23]
  assign ifId_io_pc4_in = Pc_io_pc4; // @[Top.scala 43:24]
  assign ifId_io_ins_in = insMem_io_rData; // @[Top.scala 44:24]
  assign idExe_clock = clock;
  assign idExe_reset = reset;
  assign idExe_io_memWrite_in = control_io_MemWrite; // @[Top.scala 88:30]
  assign idExe_io_memRead_in = control_io_MemRead; // @[Top.scala 89:29]
  assign idExe_io_memToReg_in = control_io_MemToReg; // @[Top.scala 90:30]
  assign idExe_io_operandA_in = _T_14 ? $signed(_T_15) : $signed(_GEN_0); // @[Top.scala 68:38 Top.scala 70:38 Top.scala 72:38]
  assign idExe_io_operandB_in = _T_23 ? $signed(immGen_io_I_Imm) : $signed(_GEN_3); // @[Top.scala 77:38 Top.scala 79:38 Top.scala 81:38 Top.scala 83:38]
  assign idExe_io_rd_in = ifId_io_ins_out[11:7]; // @[Top.scala 91:24]
  assign idExe_io_strData_in = regFile_io_rd2; // @[Top.scala 92:29]
  assign idExe_io_aluCtrl_in = aluControl_io_AluC; // @[Top.scala 93:29]
  assign idExe_io_regWrite_in = control_io_RegWrite; // @[Top.scala 94:30]
  assign exeMem_clock = clock;
  assign exeMem_reset = reset;
  assign exeMem_io_memWrite_in = idExe_io_memWrite_out; // @[Top.scala 104:31]
  assign exeMem_io_memRead_in = idExe_io_memRead_out; // @[Top.scala 105:30]
  assign exeMem_io_memToReg_in = idExe_io_memToReg_out; // @[Top.scala 106:31]
  assign exeMem_io_rd_in = idExe_io_rd_out; // @[Top.scala 107:25]
  assign exeMem_io_aluOutput_in = alu_io_output; // @[Top.scala 109:32]
  assign exeMem_io_strData_in = idExe_io_strData_out; // @[Top.scala 108:30]
  assign exeMem_io_regWrite_in = idExe_io_regWrite_out; // @[Top.scala 110:31]
  assign memWr_clock = clock;
  assign memWr_reset = reset;
  assign memWr_io_memToReg_in = exeMem_io_memToReg_out; // @[Top.scala 122:30]
  assign memWr_io_rd_in = exeMem_io_rd_out; // @[Top.scala 123:24]
  assign memWr_io_dataOut_in = dataMem_io_DataOut; // @[Top.scala 125:29]
  assign memWr_io_aluOutput_in = exeMem_io_aluOutput_out; // @[Top.scala 124:31]
  assign memWr_io_regWrite_in = exeMem_io_regWrite_out; // @[Top.scala 126:30]
endmodule
