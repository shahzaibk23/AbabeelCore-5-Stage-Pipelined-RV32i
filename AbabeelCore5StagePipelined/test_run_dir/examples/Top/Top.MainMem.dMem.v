module BindsTo_1_MainMem(
  input         clock,
  input  [7:0]  io_Address,
  output [31:0] io_DataOut,
  input         io_ld
);

initial begin
  $readmemh("/home/hellcaster/Memory.txt", MainMem.dMem);
end
                      endmodule

bind MainMem BindsTo_1_MainMem BindsTo_1_MainMem_Inst(.*);