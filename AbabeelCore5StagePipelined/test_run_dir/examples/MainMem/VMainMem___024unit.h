// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VMainMem.h for the primary calling header

#ifndef _VMainMem___024unit_H_
#define _VMainMem___024unit_H_

#include "verilated.h"
class VMainMem__Syms;
class VerilatedVcd;

//----------

VL_MODULE(VMainMem___024unit) {
  public:
    // CELLS
    
    // PORTS
    
    // LOCAL SIGNALS
    
    // LOCAL VARIABLES
    
    // INTERNAL VARIABLES
  private:
    //char	__VpadToAlign12[4];
    VMainMem__Syms*	__VlSymsp;		// Symbol table
  public:
    
    // PARAMETERS
    
    // CONSTRUCTORS
  private:
    VMainMem___024unit& operator= (const VMainMem___024unit&);	///< Copying not allowed
    VMainMem___024unit(const VMainMem___024unit&);	///< Copying not allowed
  public:
    VMainMem___024unit(const char* name="TOP");
    ~VMainMem___024unit();
    void trace (VerilatedVcdC* tfp, int levels, int options=0);
    
    // USER METHODS
    
    // API METHODS
    
    // INTERNAL METHODS
    void __Vconfigure(VMainMem__Syms* symsp, bool first);
  private:
    void	_configure_coverage(VMainMem__Syms* __restrict vlSymsp, bool first);
    void	_ctor_var_reset();
  public:
    static void traceInit (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceFull (VerilatedVcd* vcdp, void* userthis, uint32_t code);
    static void traceChg  (VerilatedVcd* vcdp, void* userthis, uint32_t code);
} VL_ATTR_ALIGNED(128);

#endif  /*guard*/
