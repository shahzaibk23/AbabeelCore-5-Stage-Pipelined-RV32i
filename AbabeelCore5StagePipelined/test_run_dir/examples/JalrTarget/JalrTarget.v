module JalrTarget(
  input         clock,
  input         reset,
  input  [31:0] io_a,
  input  [31:0] io_b,
  output [31:0] io_output
);
  wire [32:0] _T_11; // @[JalrTarget.scala 12:29]
  wire [31:0] _T_12; // @[JalrTarget.scala 12:29]
  wire [35:0] _GEN_0; // @[JalrTarget.scala 12:37]
  wire [35:0] _T_14; // @[JalrTarget.scala 12:37]
  assign _T_11 = io_a + io_b; // @[JalrTarget.scala 12:29]
  assign _T_12 = io_a + io_b; // @[JalrTarget.scala 12:29]
  assign _GEN_0 = {{4'd0}, _T_12}; // @[JalrTarget.scala 12:37]
  assign _T_14 = _GEN_0 & 36'hffffffffe; // @[JalrTarget.scala 12:37]
  assign io_output = _T_14[31:0]; // @[JalrTarget.scala 12:19]
endmodule
