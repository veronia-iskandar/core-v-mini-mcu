// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "Vtestharness__Syms.h"
#include "Vtestharness.h"
#include "Vtestharness_soc_ctrl_reg_pkg.h"
#include "Vtestharness_uart_reg_pkg.h"



// FUNCTIONS
Vtestharness__Syms::~Vtestharness__Syms()
{
}

Vtestharness__Syms::Vtestharness__Syms(VerilatedContext* contextp, Vtestharness* topp, const char* namep)
    // Setup locals
    : VerilatedSyms{contextp}
    , __Vm_namep(namep)
    , __Vm_activity(false)
    , __Vm_baseCode(0)
    , __Vm_didInit(false)
    // Setup submodule names
    , TOP__soc_ctrl_reg_pkg(Verilated::catName(topp->name(), "soc_ctrl_reg_pkg"))
    , TOP__uart_reg_pkg(Verilated::catName(topp->name(), "uart_reg_pkg"))
{
    // Pointer to top level
    TOPp = topp;
    // Setup each module's pointers to their submodules
    TOPp->__PVT__soc_ctrl_reg_pkg = &TOP__soc_ctrl_reg_pkg;
    TOPp->__PVT__uart_reg_pkg = &TOP__uart_reg_pkg;
    // Setup each module's pointer back to symbol table (for public functions)
    TOPp->__Vconfigure(this, true);
    TOP__soc_ctrl_reg_pkg.__Vconfigure(this, true);
    TOP__uart_reg_pkg.__Vconfigure(this, true);
    // Setup scopes
    __Vscope_testharness.configure(this, name(), "testharness", "testharness", -12, VerilatedScope::SCOPE_OTHER);
    __Vscope_testharness__core_v_mini_mcu_i__cpu_subsystem_i__gen_cv32e20__cv32e20_i__if_stage_i.configure(this, name(), "testharness.core_v_mini_mcu_i.cpu_subsystem_i.gen_cv32e20.cv32e20_i.if_stage_i", "if_stage_i", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal=0; __Vfinal<2; __Vfinal++) {
        __Vscope_testharness.exportInsert(__Vfinal, "tb_getMemSize", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__tb_getMemSize_TOP));
        __Vscope_testharness.exportInsert(__Vfinal, "tb_loadHEX", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__tb_loadHEX_TOP));
        __Vscope_testharness.exportInsert(__Vfinal, "tb_readHEX", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__tb_readHEX_TOP));
        __Vscope_testharness.exportInsert(__Vfinal, "tb_writetoSram0", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram0_TOP));
        __Vscope_testharness.exportInsert(__Vfinal, "tb_writetoSram1", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram1_TOP));
        __Vscope_testharness.exportInsert(__Vfinal, "tb_writetoSram", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram_TOP));
        __Vscope_testharness__core_v_mini_mcu_i__cpu_subsystem_i__gen_cv32e20__cv32e20_i__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_key", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP));
        __Vscope_testharness__core_v_mini_mcu_i__cpu_subsystem_i__gen_cv32e20__cv32e20_i__if_stage_i.exportInsert(__Vfinal, "simutil_get_scramble_nonce", (void*)(&Vtestharness::__Vdpiexp_testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP));
    }
}
