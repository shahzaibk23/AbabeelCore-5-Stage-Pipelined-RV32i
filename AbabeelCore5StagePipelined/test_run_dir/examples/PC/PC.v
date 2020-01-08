module PC(
  input         clock,
  input         reset,
  input  [31:0] io_input,
  output [31:0] io_pc4,
  output [31:0] io_pc
);
  assign io_pc4 = 32'h4; // @[PC.scala 13:16]
  assign io_pc = 32'h0; // @[PC.scala 14:15]
endmodule
