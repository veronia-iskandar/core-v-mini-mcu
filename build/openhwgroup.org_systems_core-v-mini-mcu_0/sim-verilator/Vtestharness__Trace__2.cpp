// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtestharness__Syms.h"


void Vtestharness::traceChgSub4(void* userp, VerilatedFst* tracep) {
    Vtestharness__Syms* __restrict vlSymsp = static_cast<Vtestharness__Syms*>(userp);
    Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    vluint32_t* const oldp = tracep->oldp(vlSymsp->__Vm_baseCode + 16081);
    if (false && oldp) {}  // Prevent unused
    // Variables
    VlWide<3>/*95:0*/ __Vtemp322;
    VlWide<3>/*95:0*/ __Vtemp325;
    VlWide<3>/*95:0*/ __Vtemp328;
    VlWide<3>/*95:0*/ __Vtemp331;
    VlWide<3>/*95:0*/ __Vtemp334;
    VlWide<3>/*95:0*/ __Vtemp337;
    VlWide<3>/*95:0*/ __Vtemp340;
    VlWide<3>/*95:0*/ __Vtemp343;
    VlWide<3>/*95:0*/ __Vtemp346;
    VlWide<3>/*95:0*/ __Vtemp349;
    VlWide<3>/*95:0*/ __Vtemp352;
    VlWide<3>/*95:0*/ __Vtemp355;
    VlWide<3>/*95:0*/ __Vtemp358;
    VlWide<3>/*95:0*/ __Vtemp361;
    VlWide<3>/*95:0*/ __Vtemp364;
    VlWide<3>/*95:0*/ __Vtemp367;
    VlWide<3>/*95:0*/ __Vtemp370;
    VlWide<3>/*95:0*/ __Vtemp373;
    VlWide<3>/*95:0*/ __Vtemp376;
    VlWide<3>/*95:0*/ __Vtemp379;
    VlWide<3>/*95:0*/ __Vtemp382;
    VlWide<3>/*95:0*/ __Vtemp385;
    VlWide<3>/*95:0*/ __Vtemp388;
    VlWide<3>/*95:0*/ __Vtemp391;
    VlWide<3>/*95:0*/ __Vtemp394;
    VlWide<3>/*95:0*/ __Vtemp397;
    VlWide<3>/*95:0*/ __Vtemp400;
    VlWide<3>/*95:0*/ __Vtemp403;
    VlWide<3>/*95:0*/ __Vtemp406;
    VlWide<3>/*95:0*/ __Vtemp409;
    VlWide<3>/*95:0*/ __Vtemp412;
    // Body
    {
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[0U])) {
            tracep->chgIData(oldp+0,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e16U]),32);
            tracep->chgIData(oldp+1,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e17U]),32);
            tracep->chgIData(oldp+2,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e18U]),32);
            tracep->chgIData(oldp+3,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e19U]),32);
            tracep->chgIData(oldp+4,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e1aU]),32);
            tracep->chgIData(oldp+5,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e1bU]),32);
            tracep->chgIData(oldp+6,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e1cU]),32);
            tracep->chgIData(oldp+7,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e1dU]),32);
            tracep->chgIData(oldp+8,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e1eU]),32);
            tracep->chgIData(oldp+9,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e1fU]),32);
            tracep->chgIData(oldp+10,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e20U]),32);
            tracep->chgIData(oldp+11,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e21U]),32);
            tracep->chgIData(oldp+12,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e22U]),32);
            tracep->chgIData(oldp+13,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e23U]),32);
            tracep->chgIData(oldp+14,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e24U]),32);
            tracep->chgIData(oldp+15,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e25U]),32);
            tracep->chgIData(oldp+16,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e26U]),32);
            tracep->chgIData(oldp+17,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e27U]),32);
            tracep->chgIData(oldp+18,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e28U]),32);
            tracep->chgIData(oldp+19,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e29U]),32);
            tracep->chgIData(oldp+20,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e2aU]),32);
            tracep->chgIData(oldp+21,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e2bU]),32);
            tracep->chgIData(oldp+22,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e2cU]),32);
            tracep->chgIData(oldp+23,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e2dU]),32);
            tracep->chgIData(oldp+24,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e2eU]),32);
            tracep->chgIData(oldp+25,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e2fU]),32);
            tracep->chgIData(oldp+26,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e30U]),32);
            tracep->chgIData(oldp+27,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e31U]),32);
            tracep->chgIData(oldp+28,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e32U]),32);
            tracep->chgIData(oldp+29,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e33U]),32);
            tracep->chgIData(oldp+30,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e34U]),32);
            tracep->chgIData(oldp+31,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e35U]),32);
            tracep->chgIData(oldp+32,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e36U]),32);
            tracep->chgIData(oldp+33,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e37U]),32);
            tracep->chgIData(oldp+34,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e38U]),32);
            tracep->chgIData(oldp+35,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e39U]),32);
            tracep->chgIData(oldp+36,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e3aU]),32);
            tracep->chgIData(oldp+37,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e3bU]),32);
            tracep->chgIData(oldp+38,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e3cU]),32);
            tracep->chgIData(oldp+39,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e3dU]),32);
            tracep->chgIData(oldp+40,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e3eU]),32);
            tracep->chgIData(oldp+41,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e3fU]),32);
            tracep->chgIData(oldp+42,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e40U]),32);
            tracep->chgIData(oldp+43,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e41U]),32);
            tracep->chgIData(oldp+44,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e42U]),32);
            tracep->chgIData(oldp+45,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e43U]),32);
            tracep->chgIData(oldp+46,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e44U]),32);
            tracep->chgIData(oldp+47,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e45U]),32);
            tracep->chgIData(oldp+48,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e46U]),32);
            tracep->chgIData(oldp+49,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e47U]),32);
            tracep->chgIData(oldp+50,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e48U]),32);
            tracep->chgIData(oldp+51,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e49U]),32);
            tracep->chgIData(oldp+52,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e4aU]),32);
            tracep->chgIData(oldp+53,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e4bU]),32);
            tracep->chgIData(oldp+54,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e4cU]),32);
            tracep->chgIData(oldp+55,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e4dU]),32);
            tracep->chgIData(oldp+56,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e4eU]),32);
            tracep->chgIData(oldp+57,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e4fU]),32);
            tracep->chgIData(oldp+58,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e50U]),32);
            tracep->chgIData(oldp+59,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e51U]),32);
            tracep->chgIData(oldp+60,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e52U]),32);
            tracep->chgIData(oldp+61,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e53U]),32);
            tracep->chgIData(oldp+62,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e54U]),32);
            tracep->chgIData(oldp+63,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e55U]),32);
            tracep->chgIData(oldp+64,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e56U]),32);
            tracep->chgIData(oldp+65,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e57U]),32);
            tracep->chgIData(oldp+66,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e58U]),32);
            tracep->chgIData(oldp+67,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e59U]),32);
            tracep->chgIData(oldp+68,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e5aU]),32);
            tracep->chgIData(oldp+69,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e5bU]),32);
            tracep->chgIData(oldp+70,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e5cU]),32);
            tracep->chgIData(oldp+71,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e5dU]),32);
            tracep->chgIData(oldp+72,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e5eU]),32);
            tracep->chgIData(oldp+73,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e5fU]),32);
            tracep->chgIData(oldp+74,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e60U]),32);
            tracep->chgIData(oldp+75,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e61U]),32);
            tracep->chgIData(oldp+76,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e62U]),32);
            tracep->chgIData(oldp+77,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e63U]),32);
            tracep->chgIData(oldp+78,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e64U]),32);
            tracep->chgIData(oldp+79,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e65U]),32);
            tracep->chgIData(oldp+80,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e66U]),32);
            tracep->chgIData(oldp+81,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e67U]),32);
            tracep->chgIData(oldp+82,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e68U]),32);
            tracep->chgIData(oldp+83,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e69U]),32);
            tracep->chgIData(oldp+84,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e6aU]),32);
            tracep->chgIData(oldp+85,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e6bU]),32);
            tracep->chgIData(oldp+86,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e6cU]),32);
            tracep->chgIData(oldp+87,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e6dU]),32);
            tracep->chgIData(oldp+88,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e6eU]),32);
            tracep->chgIData(oldp+89,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e6fU]),32);
            tracep->chgIData(oldp+90,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e70U]),32);
            tracep->chgIData(oldp+91,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e71U]),32);
            tracep->chgIData(oldp+92,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e72U]),32);
            tracep->chgIData(oldp+93,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e73U]),32);
            tracep->chgIData(oldp+94,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e74U]),32);
            tracep->chgIData(oldp+95,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e75U]),32);
            tracep->chgIData(oldp+96,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e76U]),32);
            tracep->chgIData(oldp+97,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e77U]),32);
            tracep->chgIData(oldp+98,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e78U]),32);
            tracep->chgIData(oldp+99,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e79U]),32);
            tracep->chgIData(oldp+100,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e7aU]),32);
            tracep->chgIData(oldp+101,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e7bU]),32);
            tracep->chgIData(oldp+102,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e7cU]),32);
            tracep->chgIData(oldp+103,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e7dU]),32);
            tracep->chgIData(oldp+104,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e7eU]),32);
            tracep->chgIData(oldp+105,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e7fU]),32);
            tracep->chgIData(oldp+106,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e80U]),32);
            tracep->chgIData(oldp+107,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e81U]),32);
            tracep->chgIData(oldp+108,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e82U]),32);
            tracep->chgIData(oldp+109,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e83U]),32);
            tracep->chgIData(oldp+110,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e84U]),32);
            tracep->chgIData(oldp+111,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e85U]),32);
            tracep->chgIData(oldp+112,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e86U]),32);
            tracep->chgIData(oldp+113,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e87U]),32);
            tracep->chgIData(oldp+114,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e88U]),32);
            tracep->chgIData(oldp+115,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e89U]),32);
            tracep->chgIData(oldp+116,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e8aU]),32);
            tracep->chgIData(oldp+117,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e8bU]),32);
            tracep->chgIData(oldp+118,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e8cU]),32);
            tracep->chgIData(oldp+119,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e8dU]),32);
            tracep->chgIData(oldp+120,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e8eU]),32);
            tracep->chgIData(oldp+121,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e8fU]),32);
            tracep->chgIData(oldp+122,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e90U]),32);
            tracep->chgIData(oldp+123,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e91U]),32);
            tracep->chgIData(oldp+124,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e92U]),32);
            tracep->chgIData(oldp+125,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e93U]),32);
            tracep->chgIData(oldp+126,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e94U]),32);
            tracep->chgIData(oldp+127,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e95U]),32);
            tracep->chgIData(oldp+128,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e96U]),32);
            tracep->chgIData(oldp+129,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e97U]),32);
            tracep->chgIData(oldp+130,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e98U]),32);
            tracep->chgIData(oldp+131,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e99U]),32);
            tracep->chgIData(oldp+132,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e9aU]),32);
            tracep->chgIData(oldp+133,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e9bU]),32);
            tracep->chgIData(oldp+134,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e9cU]),32);
            tracep->chgIData(oldp+135,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e9dU]),32);
            tracep->chgIData(oldp+136,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e9eU]),32);
            tracep->chgIData(oldp+137,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1e9fU]),32);
            tracep->chgIData(oldp+138,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea0U]),32);
            tracep->chgIData(oldp+139,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea1U]),32);
            tracep->chgIData(oldp+140,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea2U]),32);
            tracep->chgIData(oldp+141,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea3U]),32);
            tracep->chgIData(oldp+142,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea4U]),32);
            tracep->chgIData(oldp+143,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea5U]),32);
            tracep->chgIData(oldp+144,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea6U]),32);
            tracep->chgIData(oldp+145,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea7U]),32);
            tracep->chgIData(oldp+146,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea8U]),32);
            tracep->chgIData(oldp+147,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ea9U]),32);
            tracep->chgIData(oldp+148,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eaaU]),32);
            tracep->chgIData(oldp+149,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eabU]),32);
            tracep->chgIData(oldp+150,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eacU]),32);
            tracep->chgIData(oldp+151,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eadU]),32);
            tracep->chgIData(oldp+152,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eaeU]),32);
            tracep->chgIData(oldp+153,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eafU]),32);
            tracep->chgIData(oldp+154,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb0U]),32);
            tracep->chgIData(oldp+155,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb1U]),32);
            tracep->chgIData(oldp+156,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb2U]),32);
            tracep->chgIData(oldp+157,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb3U]),32);
            tracep->chgIData(oldp+158,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb4U]),32);
            tracep->chgIData(oldp+159,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb5U]),32);
            tracep->chgIData(oldp+160,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb6U]),32);
            tracep->chgIData(oldp+161,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb7U]),32);
            tracep->chgIData(oldp+162,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb8U]),32);
            tracep->chgIData(oldp+163,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eb9U]),32);
            tracep->chgIData(oldp+164,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ebaU]),32);
            tracep->chgIData(oldp+165,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ebbU]),32);
            tracep->chgIData(oldp+166,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ebcU]),32);
            tracep->chgIData(oldp+167,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ebdU]),32);
            tracep->chgIData(oldp+168,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ebeU]),32);
            tracep->chgIData(oldp+169,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ebfU]),32);
            tracep->chgIData(oldp+170,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec0U]),32);
            tracep->chgIData(oldp+171,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec1U]),32);
            tracep->chgIData(oldp+172,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec2U]),32);
            tracep->chgIData(oldp+173,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec3U]),32);
            tracep->chgIData(oldp+174,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec4U]),32);
            tracep->chgIData(oldp+175,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec5U]),32);
            tracep->chgIData(oldp+176,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec6U]),32);
            tracep->chgIData(oldp+177,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec7U]),32);
            tracep->chgIData(oldp+178,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec8U]),32);
            tracep->chgIData(oldp+179,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ec9U]),32);
            tracep->chgIData(oldp+180,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ecaU]),32);
            tracep->chgIData(oldp+181,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ecbU]),32);
            tracep->chgIData(oldp+182,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eccU]),32);
            tracep->chgIData(oldp+183,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ecdU]),32);
            tracep->chgIData(oldp+184,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eceU]),32);
            tracep->chgIData(oldp+185,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ecfU]),32);
            tracep->chgIData(oldp+186,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed0U]),32);
            tracep->chgIData(oldp+187,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed1U]),32);
            tracep->chgIData(oldp+188,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed2U]),32);
            tracep->chgIData(oldp+189,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed3U]),32);
            tracep->chgIData(oldp+190,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed4U]),32);
            tracep->chgIData(oldp+191,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed5U]),32);
            tracep->chgIData(oldp+192,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed6U]),32);
            tracep->chgIData(oldp+193,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed7U]),32);
            tracep->chgIData(oldp+194,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed8U]),32);
            tracep->chgIData(oldp+195,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ed9U]),32);
            tracep->chgIData(oldp+196,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1edaU]),32);
            tracep->chgIData(oldp+197,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1edbU]),32);
            tracep->chgIData(oldp+198,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1edcU]),32);
            tracep->chgIData(oldp+199,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eddU]),32);
            tracep->chgIData(oldp+200,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1edeU]),32);
            tracep->chgIData(oldp+201,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1edfU]),32);
            tracep->chgIData(oldp+202,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee0U]),32);
            tracep->chgIData(oldp+203,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee1U]),32);
            tracep->chgIData(oldp+204,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee2U]),32);
            tracep->chgIData(oldp+205,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee3U]),32);
            tracep->chgIData(oldp+206,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee4U]),32);
            tracep->chgIData(oldp+207,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee5U]),32);
            tracep->chgIData(oldp+208,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee6U]),32);
            tracep->chgIData(oldp+209,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee7U]),32);
            tracep->chgIData(oldp+210,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee8U]),32);
            tracep->chgIData(oldp+211,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ee9U]),32);
            tracep->chgIData(oldp+212,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eeaU]),32);
            tracep->chgIData(oldp+213,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eebU]),32);
            tracep->chgIData(oldp+214,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eecU]),32);
            tracep->chgIData(oldp+215,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eedU]),32);
            tracep->chgIData(oldp+216,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eeeU]),32);
            tracep->chgIData(oldp+217,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1eefU]),32);
            tracep->chgIData(oldp+218,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef0U]),32);
            tracep->chgIData(oldp+219,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef1U]),32);
            tracep->chgIData(oldp+220,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef2U]),32);
            tracep->chgIData(oldp+221,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef3U]),32);
            tracep->chgIData(oldp+222,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef4U]),32);
            tracep->chgIData(oldp+223,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef5U]),32);
            tracep->chgIData(oldp+224,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef6U]),32);
            tracep->chgIData(oldp+225,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef7U]),32);
            tracep->chgIData(oldp+226,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef8U]),32);
            tracep->chgIData(oldp+227,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ef9U]),32);
            tracep->chgIData(oldp+228,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1efaU]),32);
            tracep->chgIData(oldp+229,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1efbU]),32);
            tracep->chgIData(oldp+230,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1efcU]),32);
            tracep->chgIData(oldp+231,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1efdU]),32);
            tracep->chgIData(oldp+232,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1efeU]),32);
            tracep->chgIData(oldp+233,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1effU]),32);
            tracep->chgIData(oldp+234,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f00U]),32);
            tracep->chgIData(oldp+235,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f01U]),32);
            tracep->chgIData(oldp+236,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f02U]),32);
            tracep->chgIData(oldp+237,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f03U]),32);
            tracep->chgIData(oldp+238,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f04U]),32);
            tracep->chgIData(oldp+239,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f05U]),32);
            tracep->chgIData(oldp+240,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f06U]),32);
            tracep->chgIData(oldp+241,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f07U]),32);
            tracep->chgIData(oldp+242,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f08U]),32);
            tracep->chgIData(oldp+243,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f09U]),32);
            tracep->chgIData(oldp+244,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f0aU]),32);
            tracep->chgIData(oldp+245,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f0bU]),32);
            tracep->chgIData(oldp+246,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f0cU]),32);
            tracep->chgIData(oldp+247,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f0dU]),32);
            tracep->chgIData(oldp+248,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f0eU]),32);
            tracep->chgIData(oldp+249,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f0fU]),32);
            tracep->chgIData(oldp+250,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f10U]),32);
            tracep->chgIData(oldp+251,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f11U]),32);
            tracep->chgIData(oldp+252,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f12U]),32);
            tracep->chgIData(oldp+253,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f13U]),32);
            tracep->chgIData(oldp+254,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f14U]),32);
            tracep->chgIData(oldp+255,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f15U]),32);
            tracep->chgIData(oldp+256,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f16U]),32);
            tracep->chgIData(oldp+257,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f17U]),32);
            tracep->chgIData(oldp+258,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f18U]),32);
            tracep->chgIData(oldp+259,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f19U]),32);
            tracep->chgIData(oldp+260,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f1aU]),32);
            tracep->chgIData(oldp+261,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f1bU]),32);
            tracep->chgIData(oldp+262,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f1cU]),32);
            tracep->chgIData(oldp+263,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f1dU]),32);
            tracep->chgIData(oldp+264,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f1eU]),32);
            tracep->chgIData(oldp+265,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f1fU]),32);
            tracep->chgIData(oldp+266,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f20U]),32);
            tracep->chgIData(oldp+267,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f21U]),32);
            tracep->chgIData(oldp+268,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f22U]),32);
            tracep->chgIData(oldp+269,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f23U]),32);
            tracep->chgIData(oldp+270,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f24U]),32);
            tracep->chgIData(oldp+271,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f25U]),32);
            tracep->chgIData(oldp+272,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f26U]),32);
            tracep->chgIData(oldp+273,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f27U]),32);
            tracep->chgIData(oldp+274,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f28U]),32);
            tracep->chgIData(oldp+275,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f29U]),32);
            tracep->chgIData(oldp+276,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f2aU]),32);
            tracep->chgIData(oldp+277,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f2bU]),32);
            tracep->chgIData(oldp+278,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f2cU]),32);
            tracep->chgIData(oldp+279,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f2dU]),32);
            tracep->chgIData(oldp+280,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f2eU]),32);
            tracep->chgIData(oldp+281,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f2fU]),32);
            tracep->chgIData(oldp+282,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f30U]),32);
            tracep->chgIData(oldp+283,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f31U]),32);
            tracep->chgIData(oldp+284,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f32U]),32);
            tracep->chgIData(oldp+285,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f33U]),32);
            tracep->chgIData(oldp+286,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f34U]),32);
            tracep->chgIData(oldp+287,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f35U]),32);
            tracep->chgIData(oldp+288,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f36U]),32);
            tracep->chgIData(oldp+289,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f37U]),32);
            tracep->chgIData(oldp+290,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f38U]),32);
            tracep->chgIData(oldp+291,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f39U]),32);
            tracep->chgIData(oldp+292,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f3aU]),32);
            tracep->chgIData(oldp+293,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f3bU]),32);
            tracep->chgIData(oldp+294,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f3cU]),32);
            tracep->chgIData(oldp+295,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f3dU]),32);
            tracep->chgIData(oldp+296,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f3eU]),32);
            tracep->chgIData(oldp+297,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f3fU]),32);
            tracep->chgIData(oldp+298,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f40U]),32);
            tracep->chgIData(oldp+299,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f41U]),32);
            tracep->chgIData(oldp+300,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f42U]),32);
            tracep->chgIData(oldp+301,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f43U]),32);
            tracep->chgIData(oldp+302,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f44U]),32);
            tracep->chgIData(oldp+303,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f45U]),32);
            tracep->chgIData(oldp+304,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f46U]),32);
            tracep->chgIData(oldp+305,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f47U]),32);
            tracep->chgIData(oldp+306,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f48U]),32);
            tracep->chgIData(oldp+307,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f49U]),32);
            tracep->chgIData(oldp+308,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f4aU]),32);
            tracep->chgIData(oldp+309,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f4bU]),32);
            tracep->chgIData(oldp+310,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f4cU]),32);
            tracep->chgIData(oldp+311,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f4dU]),32);
            tracep->chgIData(oldp+312,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f4eU]),32);
            tracep->chgIData(oldp+313,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f4fU]),32);
            tracep->chgIData(oldp+314,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f50U]),32);
            tracep->chgIData(oldp+315,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f51U]),32);
            tracep->chgIData(oldp+316,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f52U]),32);
            tracep->chgIData(oldp+317,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f53U]),32);
            tracep->chgIData(oldp+318,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f54U]),32);
            tracep->chgIData(oldp+319,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f55U]),32);
            tracep->chgIData(oldp+320,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f56U]),32);
            tracep->chgIData(oldp+321,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f57U]),32);
            tracep->chgIData(oldp+322,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f58U]),32);
            tracep->chgIData(oldp+323,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f59U]),32);
            tracep->chgIData(oldp+324,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f5aU]),32);
            tracep->chgIData(oldp+325,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f5bU]),32);
            tracep->chgIData(oldp+326,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f5cU]),32);
            tracep->chgIData(oldp+327,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f5dU]),32);
            tracep->chgIData(oldp+328,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f5eU]),32);
            tracep->chgIData(oldp+329,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f5fU]),32);
            tracep->chgIData(oldp+330,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f60U]),32);
            tracep->chgIData(oldp+331,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f61U]),32);
            tracep->chgIData(oldp+332,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f62U]),32);
            tracep->chgIData(oldp+333,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f63U]),32);
            tracep->chgIData(oldp+334,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f64U]),32);
            tracep->chgIData(oldp+335,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f65U]),32);
            tracep->chgIData(oldp+336,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f66U]),32);
            tracep->chgIData(oldp+337,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f67U]),32);
            tracep->chgIData(oldp+338,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f68U]),32);
            tracep->chgIData(oldp+339,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f69U]),32);
            tracep->chgIData(oldp+340,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f6aU]),32);
            tracep->chgIData(oldp+341,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f6bU]),32);
            tracep->chgIData(oldp+342,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f6cU]),32);
            tracep->chgIData(oldp+343,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f6dU]),32);
            tracep->chgIData(oldp+344,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f6eU]),32);
            tracep->chgIData(oldp+345,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f6fU]),32);
            tracep->chgIData(oldp+346,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f70U]),32);
            tracep->chgIData(oldp+347,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f71U]),32);
            tracep->chgIData(oldp+348,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f72U]),32);
            tracep->chgIData(oldp+349,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f73U]),32);
            tracep->chgIData(oldp+350,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f74U]),32);
            tracep->chgIData(oldp+351,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f75U]),32);
            tracep->chgIData(oldp+352,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f76U]),32);
            tracep->chgIData(oldp+353,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f77U]),32);
            tracep->chgIData(oldp+354,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f78U]),32);
            tracep->chgIData(oldp+355,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f79U]),32);
            tracep->chgIData(oldp+356,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f7aU]),32);
            tracep->chgIData(oldp+357,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f7bU]),32);
            tracep->chgIData(oldp+358,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f7cU]),32);
            tracep->chgIData(oldp+359,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f7dU]),32);
            tracep->chgIData(oldp+360,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f7eU]),32);
            tracep->chgIData(oldp+361,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f7fU]),32);
            tracep->chgIData(oldp+362,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f80U]),32);
            tracep->chgIData(oldp+363,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f81U]),32);
            tracep->chgIData(oldp+364,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f82U]),32);
            tracep->chgIData(oldp+365,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f83U]),32);
            tracep->chgIData(oldp+366,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f84U]),32);
            tracep->chgIData(oldp+367,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f85U]),32);
            tracep->chgIData(oldp+368,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f86U]),32);
            tracep->chgIData(oldp+369,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f87U]),32);
            tracep->chgIData(oldp+370,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f88U]),32);
            tracep->chgIData(oldp+371,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f89U]),32);
            tracep->chgIData(oldp+372,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f8aU]),32);
            tracep->chgIData(oldp+373,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f8bU]),32);
            tracep->chgIData(oldp+374,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f8cU]),32);
            tracep->chgIData(oldp+375,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f8dU]),32);
            tracep->chgIData(oldp+376,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f8eU]),32);
            tracep->chgIData(oldp+377,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f8fU]),32);
            tracep->chgIData(oldp+378,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f90U]),32);
            tracep->chgIData(oldp+379,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f91U]),32);
            tracep->chgIData(oldp+380,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f92U]),32);
            tracep->chgIData(oldp+381,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f93U]),32);
            tracep->chgIData(oldp+382,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f94U]),32);
            tracep->chgIData(oldp+383,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f95U]),32);
            tracep->chgIData(oldp+384,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f96U]),32);
            tracep->chgIData(oldp+385,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f97U]),32);
            tracep->chgIData(oldp+386,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f98U]),32);
            tracep->chgIData(oldp+387,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f99U]),32);
            tracep->chgIData(oldp+388,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f9aU]),32);
            tracep->chgIData(oldp+389,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f9bU]),32);
            tracep->chgIData(oldp+390,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f9cU]),32);
            tracep->chgIData(oldp+391,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f9dU]),32);
            tracep->chgIData(oldp+392,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f9eU]),32);
            tracep->chgIData(oldp+393,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1f9fU]),32);
            tracep->chgIData(oldp+394,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa0U]),32);
            tracep->chgIData(oldp+395,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa1U]),32);
            tracep->chgIData(oldp+396,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa2U]),32);
            tracep->chgIData(oldp+397,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa3U]),32);
            tracep->chgIData(oldp+398,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa4U]),32);
            tracep->chgIData(oldp+399,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa5U]),32);
            tracep->chgIData(oldp+400,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa6U]),32);
            tracep->chgIData(oldp+401,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa7U]),32);
            tracep->chgIData(oldp+402,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa8U]),32);
            tracep->chgIData(oldp+403,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fa9U]),32);
            tracep->chgIData(oldp+404,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1faaU]),32);
            tracep->chgIData(oldp+405,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fabU]),32);
            tracep->chgIData(oldp+406,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1facU]),32);
            tracep->chgIData(oldp+407,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fadU]),32);
            tracep->chgIData(oldp+408,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1faeU]),32);
            tracep->chgIData(oldp+409,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fafU]),32);
            tracep->chgIData(oldp+410,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb0U]),32);
            tracep->chgIData(oldp+411,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb1U]),32);
            tracep->chgIData(oldp+412,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb2U]),32);
            tracep->chgIData(oldp+413,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb3U]),32);
            tracep->chgIData(oldp+414,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb4U]),32);
            tracep->chgIData(oldp+415,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb5U]),32);
            tracep->chgIData(oldp+416,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb6U]),32);
            tracep->chgIData(oldp+417,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb7U]),32);
            tracep->chgIData(oldp+418,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb8U]),32);
            tracep->chgIData(oldp+419,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fb9U]),32);
            tracep->chgIData(oldp+420,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fbaU]),32);
            tracep->chgIData(oldp+421,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fbbU]),32);
            tracep->chgIData(oldp+422,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fbcU]),32);
            tracep->chgIData(oldp+423,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fbdU]),32);
            tracep->chgIData(oldp+424,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fbeU]),32);
            tracep->chgIData(oldp+425,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fbfU]),32);
            tracep->chgIData(oldp+426,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc0U]),32);
            tracep->chgIData(oldp+427,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc1U]),32);
            tracep->chgIData(oldp+428,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc2U]),32);
            tracep->chgIData(oldp+429,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc3U]),32);
            tracep->chgIData(oldp+430,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc4U]),32);
            tracep->chgIData(oldp+431,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc5U]),32);
            tracep->chgIData(oldp+432,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc6U]),32);
            tracep->chgIData(oldp+433,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc7U]),32);
            tracep->chgIData(oldp+434,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc8U]),32);
            tracep->chgIData(oldp+435,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fc9U]),32);
            tracep->chgIData(oldp+436,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fcaU]),32);
            tracep->chgIData(oldp+437,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fcbU]),32);
            tracep->chgIData(oldp+438,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fccU]),32);
            tracep->chgIData(oldp+439,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fcdU]),32);
            tracep->chgIData(oldp+440,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fceU]),32);
            tracep->chgIData(oldp+441,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fcfU]),32);
            tracep->chgIData(oldp+442,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd0U]),32);
            tracep->chgIData(oldp+443,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd1U]),32);
            tracep->chgIData(oldp+444,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd2U]),32);
            tracep->chgIData(oldp+445,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd3U]),32);
            tracep->chgIData(oldp+446,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd4U]),32);
            tracep->chgIData(oldp+447,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd5U]),32);
            tracep->chgIData(oldp+448,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd6U]),32);
            tracep->chgIData(oldp+449,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd7U]),32);
            tracep->chgIData(oldp+450,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd8U]),32);
            tracep->chgIData(oldp+451,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fd9U]),32);
            tracep->chgIData(oldp+452,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fdaU]),32);
            tracep->chgIData(oldp+453,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fdbU]),32);
            tracep->chgIData(oldp+454,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fdcU]),32);
            tracep->chgIData(oldp+455,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fddU]),32);
            tracep->chgIData(oldp+456,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fdeU]),32);
            tracep->chgIData(oldp+457,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fdfU]),32);
            tracep->chgIData(oldp+458,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe0U]),32);
            tracep->chgIData(oldp+459,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe1U]),32);
            tracep->chgIData(oldp+460,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe2U]),32);
            tracep->chgIData(oldp+461,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe3U]),32);
            tracep->chgIData(oldp+462,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe4U]),32);
            tracep->chgIData(oldp+463,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe5U]),32);
            tracep->chgIData(oldp+464,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe6U]),32);
            tracep->chgIData(oldp+465,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe7U]),32);
            tracep->chgIData(oldp+466,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe8U]),32);
            tracep->chgIData(oldp+467,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fe9U]),32);
            tracep->chgIData(oldp+468,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1feaU]),32);
            tracep->chgIData(oldp+469,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1febU]),32);
            tracep->chgIData(oldp+470,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fecU]),32);
            tracep->chgIData(oldp+471,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fedU]),32);
            tracep->chgIData(oldp+472,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1feeU]),32);
            tracep->chgIData(oldp+473,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fefU]),32);
            tracep->chgIData(oldp+474,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff0U]),32);
            tracep->chgIData(oldp+475,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff1U]),32);
            tracep->chgIData(oldp+476,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff2U]),32);
            tracep->chgIData(oldp+477,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff3U]),32);
            tracep->chgIData(oldp+478,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff4U]),32);
            tracep->chgIData(oldp+479,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff5U]),32);
            tracep->chgIData(oldp+480,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff6U]),32);
            tracep->chgIData(oldp+481,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff7U]),32);
            tracep->chgIData(oldp+482,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff8U]),32);
            tracep->chgIData(oldp+483,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ff9U]),32);
            tracep->chgIData(oldp+484,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ffaU]),32);
            tracep->chgIData(oldp+485,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ffbU]),32);
            tracep->chgIData(oldp+486,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ffcU]),32);
            tracep->chgIData(oldp+487,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ffdU]),32);
            tracep->chgIData(oldp+488,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1ffeU]),32);
            tracep->chgIData(oldp+489,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0x1fffU]),32);
            tracep->chgIData(oldp+490,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+491,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
            tracep->chgIData(oldp+492,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0U]),32);
            tracep->chgIData(oldp+493,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[1U]),32);
            tracep->chgIData(oldp+494,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[2U]),32);
            tracep->chgIData(oldp+495,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[3U]),32);
            tracep->chgIData(oldp+496,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[4U]),32);
            tracep->chgIData(oldp+497,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[5U]),32);
            tracep->chgIData(oldp+498,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[6U]),32);
            tracep->chgIData(oldp+499,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[7U]),32);
            tracep->chgIData(oldp+500,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[8U]),32);
            tracep->chgIData(oldp+501,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[9U]),32);
            tracep->chgIData(oldp+502,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0xaU]),32);
            tracep->chgIData(oldp+503,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0xbU]),32);
            tracep->chgIData(oldp+504,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0xcU]),32);
            tracep->chgIData(oldp+505,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0xdU]),32);
            tracep->chgIData(oldp+506,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0xeU]),32);
            tracep->chgIData(oldp+507,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0xfU]),32);
            tracep->chgIData(oldp+508,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x10U]),32);
            tracep->chgIData(oldp+509,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x11U]),32);
            tracep->chgIData(oldp+510,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x12U]),32);
            tracep->chgIData(oldp+511,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x13U]),32);
            tracep->chgIData(oldp+512,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x14U]),32);
            tracep->chgIData(oldp+513,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x15U]),32);
            tracep->chgIData(oldp+514,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x16U]),32);
            tracep->chgIData(oldp+515,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x17U]),32);
            tracep->chgIData(oldp+516,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x18U]),32);
            tracep->chgIData(oldp+517,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x19U]),32);
            tracep->chgIData(oldp+518,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x1aU]),32);
            tracep->chgIData(oldp+519,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x1bU]),32);
            tracep->chgIData(oldp+520,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x1cU]),32);
            tracep->chgIData(oldp+521,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x1dU]),32);
            tracep->chgIData(oldp+522,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x1eU]),32);
            tracep->chgIData(oldp+523,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x1fU]),32);
            tracep->chgIData(oldp+524,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x20U]),32);
            tracep->chgIData(oldp+525,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x21U]),32);
            tracep->chgIData(oldp+526,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x22U]),32);
            tracep->chgIData(oldp+527,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x23U]),32);
            tracep->chgIData(oldp+528,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x24U]),32);
            tracep->chgIData(oldp+529,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x25U]),32);
            tracep->chgIData(oldp+530,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x26U]),32);
            tracep->chgIData(oldp+531,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x27U]),32);
            tracep->chgIData(oldp+532,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x28U]),32);
            tracep->chgIData(oldp+533,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x29U]),32);
            tracep->chgIData(oldp+534,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x2aU]),32);
            tracep->chgIData(oldp+535,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x2bU]),32);
            tracep->chgIData(oldp+536,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x2cU]),32);
            tracep->chgIData(oldp+537,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x2dU]),32);
            tracep->chgIData(oldp+538,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x2eU]),32);
            tracep->chgIData(oldp+539,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x2fU]),32);
            tracep->chgIData(oldp+540,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x30U]),32);
            tracep->chgIData(oldp+541,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x31U]),32);
            tracep->chgIData(oldp+542,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x32U]),32);
            tracep->chgIData(oldp+543,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x33U]),32);
            tracep->chgIData(oldp+544,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x34U]),32);
            tracep->chgIData(oldp+545,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x35U]),32);
            tracep->chgIData(oldp+546,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x36U]),32);
            tracep->chgIData(oldp+547,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x37U]),32);
            tracep->chgIData(oldp+548,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x38U]),32);
            tracep->chgIData(oldp+549,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x39U]),32);
            tracep->chgIData(oldp+550,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x3aU]),32);
            tracep->chgIData(oldp+551,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x3bU]),32);
            tracep->chgIData(oldp+552,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x3cU]),32);
            tracep->chgIData(oldp+553,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x3dU]),32);
            tracep->chgIData(oldp+554,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x3eU]),32);
            tracep->chgIData(oldp+555,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x3fU]),32);
            tracep->chgIData(oldp+556,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x40U]),32);
            tracep->chgIData(oldp+557,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x41U]),32);
            tracep->chgIData(oldp+558,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x42U]),32);
            tracep->chgIData(oldp+559,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x43U]),32);
            tracep->chgIData(oldp+560,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x44U]),32);
            tracep->chgIData(oldp+561,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x45U]),32);
            tracep->chgIData(oldp+562,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x46U]),32);
            tracep->chgIData(oldp+563,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x47U]),32);
            tracep->chgIData(oldp+564,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x48U]),32);
            tracep->chgIData(oldp+565,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x49U]),32);
            tracep->chgIData(oldp+566,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x4aU]),32);
            tracep->chgIData(oldp+567,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x4bU]),32);
            tracep->chgIData(oldp+568,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x4cU]),32);
            tracep->chgIData(oldp+569,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x4dU]),32);
            tracep->chgIData(oldp+570,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x4eU]),32);
            tracep->chgIData(oldp+571,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x4fU]),32);
            tracep->chgIData(oldp+572,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x50U]),32);
            tracep->chgIData(oldp+573,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x51U]),32);
            tracep->chgIData(oldp+574,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x52U]),32);
            tracep->chgIData(oldp+575,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x53U]),32);
            tracep->chgIData(oldp+576,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x54U]),32);
            tracep->chgIData(oldp+577,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x55U]),32);
            tracep->chgIData(oldp+578,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x56U]),32);
            tracep->chgIData(oldp+579,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x57U]),32);
            tracep->chgIData(oldp+580,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x58U]),32);
            tracep->chgIData(oldp+581,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x59U]),32);
            tracep->chgIData(oldp+582,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x5aU]),32);
            tracep->chgIData(oldp+583,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x5bU]),32);
            tracep->chgIData(oldp+584,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x5cU]),32);
            tracep->chgIData(oldp+585,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x5dU]),32);
            tracep->chgIData(oldp+586,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x5eU]),32);
            tracep->chgIData(oldp+587,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x5fU]),32);
            tracep->chgIData(oldp+588,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x60U]),32);
            tracep->chgIData(oldp+589,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x61U]),32);
            tracep->chgIData(oldp+590,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x62U]),32);
            tracep->chgIData(oldp+591,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x63U]),32);
            tracep->chgIData(oldp+592,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x64U]),32);
            tracep->chgIData(oldp+593,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x65U]),32);
            tracep->chgIData(oldp+594,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x66U]),32);
            tracep->chgIData(oldp+595,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x67U]),32);
            tracep->chgIData(oldp+596,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x68U]),32);
            tracep->chgIData(oldp+597,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x69U]),32);
            tracep->chgIData(oldp+598,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x6aU]),32);
            tracep->chgIData(oldp+599,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x6bU]),32);
            tracep->chgIData(oldp+600,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x6cU]),32);
            tracep->chgIData(oldp+601,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x6dU]),32);
            tracep->chgIData(oldp+602,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x6eU]),32);
            tracep->chgIData(oldp+603,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x6fU]),32);
            tracep->chgIData(oldp+604,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x70U]),32);
            tracep->chgIData(oldp+605,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x71U]),32);
            tracep->chgIData(oldp+606,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x72U]),32);
            tracep->chgIData(oldp+607,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x73U]),32);
            tracep->chgIData(oldp+608,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x74U]),32);
            tracep->chgIData(oldp+609,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x75U]),32);
            tracep->chgIData(oldp+610,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x76U]),32);
            tracep->chgIData(oldp+611,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x77U]),32);
            tracep->chgIData(oldp+612,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x78U]),32);
            tracep->chgIData(oldp+613,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x79U]),32);
            tracep->chgIData(oldp+614,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x7aU]),32);
            tracep->chgIData(oldp+615,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x7bU]),32);
            tracep->chgIData(oldp+616,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x7cU]),32);
            tracep->chgIData(oldp+617,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x7dU]),32);
            tracep->chgIData(oldp+618,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x7eU]),32);
            tracep->chgIData(oldp+619,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0x7fU]),32);
            tracep->chgIData(oldp+620,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__i),32);
            tracep->chgIData(oldp+621,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__proc_sram_init__DOT__unnamedblk1__DOT__unnamedblk2__DOT__j),32);
            tracep->chgQData(oldp+622,(vlTOPp->testharness__DOT__i_uart0__DOT__ctx),64);
            tracep->chgCData(oldp+624,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[0]),4);
            tracep->chgCData(oldp+625,(vlSymsp->TOP__soc_ctrl_reg_pkg.__PVT__SOC_CTRL_PERMIT[1]),4);
            tracep->chgCData(oldp+626,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[0]),4);
            tracep->chgCData(oldp+627,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[1]),4);
            tracep->chgCData(oldp+628,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[2]),4);
            tracep->chgCData(oldp+629,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[3]),4);
            tracep->chgCData(oldp+630,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[4]),4);
            tracep->chgCData(oldp+631,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[5]),4);
            tracep->chgCData(oldp+632,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[6]),4);
            tracep->chgCData(oldp+633,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[7]),4);
            tracep->chgCData(oldp+634,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[8]),4);
            tracep->chgCData(oldp+635,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[9]),4);
            tracep->chgCData(oldp+636,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[10]),4);
            tracep->chgCData(oldp+637,(vlSymsp->TOP__uart_reg_pkg.__PVT__UART_PERMIT[11]),4);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[1U])) {
            tracep->chgBit(oldp+638,(vlTOPp->testharness__DOT__uart_tx));
            tracep->chgBit(oldp+639,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__core_instr_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+640,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__core_instr_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+641,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__core_instr_req[2U])),4);
            tracep->chgIData(oldp+642,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__core_instr_req[1U]),32);
            tracep->chgIData(oldp+643,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__core_instr_req[0U]),32);
            tracep->chgBit(oldp+644,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+645,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U])));
            tracep->chgIData(oldp+646,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[0U]),32);
            tracep->chgBit(oldp+647,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+648,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+649,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                         << 0x1eU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                           >> 2U))),32);
            tracep->chgBit(oldp+650,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+651,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[3U] 
                                            >> 4U))));
            tracep->chgIData(oldp+652,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[3U] 
                                         << 0x1cU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+653,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+654,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+655,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                                   >> 6U)))),4);
            tracep->chgIData(oldp+656,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         << 0x1aU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                           >> 6U))),32);
            tracep->chgIData(oldp+657,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                         << 0x1aU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                           >> 6U))),32);
            tracep->chgBit(oldp+658,((1U & (IData)(
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram0_slave_resp 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+659,((1U & (IData)(
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram0_slave_resp 
                                                    >> 0x20U)))));
            tracep->chgIData(oldp+660,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram0_slave_resp)),32);
            tracep->chgBit(oldp+661,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+662,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+663,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 << 0x14U) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                   >> 0xcU)))),4);
            tracep->chgIData(oldp+664,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                         << 0x14U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                           >> 0xcU))),32);
            tracep->chgIData(oldp+665,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         << 0x14U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                           >> 0xcU))),32);
            tracep->chgBit(oldp+666,((1U & (IData)(
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram1_slave_resp 
                                                    >> 0x21U)))));
            tracep->chgBit(oldp+667,((1U & (IData)(
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram1_slave_resp 
                                                    >> 0x20U)))));
            tracep->chgIData(oldp+668,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram1_slave_resp)),32);
            tracep->chgBit(oldp+669,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+670,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                            >> 0x16U))));
            tracep->chgCData(oldp+671,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                                                 << 0xeU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   >> 0x12U)))),4);
            tracep->chgIData(oldp+672,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                         << 0xeU) | 
                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                         >> 0x12U))),32);
            tracep->chgIData(oldp+673,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                         << 0xeU) | 
                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                         >> 0x12U))),32);
            tracep->chgBit(oldp+674,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                            >> 0x1dU))));
            tracep->chgBit(oldp+675,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                            >> 0x1cU))));
            tracep->chgCData(oldp+676,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                                                 << 8U) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                                   >> 0x18U)))),4);
            tracep->chgIData(oldp+677,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                         << 8U) | (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                                                   >> 0x18U))),32);
            tracep->chgIData(oldp+678,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                                         << 8U) | (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   >> 0x18U))),32);
            tracep->chgBit(oldp+679,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__gnt_o));
            tracep->chgBit(oldp+680,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                            >> 3U))));
            tracep->chgBit(oldp+681,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                            >> 2U))));
            tracep->chgCData(oldp+682,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                                 << 2U) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xcU] 
                                                   >> 0x1eU)))),4);
            tracep->chgIData(oldp+683,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xcU] 
                                         << 2U) | (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                                                   >> 0x1eU))),32);
            tracep->chgIData(oldp+684,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                                         << 2U) | (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                                   >> 0x1eU))),32);
            tracep->chgBit(oldp+685,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o));
            tracep->chgIData(oldp+686,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb),32);
            tracep->chgBit(oldp+687,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req));
            tracep->chgBit(oldp+688,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+689,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U])));
            tracep->chgIData(oldp+690,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[0U]),32);
            tracep->chgBit(oldp+691,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+692,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+693,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                         << 0x1eU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                           >> 2U))),32);
            tracep->chgBit(oldp+694,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__double_fault_seen_o));
            tracep->chgBit(oldp+695,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_valid_clear));
            tracep->chgBit(oldp+696,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_load_err));
            tracep->chgBit(oldp+697,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_store_err));
            tracep->chgIData(oldp+698,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_rdata_ext),32);
            tracep->chgBit(oldp+699,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_op_en));
            tracep->chgBit(oldp+700,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_in_ready));
            tracep->chgBit(oldp+701,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_resp_valid));
            tracep->chgBit(oldp+702,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_load_err) 
                                      | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_store_err))));
            tracep->chgBit(oldp+703,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_done));
            tracep->chgBit(oldp+704,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_instr_ret_wb));
            tracep->chgBit(oldp+705,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d));
            tracep->chgBit(oldp+706,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw));
            tracep->chgIData(oldp+707,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata),32);
            tracep->chgBit(oldp+708,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_err));
            tracep->chgIData(oldp+709,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_decompressed),32);
            tracep->chgBit(oldp+710,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__illegal_c_insn));
            tracep->chgBit(oldp+711,((3U != (3U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata))));
            tracep->chgBit(oldp+712,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                      & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_err)))));
            tracep->chgBit(oldp+713,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req));
            tracep->chgBit(oldp+714,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req) 
                                      & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                            >> 1U)))));
            tracep->chgCData(oldp+715,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n),2);
            tracep->chgCData(oldp+716,(((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U])
                                         ? (1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n))),2);
            tracep->chgCData(oldp+717,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n),2);
            tracep->chgCData(oldp+718,(((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U])
                                         ? (1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                  >> 1U))
                                         : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))),2);
            tracep->chgBit(oldp+719,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid));
            tracep->chgIData(oldp+720,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U]),32);
            tracep->chgIData(oldp+721,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U]),32);
            tracep->chgIData(oldp+722,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U]),32);
            tracep->chgCData(oldp+723,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_d),3);
            tracep->chgCData(oldp+724,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_pushed),3);
            tracep->chgCData(oldp+725,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_popped),3);
            tracep->chgCData(oldp+726,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en),3);
            tracep->chgBit(oldp+727,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__pop_fifo));
            tracep->chgIData(oldp+728,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata),32);
            tracep->chgBit(oldp+729,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid));
            tracep->chgBit(oldp+730,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__aligned_is_compressed));
            tracep->chgBit(oldp+731,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed));
            tracep->chgBit(oldp+732,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two));
            tracep->chgBit(oldp+733,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__stall_multdiv));
            tracep->chgBit(oldp+734,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__stall_branch));
            tracep->chgBit(oldp+735,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__stall_jump));
            tracep->chgBit(oldp+736,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__stall_id));
            tracep->chgBit(oldp+737,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__multicycle_done));
            tracep->chgBit(oldp+738,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__csr_pipe_flush));
            tracep->chgBit(oldp+739,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__id_fsm_d));
            tracep->chgCData(oldp+740,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_ns),4);
            tracep->chgBit(oldp+741,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__halt_if));
            tracep->chgBit(oldp+742,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__retain_id));
            tracep->chgBit(oldp+743,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_store_err) 
                                      | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_load_err))));
            tracep->chgBit(oldp+744,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__special_req));
            tracep->chgBit(oldp+745,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__addr_update));
            tracep->chgBit(oldp+746,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ctrl_update));
            tracep->chgBit(oldp+747,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_update));
            tracep->chgBit(oldp+748,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            tracep->chgBit(oldp+749,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__pmp_err_d));
            tracep->chgBit(oldp+750,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__lsu_err_d));
            tracep->chgCData(oldp+751,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_ns),3);
            tracep->chgBit(oldp+752,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d) 
                                            >> 5U))));
            tracep->chgBit(oldp+753,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d) 
                                            >> 4U))));
            tracep->chgCData(oldp+754,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d) 
                                              >> 2U))),2);
            tracep->chgBit(oldp+755,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+756,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d))));
            tracep->chgBit(oldp+757,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_en));
            tracep->chgBit(oldp+758,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_en));
            tracep->chgBit(oldp+759,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mscratch_en));
            tracep->chgBit(oldp+760,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mepc_en));
            tracep->chgCData(oldp+761,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcause_d),6);
            tracep->chgBit(oldp+762,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcause_en));
            tracep->chgBit(oldp+763,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mtval_en));
            tracep->chgBit(oldp+764,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mtvec_en));
            tracep->chgCData(oldp+765,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                                >> 0x1cU))),4);
            tracep->chgSData(oldp+766,((0xfffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                                  >> 0x10U))),12);
            tracep->chgBit(oldp+767,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0xfU))));
            tracep->chgBit(oldp+768,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0xeU))));
            tracep->chgBit(oldp+769,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0xdU))));
            tracep->chgBit(oldp+770,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0xcU))));
            tracep->chgBit(oldp+771,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0xbU))));
            tracep->chgBit(oldp+772,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 0xaU))));
            tracep->chgBit(oldp+773,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 9U))));
            tracep->chgCData(oldp+774,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                              >> 6U))),3);
            tracep->chgBit(oldp+775,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 5U))));
            tracep->chgBit(oldp+776,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 4U))));
            tracep->chgBit(oldp+777,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 3U))));
            tracep->chgBit(oldp+778,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d 
                                            >> 2U))));
            tracep->chgCData(oldp+779,((3U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d)),2);
            tracep->chgBit(oldp+780,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_en));
            tracep->chgBit(oldp+781,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__depc_en));
            tracep->chgBit(oldp+782,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dscratch0_en));
            tracep->chgBit(oldp+783,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dscratch1_en));
            tracep->chgBit(oldp+784,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_we));
            tracep->chgIData(oldp+785,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_we),32);
            tracep->chgIData(oldp+786,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounterh_we),32);
            tracep->chgIData(oldp+787,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_incr),32);
            tracep->chgBit(oldp+788,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 1U))));
            tracep->chgBit(oldp+789,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 1U))));
            tracep->chgBit(oldp+790,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                            >> 1U))));
            tracep->chgBit(oldp+791,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                            >> 7U))));
            tracep->chgBit(oldp+792,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                            >> 6U))));
            tracep->chgCData(oldp+793,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                              >> 3U))),3);
            tracep->chgBit(oldp+794,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                            >> 2U))));
            tracep->chgBit(oldp+795,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d) 
                                            >> 1U))));
            tracep->chgBit(oldp+796,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d))));
            tracep->chgBit(oldp+797,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_we));
            tracep->chgBit(oldp+798,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_we_int));
            tracep->chgIData(oldp+799,((0x1fffffffU 
                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                           >> 3U))),29);
            tracep->chgIData(oldp+800,((0x1fffffffU 
                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                           >> 3U))),29);
            tracep->chgIData(oldp+801,((0x1fffffffU 
                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                           >> 3U))),29);
            tracep->chgCData(oldp+802,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d),6);
            tracep->chgIData(oldp+803,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d),32);
            tracep->chgBit(oldp+804,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounterh_we)));
            tracep->chgBit(oldp+805,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_we)));
            tracep->chgQData(oldp+806,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+808,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__we));
            tracep->chgQData(oldp+809,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d),64);
            tracep->chgBit(oldp+811,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounterh_we 
                                            >> 2U))));
            tracep->chgBit(oldp+812,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_we 
                                            >> 2U))));
            tracep->chgQData(oldp+813,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_load),64);
            tracep->chgBit(oldp+815,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__we));
            tracep->chgQData(oldp+816,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d),64);
            tracep->chgCData(oldp+818,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d),8);
            tracep->chgIData(oldp+819,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec),32);
            tracep->chgBit(oldp+820,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__test_logic_reset));
            tracep->chgBit(oldp+821,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__shift_dr));
            tracep->chgBit(oldp+822,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__update_dr));
            tracep->chgBit(oldp+823,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__capture_dr));
            tracep->chgCData(oldp+824,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_d),3);
            tracep->chgQData(oldp+825,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_d),41);
            tracep->chgCData(oldp+827,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_d),7);
            tracep->chgIData(oldp+828,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_d),32);
            tracep->chgBit(oldp+829,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_dmi_busy));
            tracep->chgCData(oldp+830,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_d),2);
            tracep->chgCData(oldp+831,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_d),4);
            tracep->chgCData(oldp+832,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_d),5);
            tracep->chgCData(oldp+833,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_d),5);
            tracep->chgBit(oldp+834,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_ir));
            tracep->chgBit(oldp+835,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir));
            tracep->chgBit(oldp+836,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_ir));
            tracep->chgIData(oldp+837,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_d),32);
            tracep->chgSData(oldp+838,((0x3fffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                   >> 0x12U))),14);
            tracep->chgBit(oldp+839,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0x11U))));
            tracep->chgBit(oldp+840,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0x10U))));
            tracep->chgBit(oldp+841,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                            >> 0xfU))));
            tracep->chgCData(oldp+842,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                              >> 0xcU))),3);
            tracep->chgCData(oldp+843,((3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                              >> 0xaU))),2);
            tracep->chgCData(oldp+844,((0x3fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d 
                                                 >> 4U))),6);
            tracep->chgCData(oldp+845,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_d)),4);
            tracep->chgBit(oldp+846,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_d));
            tracep->chgBit(oldp+847,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                            >> 0x17U))));
            tracep->chgBit(oldp+848,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                            >> 0x16U))));
            tracep->chgIData(oldp+849,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                         << 0xeU) | 
                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                         >> 0x12U))),32);
            tracep->chgCData(oldp+850,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                                                 << 0xeU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   >> 0x12U)))),4);
            tracep->chgIData(oldp+851,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                         << 0xeU) | 
                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                         >> 0x12U))),32);
            tracep->chgBit(oldp+852,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+853,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[3U] 
                                            >> 4U))));
            tracep->chgIData(oldp+854,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[3U] 
                                         << 0x1cU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+855,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror_valid));
            tracep->chgCData(oldp+856,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror),3);
            tracep->chgIData(oldp+857,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT____Vcellout__i_dm_mem__data_o)),32);
            tracep->chgIData(oldp+858,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT____Vcellout__i_dm_mem__data_o 
                                                >> 0x20U))),32);
            tracep->chgBit(oldp+859,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__data_valid));
            tracep->chgIData(oldp+860,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sbaddress_sba_csrs),32);
            tracep->chgCData(oldp+861,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d),3);
            tracep->chgQData(oldp+862,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d),64);
            tracep->chgQData(oldp+864,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d),64);
            tracep->chgIData(oldp+866,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d)),32);
            tracep->chgIData(oldp+867,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d 
                                                >> 0x20U))),32);
            tracep->chgCData(oldp+868,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                              >> 0x1dU))),3);
            tracep->chgCData(oldp+869,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                 >> 0x18U))),5);
            tracep->chgSData(oldp+870,((0x7ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                  >> 0xdU))),11);
            tracep->chgBit(oldp+871,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 0xcU))));
            tracep->chgBit(oldp+872,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                            >> 0xbU))));
            tracep->chgCData(oldp+873,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                              >> 8U))),3);
            tracep->chgCData(oldp+874,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs 
                                                >> 4U))),4);
            tracep->chgCData(oldp+875,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__a_abstractcs)),4);
            tracep->chgCData(oldp+876,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d),3);
            tracep->chgBit(oldp+877,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned))));
            tracep->chgBit(oldp+878,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned))));
            tracep->chgBit(oldp+879,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__going));
            tracep->chgBit(oldp+880,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception));
            tracep->chgQData(oldp+881,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d),64);
            tracep->chgBit(oldp+883,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                            >> 0x12U))));
            tracep->chgCData(oldp+884,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned),2);
            tracep->chgCData(oldp+885,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned),2);
            tracep->chgCData(oldp+886,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned),2);
            tracep->chgBit(oldp+887,((0x800U <= (0xfffU 
                                                 & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                     << 0xeU) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                       >> 0x12U))))));
            tracep->chgCData(oldp+888,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d),2);
            tracep->chgQData(oldp+889,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits),64);
            tracep->chgCData(oldp+891,((0xffU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata))),8);
            tracep->chgCData(oldp+892,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 8U)))),8);
            tracep->chgCData(oldp+893,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x10U)))),8);
            tracep->chgCData(oldp+894,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x18U)))),8);
            tracep->chgCData(oldp+895,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x20U)))),8);
            tracep->chgCData(oldp+896,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x28U)))),8);
            tracep->chgCData(oldp+897,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x30U)))),8);
            tracep->chgCData(oldp+898,((0xffU & (IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                         >> 0x38U)))),8);
            tracep->chgQData(oldp+899,((QData)((IData)(
                                                       ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                           >> 0x12U))))),64);
            tracep->chgIData(oldp+901,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i),32);
            tracep->chgBit(oldp+902,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+903,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+904,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[2U])),4);
            tracep->chgIData(oldp+905,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[1U]),32);
            tracep->chgIData(oldp+906,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[0U]),32);
            tracep->chgBit(oldp+907,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[4U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+908,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[4U] 
                                            >> 0xaU))));
            tracep->chgCData(oldp+909,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[5U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[4U] 
                                                   >> 6U)))),4);
            tracep->chgIData(oldp+910,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[4U] 
                                         << 0x1aU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[3U] 
                                           >> 6U))),32);
            tracep->chgIData(oldp+911,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[3U] 
                                         << 0x1aU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[2U] 
                                           >> 6U))),32);
            tracep->chgBit(oldp+912,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[6U] 
                                            >> 0x11U))));
            tracep->chgBit(oldp+913,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[6U] 
                                            >> 0x10U))));
            tracep->chgCData(oldp+914,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[6U] 
                                                >> 0xcU))),4);
            tracep->chgIData(oldp+915,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[6U] 
                                         << 0x14U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[5U] 
                                           >> 0xcU))),32);
            tracep->chgIData(oldp+916,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[5U] 
                                         << 0x14U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__master_req[4U] 
                                           >> 0xcU))),32);
            tracep->chgBit(oldp+917,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+918,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+919,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U])),4);
            tracep->chgIData(oldp+920,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[1U]),32);
            tracep->chgIData(oldp+921,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0U]),32);
            tracep->chgBit(oldp+922,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[1U] 
                                            >> 1U))));
            tracep->chgBit(oldp+923,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[1U])));
            tracep->chgIData(oldp+924,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[0U]),32);
            tracep->chgBit(oldp+925,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[2U] 
                                            >> 3U))));
            tracep->chgBit(oldp+926,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[2U] 
                                            >> 2U))));
            tracep->chgIData(oldp+927,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[2U] 
                                         << 0x1eU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[1U] 
                                           >> 2U))),32);
            tracep->chgBit(oldp+928,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[3U] 
                                            >> 5U))));
            tracep->chgBit(oldp+929,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[3U] 
                                            >> 4U))));
            tracep->chgIData(oldp+930,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[3U] 
                                         << 0x1cU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[2U] 
                                           >> 4U))),32);
            tracep->chgBit(oldp+931,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[4U] 
                                            >> 7U))));
            tracep->chgBit(oldp+932,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[4U] 
                                            >> 6U))));
            tracep->chgIData(oldp+933,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[4U] 
                                         << 0x1aU) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[3U] 
                                           >> 6U))),32);
            tracep->chgBit(oldp+934,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[5U] 
                                            >> 9U))));
            tracep->chgBit(oldp+935,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[5U] 
                                            >> 8U))));
            tracep->chgIData(oldp+936,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[5U] 
                                         << 0x18U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[4U] 
                                           >> 8U))),32);
            tracep->chgBit(oldp+937,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[6U] 
                                            >> 0xbU))));
            tracep->chgBit(oldp+938,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[6U] 
                                            >> 0xaU))));
            tracep->chgIData(oldp+939,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[6U] 
                                         << 0x16U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[5U] 
                                           >> 0xaU))),32);
            tracep->chgCData(oldp+940,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__addr_decode_i__idx_o),3);
            tracep->chgBit(oldp+941,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes))));
            tracep->chgBit(oldp+942,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_resp_gnt));
            tracep->chgBit(oldp+943,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_resp_rvalid));
            tracep->chgIData(oldp+944,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__rdata_o),32);
            tracep->chgBit(oldp+945,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_req[2U] 
                                            >> 5U))));
            tracep->chgBit(oldp+946,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_req[2U] 
                                            >> 4U))));
            tracep->chgCData(oldp+947,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_req[2U])),4);
            tracep->chgIData(oldp+948,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_req[1U]),32);
            tracep->chgIData(oldp+949,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_req[0U]),32);
            __Vtemp322[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U];
            __Vtemp322[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U];
            __Vtemp322[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U]);
            tracep->chgWData(oldp+950,(__Vtemp322),69);
            tracep->chgCData(oldp+953,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_req),3);
            tracep->chgCData(oldp+954,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_resp_gnt),3);
            tracep->chgCData(oldp+955,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_resp_rvalid),3);
            tracep->chgIData(oldp+956,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_master__rdata_o[0U]),32);
            tracep->chgIData(oldp+957,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_master__rdata_o[1U]),32);
            tracep->chgIData(oldp+958,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_master__rdata_o[2U]),32);
            tracep->chgCData(oldp+959,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_req_req),6);
            tracep->chgCData(oldp+960,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_gnt),6);
            tracep->chgCData(oldp+961,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rvalid),6);
            tracep->chgIData(oldp+962,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rdata[0U]),32);
            tracep->chgIData(oldp+963,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rdata[1U]),32);
            tracep->chgIData(oldp+964,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rdata[2U]),32);
            tracep->chgIData(oldp+965,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rdata[3U]),32);
            tracep->chgIData(oldp+966,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rdata[4U]),32);
            tracep->chgIData(oldp+967,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__slave_resp_rdata[5U]),32);
            __Vtemp325[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[0U];
            __Vtemp325[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[1U];
            __Vtemp325[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[2U]);
            tracep->chgWData(oldp+968,(__Vtemp325),69);
            __Vtemp328[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[2U] 
                                            >> 5U));
            __Vtemp328[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[3U] 
                                            >> 5U));
            __Vtemp328[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+971,(__Vtemp328),69);
            __Vtemp331[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[4U] 
                                            >> 0xaU));
            __Vtemp331[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[5U] 
                                            >> 0xaU));
            __Vtemp331[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[6U] 
                                       >> 0xaU));
            tracep->chgWData(oldp+974,(__Vtemp331),69);
            __Vtemp334[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0U];
            __Vtemp334[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[1U];
            __Vtemp334[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[2U]);
            tracep->chgWData(oldp+977,(__Vtemp334),69);
            __Vtemp337[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[2U] 
                                            >> 5U));
            __Vtemp337[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[3U] 
                                            >> 5U));
            __Vtemp337[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+980,(__Vtemp337),69);
            __Vtemp340[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[4U] 
                                            >> 0xaU));
            __Vtemp340[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[5U] 
                                            >> 0xaU));
            __Vtemp340[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[7U] 
                                        << 0x16U) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[6U] 
                                        >> 0xaU)));
            tracep->chgWData(oldp+983,(__Vtemp340),69);
            __Vtemp343[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[7U] 
                               << 0x11U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[6U] 
                                            >> 0xfU));
            __Vtemp343[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[8U] 
                               << 0x11U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[7U] 
                                            >> 0xfU));
            __Vtemp343[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[9U] 
                                        << 0x11U) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[8U] 
                                        >> 0xfU)));
            tracep->chgWData(oldp+986,(__Vtemp343),69);
            __Vtemp346[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[9U] 
                               << 0xcU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[8U] 
                                           >> 0x14U));
            __Vtemp346[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xaU] 
                               << 0xcU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[9U] 
                                           >> 0x14U));
            __Vtemp346[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xbU] 
                                        << 0xcU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xaU] 
                                        >> 0x14U)));
            tracep->chgWData(oldp+989,(__Vtemp346),69);
            __Vtemp349[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xbU] 
                               << 7U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xaU] 
                                         >> 0x19U));
            __Vtemp349[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xcU] 
                               << 7U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xbU] 
                                         >> 0x19U));
            __Vtemp349[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__i_xbar_slave__wdata_o[0xcU] 
                                       >> 0x19U));
            tracep->chgWData(oldp+992,(__Vtemp349),69);
            __Vtemp352[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[0U];
            __Vtemp352[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[1U];
            __Vtemp352[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[2U]);
            tracep->chgWData(oldp+995,(__Vtemp352),69);
            __Vtemp355[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[2U] 
                                            >> 5U));
            __Vtemp355[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[3U] 
                                            >> 5U));
            __Vtemp355[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+998,(__Vtemp355),69);
            __Vtemp358[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[4U] 
                                            >> 0xaU));
            __Vtemp358[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[5U] 
                                            >> 0xaU));
            __Vtemp358[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[6U] 
                                       >> 0xaU));
            tracep->chgWData(oldp+1001,(__Vtemp358),69);
            __Vtemp361[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[0U];
            __Vtemp361[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[1U];
            __Vtemp361[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[2U]);
            tracep->chgWData(oldp+1004,(__Vtemp361),69);
            __Vtemp364[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[2U] 
                                            >> 5U));
            __Vtemp364[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[3U] 
                                            >> 5U));
            __Vtemp364[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+1007,(__Vtemp364),69);
            __Vtemp367[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[4U] 
                                            >> 0xaU));
            __Vtemp367[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[5U] 
                                            >> 0xaU));
            __Vtemp367[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_data[6U] 
                                       >> 0xaU));
            tracep->chgWData(oldp+1010,(__Vtemp367),69);
            tracep->chgCData(oldp+1013,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__gnt_o),3);
            tracep->chgCData(oldp+1014,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_req),3);
            tracep->chgBit(oldp+1015,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_gnt))));
            tracep->chgBit(oldp+1016,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_gnt) 
                                             >> 1U))));
            tracep->chgBit(oldp+1017,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_gnt) 
                                             >> 2U))));
            tracep->chgBit(oldp+1018,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_req))));
            tracep->chgBit(oldp+1019,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_req) 
                                             >> 1U))));
            tracep->chgBit(oldp+1020,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_req) 
                                             >> 2U))));
            tracep->chgBit(oldp+1021,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_req))));
            __Vtemp370[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[0U];
            __Vtemp370[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[1U];
            __Vtemp370[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[2U]);
            tracep->chgWData(oldp+1022,(__Vtemp370),69);
            tracep->chgBit(oldp+1025,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_gnt))));
            tracep->chgBit(oldp+1026,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__vld_o));
            tracep->chgBit(oldp+1027,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o));
            tracep->chgBit(oldp+1028,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
            tracep->chgBit(oldp+1029,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_req) 
                                             >> 1U))));
            __Vtemp373[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[2U] 
                                            >> 5U));
            __Vtemp373[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[3U] 
                                            >> 5U));
            __Vtemp373[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+1030,(__Vtemp373),69);
            tracep->chgBit(oldp+1033,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_gnt) 
                                             >> 1U))));
            tracep->chgBit(oldp+1034,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__vld_o));
            tracep->chgBit(oldp+1035,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__req_o));
            tracep->chgBit(oldp+1036,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
            tracep->chgBit(oldp+1037,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_req) 
                                             >> 2U))));
            __Vtemp376[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[4U] 
                                            >> 0xaU));
            __Vtemp376[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[5U] 
                                            >> 0xaU));
            __Vtemp376[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__master_req_out_data[6U] 
                                       >> 0xaU));
            tracep->chgWData(oldp+1038,(__Vtemp376),69);
            tracep->chgBit(oldp+1041,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__ma_gnt) 
                                             >> 2U))));
            tracep->chgBit(oldp+1042,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__vld_o));
            tracep->chgBit(oldp+1043,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT____Vcellout__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__req_o));
            tracep->chgBit(oldp+1044,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
            __Vtemp379[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[0U];
            __Vtemp379[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[1U];
            __Vtemp379[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[2U]);
            tracep->chgWData(oldp+1045,(__Vtemp379),69);
            __Vtemp382[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[2U] 
                                            >> 5U));
            __Vtemp382[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[3U] 
                                            >> 5U));
            __Vtemp382[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+1048,(__Vtemp382),69);
            __Vtemp385[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[4U] 
                                            >> 0xaU));
            __Vtemp385[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[5U] 
                                            >> 0xaU));
            __Vtemp385[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__sl_data[6U] 
                                       >> 0xaU));
            tracep->chgWData(oldp+1051,(__Vtemp385),69);
            tracep->chgCData(oldp+1054,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes))),2);
            tracep->chgCData(oldp+1055,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes))),2);
            tracep->chgCData(oldp+1056,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1057,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__index_nodes) 
                                               >> 4U))),2);
            __Vtemp388[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[0U];
            __Vtemp388[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[1U];
            __Vtemp388[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U]);
            tracep->chgWData(oldp+1058,(__Vtemp388),69);
            __Vtemp391[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[2U] 
                                            >> 5U));
            __Vtemp391[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[3U] 
                                            >> 5U));
            __Vtemp391[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+1061,(__Vtemp391),69);
            __Vtemp394[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[4U] 
                                            >> 0xaU));
            __Vtemp394[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[5U] 
                                            >> 0xaU));
            __Vtemp394[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__data_nodes[6U] 
                                       >> 0xaU));
            tracep->chgWData(oldp+1064,(__Vtemp394),69);
            tracep->chgCData(oldp+1067,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gnt_nodes),3);
            tracep->chgCData(oldp+1068,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes),3);
            tracep->chgCData(oldp+1069,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__upper_mask),3);
            tracep->chgCData(oldp+1070,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__lower_mask),3);
            tracep->chgCData(oldp+1071,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
            tracep->chgCData(oldp+1072,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
            tracep->chgCData(oldp+1073,((3U & ((1U 
                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes)))),2);
            tracep->chgBit(oldp+1074,((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes)))));
            tracep->chgBit(oldp+1075,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__0__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
            tracep->chgBit(oldp+1076,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_levels__BRA__1__KET____DOT__gen_level__BRA__0__KET____DOT__sel));
            tracep->chgCData(oldp+1077,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes),4);
            tracep->chgCData(oldp+1078,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes))),2);
            tracep->chgCData(oldp+1079,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1080,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1081,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes) 
                                               >> 6U))),2);
            tracep->chgCData(oldp+1082,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__in_tmp),3);
            tracep->chgBit(oldp+1083,((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes)))));
            tracep->chgCData(oldp+1084,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__sel_nodes),4);
            tracep->chgCData(oldp+1085,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))),2);
            tracep->chgCData(oldp+1086,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1087,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                               >> 4U))),2);
            tracep->chgCData(oldp+1088,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes) 
                                               >> 6U))),2);
            tracep->chgCData(oldp+1089,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__in_tmp),3);
            tracep->chgIData(oldp+1090,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_req[1U]),32);
            tracep->chgCData(oldp+1091,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__addr_decode_i__idx_o),3);
            tracep->chgBit(oldp+1092,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__addr_decode_i__DOT__dec_valid_o));
            tracep->chgBit(oldp+1093,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__addr_decode_i__DOT__dec_error_o));
            tracep->chgCData(oldp+1094,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__addr_decode_i__DOT__matched_rules),6);
            __Vtemp397[0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0U];
            __Vtemp397[1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[1U];
            __Vtemp397[2U] = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[2U]);
            tracep->chgWData(oldp+1095,(__Vtemp397),69);
            __Vtemp400[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[3U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[2U] 
                                            >> 5U));
            __Vtemp400[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[4U] 
                               << 0x1bU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[3U] 
                                            >> 5U));
            __Vtemp400[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[5U] 
                                        << 0x1bU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[4U] 
                                        >> 5U)));
            tracep->chgWData(oldp+1098,(__Vtemp400),69);
            __Vtemp403[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[5U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[4U] 
                                            >> 0xaU));
            __Vtemp403[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[6U] 
                               << 0x16U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[5U] 
                                            >> 0xaU));
            __Vtemp403[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[7U] 
                                        << 0x16U) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[6U] 
                                        >> 0xaU)));
            tracep->chgWData(oldp+1101,(__Vtemp403),69);
            __Vtemp406[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[7U] 
                               << 0x11U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[6U] 
                                            >> 0xfU));
            __Vtemp406[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[8U] 
                               << 0x11U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[7U] 
                                            >> 0xfU));
            __Vtemp406[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[9U] 
                                        << 0x11U) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[8U] 
                                        >> 0xfU)));
            tracep->chgWData(oldp+1104,(__Vtemp406),69);
            __Vtemp409[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[9U] 
                               << 0xcU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[8U] 
                                           >> 0x14U));
            __Vtemp409[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xaU] 
                               << 0xcU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[9U] 
                                           >> 0x14U));
            __Vtemp409[2U] = (0x1fU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xbU] 
                                        << 0xcU) | 
                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xaU] 
                                        >> 0x14U)));
            tracep->chgWData(oldp+1107,(__Vtemp409),69);
            __Vtemp412[0U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xbU] 
                               << 7U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xaU] 
                                         >> 0x19U));
            __Vtemp412[1U] = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xcU] 
                               << 7U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xbU] 
                                         >> 0x19U));
            __Vtemp412[2U] = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_data[0xcU] 
                                       >> 0x19U));
            tracep->chgWData(oldp+1110,(__Vtemp412),69);
            tracep->chgBit(oldp+1113,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_gnt))));
            tracep->chgBit(oldp+1114,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_gnt) 
                                             >> 1U))));
            tracep->chgBit(oldp+1115,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_gnt) 
                                             >> 2U))));
            tracep->chgBit(oldp+1116,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_gnt) 
                                             >> 3U))));
            tracep->chgBit(oldp+1117,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_gnt) 
                                             >> 4U))));
            tracep->chgBit(oldp+1118,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_gnt) 
                                             >> 5U))));
            tracep->chgBit(oldp+1119,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_req))));
            tracep->chgBit(oldp+1120,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_req) 
                                             >> 1U))));
            tracep->chgBit(oldp+1121,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_req) 
                                             >> 2U))));
            tracep->chgBit(oldp+1122,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_req) 
                                             >> 3U))));
            tracep->chgBit(oldp+1123,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_req) 
                                             >> 4U))));
            tracep->chgBit(oldp+1124,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__sl_req) 
                                             >> 5U))));
            tracep->chgCData(oldp+1125,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__ma_gnt),6);
            tracep->chgCData(oldp+1126,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT____Vcellout__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__req_o),6);
            tracep->chgBit(oldp+1127,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d));
            tracep->chgBit(oldp+1128,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1129,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                             >> 0xaU))));
            tracep->chgSData(oldp+1130,((0x1fffU & 
                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                           << 0x18U) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                             >> 8U)))),13);
            tracep->chgIData(oldp+1131,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                          << 0x1aU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                            >> 6U))),32);
            tracep->chgCData(oldp+1132,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                                    >> 6U)))),4);
            tracep->chgSData(oldp+1133,((0x1fffU & 
                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                           << 0x18U) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                             >> 8U)))),13);
            tracep->chgIData(oldp+1134,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                          << 0x1aU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                            >> 6U))),32);
            tracep->chgCData(oldp+1135,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                  << 0x1aU) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                                    >> 6U)))),4);
            tracep->chgBit(oldp+1136,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1137,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                             >> 0x10U))));
            tracep->chgSData(oldp+1138,((0x1fffU & 
                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                           << 0x12U) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                             >> 0xeU)))),13);
            tracep->chgIData(oldp+1139,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                          << 0x14U) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                            >> 0xcU))),32);
            tracep->chgCData(oldp+1140,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                    >> 0xcU)))),4);
            tracep->chgSData(oldp+1141,((0x1fffU & 
                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                           << 0x12U) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                             >> 0xeU)))),13);
            tracep->chgIData(oldp+1142,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                          << 0x14U) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                            >> 0xcU))),32);
            tracep->chgCData(oldp+1143,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  << 0x14U) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                    >> 0xcU)))),4);
            tracep->chgBit(oldp+1144,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1145,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1146,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U])),4);
            tracep->chgIData(oldp+1147,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]),32);
            tracep->chgIData(oldp+1148,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[0U]),32);
            tracep->chgBit(oldp+1149,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1150,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+1151,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o)),32);
            tracep->chgBit(oldp+1152,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1153,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1154,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])),4);
            tracep->chgIData(oldp+1155,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U]),32);
            tracep->chgIData(oldp+1156,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]),32);
            tracep->chgBit(oldp+1157,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1158,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1159,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                 >> 6U))),4);
            tracep->chgIData(oldp+1160,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                          << 0x1aU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                            >> 6U))),32);
            tracep->chgIData(oldp+1161,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                          << 0x1aU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                            >> 6U))),32);
            tracep->chgBit(oldp+1162,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[1U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1163,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[1U])));
            tracep->chgIData(oldp+1164,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[0U]),32);
            tracep->chgBit(oldp+1165,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1166,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[2U] 
                                             >> 2U))));
            tracep->chgIData(oldp+1167,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[2U] 
                                          << 0x1eU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[1U] 
                                            >> 2U))),32);
            tracep->chgBit(oldp+1168,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                             >> 0xaU))));
            tracep->chgCData(oldp+1169,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 7U))),3);
            tracep->chgCData(oldp+1170,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 4U))),3);
            tracep->chgCData(oldp+1171,((3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 2U))),2);
            tracep->chgCData(oldp+1172,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                   << 6U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                     >> 0x1aU)))),8);
            tracep->chgIData(oldp+1173,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                          << 6U) | 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                          >> 0x1aU))),32);
            tracep->chgCData(oldp+1174,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                    >> 0x16U)))),4);
            tracep->chgIData(oldp+1175,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                          << 0xaU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                            >> 0x16U))),32);
            tracep->chgCData(oldp+1176,((0x1fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                     >> 0x11U)))),5);
            tracep->chgCData(oldp+1177,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                << 0x11U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                  >> 0xfU)))),2);
            tracep->chgCData(oldp+1178,((0x7fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                     >> 8U)))),7);
            tracep->chgCData(oldp+1179,((0x7fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                   << 0x1fU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                     >> 1U)))),7);
            tracep->chgBit(oldp+1180,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U])));
            tracep->chgBit(oldp+1181,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o));
            tracep->chgBit(oldp+1182,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                             >> 0x1dU))));
            tracep->chgIData(oldp+1183,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                          << 8U) | 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                                          >> 0x18U))),32);
            tracep->chgBit(oldp+1184,((1U & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                                >> 0x1cU)))));
            tracep->chgIData(oldp+1185,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                                          << 8U) | 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                          >> 0x18U))),32);
            tracep->chgCData(oldp+1186,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                                                  << 8U) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                                    >> 0x18U)))),4);
            tracep->chgBit(oldp+1187,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__gnt_o));
            tracep->chgBit(oldp+1188,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o 
                                                     >> 0x21U)))));
            tracep->chgIData(oldp+1189,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o)),32);
            tracep->chgIData(oldp+1190,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]),32);
            tracep->chgBit(oldp+1191,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_valid_o));
            tracep->chgBit(oldp+1192,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_error_o));
            tracep->chgCData(oldp+1193,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__matched_rules),2);
            tracep->chgBit(oldp+1194,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1195,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1196,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1197,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1198,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1199,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1200,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1201,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1202,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1203,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1204,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1205,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1206,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1207,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1208,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1209,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1210,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1211,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1212,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1213,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1214,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1215,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1216,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1217,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1218,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1219,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1220,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1221,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1222,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U])));
            tracep->chgBit(oldp+1223,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1224,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1225,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1226,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1227,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1228,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1229,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1230,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1231,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1232,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x16U))));
            tracep->chgCData(oldp+1233,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                << 0xcU) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                  >> 0x14U)))),2);
            tracep->chgSData(oldp+1234,((0xffffU & 
                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                           << 0x1cU) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 4U)))),16);
            tracep->chgBit(oldp+1235,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1236,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1237,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1238,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])));
            tracep->chgBit(oldp+1239,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1240,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1241,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1242,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1243,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1244,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1245,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1246,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0x18U))));
            tracep->chgCData(oldp+1247,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                     >> 0x10U)))),8);
            tracep->chgBit(oldp+1248,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1249,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                   << 0x19U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                     >> 7U)))),8);
            tracep->chgBit(oldp+1250,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1251,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1252,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1253,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1254,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 2U))));
            tracep->chgCData(oldp+1255,((7U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                << 1U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                                  >> 0x1fU)))),3);
            tracep->chgBit(oldp+1256,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                             >> 0x1eU))));
            tracep->chgCData(oldp+1257,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                << 4U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                                  >> 0x1cU)))),2);
            tracep->chgBit(oldp+1258,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1259,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1260,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgIData(oldp+1261,((0xffffffU 
                                         & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                               >> 1U)))),24);
            tracep->chgBit(oldp+1262,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+1263,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we));
            tracep->chgBit(oldp+1264,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re));
            tracep->chgCData(oldp+1265,((0x3cU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                   << 6U) 
                                                  | (0x3cU 
                                                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                        >> 0x1aU))))),6);
            tracep->chgIData(oldp+1266,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                          << 0xaU) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                            >> 0x16U))),32);
            tracep->chgCData(oldp+1267,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                    >> 0x16U)))),4);
            tracep->chgIData(oldp+1268,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1269,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error));
            tracep->chgBit(oldp+1270,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                        | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(
                                                    (0U 
                                                     != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit)))))));
            tracep->chgBit(oldp+1271,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wr_err));
            tracep->chgBit(oldp+1272,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1273,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we));
            tracep->chgBit(oldp+1274,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1275,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_watermark_we));
            tracep->chgBit(oldp+1276,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1277,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_empty_we));
            tracep->chgBit(oldp+1278,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1279,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_overflow_we));
            tracep->chgBit(oldp+1280,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1281,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_frame_err_we));
            tracep->chgBit(oldp+1282,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1283,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_break_err_we));
            tracep->chgBit(oldp+1284,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1285,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_timeout_we));
            tracep->chgBit(oldp+1286,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1287,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_parity_err_we));
            tracep->chgBit(oldp+1288,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_watermark_we));
            tracep->chgBit(oldp+1289,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_watermark_we));
            tracep->chgBit(oldp+1290,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_empty_we));
            tracep->chgBit(oldp+1291,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_overflow_we));
            tracep->chgBit(oldp+1292,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_frame_err_we));
            tracep->chgBit(oldp+1293,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_break_err_we));
            tracep->chgBit(oldp+1294,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_timeout_we));
            tracep->chgBit(oldp+1295,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_parity_err_we));
            tracep->chgBit(oldp+1296,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                         >> 2U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))));
            tracep->chgBit(oldp+1297,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_tx_we));
            tracep->chgBit(oldp+1298,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rx_we));
            tracep->chgBit(oldp+1299,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nf_we));
            tracep->chgBit(oldp+1300,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_slpbk_we));
            tracep->chgBit(oldp+1301,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_llpbk_we));
            tracep->chgBit(oldp+1302,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_en_we));
            tracep->chgBit(oldp+1303,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_odd_we));
            tracep->chgCData(oldp+1304,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                << 2U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                  >> 0x1eU)))),2);
            tracep->chgBit(oldp+1305,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rxblvl_we));
            tracep->chgSData(oldp+1306,((0xffffU & 
                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                             >> 6U)))),16);
            tracep->chgBit(oldp+1307,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nco_we));
            tracep->chgBit(oldp+1308,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                         >> 4U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))));
            tracep->chgBit(oldp+1309,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                         >> 5U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))));
            tracep->chgCData(oldp+1310,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                     >> 0x16U)))),8);
            tracep->chgBit(oldp+1311,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wdata_we));
            tracep->chgBit(oldp+1312,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxrst_we));
            tracep->chgBit(oldp+1313,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txrst_we));
            tracep->chgCData(oldp+1314,((7U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                << 8U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                  >> 0x18U)))),3);
            tracep->chgBit(oldp+1315,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we));
            tracep->chgCData(oldp+1316,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                << 5U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                  >> 0x1bU)))),2);
            tracep->chgBit(oldp+1317,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we));
            tracep->chgBit(oldp+1318,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                         >> 8U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))));
            tracep->chgBit(oldp+1319,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txen_we));
            tracep->chgBit(oldp+1320,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txval_we));
            tracep->chgBit(oldp+1321,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                         >> 0xaU) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))));
            tracep->chgIData(oldp+1322,((0xffffffU 
                                         & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                             << 0xaU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                               >> 0x16U)))),24);
            tracep->chgBit(oldp+1323,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_val_we));
            tracep->chgBit(oldp+1324,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1325,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_en_we));
            tracep->chgSData(oldp+1326,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit),12);
            tracep->chgBit(oldp+1327,((1U & VL_REDXOR_32(
                                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                           << 0xaU) 
                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                             >> 0x16U))))));
            tracep->chgBit(oldp+1328,((1U & VL_REDXOR_32(
                                                         (0xfU 
                                                          & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                              << 0xaU) 
                                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                                >> 0x16U)))))));
            tracep->chgBit(oldp+1329,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack));
            tracep->chgBit(oldp+1330,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
            tracep->chgBit(oldp+1331,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                                       & (0U != (3U 
                                                 & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                     << 6U) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                       >> 0x1aU)))))));
            tracep->chgBit(oldp+1332,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err));
            tracep->chgBit(oldp+1333,((1U & ((~ (((
                                                   (0U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                        >> 7U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                          >> 7U)))) 
                                                  | (4U 
                                                     == 
                                                     (7U 
                                                      & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                         >> 7U)))) 
                                                 & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                                     & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                                    & (((4U 
                                                         == 
                                                         (7U 
                                                          & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                             >> 7U))) 
                                                        | (1U 
                                                           == 
                                                           (7U 
                                                            & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                               >> 7U)))) 
                                                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))) 
                                             | ((1U 
                                                 == 
                                                 (3U 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                      << 0x11U) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                        >> 0xfU)))) 
                                                & ((0U 
                                                    == 
                                                    (7U 
                                                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                        >> 7U))) 
                                                   | (1U 
                                                      == 
                                                      (7U 
                                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                          >> 7U)))))))));
            tracep->chgBit(oldp+1334,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req));
            tracep->chgBit(oldp+1335,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req));
            tracep->chgBit(oldp+1336,((((0U == (7U 
                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                   >> 7U))) 
                                        | (1U == (7U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                     >> 7U)))) 
                                       | (4U == (7U 
                                                 & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                    >> 7U))))));
            tracep->chgBit(oldp+1337,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                        & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                       & (((4U == (7U 
                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                      >> 7U))) 
                                           | (1U == 
                                              (7U & 
                                               (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                >> 7U)))) 
                                          | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk)))));
            tracep->chgBit(oldp+1338,((0U == (7U & 
                                              (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+1339,((1U == (7U & 
                                              (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+1340,((4U == (7U & 
                                              (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 7U)))));
            tracep->chgBit(oldp+1341,(((1U == (3U & 
                                               ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                 << 0x11U) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                   >> 0xfU)))) 
                                       & ((0U == (7U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                     >> 7U))) 
                                          | (1U == 
                                             (7U & 
                                              (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 7U)))))));
            tracep->chgBit(oldp+1342,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk));
            tracep->chgBit(oldp+1343,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk));
            tracep->chgBit(oldp+1344,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk));
            tracep->chgCData(oldp+1345,((0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                      << 6U) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                        >> 0x1aU)))))),4);
            tracep->chgBit(oldp+1346,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_watermark_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1347,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_watermark_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+1348,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_empty_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+1349,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_overflow_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x19U))));
            tracep->chgBit(oldp+1350,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_frame_err_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+1351,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_break_err_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+1352,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_timeout_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+1353,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_parity_err_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1dU))));
            tracep->chgBit(oldp+1354,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_tx_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1355,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rx_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+1356,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nf_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x18U))));
            tracep->chgBit(oldp+1357,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_slpbk_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1aU))));
            tracep->chgBit(oldp+1358,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_llpbk_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1bU))));
            tracep->chgBit(oldp+1359,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_en_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1cU))));
            tracep->chgBit(oldp+1360,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_odd_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x1dU))));
            tracep->chgCData(oldp+1361,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rxblvl_we)
                                          ? (3U & (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                    << 2U) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                      >> 0x1eU)))
                                          : 0U)),2);
            tracep->chgSData(oldp+1362,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nco_we)
                                          ? (0xffffU 
                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                 << 0x1aU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                   >> 6U)))
                                          : 0U)),16);
            tracep->chgCData(oldp+1363,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wdata_we)
                                          ? (0xffU 
                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                 << 0xaU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                   >> 0x16U)))
                                          : 0U)),8);
            tracep->chgBit(oldp+1364,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxrst_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1365,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txrst_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x17U))));
            tracep->chgBit(oldp+1366,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txen_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x16U))));
            tracep->chgBit(oldp+1367,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txval_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                          >> 0x17U))));
            tracep->chgIData(oldp+1368,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_val_we)
                                          ? (0xffffffU 
                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                 << 0xaU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                   >> 0x16U)))
                                          : 0U)),24);
            tracep->chgBit(oldp+1369,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_en_we) 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                          >> 0x15U))));
            tracep->chgIData(oldp+1370,((0xffffffU 
                                         & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             << 0x1fU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                               >> 1U)))),24);
            tracep->chgBit(oldp+1371,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U])));
            tracep->chgBit(oldp+1372,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1373,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1374,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1375,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1376,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1377,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_rxrst));
            tracep->chgBit(oldp+1378,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_txrst));
            tracep->chgCData(oldp+1379,((7U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                << 1U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                                  >> 0x1fU)))),3);
            tracep->chgCData(oldp+1380,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                << 4U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                                  >> 0x1cU)))),2);
            tracep->chgBit(oldp+1381,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1382,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1383,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rready));
            tracep->chgBit(oldp+1384,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle));
            tracep->chgCData(oldp+1385,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data),8);
            tracep->chgBit(oldp+1386,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wvalid));
            tracep->chgBit(oldp+1387,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in));
            tracep->chgBit(oldp+1388,(((0U == (3U & 
                                               ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 << 0xcU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                   >> 0x14U))))
                                        ? (2U <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))
                                        : ((1U == (3U 
                                                   & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                       << 0xcU) 
                                                      | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                         >> 0x14U))))
                                            ? (4U <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))
                                            : ((2U 
                                                == 
                                                (3U 
                                                 & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                     << 0xcU) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                       >> 0x14U))))
                                                ? (8U 
                                                   <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))
                                                : (0x10U 
                                                   <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d)))))));
            tracep->chgCData(oldp+1389,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d),5);
            tracep->chgBit(oldp+1390,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_break_err));
            tracep->chgBit(oldp+1391,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_timeout));
            tracep->chgBit(oldp+1392,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_parity_err));
            tracep->chgBit(oldp+1393,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_d));
            tracep->chgBit(oldp+1394,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_d));
            tracep->chgBit(oldp+1395,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 6U))));
            tracep->chgCData(oldp+1396,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                   << 0x19U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                                     >> 7U)))),8);
            tracep->chgBit(oldp+1397,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1398,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x17U))));
            tracep->chgCData(oldp+1399,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d),4);
            tracep->chgSData(oldp+1400,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_d),11);
            tracep->chgBit(oldp+1401,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tx_d));
            tracep->chgBit(oldp+1402,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x16U))));
            tracep->chgSData(oldp+1403,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_d),11);
            tracep->chgCData(oldp+1404,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d),4);
            tracep->chgCData(oldp+1405,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d),4);
            tracep->chgBit(oldp+1406,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d));
            tracep->chgBit(oldp+1407,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_d));
            tracep->chgBit(oldp+1408,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1409,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr));
            tracep->chgBit(oldp+1410,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1411,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1412,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1413,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1414,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event));
            tracep->chgBit(oldp+1415,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x1cU)))));
            tracep->chgBit(oldp+1416,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_watermark__DOT__new_event));
            tracep->chgBit(oldp+1417,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1418,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1419,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 9U))));
            tracep->chgBit(oldp+1420,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1421,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event));
            tracep->chgBit(oldp+1422,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1423,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_watermark__DOT__new_event));
            tracep->chgBit(oldp+1424,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1425,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 8U))));
            tracep->chgBit(oldp+1426,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 7U))));
            tracep->chgBit(oldp+1427,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1428,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event));
            tracep->chgBit(oldp+1429,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x1aU)))));
            tracep->chgBit(oldp+1430,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_tx_empty__DOT__new_event));
            tracep->chgBit(oldp+1431,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1432,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 6U))));
            tracep->chgBit(oldp+1433,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1434,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1435,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event));
            tracep->chgBit(oldp+1436,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1437,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_overflow__DOT__new_event));
            tracep->chgBit(oldp+1438,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1439,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 4U))));
            tracep->chgBit(oldp+1440,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 3U))));
            tracep->chgBit(oldp+1441,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1442,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event));
            tracep->chgBit(oldp+1443,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x18U)))));
            tracep->chgBit(oldp+1444,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event));
            tracep->chgBit(oldp+1445,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1446,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 2U))));
            tracep->chgBit(oldp+1447,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 1U))));
            tracep->chgBit(oldp+1448,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1449,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event));
            tracep->chgBit(oldp+1450,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1451,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event));
            tracep->chgBit(oldp+1452,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1453,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U])));
            tracep->chgBit(oldp+1454,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1455,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1456,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event));
            tracep->chgBit(oldp+1457,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x16U)))));
            tracep->chgBit(oldp+1458,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event));
            tracep->chgBit(oldp+1459,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1460,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1461,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1462,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1463,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event));
            tracep->chgBit(oldp+1464,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1465,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event));
            tracep->chgBit(oldp+1466,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error));
            tracep->chgIData(oldp+1467,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1468,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we));
            tracep->chgBit(oldp+1469,((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                              >> 5U) 
                                             & (~ (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                                   >> 4U))))));
            tracep->chgCData(oldp+1470,((7U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])),3);
            tracep->chgIData(oldp+1471,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]),32);
            tracep->chgCData(oldp+1472,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])),4);
            tracep->chgIData(oldp+1473,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next),32);
            tracep->chgBit(oldp+1474,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error));
            tracep->chgBit(oldp+1475,((1U & ((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                                >> 5U) 
                                               & (~ 
                                                  (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                                   >> 4U))) 
                                              | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we)) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit))))))));
            tracep->chgBit(oldp+1476,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we) 
                                       & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit) 
                                           & (0U != 
                                              (1U & 
                                               (~ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                                          | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit) 
                                              >> 1U) 
                                             & (0U 
                                                != 
                                                (0xfU 
                                                 & (~ 
                                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U]))))))));
            tracep->chgBit(oldp+1477,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U])));
            tracep->chgBit(oldp+1478,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_valid_we));
            tracep->chgBit(oldp+1479,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_value_we));
            tracep->chgCData(oldp+1480,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit),2);
            tracep->chgBit(oldp+1481,((1U & VL_REDXOR_32(
                                                         vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]))));
            tracep->chgBit(oldp+1482,((1U & VL_REDXOR_32(
                                                         (0xfU 
                                                          & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))));
            tracep->chgBit(oldp+1483,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_valid_we) 
                                       & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U])));
            tracep->chgIData(oldp+1484,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_value_we)
                                          ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]
                                          : 0U)),32);
            tracep->chgBit(oldp+1485,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                             >> 3U))));
            tracep->chgBit(oldp+1486,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                             >> 2U))));
            tracep->chgCData(oldp+1487,((0x7fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xcU])),7);
            tracep->chgIData(oldp+1488,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                                          << 2U) | 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                          >> 0x1eU))),32);
            tracep->chgCData(oldp+1489,((0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                                  << 2U) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xcU] 
                                                    >> 0x1eU)))),4);
            tracep->chgBit(oldp+1490,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o));
            tracep->chgBit(oldp+1491,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_n));
            tracep->chgBit(oldp+1492,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_n));
            tracep->chgCData(oldp+1493,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_n),7);
            tracep->chgIData(oldp+1494,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_n),32);
            tracep->chgCData(oldp+1495,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_n),4);
            tracep->chgCData(oldp+1496,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_n),5);
            tracep->chgBit(oldp+1497,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_n));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [2U]))) {
            tracep->chgBit(oldp+1498,(((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))));
            tracep->chgBit(oldp+1499,(((((0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                            >> 2U)) 
                                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_or_pmp_err))) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_we_q)))));
            tracep->chgIData(oldp+1500,(((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((0xffffff00U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                     << 6U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 0x10U)))
                                              : ((0xffff0000U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                     << 0xeU)) 
                                                 | (0xffffU 
                                                    & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                       >> 8U))))
                                          : ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((0xff000000U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                     << 0x16U)) 
                                                 | vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q)
                                              : ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                  << 0x1eU) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                    >> 2U))))),32);
            tracep->chgIData(oldp+1501,(((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                                     >> 9U)))) 
                                                      << 0x10U)) 
                                                  | ((0xff00U 
                                                      & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                         << 6U)) 
                                                     | (0xffU 
                                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                           >> 0x10U))))
                                                  : 
                                                 ((0xff00U 
                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                      << 6U)) 
                                                  | (0xffU 
                                                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q 
                                                        >> 0x10U))))
                                              : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                                     >> 1U)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 0x12U))))
                                                  : 
                                                 (0xffffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 0x12U)))))
                                          : ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                                     >> 0x19U)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 0xaU))))
                                                  : 
                                                 (0xffffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 0xaU))))
                                              : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffff0000U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                                     >> 0x11U)))) 
                                                      << 0x10U)) 
                                                  | (0xffffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 2U))))
                                                  : 
                                                 (0xffffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 2U))))))),32);
            tracep->chgIData(oldp+1502,(((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                          ? ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                                     >> 1U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 6U) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 0x1aU))))
                                                  : 
                                                 (0xffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 6U) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 0x1aU))))
                                              : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                                     >> 0x19U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 0xeU) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 0x12U))))
                                                  : 
                                                 (0xffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 0x12U)))))
                                          : ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q))
                                              ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                                     >> 0x11U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 0x16U) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 0xaU))))
                                                  : 
                                                 (0xffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 0x16U) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 0xaU))))
                                              : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q)
                                                  ? 
                                                 ((0xffffff00U 
                                                   & ((- (IData)(
                                                                 (1U 
                                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                                     >> 9U)))) 
                                                      << 8U)) 
                                                  | (0xffU 
                                                     & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                         << 0x1eU) 
                                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                           >> 2U))))
                                                  : 
                                                 (0xffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                                      << 0x1eU) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                                        >> 2U))))))),32);
            tracep->chgBit(oldp+1503,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                             & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q))))));
            tracep->chgBit(oldp+1504,((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter_incr 
                                              >> 2U) 
                                             & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q) 
                                                   >> 2U))))));
            tracep->chgCData(oldp+1505,((3U & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_resp_gnt) 
                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes))
                                                ? (
                                                   (1U 
                                                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__sel_nodes))
                                                    ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_upper__DOT__gen_lzc__DOT__index_nodes)
                                                    : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__gen_fair_arb__DOT__i_lzc_lower__DOT__gen_lzc__DOT__index_nodes))
                                                : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q)))),2);
            tracep->chgBit(oldp+1506,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+1507,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+1508,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o)),32);
            tracep->chgBit(oldp+1509,((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                              >> 1U) 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U]))));
            tracep->chgBit(oldp+1510,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err) 
                                       & (0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data)))));
            tracep->chgBit(oldp+1511,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                                       & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err)) 
                                          | (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data))))));
            tracep->chgBit(oldp+1512,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_d) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_prev_q)))));
            tracep->chgBit(oldp+1513,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_d) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_prev_q)))));
            tracep->chgBit(oldp+1514,(((0x4000000U 
                                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                                        ? (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync) 
                                            & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1) 
                                               | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2))) 
                                           | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1) 
                                              & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2)))
                                        : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync))));
        }
        if (VL_UNLIKELY(((vlTOPp->__Vm_traceActivity
                          [1U] | vlTOPp->__Vm_traceActivity
                          [2U]) | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+1515,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ctrl_busy) 
                                        | ((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q)) 
                                           | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req))) 
                                       | (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs)))));
            tracep->chgBit(oldp+1516,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_req) 
                                        | (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs))) 
                                       & (0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_ns)))));
            tracep->chgBit(oldp+1517,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__jump_set_raw)) 
                                        | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_jump_set_done_q)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_valid_clear)))));
            tracep->chgCData(oldp+1518,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_we)
                                          ? (5U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int)
                                          : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q))),3);
            tracep->chgBit(oldp+1519,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+1520,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1521,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1522,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1523,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1524,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1525,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1526,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1527,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1528,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1529,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1530,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1531,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1532,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1533,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1534,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1535,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1536,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1537,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1538,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1539,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1540,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1541,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                     >> 3U)))),8);
            tracep->chgCData(oldp+1542,((7U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])),3);
            tracep->chgBit(oldp+1543,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgCData(oldp+1544,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                << 3U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                  >> 0x1dU)))),2);
            tracep->chgBit(oldp+1545,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1546,((0x3fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+1547,((0x3fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                     >> 0x10U)))),6);
            tracep->chgSData(oldp+1548,((0xffffU & 
                                         vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+1549,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1550,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1551,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1552,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1553,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1554,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0xbU))));
            tracep->chgCData(oldp+1555,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[2U] 
                                                   << 0x1dU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                     >> 3U)))),8);
            tracep->chgCData(oldp+1556,((0x3fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                     >> 0x16U)))),6);
            tracep->chgCData(oldp+1557,((0x3fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                     >> 0x10U)))),6);
            tracep->chgSData(oldp+1558,((0xffffU & 
                                         vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U])),16);
            tracep->chgBit(oldp+1559,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1560,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[2U])));
            tracep->chgBit(oldp+1561,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x1fU)))));
            tracep->chgBit(oldp+1562,((1U & (((0x80000000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[2U]
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x16U)))))));
            tracep->chgBit(oldp+1563,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1564,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1565,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_watermark_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x1dU)))));
            tracep->chgBit(oldp+1566,((1U & (((0x20000000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x1eU)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_watermark_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x17U)))))));
            tracep->chgBit(oldp+1567,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1568,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1569,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_empty_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x1bU)))));
            tracep->chgBit(oldp+1570,((1U & (((0x8000000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x1cU)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_empty_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x18U)))))));
            tracep->chgBit(oldp+1571,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x19U))));
            tracep->chgBit(oldp+1572,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x1aU))));
            tracep->chgBit(oldp+1573,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_overflow_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x19U)))));
            tracep->chgBit(oldp+1574,((1U & (((0x2000000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x1aU)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_overflow_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x19U)))))));
            tracep->chgBit(oldp+1575,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x17U))));
            tracep->chgBit(oldp+1576,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x18U))));
            tracep->chgBit(oldp+1577,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_frame_err_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x17U)))));
            tracep->chgBit(oldp+1578,((1U & (((0x800000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x18U)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_frame_err_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x1aU)))))));
            tracep->chgBit(oldp+1579,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1580,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1581,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_break_err_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x15U)))));
            tracep->chgBit(oldp+1582,((1U & (((0x200000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x16U)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_break_err_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x1bU)))))));
            tracep->chgBit(oldp+1583,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x13U))));
            tracep->chgBit(oldp+1584,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1585,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_timeout_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x13U)))));
            tracep->chgBit(oldp+1586,((1U & (((0x80000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x14U)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_timeout_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x1cU)))))));
            tracep->chgBit(oldp+1587,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1588,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                             >> 0x12U))));
            tracep->chgBit(oldp+1589,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_parity_err_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                >> 0x11U)))));
            tracep->chgBit(oldp+1590,((1U & (((0x20000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])
                                               ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                  >> 0x12U)
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q)) 
                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_parity_err_we)) 
                                                | (~ 
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                    >> 0x1dU)))))));
            tracep->chgBit(oldp+1591,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                             >> 0x1fU))));
            tracep->chgCData(oldp+1592,((7U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U])),3);
            tracep->chgBit(oldp+1593,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                >> 0x1fU)))));
            tracep->chgCData(oldp+1594,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                                ? (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                    << 8U) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                      >> 0x18U))
                                                : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U]))),3);
            tracep->chgBit(oldp+1595,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                             >> 0x1cU))));
            tracep->chgCData(oldp+1596,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                << 3U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                  >> 0x1dU)))),2);
            tracep->chgBit(oldp+1597,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                >> 0x1cU)))));
            tracep->chgCData(oldp+1598,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                                                ? (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                    << 5U) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                      >> 0x1bU))
                                                : (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                                    << 3U) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                      >> 0x1dU))))),2);
            tracep->chgIData(oldp+1599,(((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U])
                                          ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_timeout)
                                              ? 0U : 
                                             (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth) 
                                               != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth_prev_q))
                                               ? 0U
                                               : ((0U 
                                                   == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth))
                                                   ? 0U
                                                   : 
                                                  (0xffffffU 
                                                   & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q)
                                                       ? 
                                                      ((IData)(1U) 
                                                       + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_q)
                                                       : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_q)))))
                                          : 0U)),24);
            tracep->chgBit(oldp+1600,((((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid)) 
                                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle_q))) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle))));
            tracep->chgBit(oldp+1601,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid) 
                                        & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rready)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
            tracep->chgBit(oldp+1602,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_rvalid) 
                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                           >> 0xfU)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)))));
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [1U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+1603,((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we))));
            tracep->chgBit(oldp+1604,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_in_ready) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+1605,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_executing_spec) 
                                        & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_req_dec)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_resp_valid)))));
            tracep->chgBit(oldp+1606,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+1607,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__stall_multdiv) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+1608,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw) 
                                         & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_in_ready)) 
                                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set))) 
                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                          & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_valid_clear))))));
            tracep->chgBit(oldp+1609,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                       & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                             >> 1U)))));
            tracep->chgBit(oldp+1610,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set) 
                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                          & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))));
            tracep->chgBit(oldp+1611,((1U & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_valid))))));
            tracep->chgBit(oldp+1612,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set) 
                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_in_ready) 
                                          & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))));
            tracep->chgBit(oldp+1613,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                       & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_req_dec) 
                                          & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_resp_valid)) 
                                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_first_cycle))))));
            tracep->chgBit(oldp+1614,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn)) 
                                        | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d)) 
                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_store_err) 
                                          | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_load_err)))));
            tracep->chgBit(oldp+1615,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn) 
                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__csr_pipe_flush) 
                                          & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q)))));
            tracep->chgBit(oldp+1616,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__csr_pipe_flush) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q))));
            tracep->chgIData(oldp+1617,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[0]),32);
            tracep->chgIData(oldp+1618,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__wb_stage_i__DOT__rf_wdata_wb_mux[1]),32);
            tracep->chgCData(oldp+1619,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__wb_stage_i__DOT__rf_wdata_wb_mux_we),2);
            tracep->chgBit(oldp+1620,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wvalid) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wready)))));
            tracep->chgBit(oldp+1621,((1U & (VL_REDXOR_32((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_data)) 
                                             ^ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                >> 0x16U)))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[2U])) {
            tracep->chgBit(oldp+1622,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                                             >> 5U))));
            tracep->chgBit(oldp+1623,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                                             >> 4U))));
            tracep->chgCData(oldp+1624,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U])),4);
            tracep->chgIData(oldp+1625,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U]),32);
            tracep->chgIData(oldp+1626,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[0U]),32);
            tracep->chgBit(oldp+1627,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_q));
            tracep->chgIData(oldp+1628,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_rdata_q),32);
            tracep->chgBit(oldp+1629,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q));
            tracep->chgIData(oldp+1630,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+1631,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq));
            tracep->chgIData(oldp+1632,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgIData(oldp+1633,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1634,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_q));
            tracep->chgQData(oldp+1635,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_q_ex[0]),34);
            tracep->chgQData(oldp+1637,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_q_ex[1]),34);
            tracep->chgBit(oldp+1639,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1640,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1641,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1642,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+1643,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req));
            tracep->chgIData(oldp+1644,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__addr_last_q),32);
            tracep->chgBit(oldp+1645,((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs))));
            tracep->chgBit(oldp+1646,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q));
            tracep->chgBit(oldp+1647,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgIData(oldp+1648,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1649,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1650,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1651,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+1652,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q),2);
            tracep->chgCData(oldp+1653,((3U & ((2U 
                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))
                                                ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                                   >> 2U)
                                                : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q)))),2);
            tracep->chgBit(oldp+1654,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q));
            tracep->chgBit(oldp+1655,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1656,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1657,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgCData(oldp+1658,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)),8);
            tracep->chgBit(oldp+1659,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q));
            tracep->chgCData(oldp+1660,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q),2);
            tracep->chgCData(oldp+1661,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q),2);
            tracep->chgCData(oldp+1662,(((2U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                << 1U)) 
                                         | (1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                  >> 1U)))),2);
            tracep->chgQData(oldp+1663,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[0]),34);
            tracep->chgQData(oldp+1665,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__id_stage_i__imd_val_q_ex_o[1]),34);
            tracep->chgBit(oldp+1667,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_set));
            tracep->chgBit(oldp+1668,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q));
            tracep->chgBit(oldp+1669,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_jump_set_done_q));
            tracep->chgQData(oldp+1670,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q[0]),34);
            tracep->chgQData(oldp+1672,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q[1]),34);
            tracep->chgBit(oldp+1674,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__id_fsm_q));
            tracep->chgBit(oldp+1675,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q));
            tracep->chgBit(oldp+1676,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q));
            tracep->chgBit(oldp+1677,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q));
            tracep->chgBit(oldp+1678,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q));
            tracep->chgBit(oldp+1679,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q));
            tracep->chgBit(oldp+1680,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q));
            tracep->chgBit(oldp+1681,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug));
            tracep->chgQData(oldp+1682,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+1684,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i[1]),34);
            tracep->chgQData(oldp+1686,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a),33);
            tracep->chgIData(oldp+1688,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_imd_val_q[0]),32);
            tracep->chgIData(oldp+1689,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_imd_val_q[1]),32);
            tracep->chgIData(oldp+1690,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[0]),32);
            tracep->chgIData(oldp+1691,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i[1]),32);
            tracep->chgIData(oldp+1692,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[0]),32);
            tracep->chgIData(oldp+1693,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q[1]),32);
            tracep->chgQData(oldp+1694,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[0]),34);
            tracep->chgQData(oldp+1696,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i[1]),34);
            tracep->chgIData(oldp+1698,(((IData)(1U) 
                                         << (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q))),32);
            tracep->chgIData(oldp+1699,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                [1U])),32);
            tracep->chgIData(oldp+1700,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q),32);
            tracep->chgIData(oldp+1701,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q),32);
            tracep->chgBit(oldp+1702,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid));
            tracep->chgCData(oldp+1703,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q),5);
            tracep->chgBit(oldp+1704,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold));
            tracep->chgBit(oldp+1705,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q));
            tracep->chgCData(oldp+1706,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q),3);
            tracep->chgCData(oldp+1707,((3U & (IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                       [1U] 
                                                       >> 0x20U)))),2);
            tracep->chgCData(oldp+1708,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q),2);
            tracep->chgIData(oldp+1709,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q),24);
            tracep->chgCData(oldp+1710,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q),2);
            tracep->chgCData(oldp+1711,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_type_q),2);
            tracep->chgBit(oldp+1712,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q));
            tracep->chgBit(oldp+1713,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_we_q));
            tracep->chgBit(oldp+1714,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__handle_misaligned_q));
            tracep->chgBit(oldp+1715,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__pmp_err_q));
            tracep->chgBit(oldp+1716,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__lsu_err_q));
            tracep->chgBit(oldp+1717,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_or_pmp_err));
            tracep->chgCData(oldp+1718,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs),3);
            tracep->chgBit(oldp+1719,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 5U))));
            tracep->chgBit(oldp+1720,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 4U))));
            tracep->chgCData(oldp+1721,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),2);
            tracep->chgBit(oldp+1722,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1723,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q))));
            tracep->chgBit(oldp+1724,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+1725,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1726,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgSData(oldp+1727,((0x7fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q)),15);
            tracep->chgIData(oldp+1728,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1729,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1730,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1731,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                 >> 0x1cU))),4);
            tracep->chgSData(oldp+1732,((0xfffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                                   >> 0x10U))),12);
            tracep->chgBit(oldp+1733,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1734,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xeU))));
            tracep->chgBit(oldp+1735,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xdU))));
            tracep->chgBit(oldp+1736,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xcU))));
            tracep->chgBit(oldp+1737,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xbU))));
            tracep->chgBit(oldp+1738,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 0xaU))));
            tracep->chgBit(oldp+1739,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 9U))));
            tracep->chgCData(oldp+1740,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                               >> 6U))),3);
            tracep->chgBit(oldp+1741,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 5U))));
            tracep->chgBit(oldp+1742,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 4U))));
            tracep->chgBit(oldp+1743,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1744,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                             >> 2U))));
            tracep->chgCData(oldp+1745,((3U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q)),2);
            tracep->chgIData(oldp+1746,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q),32);
            tracep->chgIData(oldp+1747,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q),32);
            tracep->chgBit(oldp+1748,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgCData(oldp+1749,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q))),2);
            tracep->chgBit(oldp+1750,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             >> 4U))));
            tracep->chgCData(oldp+1751,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),2);
            tracep->chgIData(oldp+1752,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1753,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1754,((0xfffffff8U 
                                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q))),32);
            tracep->chgCData(oldp+1755,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q),3);
            tracep->chgQData(oldp+1756,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[0]),64);
            tracep->chgQData(oldp+1758,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[1]),64);
            tracep->chgQData(oldp+1760,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[2]),64);
            tracep->chgQData(oldp+1762,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[3]),64);
            tracep->chgQData(oldp+1764,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[4]),64);
            tracep->chgQData(oldp+1766,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[5]),64);
            tracep->chgQData(oldp+1768,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[6]),64);
            tracep->chgQData(oldp+1770,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[7]),64);
            tracep->chgQData(oldp+1772,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[8]),64);
            tracep->chgQData(oldp+1774,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[9]),64);
            tracep->chgQData(oldp+1776,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[10]),64);
            tracep->chgQData(oldp+1778,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[11]),64);
            tracep->chgQData(oldp+1780,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[12]),64);
            tracep->chgQData(oldp+1782,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[13]),64);
            tracep->chgQData(oldp+1784,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[14]),64);
            tracep->chgQData(oldp+1786,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[15]),64);
            tracep->chgQData(oldp+1788,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[16]),64);
            tracep->chgQData(oldp+1790,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[17]),64);
            tracep->chgQData(oldp+1792,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[18]),64);
            tracep->chgQData(oldp+1794,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[19]),64);
            tracep->chgQData(oldp+1796,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[20]),64);
            tracep->chgQData(oldp+1798,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[21]),64);
            tracep->chgQData(oldp+1800,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[22]),64);
            tracep->chgQData(oldp+1802,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[23]),64);
            tracep->chgQData(oldp+1804,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[24]),64);
            tracep->chgQData(oldp+1806,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[25]),64);
            tracep->chgQData(oldp+1808,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[26]),64);
            tracep->chgQData(oldp+1810,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[27]),64);
            tracep->chgQData(oldp+1812,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[28]),64);
            tracep->chgQData(oldp+1814,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[29]),64);
            tracep->chgQData(oldp+1816,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[30]),64);
            tracep->chgQData(oldp+1818,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter[31]),64);
            tracep->chgQData(oldp+1820,((1ULL + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q)),64);
            tracep->chgQData(oldp+1822,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q),64);
            tracep->chgBit(oldp+1824,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 7U))));
            tracep->chgBit(oldp+1825,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 6U))));
            tracep->chgCData(oldp+1826,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+1827,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 2U))));
            tracep->chgBit(oldp+1828,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q) 
                                             >> 1U))));
            tracep->chgBit(oldp+1829,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q))));
            tracep->chgCData(oldp+1830,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q),6);
            tracep->chgIData(oldp+1831,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q),18);
            tracep->chgIData(oldp+1832,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q),32);
            tracep->chgCData(oldp+1833,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                               >> 2U))),3);
            tracep->chgCData(oldp+1834,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q),3);
            tracep->chgQData(oldp+1835,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q),64);
            tracep->chgQData(oldp+1837,((1ULL + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q)),64);
            tracep->chgCData(oldp+1839,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q),8);
            tracep->chgIData(oldp+1840,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0U]),32);
            tracep->chgIData(oldp+1841,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0U]),32);
            tracep->chgIData(oldp+1842,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[1U]),32);
            tracep->chgIData(oldp+1843,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[2U]),32);
            tracep->chgIData(oldp+1844,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[3U]),32);
            tracep->chgIData(oldp+1845,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[4U]),32);
            tracep->chgIData(oldp+1846,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[5U]),32);
            tracep->chgIData(oldp+1847,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[6U]),32);
            tracep->chgIData(oldp+1848,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[7U]),32);
            tracep->chgIData(oldp+1849,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[8U]),32);
            tracep->chgIData(oldp+1850,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[9U]),32);
            tracep->chgIData(oldp+1851,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xaU]),32);
            tracep->chgIData(oldp+1852,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xbU]),32);
            tracep->chgIData(oldp+1853,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xcU]),32);
            tracep->chgIData(oldp+1854,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xdU]),32);
            tracep->chgIData(oldp+1855,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xeU]),32);
            tracep->chgIData(oldp+1856,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xfU]),32);
            tracep->chgIData(oldp+1857,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x10U]),32);
            tracep->chgIData(oldp+1858,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x11U]),32);
            tracep->chgIData(oldp+1859,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x12U]),32);
            tracep->chgIData(oldp+1860,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x13U]),32);
            tracep->chgIData(oldp+1861,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x14U]),32);
            tracep->chgIData(oldp+1862,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x15U]),32);
            tracep->chgIData(oldp+1863,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x16U]),32);
            tracep->chgIData(oldp+1864,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x17U]),32);
            tracep->chgIData(oldp+1865,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x18U]),32);
            tracep->chgIData(oldp+1866,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x19U]),32);
            tracep->chgIData(oldp+1867,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1aU]),32);
            tracep->chgIData(oldp+1868,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1bU]),32);
            tracep->chgIData(oldp+1869,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1cU]),32);
            tracep->chgIData(oldp+1870,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1dU]),32);
            tracep->chgIData(oldp+1871,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1eU]),32);
            tracep->chgIData(oldp+1872,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1fU]),32);
            tracep->chgCData(oldp+1873,((0x7fU & (IData)(
                                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U)))),7);
            tracep->chgCData(oldp+1874,((3U & (IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+1875,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q)),32);
            tracep->chgBit(oldp+1876,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_dst_q));
            tracep->chgBit(oldp+1877,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0));
            tracep->chgBit(oldp+1878,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q1));
            tracep->chgBit(oldp+1879,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_src_q));
            tracep->chgBit(oldp+1880,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_q));
            tracep->chgBit(oldp+1881,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U))));
            tracep->chgBit(oldp+1882,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgBit(oldp+1883,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__slave_rvalid_q));
            tracep->chgBit(oldp+1884,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__slave_rid_q));
            tracep->chgBit(oldp+1885,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__req));
            tracep->chgIData(oldp+1886,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)),32);
            tracep->chgBit(oldp+1887,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__we));
            tracep->chgIData(oldp+1888,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q)),32);
            tracep->chgCData(oldp+1889,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be),4);
            tracep->chgBit(oldp+1890,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q));
            tracep->chgBit(oldp+1891,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q));
            tracep->chgBit(oldp+1892,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq));
            tracep->chgBit(oldp+1893,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q));
            tracep->chgCData(oldp+1894,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                  >> 0x18U))),8);
            tracep->chgIData(oldp+1895,((0xffffffU 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)),24);
            tracep->chgBit(oldp+1896,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmdbusy));
            tracep->chgIData(oldp+1897,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U]),32);
            tracep->chgIData(oldp+1898,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U]),32);
            tracep->chgIData(oldp+1899,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U]),32);
            tracep->chgIData(oldp+1900,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U]),32);
            tracep->chgIData(oldp+1901,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U]),32);
            tracep->chgIData(oldp+1902,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U]),32);
            tracep->chgIData(oldp+1903,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U]),32);
            tracep->chgIData(oldp+1904,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U]),32);
            tracep->chgIData(oldp+1905,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q)),32);
            tracep->chgIData(oldp+1906,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                 >> 0x20U))),32);
            tracep->chgIData(oldp+1907,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel),20);
            tracep->chgBit(oldp+1908,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x14U))));
            tracep->chgBit(oldp+1909,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x10U))));
            tracep->chgCData(oldp+1910,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1911,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0xfU))));
            tracep->chgBit(oldp+1912,((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))));
            tracep->chgBit(oldp+1913,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sberror_valid));
            tracep->chgCData(oldp+1914,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sberror),3);
            tracep->chgCData(oldp+1915,((3U & (IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+1916,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0),32);
            tracep->chgIData(oldp+1917,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1),32);
            tracep->chgIData(oldp+1918,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2),32);
            tracep->chgIData(oldp+1919,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3),32);
            tracep->chgIData(oldp+1920,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted),32);
            tracep->chgIData(oldp+1921,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0),32);
            tracep->chgIData(oldp+1922,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1),32);
            tracep->chgIData(oldp+1923,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2),32);
            tracep->chgIData(oldp+1924,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1),32);
            tracep->chgIData(oldp+1925,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2),32);
            tracep->chgIData(oldp+1926,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3),32);
            tracep->chgSData(oldp+1927,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0),15);
            tracep->chgSData(oldp+1928,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1),10);
            tracep->chgCData(oldp+1929,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2),5);
            tracep->chgBit(oldp+1930,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+1931,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+1932,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+1933,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+1934,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+1935,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+1936,((0x3ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+1937,((0x3ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+1938,((3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                               >> 4U))),2);
            tracep->chgBit(oldp+1939,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1940,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1941,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                             >> 1U))));
            tracep->chgBit(oldp+1942,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)));
            tracep->chgCData(oldp+1943,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q),3);
            tracep->chgSData(oldp+1944,((0xffffU & 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                          >> 0x10U))),16);
            tracep->chgCData(oldp+1945,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                                                 >> 0xcU))),4);
            tracep->chgSData(oldp+1946,((0xfffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q)),12);
            tracep->chgCData(oldp+1947,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+1948,((0x3fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+1949,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x16U))));
            tracep->chgBit(oldp+1950,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x15U))));
            tracep->chgBit(oldp+1951,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x14U))));
            tracep->chgCData(oldp+1952,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+1953,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+1954,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 0xfU))));
            tracep->chgCData(oldp+1955,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+1956,((0x7fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+1957,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 4U))));
            tracep->chgBit(oldp+1958,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 3U))));
            tracep->chgBit(oldp+1959,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 2U))));
            tracep->chgBit(oldp+1960,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                                             >> 1U))));
            tracep->chgBit(oldp+1961,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)));
            tracep->chgQData(oldp+1962,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q),64);
            tracep->chgQData(oldp+1964,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q),64);
            tracep->chgBit(oldp+1966,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q));
            tracep->chgBit(oldp+1967,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart));
            tracep->chgCData(oldp+1968,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q),2);
            tracep->chgCData(oldp+1969,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q),2);
            tracep->chgCData(oldp+1970,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q),2);
            tracep->chgCData(oldp+1971,((0x7fU & (IData)(
                                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                          >> 0x22U)))),8);
            tracep->chgCData(oldp+1972,((0xfU & ((0x7fU 
                                                  & (IData)(
                                                            (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                                                             >> 0x22U))) 
                                                 - (IData)(4U)))),4);
            tracep->chgIData(oldp+1973,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q 
                                                 >> 
                                                 (0x3fU 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q) 
                                                     << 5U))))),32);
            tracep->chgBit(oldp+1974,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q));
            tracep->chgBit(oldp+1975,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q));
            tracep->chgIData(oldp+1976,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q)),32);
            tracep->chgIData(oldp+1977,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q 
                                                 >> 0x20U))),32);
            tracep->chgCData(oldp+1978,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q),3);
            tracep->chgCData(oldp+1979,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask),4);
            tracep->chgCData(oldp+1980,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q))),2);
            tracep->chgQData(oldp+1981,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U])))),64);
            tracep->chgQData(oldp+1983,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U])))),64);
            tracep->chgQData(oldp+1985,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U])))),64);
            tracep->chgQData(oldp+1987,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U])))),64);
            tracep->chgQData(oldp+1989,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U])))),64);
            tracep->chgQData(oldp+1991,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U])))),64);
            tracep->chgQData(oldp+1993,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U])))),64);
            tracep->chgQData(oldp+1995,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U])))),64);
            tracep->chgQData(oldp+1997,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U])))),64);
            tracep->chgQData(oldp+1999,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU])))),64);
            tracep->chgQData(oldp+2001,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU])))),64);
            tracep->chgQData(oldp+2003,((((QData)((IData)(
                                                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU])) 
                                          << 0x20U) 
                                         | (QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU])))),64);
            tracep->chgBit(oldp+2005,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume));
            tracep->chgBit(oldp+2006,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__go));
            tracep->chgBit(oldp+2007,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command));
            tracep->chgQData(oldp+2008,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q),64);
            tracep->chgBit(oldp+2010,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q));
            tracep->chgBit(oldp+2011,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel)));
            tracep->chgCData(oldp+2012,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq),2);
            tracep->chgCData(oldp+2013,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq),2);
            tracep->chgBit(oldp+2014,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q));
            tracep->chgBit(oldp+2015,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x17U))));
            tracep->chgCData(oldp+2016,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                               >> 0x14U))),3);
            tracep->chgBit(oldp+2017,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2018,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2019,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2020,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x10U))));
            tracep->chgSData(oldp+2021,((0xffffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)),16);
            tracep->chgCData(oldp+2022,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q),2);
            tracep->chgBit(oldp+2023,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q));
            tracep->chgBit(oldp+2024,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q));
            tracep->chgBit(oldp+2025,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q));
            tracep->chgCData(oldp+2026,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q),2);
            tracep->chgBit(oldp+2027,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q));
            tracep->chgCData(oldp+2028,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q),3);
            tracep->chgBit(oldp+2029,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_valid_q));
            tracep->chgBit(oldp+2030,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_valid_q));
            tracep->chgIData(oldp+2031,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+2032,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgSData(oldp+2033,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__r_addr_q),13);
            tracep->chgIData(oldp+2034,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__i),32);
            tracep->chgIData(oldp+2035,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
            tracep->chgIData(oldp+2036,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__i),32);
            tracep->chgIData(oldp+2037,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
            tracep->chgIData(oldp+2038,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i),32);
            tracep->chgIData(oldp+2039,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+2040,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
            tracep->chgIData(oldp+2041,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+2042,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgSData(oldp+2043,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__r_addr_q),13);
            tracep->chgIData(oldp+2044,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__i),32);
            tracep->chgIData(oldp+2045,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
            tracep->chgIData(oldp+2046,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__i),32);
            tracep->chgIData(oldp+2047,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
            tracep->chgIData(oldp+2048,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i),32);
            tracep->chgIData(oldp+2049,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+2050,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
            tracep->chgBit(oldp+2051,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_watermark_o));
            tracep->chgBit(oldp+2052,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_watermark_o));
            tracep->chgBit(oldp+2053,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_empty_o));
            tracep->chgBit(oldp+2054,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_overflow_o));
            tracep->chgBit(oldp+2055,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_frame_err_o));
            tracep->chgBit(oldp+2056,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_break_err_o));
            tracep->chgBit(oldp+2057,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_timeout_o));
            tracep->chgBit(oldp+2058,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_parity_err_o));
            tracep->chgBit(oldp+2059,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                             >> 1U))));
            tracep->chgCData(oldp+2060,((7U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                                << 2U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                  >> 0x1eU)))),3);
            tracep->chgCData(oldp+2061,((7U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                                << 5U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                  >> 0x1bU)))),3);
            tracep->chgCData(oldp+2062,((3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                                << 7U) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                  >> 0x19U)))),2);
            tracep->chgCData(oldp+2063,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                                   << 0xfU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                     >> 0x11U)))),8);
            tracep->chgBit(oldp+2064,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                             >> 0x10U))));
            tracep->chgIData(oldp+2065,(((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                          << 0x10U) 
                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                            >> 0x10U))),32);
            tracep->chgCData(oldp+2066,((0x7fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                   << 0x17U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                     >> 9U)))),7);
            tracep->chgCData(oldp+2067,((0x7fU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                   << 0x1eU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                     >> 2U)))),7);
            tracep->chgBit(oldp+2068,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                             >> 1U))));
            tracep->chgBit(oldp+2069,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U])));
            tracep->chgIData(oldp+2070,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_rdata_q),32);
            tracep->chgBit(oldp+2071,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_opc_q));
            tracep->chgBit(oldp+2072,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_id_q));
            tracep->chgBit(oldp+2073,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_q));
            tracep->chgBit(oldp+2074,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q));
            tracep->chgBit(oldp+2075,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q));
            tracep->chgBit(oldp+2076,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q));
            tracep->chgBit(oldp+2077,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q));
            tracep->chgBit(oldp+2078,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q));
            tracep->chgBit(oldp+2079,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q));
            tracep->chgBit(oldp+2080,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q));
            tracep->chgBit(oldp+2081,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q));
            tracep->chgBit(oldp+2082,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q));
            tracep->chgBit(oldp+2083,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q));
            tracep->chgBit(oldp+2084,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q));
            tracep->chgBit(oldp+2085,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q));
            tracep->chgBit(oldp+2086,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q));
            tracep->chgBit(oldp+2087,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q));
            tracep->chgBit(oldp+2088,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q));
            tracep->chgBit(oldp+2089,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q));
            tracep->chgBit(oldp+2090,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q));
            tracep->chgBit(oldp+2091,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q));
            tracep->chgBit(oldp+2092,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q));
            tracep->chgBit(oldp+2093,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q));
            tracep->chgBit(oldp+2094,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q));
            tracep->chgBit(oldp+2095,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q));
            tracep->chgBit(oldp+2096,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q));
            tracep->chgCData(oldp+2097,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q),2);
            tracep->chgSData(oldp+2098,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q),16);
            tracep->chgCData(oldp+2099,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q),3);
            tracep->chgCData(oldp+2100,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q),2);
            tracep->chgBit(oldp+2101,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q));
            tracep->chgBit(oldp+2102,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q));
            tracep->chgIData(oldp+2103,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q),24);
            tracep->chgBit(oldp+2104,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q));
            tracep->chgBit(oldp+2105,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding));
            tracep->chgIData(oldp+2106,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata),32);
            tracep->chgBit(oldp+2107,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error));
            tracep->chgCData(oldp+2108,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid),8);
            tracep->chgCData(oldp+2109,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz),2);
            tracep->chgCData(oldp+2110,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop),3);
            tracep->chgBit(oldp+2111,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__qe));
            tracep->chgBit(oldp+2112,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__qe));
            tracep->chgBit(oldp+2113,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__qe));
            tracep->chgBit(oldp+2114,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe));
            tracep->chgBit(oldp+2115,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe));
            tracep->chgBit(oldp+2116,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe));
            tracep->chgBit(oldp+2117,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe));
            tracep->chgBit(oldp+2118,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe));
            tracep->chgBit(oldp+2119,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__qe));
            tracep->chgBit(oldp+2120,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__qe));
            tracep->chgBit(oldp+2121,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__qe));
            tracep->chgBit(oldp+2122,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__qe));
            tracep->chgBit(oldp+2123,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__qe));
            tracep->chgBit(oldp+2124,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe));
            tracep->chgBit(oldp+2125,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__qe));
            tracep->chgBit(oldp+2126,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__qe));
            tracep->chgBit(oldp+2127,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_tx__DOT__qe));
            tracep->chgBit(oldp+2128,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_rx__DOT__qe));
            tracep->chgBit(oldp+2129,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_nf__DOT__qe));
            tracep->chgBit(oldp+2130,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__qe));
            tracep->chgBit(oldp+2131,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe));
            tracep->chgBit(oldp+2132,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__qe));
            tracep->chgBit(oldp+2133,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__qe));
            tracep->chgBit(oldp+2134,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__qe));
            tracep->chgBit(oldp+2135,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_nco__DOT__qe));
            tracep->chgBit(oldp+2136,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe));
            tracep->chgCData(oldp+2137,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q),8);
            tracep->chgBit(oldp+2138,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe));
            tracep->chgBit(oldp+2139,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q));
            tracep->chgBit(oldp+2140,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe));
            tracep->chgBit(oldp+2141,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q));
            tracep->chgBit(oldp+2142,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe));
            tracep->chgBit(oldp+2143,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe));
            tracep->chgBit(oldp+2144,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe));
            tracep->chgBit(oldp+2145,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ovrd_txval__DOT__qe));
            tracep->chgBit(oldp+2146,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__qe));
            tracep->chgBit(oldp+2147,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe));
            tracep->chgSData(oldp+2148,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_val_q),16);
            tracep->chgBit(oldp+2149,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2150,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q));
            tracep->chgCData(oldp+2151,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth_prev_q),6);
            tracep->chgIData(oldp+2152,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_q),24);
            tracep->chgBit(oldp+2153,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tx_q));
            tracep->chgBit(oldp+2154,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_out_q));
            tracep->chgBit(oldp+2155,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q));
            tracep->chgBit(oldp+2156,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q));
            tracep->chgBit(oldp+2157,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync));
            tracep->chgCData(oldp+2158,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_q),5);
            tracep->chgBit(oldp+2159,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err));
            tracep->chgBit(oldp+2160,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_prev_q));
            tracep->chgBit(oldp+2161,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_prev_q));
            tracep->chgBit(oldp+2162,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle_q));
            tracep->chgBit(oldp+2163,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q));
            tracep->chgIData(oldp+2164,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q),17);
            tracep->chgBit(oldp+2165,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1));
            tracep->chgBit(oldp+2166,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2));
            tracep->chgBit(oldp+2167,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync) 
                                        & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1) 
                                           | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2))) 
                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1) 
                                          & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2)))));
            tracep->chgCData(oldp+2168,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),6);
            tracep->chgBit(oldp+2169,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+2170,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 5U))));
            tracep->chgCData(oldp+2171,((0x1fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),5);
            tracep->chgCData(oldp+2172,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q),4);
            tracep->chgBit(oldp+2173,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q));
            tracep->chgCData(oldp+2174,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q),4);
            tracep->chgSData(oldp+2175,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_q),11);
            tracep->chgBit(oldp+2176,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq));
            tracep->chgSData(oldp+2177,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q),11);
            tracep->chgCData(oldp+2178,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q),4);
            tracep->chgCData(oldp+2179,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q),4);
            tracep->chgCData(oldp+2180,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr),6);
            tracep->chgBit(oldp+2181,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst));
            tracep->chgBit(oldp+2182,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                             >> 5U))));
            tracep->chgCData(oldp+2183,((0x1fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))),5);
            tracep->chgBit(oldp+2184,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__reg2hw 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+2185,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__reg2hw)),32);
            tracep->chgBit(oldp+2186,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_valid__q));
            tracep->chgIData(oldp+2187,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_value__q),32);
            tracep->chgBit(oldp+2188,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__u_exit_valid__DOT__qe));
            tracep->chgBit(oldp+2189,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__u_exit_value__DOT__qe));
            tracep->chgIData(oldp+2190,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgBit(oldp+2191,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q));
            tracep->chgBit(oldp+2192,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_q));
            tracep->chgBit(oldp+2193,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_q));
            tracep->chgCData(oldp+2194,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_q),7);
            tracep->chgIData(oldp+2195,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_q),32);
            tracep->chgCData(oldp+2196,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_q),4);
            tracep->chgBit(oldp+2197,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req));
            tracep->chgBit(oldp+2198,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we));
            tracep->chgCData(oldp+2199,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr),7);
            tracep->chgIData(oldp+2200,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata),32);
            tracep->chgCData(oldp+2201,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be),4);
            tracep->chgBit(oldp+2202,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_n));
            tracep->chgCData(oldp+2203,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q),5);
            tracep->chgBit(oldp+2204,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q));
            tracep->chgIData(oldp+2205,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__random1),32);
            tracep->chgIData(oldp+2206,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__random2),32);
            tracep->chgCData(oldp+2207,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr),7);
            tracep->chgIData(oldp+2208,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata),32);
            tracep->chgCData(oldp+2209,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be),4);
            tracep->chgIData(oldp+2210,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q),32);
            tracep->chgIData(oldp+2211,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[0]),32);
            tracep->chgIData(oldp+2212,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[1]),32);
            tracep->chgIData(oldp+2213,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[2]),32);
            tracep->chgIData(oldp+2214,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[3]),32);
            tracep->chgIData(oldp+2215,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[4]),32);
            tracep->chgIData(oldp+2216,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[5]),32);
            tracep->chgIData(oldp+2217,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[6]),32);
            tracep->chgIData(oldp+2218,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[7]),32);
            tracep->chgIData(oldp+2219,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[8]),32);
            tracep->chgIData(oldp+2220,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[9]),32);
            tracep->chgIData(oldp+2221,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[10]),32);
            tracep->chgIData(oldp+2222,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[11]),32);
            tracep->chgIData(oldp+2223,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[12]),32);
            tracep->chgIData(oldp+2224,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[13]),32);
            tracep->chgIData(oldp+2225,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[14]),32);
            tracep->chgIData(oldp+2226,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[15]),32);
            tracep->chgIData(oldp+2227,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[16]),32);
            tracep->chgIData(oldp+2228,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[17]),32);
            tracep->chgIData(oldp+2229,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[18]),32);
            tracep->chgIData(oldp+2230,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[19]),32);
            tracep->chgIData(oldp+2231,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[20]),32);
            tracep->chgIData(oldp+2232,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[21]),32);
            tracep->chgIData(oldp+2233,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[22]),32);
            tracep->chgIData(oldp+2234,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[23]),32);
            tracep->chgIData(oldp+2235,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[24]),32);
            tracep->chgIData(oldp+2236,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[25]),32);
            tracep->chgIData(oldp+2237,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[26]),32);
            tracep->chgIData(oldp+2238,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[27]),32);
            tracep->chgIData(oldp+2239,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[28]),32);
            tracep->chgIData(oldp+2240,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[29]),32);
            tracep->chgIData(oldp+2241,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[30]),32);
            tracep->chgIData(oldp+2242,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[31]),32);
            tracep->chgIData(oldp+2243,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[32]),32);
            tracep->chgIData(oldp+2244,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[33]),32);
            tracep->chgIData(oldp+2245,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[34]),32);
            tracep->chgIData(oldp+2246,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[35]),32);
            tracep->chgIData(oldp+2247,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[36]),32);
            tracep->chgIData(oldp+2248,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[37]),32);
            tracep->chgIData(oldp+2249,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[38]),32);
            tracep->chgIData(oldp+2250,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[39]),32);
            tracep->chgIData(oldp+2251,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[40]),32);
            tracep->chgIData(oldp+2252,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[41]),32);
            tracep->chgIData(oldp+2253,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[42]),32);
            tracep->chgIData(oldp+2254,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[43]),32);
            tracep->chgIData(oldp+2255,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[44]),32);
            tracep->chgIData(oldp+2256,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[45]),32);
            tracep->chgIData(oldp+2257,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[46]),32);
            tracep->chgIData(oldp+2258,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[47]),32);
            tracep->chgIData(oldp+2259,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[48]),32);
            tracep->chgIData(oldp+2260,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[49]),32);
            tracep->chgIData(oldp+2261,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[50]),32);
            tracep->chgIData(oldp+2262,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[51]),32);
            tracep->chgIData(oldp+2263,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[52]),32);
            tracep->chgIData(oldp+2264,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[53]),32);
            tracep->chgIData(oldp+2265,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[54]),32);
            tracep->chgIData(oldp+2266,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[55]),32);
            tracep->chgIData(oldp+2267,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[56]),32);
            tracep->chgIData(oldp+2268,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[57]),32);
            tracep->chgIData(oldp+2269,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[58]),32);
            tracep->chgIData(oldp+2270,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[59]),32);
            tracep->chgIData(oldp+2271,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[60]),32);
            tracep->chgIData(oldp+2272,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[61]),32);
            tracep->chgIData(oldp+2273,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[62]),32);
            tracep->chgIData(oldp+2274,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[63]),32);
            tracep->chgIData(oldp+2275,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[64]),32);
            tracep->chgIData(oldp+2276,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[65]),32);
            tracep->chgIData(oldp+2277,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[66]),32);
            tracep->chgIData(oldp+2278,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[67]),32);
            tracep->chgIData(oldp+2279,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[68]),32);
            tracep->chgIData(oldp+2280,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[69]),32);
            tracep->chgIData(oldp+2281,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[70]),32);
            tracep->chgIData(oldp+2282,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[71]),32);
            tracep->chgIData(oldp+2283,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[72]),32);
            tracep->chgIData(oldp+2284,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[73]),32);
            tracep->chgIData(oldp+2285,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[74]),32);
            tracep->chgIData(oldp+2286,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[75]),32);
            tracep->chgIData(oldp+2287,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[76]),32);
            tracep->chgIData(oldp+2288,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[77]),32);
            tracep->chgIData(oldp+2289,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[78]),32);
            tracep->chgIData(oldp+2290,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[79]),32);
            tracep->chgIData(oldp+2291,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[80]),32);
            tracep->chgIData(oldp+2292,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[81]),32);
            tracep->chgIData(oldp+2293,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[82]),32);
            tracep->chgIData(oldp+2294,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[83]),32);
            tracep->chgIData(oldp+2295,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[84]),32);
            tracep->chgIData(oldp+2296,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[85]),32);
            tracep->chgIData(oldp+2297,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[86]),32);
            tracep->chgIData(oldp+2298,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[87]),32);
            tracep->chgIData(oldp+2299,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[88]),32);
            tracep->chgIData(oldp+2300,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[89]),32);
            tracep->chgIData(oldp+2301,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[90]),32);
            tracep->chgIData(oldp+2302,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[91]),32);
            tracep->chgIData(oldp+2303,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[92]),32);
            tracep->chgIData(oldp+2304,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[93]),32);
            tracep->chgIData(oldp+2305,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[94]),32);
            tracep->chgIData(oldp+2306,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[95]),32);
            tracep->chgIData(oldp+2307,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[96]),32);
            tracep->chgIData(oldp+2308,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[97]),32);
            tracep->chgIData(oldp+2309,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[98]),32);
            tracep->chgIData(oldp+2310,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[99]),32);
            tracep->chgIData(oldp+2311,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[100]),32);
            tracep->chgIData(oldp+2312,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[101]),32);
            tracep->chgIData(oldp+2313,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[102]),32);
            tracep->chgIData(oldp+2314,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[103]),32);
            tracep->chgIData(oldp+2315,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[104]),32);
            tracep->chgIData(oldp+2316,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[105]),32);
            tracep->chgIData(oldp+2317,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[106]),32);
            tracep->chgIData(oldp+2318,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[107]),32);
            tracep->chgIData(oldp+2319,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[108]),32);
            tracep->chgIData(oldp+2320,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[109]),32);
            tracep->chgIData(oldp+2321,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[110]),32);
            tracep->chgIData(oldp+2322,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[111]),32);
            tracep->chgIData(oldp+2323,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[112]),32);
            tracep->chgIData(oldp+2324,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[113]),32);
            tracep->chgIData(oldp+2325,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[114]),32);
            tracep->chgIData(oldp+2326,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[115]),32);
            tracep->chgIData(oldp+2327,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[116]),32);
            tracep->chgIData(oldp+2328,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[117]),32);
            tracep->chgIData(oldp+2329,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[118]),32);
            tracep->chgIData(oldp+2330,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[119]),32);
            tracep->chgIData(oldp+2331,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[120]),32);
            tracep->chgIData(oldp+2332,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[121]),32);
            tracep->chgIData(oldp+2333,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[122]),32);
            tracep->chgIData(oldp+2334,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[123]),32);
            tracep->chgIData(oldp+2335,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[124]),32);
            tracep->chgIData(oldp+2336,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[125]),32);
            tracep->chgIData(oldp+2337,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[126]),32);
            tracep->chgIData(oldp+2338,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram[127]),32);
            tracep->chgCData(oldp+2339,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__r_addr_q),7);
            tracep->chgIData(oldp+2340,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req) 
                                          & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we)))
                                          ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                                         [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr]
                                          : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                                         [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__r_addr_q])),32);
            tracep->chgIData(oldp+2341,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__i),32);
            tracep->chgIData(oldp+2342,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j),32);
            tracep->chgIData(oldp+2343,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__i),32);
            tracep->chgIData(oldp+2344,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j),32);
            tracep->chgIData(oldp+2345,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i),32);
            tracep->chgIData(oldp+2346,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__i),32);
            tracep->chgIData(oldp+2347,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j),32);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [2U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgIData(oldp+2348,(((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_pc_mux_id))
                                          ? ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_pc_mux_id))
                                              ? 0U : 0x10000800U)
                                          : ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_pc_mux_id))
                                              ? ((0xffffff00U 
                                                  & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q) 
                                                 | (0x7cU 
                                                    & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_cause) 
                                                       << 2U)))
                                              : (0xffffff00U 
                                                 & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q)))),32);
            tracep->chgBit(oldp+2349,((1U & (~ (IData)(
                                                       (3U 
                                                        == 
                                                        (3U 
                                                         & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                             >> 1U) 
                                                            | ((2U 
                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                                   << 1U)) 
                                                               | (1U 
                                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q) 
                                                                     >> 1U)))))))))));
            tracep->chgBit(oldp+2350,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req) 
                                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec))));
            tracep->chgBit(oldp+2351,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q)))));
            tracep->chgBit(oldp+2352,(((3U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                       & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn) 
                                          | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                             & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn))))));
            tracep->chgIData(oldp+2353,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__div_sel_ex)
                                          ? (IData)(
                                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                    [0U])
                                          : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d))),32);
            tracep->chgBit(oldp+2354,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid) 
                                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid))));
            tracep->chgQData(oldp+2355,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_sel)
                                          ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a
                                          : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1)
                                              ? (1ULL 
                                                 | ((QData)((IData)(
                                                                    (0x7fffffffU 
                                                                     & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                    << 2U))
                                              : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2)
                                                  ? 
                                                 (1ULL 
                                                  | ((QData)((IData)(
                                                                     (0x3fffffffU 
                                                                      & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                     << 3U))
                                                  : 
                                                 ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3)
                                                   ? 
                                                  (1ULL 
                                                   | ((QData)((IData)(
                                                                      (0x1fffffffU 
                                                                       & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a))) 
                                                      << 4U))
                                                   : 
                                                  (1ULL 
                                                   | ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a)) 
                                                      << 1U))))))),33);
            tracep->chgBit(oldp+2357,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a) 
                                        ^ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q)))));
            tracep->chgIData(oldp+2358,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req)
                                          ? (0xfffffffcU 
                                             & ((IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 3U)) 
                                                << 2U))
                                          : (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 1U)))),32);
            tracep->chgBit(oldp+2359,(((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_addr) 
                                              >> 8U)) 
                                       > (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q))));
            tracep->chgIData(oldp+2360,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q)
                                          ? (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux 
                                                     >> 0x20U))
                                          : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux))),32);
            tracep->chgBit(oldp+2361,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth) 
                                       != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth_prev_q))));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[3U])) {
            tracep->chgCData(oldp+2362,((0x7fU & (IData)(
                                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req 
                                                          >> 0x22U)))),7);
            tracep->chgCData(oldp+2363,((3U & (IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+2364,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req)),32);
            tracep->chgBit(oldp+2365,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_ready));
            tracep->chgBit(oldp+2366,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_valid));
            tracep->chgIData(oldp+2367,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+2368,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q))),2);
            tracep->chgBit(oldp+2369,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_resp_valid));
            tracep->chgCData(oldp+2370,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q),3);
            tracep->chgCData(oldp+2371,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_q),7);
            tracep->chgIData(oldp+2372,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_q),32);
            tracep->chgCData(oldp+2373,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_q),2);
            tracep->chgCData(oldp+2374,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q),4);
            tracep->chgBit(oldp+2375,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
            tracep->chgCData(oldp+2376,((0x7fU & (IData)(
                                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
                                                          >> 0x22U)))),7);
            tracep->chgCData(oldp+2377,((3U & (IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
                                                       >> 0x20U)))),2);
            tracep->chgIData(oldp+2378,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q)),32);
            tracep->chgBit(oldp+2379,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_src_q));
            tracep->chgBit(oldp+2380,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_q));
            tracep->chgBit(oldp+2381,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q));
            tracep->chgBit(oldp+2382,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_dst_q));
            tracep->chgBit(oldp+2383,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q0));
            tracep->chgBit(oldp+2384,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q1));
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[4U])) {
            tracep->chgCData(oldp+2385,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 0xfU))),5);
            tracep->chgCData(oldp+2386,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 0x14U))),5);
            tracep->chgCData(oldp+2387,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 7U))),5);
            tracep->chgIData(oldp+2388,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_id),32);
            tracep->chgIData(oldp+2389,((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         << 1U)),32);
            tracep->chgIData(oldp+2390,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id),32);
            tracep->chgIData(oldp+2391,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_alu_id),32);
            tracep->chgSData(oldp+2392,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_c_id),16);
            tracep->chgBit(oldp+2393,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_is_compressed_id));
            tracep->chgBit(oldp+2394,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err));
            tracep->chgBit(oldp+2395,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err_plus2));
            tracep->chgBit(oldp+2396,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_c_insn_id));
            tracep->chgIData(oldp+2397,((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                         << 1U)),32);
            tracep->chgIData(oldp+2398,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_id),32);
            tracep->chgIData(oldp+2399,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q),32);
            tracep->chgIData(oldp+2400,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q),32);
            tracep->chgIData(oldp+2401,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U]),32);
            tracep->chgIData(oldp+2402,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U]),32);
            tracep->chgIData(oldp+2403,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U]),32);
            tracep->chgCData(oldp+2404,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q),3);
            tracep->chgIData(oldp+2405,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q),31);
            tracep->chgIData(oldp+2406,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | (0xfffU 
                                            & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                               >> 0x14U)))),32);
            tracep->chgIData(oldp+2407,(((0xfffff000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xcU)) 
                                         | ((0xfe0U 
                                             & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                >> 0x14U)) 
                                            | (0x1fU 
                                               & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 7U))))),32);
            tracep->chgIData(oldp+2408,(((0xffffe000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0xdU)) 
                                         | ((0x1000U 
                                             & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                >> 0x13U)) 
                                            | ((0x800U 
                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                   << 4U)) 
                                               | ((0x7e0U 
                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                      >> 0x14U)) 
                                                  | (0x1eU 
                                                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                        >> 7U))))))),32);
            tracep->chgIData(oldp+2409,((0xfffff000U 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id)),32);
            tracep->chgIData(oldp+2410,(((0xfff00000U 
                                          & ((- (IData)(
                                                        (1U 
                                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                            >> 0x1fU)))) 
                                             << 0x14U)) 
                                         | ((0xff000U 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id) 
                                            | ((0x800U 
                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                   >> 9U)) 
                                               | (0x7feU 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                     >> 0x14U)))))),32);
            tracep->chgIData(oldp+2411,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 0xfU))),32);
            tracep->chgSData(oldp+2412,(((0x3e0U & 
                                          (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_alu_id 
                                           >> 0xaU)) 
                                         | (0x1fU & 
                                            (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_alu_id 
                                             >> 7U)))),10);
            tracep->chgCData(oldp+2413,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 0x1bU))),5);
            tracep->chgCData(oldp+2414,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 0xfU))),6);
            tracep->chgCData(oldp+2415,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 0x14U))),6);
            tracep->chgCData(oldp+2416,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                  >> 7U))),6);
            tracep->chgQData(oldp+2417,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata),64);
            tracep->chgCData(oldp+2419,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q),5);
            tracep->chgCData(oldp+2420,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+2421,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2422,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2423,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2424,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+2425,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2426,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2427,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2428,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+2429,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2430,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2431,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2432,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+2433,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2434,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2435,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2436,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+2437,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2438,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2439,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2440,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+2441,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2442,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2443,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2444,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+2445,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2446,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2447,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2448,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+2449,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2450,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2451,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x18U))),8);
            tracep->chgCData(oldp+2452,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U])),8);
            tracep->chgCData(oldp+2453,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2454,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2455,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[0U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2456,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U])),8);
            tracep->chgCData(oldp+2457,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2458,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2459,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[1U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2460,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U])),8);
            tracep->chgCData(oldp+2461,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2462,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2463,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[2U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2464,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U])),8);
            tracep->chgCData(oldp+2465,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2466,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2467,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[3U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2468,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U])),8);
            tracep->chgCData(oldp+2469,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2470,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2471,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[4U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2472,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U])),8);
            tracep->chgCData(oldp+2473,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2474,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2475,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[5U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2476,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U])),8);
            tracep->chgCData(oldp+2477,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 8U)))),8);
            tracep->chgCData(oldp+2478,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 0x10U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 0x10U)))),8);
            tracep->chgCData(oldp+2479,((0xffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                   << 8U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[6U] 
                                                     >> 0x18U)))),8);
            tracep->chgCData(oldp+2480,((0xffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U])),8);
            tracep->chgCData(oldp+2481,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 8U))),8);
            tracep->chgCData(oldp+2482,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x10U))),8);
            tracep->chgCData(oldp+2483,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[7U] 
                                                  >> 0x18U))),8);
        }
        if (VL_UNLIKELY((vlTOPp->__Vm_traceActivity
                         [4U] | vlTOPp->__Vm_traceActivity
                         [6U]))) {
            tracep->chgBit(oldp+2484,((1U & (((((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__ebrk_insn)) 
                                                & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__ecall_insn_dec))) 
                                               & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn))) 
                                              & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_csr_insn_id))) 
                                             & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err))))));
            tracep->chgBit(oldp+2485,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_ren_a_dec))));
            tracep->chgBit(oldp+2486,(((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q) 
                                         & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err))) 
                                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_insn_id))) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_ren_b_dec))));
            tracep->chgBit(oldp+2487,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                                 >> 1U) 
                                                & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                    >> 1U) 
                                                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))))));
            tracep->chgBit(oldp+2488,((1U & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                              >> 1U) 
                                             & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                 >> 1U) 
                                                & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))));
            tracep->chgIData(oldp+2489,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imm_a_mux_sel)
                                          ? 0U : (0x1fU 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                                                     >> 0xfU)))),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[5U])) {
            tracep->chgBit(oldp+2490,(vlTOPp->testharness__DOT__uart_rx));
            tracep->chgBit(oldp+2491,(vlTOPp->testharness__DOT__i_uart0__DOT__txactive));
            tracep->chgIData(oldp+2492,(vlTOPp->testharness__DOT__i_uart0__DOT__txcount),32);
            tracep->chgIData(oldp+2493,(vlTOPp->testharness__DOT__i_uart0__DOT__txcyccount),32);
            tracep->chgSData(oldp+2494,(vlTOPp->testharness__DOT__i_uart0__DOT__txsymbol),10);
            tracep->chgBit(oldp+2495,(vlTOPp->testharness__DOT__i_uart0__DOT__seen_reset));
            tracep->chgBit(oldp+2496,(vlTOPp->testharness__DOT__i_uart0__DOT__rxactive));
            tracep->chgIData(oldp+2497,(vlTOPp->testharness__DOT__i_uart0__DOT__rxcount),32);
            tracep->chgIData(oldp+2498,(vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount),32);
            tracep->chgCData(oldp+2499,(vlTOPp->testharness__DOT__i_uart0__DOT__rxsymbol),8);
            tracep->chgIData(oldp+2500,(vlTOPp->testharness__DOT__i_uart0__DOT__unnamedblk1__DOT__c),32);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[6U])) {
            tracep->chgBit(oldp+2501,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__data_req_out) 
                                       & (~ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                          [2U]))));
            tracep->chgBit(oldp+2502,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgCData(oldp+2503,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+2504,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgIData(oldp+2505,(((1U & (IData)(
                                                       (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                        >> 2U)))
                                          ? ((1U & (IData)(
                                                           (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((0xff000000U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                     << 0x18U)) 
                                                 | (0xffffffU 
                                                    & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                       >> 8U)))
                                              : ((0xffff0000U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                     << 0x10U)) 
                                                 | (0xffffU 
                                                    & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                       >> 0x10U))))
                                          : ((1U & (IData)(
                                                           (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 1U)))
                                              ? ((0xffffff00U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                     << 8U)) 
                                                 | (0xffU 
                                                    & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                       >> 0x18U)))
                                              : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b))),32);
            tracep->chgBit(oldp+2506,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_slave_resp 
                                                     >> 0x21U)))));
            tracep->chgBit(oldp+2507,((1U & (IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_slave_resp 
                                                     >> 0x20U)))));
            tracep->chgIData(oldp+2508,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_slave_resp)),32);
            tracep->chgIData(oldp+2509,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_a),32);
            tracep->chgIData(oldp+2510,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b),32);
            tracep->chgIData(oldp+2511,((0xfffffffcU 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr)),32);
            tracep->chgBit(oldp+2512,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_we));
            tracep->chgCData(oldp+2513,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_be),4);
            tracep->chgIData(oldp+2514,((0xfffffffcU 
                                         & ((IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                     >> 3U)) 
                                            << 2U))),32);
            tracep->chgBit(oldp+2515,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__icache_inval));
            tracep->chgBit(oldp+2516,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q));
            tracep->chgQData(oldp+2517,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_d_ex[0]),34);
            tracep->chgQData(oldp+2519,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_d_ex[1]),34);
            tracep->chgCData(oldp+2521,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_we_ex),2);
            tracep->chgBit(oldp+2522,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_first_cycle));
            tracep->chgBit(oldp+2523,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set));
            tracep->chgCData(oldp+2524,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_mux_id),3);
            tracep->chgCData(oldp+2525,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_pc_mux_id),2);
            tracep->chgCData(oldp+2526,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_cause),6);
            tracep->chgIData(oldp+2527,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U))),32);
            tracep->chgBit(oldp+2528,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_result));
            tracep->chgBit(oldp+2529,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ctrl_busy));
            tracep->chgIData(oldp+2530,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_wdata_sel)
                                          ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_wdata_sel)
                                              ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_rdata_int
                                              : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__result_ex)
                                          : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__result_ex)),32);
            tracep->chgBit(oldp+2531,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_we_raw) 
                                        & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_executing_spec)) 
                                       & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_csr_insn_id)))));
            tracep->chgCData(oldp+2532,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operator),7);
            tracep->chgIData(oldp+2533,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a),32);
            tracep->chgIData(oldp+2534,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b),32);
            tracep->chgIData(oldp+2535,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__result_ex),32);
            tracep->chgBit(oldp+2536,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_executing_spec) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__mult_en_dec))));
            tracep->chgBit(oldp+2537,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_executing_spec) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__div_en_dec))));
            tracep->chgBit(oldp+2538,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__mult_sel_ex));
            tracep->chgBit(oldp+2539,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__div_sel_ex));
            tracep->chgCData(oldp+2540,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__multdiv_operator),2);
            tracep->chgCData(oldp+2541,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__multdiv_signed_mode),2);
            tracep->chgBit(oldp+2542,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_access));
            tracep->chgCData(oldp+2543,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_op),2);
            tracep->chgSData(oldp+2544,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_addr),12);
            tracep->chgIData(oldp+2545,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_rdata_int),32);
            tracep->chgBit(oldp+2546,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_csr_insn_id));
            tracep->chgCData(oldp+2547,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_type),2);
            tracep->chgBit(oldp+2548,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_sign_ext));
            tracep->chgBit(oldp+2549,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_req));
            tracep->chgBit(oldp+2550,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_valid));
            tracep->chgBit(oldp+2551,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_req_int));
            tracep->chgBit(oldp+2552,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__data_req_out));
            tracep->chgBit(oldp+2553,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_save_if));
            tracep->chgBit(oldp+2554,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_save_id));
            tracep->chgBit(oldp+2555,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_restore_mret_id));
            tracep->chgBit(oldp+2556,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_restore_dret_id));
            tracep->chgBit(oldp+2557,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_save_cause));
            tracep->chgBit(oldp+2558,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_mtvec_init));
            tracep->chgIData(oldp+2559,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_mtval),32);
            tracep->chgCData(oldp+2560,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__debug_cause),3);
            tracep->chgBit(oldp+2561,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__debug_csr_save));
            tracep->chgBit(oldp+2562,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_jump));
            tracep->chgBit(oldp+2563,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_branch));
            tracep->chgBit(oldp+2564,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_tbranch));
            tracep->chgBit(oldp+2565,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_load));
            tracep->chgBit(oldp+2566,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_store));
            tracep->chgBit(oldp+2567,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_insn_id));
            tracep->chgIData(oldp+2568,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_addr_n),32);
            tracep->chgBit(oldp+2569,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_addr_n)));
            tracep->chgBit(oldp+2570,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__exc_cause) 
                                             >> 5U))));
            tracep->chgIData(oldp+2571,((0xfffffffeU 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_addr_n)),32);
            tracep->chgBit(oldp+2572,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q));
            tracep->chgBit(oldp+2573,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            tracep->chgIData(oldp+2574,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr),32);
            tracep->chgIData(oldp+2575,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set)
                                          ? (0xfffffffeU 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_addr_n)
                                          : 0U)),32);
            tracep->chgCData(oldp+2576,((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U))),2);
            tracep->chgCData(oldp+2577,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d),3);
            tracep->chgCData(oldp+2578,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q),3);
            tracep->chgCData(oldp+2579,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__lowest_free_entry),3);
            tracep->chgBit(oldp+2580,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err));
            tracep->chgBit(oldp+2581,(0U));
            tracep->chgQData(oldp+2582,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[0]),34);
            tracep->chgQData(oldp+2584,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i[1]),34);
            tracep->chgBit(oldp+2586,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__illegal_insn));
            tracep->chgBit(oldp+2587,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+2588,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__mret_insn_dec));
            tracep->chgBit(oldp+2589,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__dret_insn_dec));
            tracep->chgBit(oldp+2590,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__ecall_insn_dec));
            tracep->chgBit(oldp+2591,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__wfi_insn_dec));
            tracep->chgBit(oldp+2592,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            tracep->chgBit(oldp+2593,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_in_dec));
            tracep->chgBit(oldp+2594,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_set_raw_d));
            tracep->chgBit(oldp+2595,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__jump_in_dec));
            tracep->chgBit(oldp+2596,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__jump_set_dec));
            tracep->chgBit(oldp+2597,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__jump_set));
            tracep->chgBit(oldp+2598,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__jump_set_raw));
            tracep->chgBit(oldp+2599,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_executing_spec));
            tracep->chgBit(oldp+2600,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_run));
            tracep->chgBit(oldp+2601,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__flush_id));
            tracep->chgIData(oldp+2602,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imm_b),32);
            tracep->chgBit(oldp+2603,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_wdata_sel));
            tracep->chgBit(oldp+2604,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__rf_we));
            tracep->chgBit(oldp+2605,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_we_raw));
            tracep->chgBit(oldp+2606,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_ren_a_dec));
            tracep->chgBit(oldp+2607,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__rf_ren_b_dec));
            tracep->chgCData(oldp+2608,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel),2);
            tracep->chgCData(oldp+2609,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_op_a_mux_sel_dec),2);
            tracep->chgBit(oldp+2610,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_op_b_mux_sel_dec));
            tracep->chgBit(oldp+2611,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imm_a_mux_sel));
            tracep->chgCData(oldp+2612,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imm_b_mux_sel),3);
            tracep->chgCData(oldp+2613,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imm_b_mux_sel_dec),3);
            tracep->chgBit(oldp+2614,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__mult_en_dec));
            tracep->chgBit(oldp+2615,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__div_en_dec));
            tracep->chgBit(oldp+2616,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__multdiv_en_dec));
            tracep->chgBit(oldp+2617,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_req_dec));
            tracep->chgBit(oldp+2618,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_illegal));
            tracep->chgCData(oldp+2619,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__csr_op),2);
            tracep->chgCData(oldp+2620,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode),7);
            tracep->chgCData(oldp+2621,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__decoder_i__DOT__opcode_alu),7);
            tracep->chgCData(oldp+2622,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs),4);
            tracep->chgBit(oldp+2623,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            tracep->chgBit(oldp+2624,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d));
            tracep->chgBit(oldp+2625,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            tracep->chgBit(oldp+2626,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err_prio));
            tracep->chgBit(oldp+2627,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_prio));
            tracep->chgBit(oldp+2628,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn_prio));
            tracep->chgBit(oldp+2629,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn_prio));
            tracep->chgBit(oldp+2630,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__store_err_prio));
            tracep->chgBit(oldp+2631,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__load_err_prio));
            tracep->chgBit(oldp+2632,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d));
            tracep->chgBit(oldp+2633,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            tracep->chgBit(oldp+2634,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ecall_insn));
            tracep->chgBit(oldp+2635,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__mret_insn));
            tracep->chgBit(oldp+2636,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__dret_insn));
            tracep->chgBit(oldp+2637,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__wfi_insn));
            tracep->chgBit(oldp+2638,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ebrk_insn));
            tracep->chgBit(oldp+2639,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__instr_fetch_err));
            tracep->chgQData(oldp+2640,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__ex_block_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+2642,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__ex_block_i__imd_val_d_o[1]),34);
            tracep->chgIData(oldp+2644,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_result),32);
            tracep->chgQData(oldp+2645,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b),33);
            tracep->chgQData(oldp+2647,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext),34);
            tracep->chgBit(oldp+2649,((0U == (IData)(
                                                     (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 1U)))));
            tracep->chgBit(oldp+2650,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_sel));
            tracep->chgQData(oldp+2651,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_imd_val_d[0]),34);
            tracep->chgQData(oldp+2653,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_imd_val_d[1]),34);
            tracep->chgCData(oldp+2655,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_imd_val_we),2);
            tracep->chgIData(oldp+2656,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__operand_a_rev),32);
            tracep->chgQData(oldp+2657,((0x1ffffffffULL 
                                         & (~ ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                               << 1U)))),33);
            tracep->chgBit(oldp+2659,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift1));
            tracep->chgBit(oldp+2660,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift2));
            tracep->chgBit(oldp+2661,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_a_shift3));
            tracep->chgBit(oldp+2662,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate));
            tracep->chgQData(oldp+2663,((0x1ffffffffULL 
                                         & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_sel)
                                             ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_b
                                             : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__adder_op_b_negate)
                                                 ? 
                                                (~ 
                                                 ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                  << 1U))
                                                 : 
                                                ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                                 << 1U))))),33);
            tracep->chgBit(oldp+2665,((1U & ((0x80000000U 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a 
                                                 ^ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b))
                                              ? ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a 
                                                  >> 0x1fU) 
                                                 ^ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed))
                                              : (~ (IData)(
                                                           (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                            >> 0x20U)))))));
            tracep->chgBit(oldp+2666,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__cmp_signed));
            tracep->chgBit(oldp+2667,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_left));
            tracep->chgBit(oldp+2668,((8U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operator))));
            tracep->chgCData(oldp+2669,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_amt),6);
            tracep->chgCData(oldp+2670,((0x3fU & ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)))),6);
            tracep->chgIData(oldp+2671,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_operand),32);
            tracep->chgQData(oldp+2672,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext_signed),33);
            tracep->chgQData(oldp+2674,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_ext),33);
            tracep->chgBit(oldp+2676,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__unused_shift_result_ext));
            tracep->chgIData(oldp+2677,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result),32);
            tracep->chgIData(oldp+2678,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__shift_result_rev),32);
            tracep->chgCData(oldp+2679,(((0x10U & (
                                                   (~ (IData)(
                                                              (0U 
                                                               != 
                                                               (0xfU 
                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b 
                                                                   >> 0x18U))))) 
                                                   << 4U)) 
                                         | (0xfU & 
                                            (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b 
                                             >> 0x18U)))),5);
            tracep->chgCData(oldp+2680,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b 
                                                  >> 0x10U))),5);
            tracep->chgBit(oldp+2681,(((3U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (6U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgBit(oldp+2682,(((4U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operator)) 
                                       | (7U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operator)))));
            tracep->chgIData(oldp+2683,((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a 
                                         | vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+2684,((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+2685,((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_a 
                                         ^ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)),32);
            tracep->chgIData(oldp+2686,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__bwlogic_result),32);
            tracep->chgBit(oldp+2687,((1U & (((IData)(0x20U) 
                                              - (0x1fU 
                                                 & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__alu_operand_b)) 
                                             >> 5U))));
            tracep->chgQData(oldp+2688,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[0]),34);
            tracep->chgQData(oldp+2690,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellout__gen_multdiv_fast__DOT__multdiv_i__imd_val_d_o[1]),34);
            tracep->chgQData(oldp+2692,((0x7ffffffffULL 
                                         & (VL_MULS_QQQ(35,35,35, 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                        (0x7ffffffffULL 
                                                         & VL_EXTENDS_QI(35,17, 
                                                                         (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                           << 0x10U) 
                                                                          | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                            + VL_EXTENDS_QQ(35,34, vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)))),35);
            tracep->chgQData(oldp+2694,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum),34);
            tracep->chgBit(oldp+2696,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a));
            tracep->chgBit(oldp+2697,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b));
            tracep->chgBit(oldp+2698,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_valid));
            tracep->chgBit(oldp+2699,((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__multdiv_signed_mode))));
            tracep->chgQData(oldp+2700,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mac_res_d),34);
            tracep->chgQData(oldp+2702,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_remainder_d),34);
            tracep->chgQData(oldp+2704,((0x3ffffffffULL 
                                         & ((0x7ffffffffULL 
                                             & VL_MULS_QQQ(35,35,35, 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                           (0x7ffffffffULL 
                                                            & VL_EXTENDS_QI(35,17, 
                                                                            (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                              << 0x10U) 
                                                                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b)))))) 
                                            + (0x7ffffffffULL 
                                               & VL_EXTENDS_QQ(35,34, vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum))))),34);
            tracep->chgBit(oldp+2706,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_a));
            tracep->chgBit(oldp+2707,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_sign_b));
            tracep->chgBit(oldp+2708,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__is_greater_equal));
            tracep->chgIData(oldp+2709,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_denominator_d),32);
            tracep->chgIData(oldp+2710,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d),32);
            tracep->chgIData(oldp+2711,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d),32);
            tracep->chgIData(oldp+2712,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_remainder),32);
            tracep->chgQData(oldp+2713,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__next_quotient),33);
            tracep->chgCData(oldp+2715,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d),5);
            tracep->chgBit(oldp+2716,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) 
                                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal))));
            tracep->chgBit(oldp+2717,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_hold));
            tracep->chgBit(oldp+2718,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d));
            tracep->chgBit(oldp+2719,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal));
            tracep->chgBit(oldp+2720,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal));
            tracep->chgCData(oldp+2721,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d),3);
            tracep->chgBit(oldp+2722,((1U & (IData)(
                                                    (1ULL 
                                                     & ((VL_MULS_QQQ(35,35,35, 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_a) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a)))), 
                                                                     (0x7ffffffffULL 
                                                                      & VL_EXTENDS_QI(35,17, 
                                                                                (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__sign_b) 
                                                                                << 0x10U) 
                                                                                | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b))))) 
                                                         + 
                                                         VL_EXTENDS_QQ(35,34, vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__accum)) 
                                                        >> 0x22U))))));
            tracep->chgCData(oldp+2723,(((2U & ((IData)(
                                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                         >> 0x21U)) 
                                                << 1U)) 
                                         | (1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext)))),2);
            tracep->chgSData(oldp+2724,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_a),16);
            tracep->chgSData(oldp+2725,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_op_b),16);
            tracep->chgCData(oldp+2726,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d),2);
            tracep->chgCData(oldp+2727,((3U & (IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 1U)))),2);
            tracep->chgBit(oldp+2728,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__split_misaligned_access));
            tracep->chgIData(oldp+2729,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__exception_pc),32);
            tracep->chgCData(oldp+2730,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_d),2);
            tracep->chgBit(oldp+2731,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2732,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2733,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_d 
                                             >> 0xfU))));
            tracep->chgSData(oldp+2734,((0x7fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_d)),15);
            tracep->chgIData(oldp+2735,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mepc_d),32);
            tracep->chgIData(oldp+2736,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mtval_d),32);
            tracep->chgIData(oldp+2737,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_mtvec_init)
                                          ? 0x101U : 
                                         (1U | (0xffffff00U 
                                                & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int)))),32);
            tracep->chgIData(oldp+2738,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__depc_d),32);
            tracep->chgBit(oldp+2739,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstack_en));
            tracep->chgCData(oldp+2740,((0x1fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_addr))),5);
            tracep->chgBit(oldp+2741,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 7U))));
            tracep->chgBit(oldp+2742,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 6U))));
            tracep->chgCData(oldp+2743,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2744,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgBit(oldp+2745,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+2746,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgBit(oldp+2747,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                                             >> 7U))));
            tracep->chgBit(oldp+2748,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                                             >> 6U))));
            tracep->chgCData(oldp+2749,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2750,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                                             >> 2U))));
            tracep->chgBit(oldp+2751,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_wdata) 
                                             >> 1U))));
            tracep->chgBit(oldp+2752,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_wdata))));
            tracep->chgIData(oldp+2753,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int),32);
            tracep->chgBit(oldp+2754,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wr));
            tracep->chgBit(oldp+2755,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__illegal_csr));
            tracep->chgBit(oldp+2756,(((3U == (3U & 
                                               ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_addr) 
                                                >> 0xaU))) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wr))));
            tracep->chgCData(oldp+2757,((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_addr) 
                                               >> 5U))),3);
            tracep->chgBit(oldp+2758,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 1U))));
            tracep->chgBit(oldp+2759,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                             >> 2U))));
            tracep->chgCData(oldp+2760,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int 
                                               >> 3U))),3);
            tracep->chgBit(oldp+2761,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
            tracep->chgIData(oldp+2762,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_d),18);
            tracep->chgBit(oldp+2763,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_req_valid));
            tracep->chgBit(oldp+2764,((2U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))));
            tracep->chgIData(oldp+2765,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_resp 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+2766,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_resp))),2);
            tracep->chgBit(oldp+2767,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_resp_ready));
            tracep->chgBit(oldp+2768,((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))));
            tracep->chgBit(oldp+2769,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
            tracep->chgBit(oldp+2770,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
            tracep->chgIData(oldp+2771,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+2772,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q))),2);
            tracep->chgBit(oldp+2773,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__clear_resumeack));
            tracep->chgBit(oldp+2774,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sbaddress_write_valid));
            tracep->chgBit(oldp+2775,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sbdata_read_valid));
            tracep->chgBit(oldp+2776,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sbdata_write_valid));
            tracep->chgBit(oldp+2777,((2U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))));
            tracep->chgBit(oldp+2778,((0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))));
            tracep->chgBit(oldp+2779,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_push));
            tracep->chgBit(oldp+2780,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_pop));
            tracep->chgIData(oldp+2781,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__resp_queue_data),32);
            tracep->chgSData(oldp+2782,((0x1ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                                   >> 0x17U))),9);
            tracep->chgBit(oldp+2783,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x16U))));
            tracep->chgCData(oldp+2784,((3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                               >> 0x14U))),2);
            tracep->chgBit(oldp+2785,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x13U))));
            tracep->chgBit(oldp+2786,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x12U))));
            tracep->chgBit(oldp+2787,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2788,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2789,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xfU))));
            tracep->chgBit(oldp+2790,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xeU))));
            tracep->chgBit(oldp+2791,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xdU))));
            tracep->chgBit(oldp+2792,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2793,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xbU))));
            tracep->chgBit(oldp+2794,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 0xaU))));
            tracep->chgBit(oldp+2795,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 9U))));
            tracep->chgBit(oldp+2796,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 8U))));
            tracep->chgBit(oldp+2797,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 7U))));
            tracep->chgBit(oldp+2798,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 6U))));
            tracep->chgBit(oldp+2799,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 5U))));
            tracep->chgBit(oldp+2800,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus 
                                             >> 4U))));
            tracep->chgCData(oldp+2801,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmstatus)),4);
            tracep->chgBit(oldp+2802,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1fU))));
            tracep->chgBit(oldp+2803,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1eU))));
            tracep->chgBit(oldp+2804,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1dU))));
            tracep->chgBit(oldp+2805,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1cU))));
            tracep->chgBit(oldp+2806,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1bU))));
            tracep->chgBit(oldp+2807,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 0x1aU))));
            tracep->chgSData(oldp+2808,((0x3ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 0x10U))),10);
            tracep->chgSData(oldp+2809,((0x3ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                                   >> 6U))),10);
            tracep->chgCData(oldp+2810,((3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                               >> 4U))),2);
            tracep->chgBit(oldp+2811,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 3U))));
            tracep->chgBit(oldp+2812,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 2U))));
            tracep->chgBit(oldp+2813,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d 
                                             >> 1U))));
            tracep->chgBit(oldp+2814,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d)));
            tracep->chgCData(oldp+2815,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+2816,((0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                  >> 0x18U))),5);
            tracep->chgSData(oldp+2817,((0x7ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                   >> 0xdU))),11);
            tracep->chgBit(oldp+2818,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xcU))));
            tracep->chgBit(oldp+2819,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                             >> 0xbU))));
            tracep->chgCData(oldp+2820,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                               >> 8U))),3);
            tracep->chgCData(oldp+2821,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs 
                                                 >> 4U))),4);
            tracep->chgCData(oldp+2822,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractcs)),4);
            tracep->chgCData(oldp+2823,((0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d 
                                                  >> 0x18U))),8);
            tracep->chgIData(oldp+2824,((0xffffffU 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d)),24);
            tracep->chgBit(oldp+2825,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d));
            tracep->chgSData(oldp+2826,((0xffffU & 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                          >> 0x10U))),16);
            tracep->chgCData(oldp+2827,((0xfU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d 
                                                 >> 0xcU))),4);
            tracep->chgSData(oldp+2828,((0xfffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d)),12);
            tracep->chgCData(oldp+2829,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+2830,((0x3fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+2831,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2832,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2833,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x14U))));
            tracep->chgCData(oldp+2834,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+2835,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2836,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 0xfU))));
            tracep->chgCData(oldp+2837,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+2838,((0x7fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+2839,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 4U))));
            tracep->chgBit(oldp+2840,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 3U))));
            tracep->chgBit(oldp+2841,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 2U))));
            tracep->chgBit(oldp+2842,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d 
                                             >> 1U))));
            tracep->chgBit(oldp+2843,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d)));
            tracep->chgBit(oldp+2844,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned))));
            tracep->chgIData(oldp+2845,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U]),32);
            tracep->chgIData(oldp+2846,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U]),32);
            tracep->chgIData(oldp+2847,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U]),32);
            tracep->chgIData(oldp+2848,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U]),32);
            tracep->chgIData(oldp+2849,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U]),32);
            tracep->chgIData(oldp+2850,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U]),32);
            tracep->chgIData(oldp+2851,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U]),32);
            tracep->chgIData(oldp+2852,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U]),32);
            tracep->chgCData(oldp+2853,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned),2);
            tracep->chgCData(oldp+2854,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x1dU))),3);
            tracep->chgCData(oldp+2855,((0x3fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 0x17U))),6);
            tracep->chgBit(oldp+2856,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x16U))));
            tracep->chgBit(oldp+2857,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x15U))));
            tracep->chgBit(oldp+2858,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x14U))));
            tracep->chgCData(oldp+2859,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0x11U))),3);
            tracep->chgBit(oldp+2860,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2861,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 0xfU))));
            tracep->chgCData(oldp+2862,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+2863,((0x7fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                                  >> 5U))),7);
            tracep->chgBit(oldp+2864,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 4U))));
            tracep->chgBit(oldp+2865,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 3U))));
            tracep->chgBit(oldp+2866,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 2U))));
            tracep->chgBit(oldp+2867,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs 
                                             >> 1U))));
            tracep->chgBit(oldp+2868,((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs)));
            tracep->chgBit(oldp+2869,((1U <= (1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))));
            tracep->chgBit(oldp+2870,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q))));
            tracep->chgBit(oldp+2871,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock));
            tracep->chgBit(oldp+2872,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n));
            tracep->chgBit(oldp+2873,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n));
            tracep->chgCData(oldp+2874,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_n),2);
            tracep->chgCData(oldp+2875,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q),2);
            tracep->chgIData(oldp+2876,((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n)),32);
            tracep->chgIData(oldp+2877,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n 
                                                 >> 0x20U))),32);
            tracep->chgQData(oldp+2878,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_mux),64);
            tracep->chgCData(oldp+2880,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_depth),6);
            tracep->chgCData(oldp+2881,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth),6);
            tracep->chgCData(oldp+2882,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_data),8);
            tracep->chgBit(oldp+2883,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid));
            tracep->chgBit(oldp+2884,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_wready));
            tracep->chgBit(oldp+2885,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_rvalid));
            tracep->chgBit(oldp+2886,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wready));
            tracep->chgBit(oldp+2887,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+2888,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),6);
            tracep->chgBit(oldp+2889,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+2890,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 5U))));
            tracep->chgCData(oldp+2891,((0x1fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),5);
            tracep->chgBit(oldp+2892,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__full));
            tracep->chgCData(oldp+2893,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr),6);
            tracep->chgBit(oldp+2894,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty));
            tracep->chgBit(oldp+2895,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                             >> 5U))));
            tracep->chgCData(oldp+2896,((0x1fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))),5);
        }
        if (VL_UNLIKELY(vlTOPp->__Vm_traceActivity[7U])) {
            tracep->chgBit(oldp+2897,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_access));
            tracep->chgBit(oldp+2898,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dtmcs_select));
            tracep->chgBit(oldp+2899,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2900,((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q))));
            tracep->chgQData(oldp+2901,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q),41);
            tracep->chgCData(oldp+2903,((0x7fU & (IData)(
                                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q 
                                                          >> 0x22U)))),7);
            tracep->chgIData(oldp+2904,((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q 
                                                 >> 2U))),32);
            tracep->chgCData(oldp+2905,((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q))),2);
            tracep->chgCData(oldp+2906,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q),5);
            tracep->chgCData(oldp+2907,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q),5);
            tracep->chgIData(oldp+2908,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q),32);
            tracep->chgBit(oldp+2909,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_select));
            tracep->chgBit(oldp+2910,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_select));
            tracep->chgSData(oldp+2911,((0x3fffU & 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                          >> 0x12U))),14);
            tracep->chgBit(oldp+2912,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0x11U))));
            tracep->chgBit(oldp+2913,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0x10U))));
            tracep->chgBit(oldp+2914,((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                             >> 0xfU))));
            tracep->chgCData(oldp+2915,((7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 0xcU))),3);
            tracep->chgCData(oldp+2916,((3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                               >> 0xaU))),2);
            tracep->chgCData(oldp+2917,((0x3fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q 
                                                  >> 4U))),6);
            tracep->chgCData(oldp+2918,((0xfU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q)),4);
            tracep->chgBit(oldp+2919,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_q));
        }
        tracep->chgBit(oldp+2920,(vlTOPp->clk_i));
        tracep->chgBit(oldp+2921,(vlTOPp->rst_ni));
        tracep->chgBit(oldp+2922,(vlTOPp->jtag_tck_i));
        tracep->chgBit(oldp+2923,(vlTOPp->jtag_tms_i));
        tracep->chgBit(oldp+2924,(vlTOPp->jtag_trst_ni));
        tracep->chgBit(oldp+2925,(vlTOPp->jtag_tdi_i));
        tracep->chgBit(oldp+2926,(vlTOPp->jtag_tdo_o));
        tracep->chgBit(oldp+2927,(vlTOPp->fetch_enable_i));
        tracep->chgIData(oldp+2928,(vlTOPp->exit_value_o),32);
        tracep->chgBit(oldp+2929,(vlTOPp->exit_valid_o));
        tracep->chgCData(oldp+2930,(vlTOPp->fetch_enable_i),4);
        tracep->chgBit(oldp+2931,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_req_int) 
                                   & (IData)(vlTOPp->fetch_enable_i))));
        tracep->chgBit(oldp+2932,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__perf_instr_ret_wb) 
                                   & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_is_compressed_id))));
        tracep->chgBit(oldp+2933,((1U & VL_REDXOR_32(
                                                     (7U 
                                                      & ((IData)(vlTOPp->fetch_enable_i) 
                                                         >> 1U))))));
        tracep->chgBit(oldp+2934,((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                   [0U] | (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             >> 1U) 
                                            & (3U == 
                                               (3U 
                                                & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata))) 
                                           & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                           [1U]))));
        tracep->chgBit(oldp+2935,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_err) 
                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                      [0U] | (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                                >> 1U) 
                                               & (3U 
                                                  == 
                                                  (3U 
                                                   & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata))) 
                                              & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                              [1U])))));
        tracep->chgBit(oldp+2936,((1U & (((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                             >> 1U) 
                                            & (3U == 
                                               (3U 
                                                & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata))) 
                                           & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                           [1U]) | 
                                          (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                           & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                               >> 1U) 
                                              & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                                  >> 1U) 
                                                 & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))) 
                                         & (~ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                            [0U])))));
        tracep->chgIData(oldp+2937,((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set)
                                       ? (0xfffffffeU 
                                          & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_addr_n)
                                       : (0xfffffffcU 
                                          & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q)) 
                                     + (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                                         & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                                        << 2U))),32);
        tracep->chgIData(oldp+2938,(((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                      ? ((0xffff0000U 
                                          & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U)))
                                      : ((0xffff0000U 
                                          & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[0U] 
                                             << 0x10U)) 
                                         | (0xffffU 
                                            & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata 
                                               >> 0x10U))))),32);
        tracep->chgBit(oldp+2939,((1U & ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q))
                                          ? ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__unaligned_is_compressed))) 
                                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))
                                          : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                             & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q))))));
        tracep->chgIData(oldp+2940,((0x7fffffffU & 
                                     (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                      + ((2U & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                                << 1U)) 
                                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two))))),31);
        tracep->chgIData(oldp+2941,((0x7fffffffU & 
                                     ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set)
                                       ? (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set)
                                            ? (0xfffffffeU 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_addr_n)
                                            : 0U) >> 1U)
                                       : (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                          + ((2U & 
                                              ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)) 
                                               << 1U)) 
                                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__addr_incr_two)))))),31);
        tracep->chgBit(oldp+2942,(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__tdo_oe_o));
        tracep->chgBit(oldp+2943,((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                          ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                          : ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                              ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                              : ((0x10U 
                                                  == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                                                  : 
                                                 ((0x11U 
                                                   == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                   ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q)
                                                   : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_q))))))));
        tracep->chgBit(oldp+2944,((1U & (~ (IData)(vlTOPp->jtag_tck_i)))));
        tracep->chgIData(oldp+2945,(((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                             >> 0xbU) 
                                            & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                                  >> 0xaU))))
                                      ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                                     [(0x1fffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                                   << 0x18U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                     >> 8U)))]
                                      : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                                     [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__r_addr_q])),32);
        tracep->chgIData(oldp+2946,(((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                             >> 0x11U) 
                                            & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                  >> 0x10U))))
                                      ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                                     [(0x1fffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                   << 0x12U) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                     >> 0xeU)))]
                                      : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                                     [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__r_addr_q])),32);
        tracep->chgCData(oldp+2947,(((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_empty)
                                      ? 0U : (0xffU 
                                              & (((0U 
                                                   == 
                                                   (0x18U 
                                                    & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                       << 3U)))
                                                   ? 0U
                                                   : 
                                                  (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                    (7U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U))] 
                                                    >> 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))))),8);
        tracep->chgCData(oldp+2948,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (7U 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U))] 
                                                 >> 
                                                 (0x18U 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 3U)))))),8);
        tracep->chgCData(oldp+2949,((0xffU & (((0U 
                                                == 
                                                (0x18U 
                                                 & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                    << 3U)))
                                                ? 0U
                                                : (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                   ((IData)(1U) 
                                                    + 
                                                    (7U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        >> 2U)))] 
                                                   << 
                                                   ((IData)(0x20U) 
                                                    - 
                                                    (0x18U 
                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                        << 3U))))) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage[
                                                 (7U 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     >> 2U))] 
                                                 >> 
                                                 (0x18U 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                     << 3U)))))),8);
    }
}

void Vtestharness::traceCleanup(void* userp, VerilatedFst* /*unused*/) {
    Vtestharness__Syms* __restrict vlSymsp = static_cast<Vtestharness__Syms*>(userp);
    Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    {
        vlSymsp->__Vm_activity = false;
        vlTOPp->__Vm_traceActivity[0U] = 0U;
        vlTOPp->__Vm_traceActivity[1U] = 0U;
        vlTOPp->__Vm_traceActivity[2U] = 0U;
        vlTOPp->__Vm_traceActivity[3U] = 0U;
        vlTOPp->__Vm_traceActivity[4U] = 0U;
        vlTOPp->__Vm_traceActivity[5U] = 0U;
        vlTOPp->__Vm_traceActivity[6U] = 0U;
        vlTOPp->__Vm_traceActivity[7U] = 0U;
    }
}
