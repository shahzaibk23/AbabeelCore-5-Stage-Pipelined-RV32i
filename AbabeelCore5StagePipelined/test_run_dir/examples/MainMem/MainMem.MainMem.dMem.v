module BindsTo_0_MainMem(
  input         clock,
  input         reset,
  input  [9:0]  io_Address,
  input  [31:0] io_DataIn,
  output [31:0] io_DataOut,
  input         io_str,
  input         io_ld
);

initial begin
  $readmemh("/home/hellcaster/Memory.txt", MainMem.dMem);
end
                      endmodule

bind MainMem BindsTo_0_MainMem BindsTo_0_MainMem_Inst(.*);