circuit IF_ID : @[:@2.0]
  module IF_ID : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_pc_in : UInt<32> @[:@6.4]
    input io_pc4_in : UInt<32> @[:@6.4]
    input io_ins_in : UInt<32> @[:@6.4]
    output io_pc_out : UInt<32> @[:@6.4]
    output io_ins_out : UInt<32> @[:@6.4]
    output io_pc4_out : UInt<32> @[:@6.4]
  
    reg reg_pc : UInt<32>, clock with :
      reset => (UInt<1>("h0"), reg_pc) @[IF_ID.scala 21:29:@8.4]
    reg reg_pc4 : UInt<32>, clock with :
      reset => (UInt<1>("h0"), reg_pc4) @[IF_ID.scala 22:30:@9.4]
    reg reg_ins : UInt<32>, clock with :
      reset => (UInt<1>("h0"), reg_ins) @[IF_ID.scala 23:30:@10.4]
    io_pc_out <= reg_pc @[IF_ID.scala 29:19:@14.4]
    io_ins_out <= reg_ins @[IF_ID.scala 31:20:@16.4]
    io_pc4_out <= reg_pc4 @[IF_ID.scala 30:20:@15.4]
    reg_pc <= mux(reset, UInt<32>("h0"), io_pc_in) @[IF_ID.scala 25:16:@11.4]
    reg_pc4 <= mux(reset, UInt<32>("h0"), io_pc4_in) @[IF_ID.scala 26:17:@12.4]
    reg_ins <= mux(reset, UInt<32>("h0"), io_ins_in) @[IF_ID.scala 27:17:@13.4]
