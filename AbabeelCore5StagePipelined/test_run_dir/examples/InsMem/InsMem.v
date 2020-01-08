module InsMem(
  input         clock,
  input         reset,
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
