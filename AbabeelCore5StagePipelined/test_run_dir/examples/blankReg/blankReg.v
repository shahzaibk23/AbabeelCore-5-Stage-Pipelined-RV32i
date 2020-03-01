module blankReg(
  input         clock,
  input         reset,
  input  [31:0] io_pc_in,
  input  [31:0] io_ins_in,
  output [31:0] io_pc_out,
  output [31:0] io_ins_out
);
  reg [31:0] reg_pc; // @[blankReg.scala 21:29]
  reg [31:0] _RAND_0;
  reg [31:0] reg_ins; // @[blankReg.scala 22:31]
  reg [31:0] _RAND_1;
  assign io_pc_out = reg_pc; // @[blankReg.scala 26:19]
  assign io_ins_out = reg_ins; // @[blankReg.scala 29:20]
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
  reg_ins = _RAND_1[31:0];
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
      reg_ins <= 32'h0;
    end else begin
      reg_ins <= io_ins_in;
    end
  end
endmodule
