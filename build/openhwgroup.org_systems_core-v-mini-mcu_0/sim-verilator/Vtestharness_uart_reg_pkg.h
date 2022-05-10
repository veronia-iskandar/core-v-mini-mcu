// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtestharness.h for the primary calling header

#ifndef VERILATED_VTESTHARNESS_UART_REG_PKG_H_
#define VERILATED_VTESTHARNESS_UART_REG_PKG_H_  // guard

#include "verilated_heavy.h"
#include "Vtestharness__Dpi.h"

//==========

class Vtestharness__Syms;
class Vtestharness_VerilatedFst;


//----------

VL_MODULE(Vtestharness_uart_reg_pkg) {
  public:
    
    // INTERNAL VARIABLES
  private:
    Vtestharness__Syms* __VlSymsp;  // Symbol table
  public:
    
    // PARAMETERS
    VlUnpacked<CData/*3:0*/, 12> __PVT__UART_PERMIT;
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(Vtestharness_uart_reg_pkg);  ///< Copying not allowed
  public:
    Vtestharness_uart_reg_pkg(const char* name = "TOP");
    ~Vtestharness_uart_reg_pkg();
    
    // INTERNAL METHODS
    void __Vconfigure(Vtestharness__Syms* symsp, bool first);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _initial__TOP__uart_reg_pkg__1(Vtestharness__Syms* __restrict vlSymsp) VL_ATTR_COLD;
  private:
    static void traceInit(void* userp, VerilatedFst* tracep, uint32_t code) VL_ATTR_COLD;
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
