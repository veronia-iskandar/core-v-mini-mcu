// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTHARNESS__SYMS_H_
#define VERILATED_VTESTHARNESS__SYMS_H_  // guard

#include "verilated_heavy.h"

// INCLUDE MODULE CLASSES
#include "Vtestharness.h"
#include "Vtestharness_soc_ctrl_reg_pkg.h"
#include "Vtestharness_uart_reg_pkg.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using Vtestharness__Vcb_simutil_get_scramble_key_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ (&val), IData/*31:0*/ (&simutil_get_scramble_key__Vfuncrtn));
using Vtestharness__Vcb_simutil_get_scramble_nonce_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ (&nonce), IData/*31:0*/ (&simutil_get_scramble_nonce__Vfuncrtn));
using Vtestharness__Vcb_tb_getMemSize_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ (&mem_size));
using Vtestharness__Vcb_tb_loadHEX_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, std::string file);
using Vtestharness__Vcb_tb_readHEX_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, std::string file, VlUnpacked<CData/*7:0*/, 65536> (&stimuli));
using Vtestharness__Vcb_tb_writetoSram0_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ addr, CData/*7:0*/ val3, CData/*7:0*/ val2, CData/*7:0*/ val1, CData/*7:0*/ val0);
using Vtestharness__Vcb_tb_writetoSram1_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ addr, CData/*7:0*/ val3, CData/*7:0*/ val2, CData/*7:0*/ val1, CData/*7:0*/ val0);
using Vtestharness__Vcb_tb_writetoSram_t = void (*) (Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ val, IData/*31:0*/ (&retval));

// SYMS CLASS
class Vtestharness__Syms : public VerilatedSyms {
  public:
    
    // LOCAL STATE
    const char* __Vm_namep;
    bool __Vm_activity;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode;  ///< Used by trace routines when tracing multiple models
    bool __Vm_didInit;
    
    // SUBCELL STATE
    Vtestharness*                  TOPp;
    Vtestharness_soc_ctrl_reg_pkg  TOP__soc_ctrl_reg_pkg;
    Vtestharness_uart_reg_pkg      TOP__uart_reg_pkg;
    
    // SCOPE NAMES
    VerilatedScope __Vscope_testharness;
    VerilatedScope __Vscope_testharness__core_v_mini_mcu_i__cpu_subsystem_i__gen_cv32e20__cv32e20_i__if_stage_i;
    
    // CREATORS
    Vtestharness__Syms(VerilatedContext* contextp, Vtestharness* topp, const char* namep);
    ~Vtestharness__Syms();
    
    // METHODS
    inline const char* name() { return __Vm_namep; }
    
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
