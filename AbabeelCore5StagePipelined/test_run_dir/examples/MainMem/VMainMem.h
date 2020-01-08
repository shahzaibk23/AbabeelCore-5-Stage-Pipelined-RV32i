// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VMainMem_H_
#define _VMainMem_H_

#include "verilated.h"
class VMainMem__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VMainMem) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_str,0,0);
    VL_IN8(io_ld,0,0);
    VL_IN16(io_Address,9,0);
    //char	__VpadToAlign6[2];
    VL_IN(io_DataIn,31,0);
    VL_OUT(io_DataOut,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG16(MainMem__DOT__dMem___05FT_20_addr_pipe_0,9,0);
    //char	__VpadToAlign22[2];
    VL_SIG(MainMem__DOT__dMem___05FT_20_data,31,0);
    //char	__VpadToAlign28[4];
    VL_SIG(MainMem__DOT__dMem[1024],31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign4133[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VMainMem__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VMainMem& operator= (const VMainMem&);	///< Copying not allowed
    VMainMem(const VMainMem&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VMainMem(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VMainMem();
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
    static void _eval_initial_loop(VMainMem__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VMainMem__Syms* symsp, bool first);
  private:
    static QData	_change_request(VMainMem__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__4(VMainMem__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VMainMem__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VMainMem__Syms* __restrict vlSymsp);
    static void	_eval_initial(VMainMem__Syms* __restrict vlSymsp);
    static void	_eval_settle(VMainMem__Syms* __restrict vlSymsp);
    static void	_initial__TOP__1(VMainMem__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__2(VMainMem__Syms* __restrict vlSymsp);
    static void	_settle__TOP__3(VMainMem__Syms* __restrict vlSymsp);
    static void	traceChgThis(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__4(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VMainMem__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
