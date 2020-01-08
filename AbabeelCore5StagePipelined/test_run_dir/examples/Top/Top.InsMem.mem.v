module BindsTo_0_InsMem(
  input         clock,
  input  [9:0]  io_wrAdder,
  output [31:0] io_rData
);

initial begin
  $readmemh("/home/hellcaster/Instruction.txt", InsMem.mem);
end
                      endmodule

bind InsMem BindsTo_0_InsMem BindsTo_0_InsMem_Inst(.*);