// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VHDU_H_
#define _VHDU_H_

#include "verilated.h"
class VHDU__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VHDU) {
  public:
    // CELLS
    // Public to allow access to /*verilator_public*/ items;
    // otherwise the application code can consider these internals.
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clock,0,0);
    VL_IN8(reset,0,0);
    VL_IN8(io_exRegWrite,0,0);
    VL_IN8(io_exRd,4,0);
    VL_IN8(io_idRs1,4,0);
    VL_IN8(io_idRs2,4,0);
    VL_IN8(io_operandAsel,1,0);
    VL_IN8(io_operandBsel,0,0);
    VL_IN8(io_hazard,0,0);
    VL_IN8(io_memRegWrite,0,0);
    VL_IN8(io_memRd,4,0);
    VL_OUT8(io_forwardA,1,0);
    VL_OUT8(io_forwardB,1,0);
    //char	__VpadToAlign13[3];
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    VL_SIG8(HDU__DOT___T_33,0,0);
    VL_SIG8(HDU__DOT___T_34,0,0);
    VL_SIG8(HDU__DOT___T_35,0,0);
    VL_SIG8(HDU__DOT___T_37,0,0);
    VL_SIG8(HDU__DOT___T_46,0,0);
    VL_SIG8(HDU__DOT___GEN_4,1,0);
    VL_SIG8(HDU__DOT___T_60,0,0);
    VL_SIG8(HDU__DOT___T_61,0,0);
    VL_SIG8(HDU__DOT___T_62,0,0);
    VL_SIG8(HDU__DOT___T_64,0,0);
    VL_SIG8(HDU__DOT___T_73,0,0);
    //char	__VpadToAlign31[1];
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    VL_SIG(__Vm_traceActivity,31,0);
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    //char	__VpadToAlign44[4];
    VHDU__Syms*	__VlSymsp;		// Symbol table
    
    // PARAMETERS
    // Parameters marked /*verilator public*/ for use by application code
    
    // CONSTRUCTORS
  private:
    VHDU& operator= (const VHDU&);	///< Copying not allowed
    VHDU(const VHDU&);	///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible WRT DPI scope names.
    VHDU(const char* name="TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VHDU();
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
    static void _eval_initial_loop(VHDU__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VHDU__Syms* symsp, bool first);
  private:
    static QData	_change_request(VHDU__Syms* __restrict vlSymsp);
  public:
    static void	_combo__TOP__1(VHDU__Syms* __restrict vlSymsp);
    static void	_combo__TOP__3(VHDU__Syms* __restrict vlSymsp);
    static void	_combo__TOP__5(VHDU__Syms* __restrict vlSymsp);
  private:
    void	_configure_coverage(VHDU__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void	_eval(VHDU__Syms* __restrict vlSymsp);
    static void	_eval_initial(VHDU__Syms* __restrict vlSymsp);
    static void	_eval_settle(VHDU__Syms* __restrict vlSymsp);
    static void	_settle__TOP__2(VHDU__Syms* __restrict vlSymsp);
    static void	_settle__TOP__4(VHDU__Syms* __restrict vlSymsp);
    static void	traceChgThis(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceChgThis__2(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceFullThis__1(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void	traceInitThis__1(VHDU__Syms* __restrict vlSymsp, VerilatedVcd* vcdp, uint32_t code);
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
