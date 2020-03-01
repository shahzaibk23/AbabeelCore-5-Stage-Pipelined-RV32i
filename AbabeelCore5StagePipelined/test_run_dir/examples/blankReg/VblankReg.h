// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VblankReg_H_
#define _VblankReg_H_

#include "verilated.h"
class VblankReg__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VblankReg) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    //char	__VpadToAlign2[2];
    VL_IN(io_pc_in,31,0);
    VL_IN(io_ins_in,31,0);
    VL_OUT(io_pc_out,31,0);
    VL_OUT(io_ins_out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG(blankReg__DOT__reg_pc,31,0);
    VL_SIG(blankReg__DOT__reg_ins,31,0);
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG8(__Vclklast__TOP__clock,0,0);
    //char	__VpadToAlign37[3];
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VblankReg__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VblankReg& operator= (const VblankReg&);	///< Copying not allowed
    VblankReg(const VblankReg&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VblankReg(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VblankReg();
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
    static void _eval_initial_loop(VblankReg__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VblankReg__Syms* symsp, bool first);
  private:
    static QData	_change_request(VblankReg__Syms* __restrict vlSymsp);
    void	_configure_coverage(VblankReg__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VblankReg__Syms* __restrict vlSymsp);
    static void	_eval_initial(VblankReg__Syms* __restrict vlSymsp);
    static void	_eval_settle(VblankReg__Syms* __restrict vlSymsp);
    static void	_sequent__TOP__1(VblankReg__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VblankReg__Syms* __restrict vlSymsp);
    static void	traceChgThis(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__3(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VblankReg__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
