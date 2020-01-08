// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VRegFile_H_
#define _VRegFile_H_

#include "verilated.h"
class VRegFile__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VRegFile) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_RegWrite,0,0);
    VL_IN8(io_rs1,4,0);
    VL_IN8(io_rs2,4,0);
    VL_IN8(io_rd,4,0);
    //char	__VpadToAlign6[2];
    VL_IN(io_WriteData,31,0);
    VL_OUT(io_rd1,31,0);
    VL_OUT(io_rd2,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG(RegFile__DOT__registers_0,31,0);
    VL_SIG(RegFile__DOT__registers_1,31,0);
    VL_SIG(RegFile__DOT__registers_2,31,0);
    VL_SIG(RegFile__DOT__registers_3,31,0);
    VL_SIG(RegFile__DOT__registers_4,31,0);
    VL_SIG(RegFile__DOT__registers_5,31,0);
    VL_SIG(RegFile__DOT__registers_6,31,0);
    VL_SIG(RegFile__DOT__registers_7,31,0);
    VL_SIG(RegFile__DOT__registers_8,31,0);
    VL_SIG(RegFile__DOT__registers_9,31,0);
    VL_SIG(RegFile__DOT__registers_10,31,0);
    VL_SIG(RegFile__DOT__registers_11,31,0);
    VL_SIG(RegFile__DOT__registers_12,31,0);
    VL_SIG(RegFile__DOT__registers_13,31,0);
    VL_SIG(RegFile__DOT__registers_14,31,0);
    VL_SIG(RegFile__DOT__registers_15,31,0);
    VL_SIG(RegFile__DOT__registers_16,31,0);
    VL_SIG(RegFile__DOT__registers_17,31,0);
    VL_SIG(RegFile__DOT__registers_18,31,0);
    VL_SIG(RegFile__DOT__registers_19,31,0);
    VL_SIG(RegFile__DOT__registers_20,31,0);
    VL_SIG(RegFile__DOT__registers_21,31,0);
    VL_SIG(RegFile__DOT__registers_22,31,0);
    VL_SIG(RegFile__DOT__registers_23,31,0);
    VL_SIG(RegFile__DOT__registers_24,31,0);
    VL_SIG(RegFile__DOT__registers_25,31,0);
    VL_SIG(RegFile__DOT__registers_26,31,0);
    VL_SIG(RegFile__DOT__registers_27,31,0);
    VL_SIG(RegFile__DOT__registers_28,31,0);
    VL_SIG(RegFile__DOT__registers_29,31,0);
    VL_SIG(RegFile__DOT__registers_30,31,0);
    VL_SIG(RegFile__DOT__registers_31,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign157[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VRegFile__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VRegFile& operator= (const VRegFile&);	///< Copying not allowed
    VRegFile(const VRegFile&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VRegFile(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VRegFile();
    /// Trace signals in the model; called by application code
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval();
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VRegFile__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VRegFile__Syms* symsp, bool first);
  private:
    static QData	_change_request(VRegFile__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__2(VRegFile__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VRegFile__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VRegFile__Syms* __restrict vlSymsp);
    static void	_eval_initial(VRegFile__Syms* __restrict vlSymsp);
    static void	_eval_settle(VRegFile__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VRegFile__Syms* __restrict vlSymsp);
    static void	traceChgThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VRegFile__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
