circuit JalrTarget : @[:@2.0]
  module JalrTarget : @[:@3.2]
    input clock : Clock @[:@4.4]
    input reset : UInt<1> @[:@5.4]
    input io_a : UInt<32> @[:@6.4]
    input io_b : UInt<32> @[:@6.4]
    output io_output : UInt<32> @[:@6.4]
  
    node _T_11 = add(io_a, io_b) @[JalrTarget.scala 12:29:@8.4]
    node _T_12 = tail(_T_11, 1) @[JalrTarget.scala 12:29:@9.4]
    node _T_14 = and(_T_12, UInt<32>("hfffffffe")) @[JalrTarget.scala 12:37:@10.4]
    io_output <= _T_14 @[JalrTarget.scala 12:19:@11.4]
