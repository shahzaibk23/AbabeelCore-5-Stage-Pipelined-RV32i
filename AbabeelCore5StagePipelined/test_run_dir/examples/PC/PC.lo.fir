circuit PC : @[:@2.0]
  module PC : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_input : UInt<32> @[:@6.4]
    output io_pc4 : UInt<32> @[:@6.4]
    output io_pc : UInt<32> @[:@6.4]
  
    reg reg : UInt<32>, clock with :
      reset => (UInt<1>("h0"), reg) @[PC.scala 12:26:@8.4]
    node _T_14 = add(reg, UInt<3>("h4")) @[PC.scala 13:23:@9.4]
    node _T_15 = tail(_T_14, 1) @[PC.scala 13:23:@10.4]
    io_pc4 <= _T_15 @[PC.scala 13:16:@11.4]
    io_pc <= reg @[PC.scala 14:15:@12.4]
    reg <= mux(reset, UInt<32>("h0"), reg)
