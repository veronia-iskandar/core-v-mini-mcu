// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness_soc_ctrl_reg_pkg.h"
#include "Vtestharness__Syms.h"

#include "verilated_dpi.h"

//==========

Vtestharness_soc_ctrl_reg_pkg::Vtestharness_soc_ctrl_reg_pkg(const char* _vcname__)
    : VerilatedModule(_vcname__)
 {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vtestharness_soc_ctrl_reg_pkg::__Vconfigure(Vtestharness__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
}

Vtestharness_soc_ctrl_reg_pkg::~Vtestharness_soc_ctrl_reg_pkg() {
}

void Vtestharness_soc_ctrl_reg_pkg::_initial__TOP__soc_ctrl_reg_pkg__1(Vtestharness__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_soc_ctrl_reg_pkg::_initial__TOP__soc_ctrl_reg_pkg__1\n"); );
    Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[0U] = 1U;
    vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[1U] = 0xfU;
}

void Vtestharness_soc_ctrl_reg_pkg::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+                Vtestharness_soc_ctrl_reg_pkg::_ctor_var_reset\n"); );
    // Body
}
