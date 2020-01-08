module MainMem(
  input         clock,
  input         reset,
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
