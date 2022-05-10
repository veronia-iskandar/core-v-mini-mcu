// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtestharness.h for the primary calling header

#include "Vtestharness.h"
#include "Vtestharness__Syms.h"

#include "verilated_dpi.h"

//==========

VerilatedContext* Vtestharness::contextp() {
    return __VlSymsp->_vm_contextp__;
}

void Vtestharness::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtestharness::eval\n"); );
    Vtestharness__Syms* __restrict vlSymsp = this->__VlSymsp;  // Setup global symbol table
    Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
#ifdef VL_DEBUG
    // Debug assertions
    _eval_debug_assertions();
#endif  // VL_DEBUG
    // Initialize
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) _eval_initial_loop(vlSymsp);
    // Evaluate till stable
    int __VclockLoop = 0;
    QData __Vchange = 1;
    do {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Clock loop\n"););
        vlSymsp->__Vm_activity = true;
        _eval(vlSymsp);
        if (VL_UNLIKELY(++__VclockLoop > 100)) {
            // About to fail, so enable debug to see what's not settling.
            // Note you must run make with OPT=-DVL_DEBUG for debug prints.
            int __Vsaved_debug = Verilated::debug();
            Verilated::debug(1);
            __Vchange = _change_request(vlSymsp);
            Verilated::debug(__Vsaved_debug);
            VL_FATAL_MT("../../../tb/testharness.sv", 5, "",
                "Verilated model didn't converge\n"
                "- See https://verilator.org/warn/DIDNOTCONVERGE");
            } else {
                __Vchange = _change_request(vlSymsp);
            }
        } while (VL_UNLIKELY(__Vchange));
    }
    
    void Vtestharness::_eval_initial_loop(Vtestharness__Syms* __restrict vlSymsp) {
        vlSymsp->__Vm_didInit = true;
        _eval_initial(vlSymsp);
        vlSymsp->__Vm_activity = true;
        // Evaluate till stable
        int __VclockLoop = 0;
        QData __Vchange = 1;
        do {
            _eval_settle(vlSymsp);
            _eval(vlSymsp);
            if (VL_UNLIKELY(++__VclockLoop > 100)) {
                // About to fail, so enable debug to see what's not settling.
                // Note you must run make with OPT=-DVL_DEBUG for debug prints.
                int __Vsaved_debug = Verilated::debug();
                Verilated::debug(1);
                __Vchange = _change_request(vlSymsp);
                Verilated::debug(__Vsaved_debug);
                VL_FATAL_MT("../../../tb/testharness.sv", 5, "",
                    "Verilated model didn't DC converge\n"
                    "- See https://verilator.org/warn/DIDNOTCONVERGE");
                } else {
                    __Vchange = _change_request(vlSymsp);
                }
            } while (VL_UNLIKELY(__Vchange));
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__tb_getMemSize_TOP(Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ (&mem_size)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__tb_getMemSize_TOP\n"); );
            // Variables
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            mem_size = 0x10000U;
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__tb_readHEX_TOP(Vtestharness__Syms* __restrict vlSymsp, std::string file, VlUnpacked<CData/*7:0*/, 65536> (&stimuli)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__tb_readHEX_TOP\n"); );
            // Variables
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NN(file)
                         ,  &(stimuli), 0, ~0ULL);
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__tb_loadHEX_TOP(Vtestharness__Syms* __restrict vlSymsp, std::string file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__tb_loadHEX_TOP\n"); );
            // Variables
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__2__val3;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__2__val2;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__2__val1;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__2__val0;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__3__val3;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__3__val2;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__3__val1;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__3__val0;
            IData/*31:0*/ __Vtask_testharness__DOT__tb_writetoSram0__2__addr;
            IData/*31:0*/ __Vtask_testharness__DOT__tb_writetoSram1__3__addr;
            IData/*31:0*/ __Vilp;
            std::string __Vtask_testharness__DOT__tb_readHEX__0__file;
            VlUnpacked<CData/*7:0*/, 65536> __Vtask_testharness__DOT__tb_readHEX__0__stimuli;
            IData/*31:0*/ i;
            IData/*31:0*/ j;
            IData/*31:0*/ NumBytes;
            VlUnpacked<CData/*7:0*/, 65536> stimuli;
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            __Vtask_testharness__DOT__tb_readHEX__0__file 
                = file;
            VL_READMEM_N(true, 8, 65536, 0, VL_CVT_PACK_STR_NN(__Vtask_testharness__DOT__tb_readHEX__0__file)
                         ,  &(__Vtask_testharness__DOT__tb_readHEX__0__stimuli)
                         , 0, ~0ULL);
            __Vilp = 0U;
            while ((__Vilp <= 0xffffU)) {
                stimuli[__Vilp] = __Vtask_testharness__DOT__tb_readHEX__0__stimuli
                    [__Vilp];
                __Vilp = ((IData)(1U) + __Vilp);
            }
            NumBytes = 0x10000U;
            i = 0U;
            while (VL_LTS_III(1,32,32, i, VL_DIVS_III(32, NumBytes, (IData)(2U)))) {
                __Vtask_testharness__DOT__tb_writetoSram0__2__val0 
                    = stimuli[(0xffffU & i)];
                __Vtask_testharness__DOT__tb_writetoSram0__2__val1 
                    = stimuli[(0xffffU & ((IData)(1U) 
                                          + i))];
                __Vtask_testharness__DOT__tb_writetoSram0__2__val2 
                    = stimuli[(0xffffU & ((IData)(2U) 
                                          + i))];
                __Vtask_testharness__DOT__tb_writetoSram0__2__val3 
                    = stimuli[(0xffffU & ((IData)(3U) 
                                          + i))];
                __Vtask_testharness__DOT__tb_writetoSram0__2__addr 
                    = VL_DIVS_III(32, i, (IData)(4U));
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [(0x1fffU & __Vtask_testharness__DOT__tb_writetoSram0__2__addr)] 
                    = (((IData)(__Vtask_testharness__DOT__tb_writetoSram0__2__val3) 
                        << 0x18U) | (((IData)(__Vtask_testharness__DOT__tb_writetoSram0__2__val2) 
                                      << 0x10U) | (
                                                   ((IData)(__Vtask_testharness__DOT__tb_writetoSram0__2__val1) 
                                                    << 8U) 
                                                   | (IData)(__Vtask_testharness__DOT__tb_writetoSram0__2__val0))));
                i = ((IData)(4U) + i);
            }
            j = 0U;
            while (VL_LTS_III(1,32,32, j, VL_DIVS_III(32, NumBytes, (IData)(2U)))) {
                __Vtask_testharness__DOT__tb_writetoSram1__3__val0 
                    = stimuli[(0xffffU & i)];
                __Vtask_testharness__DOT__tb_writetoSram1__3__val1 
                    = stimuli[(0xffffU & ((IData)(1U) 
                                          + i))];
                __Vtask_testharness__DOT__tb_writetoSram1__3__val2 
                    = stimuli[(0xffffU & ((IData)(2U) 
                                          + i))];
                __Vtask_testharness__DOT__tb_writetoSram1__3__val3 
                    = stimuli[(0xffffU & ((IData)(3U) 
                                          + i))];
                __Vtask_testharness__DOT__tb_writetoSram1__3__addr 
                    = VL_DIVS_III(32, j, (IData)(4U));
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [(0x1fffU & __Vtask_testharness__DOT__tb_writetoSram1__3__addr)] 
                    = (((IData)(__Vtask_testharness__DOT__tb_writetoSram1__3__val3) 
                        << 0x18U) | (((IData)(__Vtask_testharness__DOT__tb_writetoSram1__3__val2) 
                                      << 0x10U) | (
                                                   ((IData)(__Vtask_testharness__DOT__tb_writetoSram1__3__val1) 
                                                    << 8U) 
                                                   | (IData)(__Vtask_testharness__DOT__tb_writetoSram1__3__val0))));
                i = ((IData)(4U) + i);
                j = ((IData)(4U) + j);
            }
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram_TOP(Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ addr, IData/*31:0*/ val, IData/*31:0*/ (&retval)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram_TOP\n"); );
            // Variables
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__5__val3;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__5__val2;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__5__val1;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram0__5__val0;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__6__val3;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__6__val2;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__6__val1;
            CData/*7:0*/ __Vtask_testharness__DOT__tb_writetoSram1__6__val0;
            IData/*31:0*/ __Vtask_testharness__DOT__tb_writetoSram0__5__addr;
            IData/*31:0*/ __Vtask_testharness__DOT__tb_writetoSram1__6__addr;
            IData/*31:0*/ mem_size;
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            mem_size = 0x10000U;
            if (VL_UNLIKELY((0U != (3U & addr)))) {
                VL_WRITEF("[%0t] %%Error: tb_util.svh:53: Assertion failed in %Ntestharness: Only word-aligned memory access are supported\n",
                          64,VL_TIME_UNITED_Q(1),vlSymsp->name());
                retval = 1U;
                VL_STOP_MT("../../../tb/tb_util.svh", 53, "");
            } else {
                if (VL_LTS_III(1,32,32, addr, VL_DIVS_III(32, mem_size, (IData)(2U)))) {
                    __Vtask_testharness__DOT__tb_writetoSram0__5__val0 
                        = (0xffU & val);
                    __Vtask_testharness__DOT__tb_writetoSram0__5__val1 
                        = (0xffU & (val >> 8U));
                    retval = 0U;
                    __Vtask_testharness__DOT__tb_writetoSram0__5__val2 
                        = (0xffU & (val >> 0x10U));
                    __Vtask_testharness__DOT__tb_writetoSram0__5__val3 
                        = (0xffU & (val >> 0x18U));
                    __Vtask_testharness__DOT__tb_writetoSram0__5__addr 
                        = addr;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [(0x1fffU & __Vtask_testharness__DOT__tb_writetoSram0__5__addr)] 
                        = (((IData)(__Vtask_testharness__DOT__tb_writetoSram0__5__val3) 
                            << 0x18U) | (((IData)(__Vtask_testharness__DOT__tb_writetoSram0__5__val2) 
                                          << 0x10U) 
                                         | (((IData)(__Vtask_testharness__DOT__tb_writetoSram0__5__val1) 
                                             << 8U) 
                                            | (IData)(__Vtask_testharness__DOT__tb_writetoSram0__5__val0))));
                } else {
                    if (VL_LIKELY(VL_LTS_III(1,32,32, addr, mem_size))) {
                        __Vtask_testharness__DOT__tb_writetoSram1__6__val0 
                            = (0xffU & val);
                        __Vtask_testharness__DOT__tb_writetoSram1__6__val1 
                            = (0xffU & (val >> 8U));
                        retval = 0U;
                        __Vtask_testharness__DOT__tb_writetoSram1__6__val2 
                            = (0xffU & (val >> 0x10U));
                        __Vtask_testharness__DOT__tb_writetoSram1__6__val3 
                            = (0xffU & (val >> 0x18U));
                        __Vtask_testharness__DOT__tb_writetoSram1__6__addr 
                            = addr;
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [(0x1fffU & __Vtask_testharness__DOT__tb_writetoSram1__6__addr)] 
                            = (((IData)(__Vtask_testharness__DOT__tb_writetoSram1__6__val3) 
                                << 0x18U) | (((IData)(__Vtask_testharness__DOT__tb_writetoSram1__6__val2) 
                                              << 0x10U) 
                                             | (((IData)(__Vtask_testharness__DOT__tb_writetoSram1__6__val1) 
                                                 << 8U) 
                                                | (IData)(__Vtask_testharness__DOT__tb_writetoSram1__6__val0))));
                    } else {
                        retval = 1U;
                        VL_WRITEF("[%0t] %%Error: tb_util.svh:63: Assertion failed in %Ntestharness: Out Of Memory\n",
                                  64,VL_TIME_UNITED_Q(1),
                                  vlSymsp->name());
                        VL_STOP_MT("../../../tb/tb_util.svh", 63, "");
                    }
                }
            }
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram0_TOP(Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ addr, CData/*7:0*/ val3, CData/*7:0*/ val2, CData/*7:0*/ val1, CData/*7:0*/ val0) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram0_TOP\n"); );
            // Variables
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [(0x1fffU & addr)] = (((IData)(val3) 
                                                   << 0x18U) 
                                                  | (((IData)(val2) 
                                                      << 0x10U) 
                                                     | (((IData)(val1) 
                                                         << 8U) 
                                                        | (IData)(val0))));
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram1_TOP(Vtestharness__Syms* __restrict vlSymsp, IData/*31:0*/ addr, CData/*7:0*/ val3, CData/*7:0*/ val2, CData/*7:0*/ val1, CData/*7:0*/ val0) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__tb_writetoSram1_TOP\n"); );
            // Variables
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [(0x1fffU & addr)] = (((IData)(val3) 
                                                   << 0x18U) 
                                                  | (((IData)(val2) 
                                                      << 0x10U) 
                                                     | (((IData)(val1) 
                                                         << 8U) 
                                                        | (IData)(val0))));
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP(Vtestharness__Syms* __restrict vlSymsp, VlWide<4>/*127:0*/ (&val), IData/*31:0*/ (&simutil_get_scramble_key__Vfuncrtn)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_key_TOP\n"); );
            // Variables
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            simutil_get_scramble_key__Vfuncrtn = 0U;
        }
        
        void Vtestharness::__Vdpiexp_testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP(Vtestharness__Syms* __restrict vlSymsp, VlWide<10>/*319:0*/ (&nonce), IData/*31:0*/ (&simutil_get_scramble_nonce__Vfuncrtn)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiexp_testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__simutil_get_scramble_nonce_TOP\n"); );
            // Variables
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            simutil_get_scramble_nonce__Vfuncrtn = 0U;
        }
        
        VL_INLINE_OPT void Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_create_TOP(std::string name, std::string log_file_path, QData/*63:0*/ (&uartdpi_create__Vfuncrtn)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_create_TOP\n"); );
            // Body
            const char* name__Vcvt;
            for (size_t name__Vidx = 0; name__Vidx < 1; ++name__Vidx) name__Vcvt = name.c_str();
            const char* log_file_path__Vcvt;
            for (size_t log_file_path__Vidx = 0; log_file_path__Vidx < 1; ++log_file_path__Vidx) log_file_path__Vcvt = log_file_path.c_str();
            void* uartdpi_create__Vfuncrtn__Vcvt;
            uartdpi_create__Vfuncrtn__Vcvt = uartdpi_create(name__Vcvt, log_file_path__Vcvt);
            uartdpi_create__Vfuncrtn = VL_CVT_VP_Q(uartdpi_create__Vfuncrtn__Vcvt);
        }
        
        VL_INLINE_OPT void Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_close_TOP(QData/*63:0*/ ctx) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_close_TOP\n"); );
            // Body
            void* ctx__Vcvt;
            for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
            uartdpi_close(ctx__Vcvt);
        }
        
        VL_INLINE_OPT void Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_read_TOP(QData/*63:0*/ ctx, CData/*7:0*/ (&uartdpi_read__Vfuncrtn)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_read_TOP\n"); );
            // Body
            void* ctx__Vcvt;
            for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
            char uartdpi_read__Vfuncrtn__Vcvt;
            uartdpi_read__Vfuncrtn__Vcvt = uartdpi_read(ctx__Vcvt);
            uartdpi_read__Vfuncrtn = (0xffU & uartdpi_read__Vfuncrtn__Vcvt);
        }
        
        VL_INLINE_OPT void Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_can_read_TOP(QData/*63:0*/ ctx, IData/*31:0*/ (&uartdpi_can_read__Vfuncrtn)) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_can_read_TOP\n"); );
            // Body
            void* ctx__Vcvt;
            for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
            int uartdpi_can_read__Vfuncrtn__Vcvt;
            uartdpi_can_read__Vfuncrtn__Vcvt = uartdpi_can_read(ctx__Vcvt);
            uartdpi_can_read__Vfuncrtn = uartdpi_can_read__Vfuncrtn__Vcvt;
        }
        
        VL_INLINE_OPT void Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_write_TOP(QData/*63:0*/ ctx, IData/*31:0*/ data) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_write_TOP\n"); );
            // Body
            void* ctx__Vcvt;
            for (size_t ctx__Vidx = 0; ctx__Vidx < 1; ++ctx__Vidx) ctx__Vcvt = VL_CVT_Q_VP(ctx);
            int data__Vcvt;
            for (size_t data__Vidx = 0; data__Vidx < 1; ++data__Vidx) data__Vcvt = data;
            uartdpi_write(ctx__Vcvt, data__Vcvt);
        }
        
        void Vtestharness::tb_getMemSize(int* mem_size) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::tb_getMemSize\n"); );
            // Variables
            IData/*31:0*/ mem_size__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_getMemSize");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_tb_getMemSize_t __Vcb = (Vtestharness__Vcb_tb_getMemSize_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), mem_size__Vcvt);
            for (size_t mem_size__Vidx = 0; mem_size__Vidx < 1; ++mem_size__Vidx) *mem_size = mem_size__Vcvt;
        }
        
        void Vtestharness::tb_readHEX(const char* file, svLogicVecVal* stimuli) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::tb_readHEX\n"); );
            // Variables
            static VL_THREAD_LOCAL std::string file__Vcvt;
            VlUnpacked<CData/*7:0*/, 65536> stimuli__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_readHEX");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_tb_readHEX_t __Vcb = (Vtestharness__Vcb_tb_readHEX_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            file__Vcvt = file;
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), file__Vcvt, stimuli__Vcvt);
            for (size_t stimuli__Vidx = 0; stimuli__Vidx < 65536; ++stimuli__Vidx) VL_SET_SVLV_I(8, stimuli + 1 * stimuli__Vidx, (&stimuli__Vcvt[0])[stimuli__Vidx]);
        }
        
        void Vtestharness::tb_loadHEX(const char* file) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::tb_loadHEX\n"); );
            // Variables
            static VL_THREAD_LOCAL std::string file__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_loadHEX");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_tb_loadHEX_t __Vcb = (Vtestharness__Vcb_tb_loadHEX_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            file__Vcvt = file;
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), file__Vcvt);
        }
        
        void Vtestharness::tb_writetoSram0(const svLogicVecVal* addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::tb_writetoSram0\n"); );
            // Variables
            CData/*7:0*/ val3__Vcvt;
            CData/*7:0*/ val2__Vcvt;
            CData/*7:0*/ val1__Vcvt;
            CData/*7:0*/ val0__Vcvt;
            IData/*31:0*/ addr__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram0");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_tb_writetoSram0_t __Vcb = (Vtestharness__Vcb_tb_writetoSram0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            addr__Vcvt = VL_SET_I_SVLV(addr);
            val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
            val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
            val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
            val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
        }
        
        void Vtestharness::tb_writetoSram1(const svLogicVecVal* addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::tb_writetoSram1\n"); );
            // Variables
            CData/*7:0*/ val3__Vcvt;
            CData/*7:0*/ val2__Vcvt;
            CData/*7:0*/ val1__Vcvt;
            CData/*7:0*/ val0__Vcvt;
            IData/*31:0*/ addr__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram1");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_tb_writetoSram1_t __Vcb = (Vtestharness__Vcb_tb_writetoSram1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            addr__Vcvt = VL_SET_I_SVLV(addr);
            val3__Vcvt = (0xffU & VL_SET_I_SVLV(val3));
            val2__Vcvt = (0xffU & VL_SET_I_SVLV(val2));
            val1__Vcvt = (0xffU & VL_SET_I_SVLV(val1));
            val0__Vcvt = (0xffU & VL_SET_I_SVLV(val0));
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val3__Vcvt, val2__Vcvt, val1__Vcvt, val0__Vcvt);
        }
        
        void Vtestharness::tb_writetoSram(const svLogicVecVal* addr, const svLogicVecVal* val, svLogicVecVal* retval) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::tb_writetoSram\n"); );
            // Variables
            IData/*31:0*/ addr__Vcvt;
            IData/*31:0*/ val__Vcvt;
            IData/*31:0*/ retval__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("tb_writetoSram");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_tb_writetoSram_t __Vcb = (Vtestharness__Vcb_tb_writetoSram_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            addr__Vcvt = VL_SET_I_SVLV(addr);
            val__Vcvt = VL_SET_I_SVLV(val);
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), addr__Vcvt, val__Vcvt, retval__Vcvt);
            for (size_t retval__Vidx = 0; retval__Vidx < 1; ++retval__Vidx) VL_SET_SVLV_I(32, retval + 1 * retval__Vidx, retval__Vcvt);
        }
        
        int Vtestharness::simutil_get_scramble_key(svBitVecVal* val) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::simutil_get_scramble_key\n"); );
            // Variables
            VlWide<4>/*127:0*/ val__Vcvt;
            IData/*31:0*/ simutil_get_scramble_key__Vfuncrtn__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_key");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_simutil_get_scramble_key_t __Vcb = (Vtestharness__Vcb_simutil_get_scramble_key_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), val__Vcvt, simutil_get_scramble_key__Vfuncrtn__Vcvt);
            for (size_t val__Vidx = 0; val__Vidx < 1; ++val__Vidx) VL_SET_SVBV_W(128, val + 4 * val__Vidx, val__Vcvt);
            int simutil_get_scramble_key__Vfuncrtn;
            for (size_t simutil_get_scramble_key__Vfuncrtn__Vidx = 0; simutil_get_scramble_key__Vfuncrtn__Vidx < 1; ++simutil_get_scramble_key__Vfuncrtn__Vidx) simutil_get_scramble_key__Vfuncrtn = simutil_get_scramble_key__Vfuncrtn__Vcvt;
            return simutil_get_scramble_key__Vfuncrtn;
        }
        
        int Vtestharness::simutil_get_scramble_nonce(svBitVecVal* nonce) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::simutil_get_scramble_nonce\n"); );
            // Variables
            VlWide<10>/*319:0*/ nonce__Vcvt;
            IData/*31:0*/ simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
            // Body
            static int __Vfuncnum = -1;
            if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simutil_get_scramble_nonce");
            const VerilatedScope* __Vscopep = Verilated::dpiScope();
            Vtestharness__Vcb_simutil_get_scramble_nonce_t __Vcb = (Vtestharness__Vcb_simutil_get_scramble_nonce_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
            (*__Vcb)((Vtestharness__Syms*)(__Vscopep->symsp()), nonce__Vcvt, simutil_get_scramble_nonce__Vfuncrtn__Vcvt);
            for (size_t nonce__Vidx = 0; nonce__Vidx < 1; ++nonce__Vidx) VL_SET_SVBV_W(320, nonce + 10 * nonce__Vidx, nonce__Vcvt);
            int simutil_get_scramble_nonce__Vfuncrtn;
            for (size_t simutil_get_scramble_nonce__Vfuncrtn__Vidx = 0; simutil_get_scramble_nonce__Vfuncrtn__Vidx < 1; ++simutil_get_scramble_nonce__Vfuncrtn__Vidx) simutil_get_scramble_nonce__Vfuncrtn = simutil_get_scramble_nonce__Vfuncrtn__Vcvt;
            return simutil_get_scramble_nonce__Vfuncrtn;
        }
        
        VL_INLINE_OPT void Vtestharness::_combo__TOP__2(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_combo__TOP__2\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U != (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        if ((0x104U != (0xfffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U))))) {
                            if ((0x108U != (0xfffU 
                                            & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                << 0xeU) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  >> 0x12U))))) {
                                if ((0x10cU != (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U))))) {
                                    if (((0x380U <= 
                                          (0xfffU & 
                                           ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                             << 0xeU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                               >> 0x12U)))) 
                                         & (0x387U 
                                            >= (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U)))))) {
                                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__p_rw_logic__DOT__unnamedblk1__DOT__i = 4U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__data_valid = 0U;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U != (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        if ((0x104U != (0xfffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U))))) {
                            if ((0x108U != (0xfffU 
                                            & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                << 0xeU) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  >> 0x12U))))) {
                                if ((0x10cU != (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U))))) {
                                    if (((0x380U <= 
                                          (0xfffU & 
                                           ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                             << 0xeU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                               >> 0x12U)))) 
                                         & (0x387U 
                                            >= (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U)))))) {
                                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__data_valid = 1U;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned = 0U;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U == (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned 
                            = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                               | (3U & ((IData)(1U) 
                                        << (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                  >> 0x12U)))));
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = 0U;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U != (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        if ((0x104U == (0xfffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U))))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__going = 1U;
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = 0U;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U != (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        if ((0x104U != (0xfffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U))))) {
                            if ((0x108U != (0xfffU 
                                            & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                << 0xeU) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  >> 0x12U))))) {
                                if ((0x10cU == (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U))))) {
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception = 1U;
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U] 
                = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                    << 8U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                              >> 0x18U));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U] 
                = ((0x2fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U]) 
                   | (0x10U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                               >> 0x18U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[0U] 
                = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[9U] 
                    << 8U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                              >> 0x18U));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U] 
                = ((0x30U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U]) 
                   | (0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                               << 8U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                         >> 0x18U))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U] 
                = ((0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U]) 
                   | (0x20U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                               >> 0x18U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_error_o = 1U;
            if (((0x20010000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20020000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_error_o = 0U;
            }
            if (((0x20000000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20010000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_error_o = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__matched_rules = 0U;
            if (((0x20010000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20020000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__matched_rules 
                    = (1U | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__matched_rules));
            }
            if (((0x20000000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20010000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__matched_rules 
                    = (2U | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__matched_rules));
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_valid_o = 0U;
            if (((0x20010000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20020000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_valid_o = 1U;
            }
            if (((0x20000000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20010000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__i_addr_decode_soc_regbus_periph_xbar__DOT__dec_valid_o = 1U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o = 0U;
            if (((0x20010000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20020000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o = 1U;
            }
            if (((0x20000000U <= vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]) 
                 & (0x20010000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U]))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o = 0U;
            }
        }
        
        VL_INLINE_OPT void Vtestharness::_sequent__TOP__4(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_sequent__TOP__4\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v1;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v3;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32;
            CData/*0:0*/ __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst;
            CData/*5:0*/ __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
            CData/*0:0*/ __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst;
            CData/*5:0*/ __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*4:0*/ __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31;
            CData/*6:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32;
            CData/*0:0*/ __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31;
            SData/*12:0*/ __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32;
            IData/*31:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32;
            IData/*31:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32;
            IData/*31:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32;
            VlWide<3>/*95:0*/ __Vtemp25;
            QData/*33:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0;
            QData/*33:0*/ __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2;
            // Body
            vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q;
            vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q;
            __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst;
            __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst;
            vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
            vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr;
            __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
            __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32 = 0U;
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__i = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 1U;
            }
            if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__i = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__i = 1U;
            }
            if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__i = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 1U;
            }
            if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__i = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__i = 1U;
            }
            if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__i = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk8__DOT__unnamedblk9__DOT__j = 1U;
            }
            if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__i = 1U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__i = 1U;
            }
            if ((1U & (~ (IData)(vlTOPp->rst_ni)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk6__DOT__unnamedblk7__DOT__j = 1U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req) {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0x20U;
                    }
                }
            }
            if (vlTOPp->rst_ni) {
                if (VL_UNLIKELY((0x20U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U]))) {
                    VL_WRITEF("%t Out of bound memory access 0x%08x\n",
                              64,VL_TIME_UNITED_Q(1),
                              32,vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[1U]);
                    VL_STOP_MT("../../../hw/core-v-mini-mcu/system_bus.sv", 95, "");
                }
            }
            if (vlTOPp->rst_ni) {
                if ((0x800U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                    if ((0x400U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0x20U;
                    }
                }
            }
            if (vlTOPp->rst_ni) {
                if ((0x20000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                    if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk10__DOT__unnamedblk11__DOT__j = 0x20U;
                    }
                }
            }
            if (VL_UNLIKELY((((0U != VL_TESTPLUSARGS_I("verbose")) 
                              & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__data_req_out) 
                                 & (~ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                    [2U]))) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_we)))) {
                VL_WRITEF("write addr=0x%08x: data=0x%08x\n",
                          32,(0xfffffffcU & ((IData)(
                                                     (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                      >> 3U)) 
                                             << 2U)),
                          32,((1U & (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                             >> 2U)))
                               ? ((1U & (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
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
                                      | (0xffffU & 
                                         (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                          >> 0x10U))))
                               : ((1U & (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                 >> 1U)))
                                   ? ((0xffffff00U 
                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                          << 8U)) | 
                                      (0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b 
                                                >> 0x18U)))
                                   : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__rf_rdata_b)));
            }
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v1 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2 = 0U;
            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v3 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_id_q = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__u_exit_value__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_value_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__u_exit_valid__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_valid_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_timeout_ctrl_en__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_en_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_timeout_ctrl_val__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_val_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ovrd_txval__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txval_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ovrd_txen__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txen_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_nco__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nco_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_rxblvl__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rxblvl_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_parity_odd__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_odd_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_parity_en__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_en_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_llpbk__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_llpbk_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_slpbk__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_slpbk_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_nf__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nf_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_rx__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rx_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_ctrl_tx__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_tx_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_parity_err__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_parity_err_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_timeout__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_timeout_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_break_err__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_break_err_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_frame_err__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_frame_err_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_overflow__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_overflow_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_tx_empty__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_empty_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_rx_watermark__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_watermark_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_enable_tx_watermark__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_watermark_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_parity_err_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_timeout_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_break_err_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_frame_err_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_overflow_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_empty_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_watermark_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we));
            if (vlTOPp->rst_ni) {
                if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__slave_rid_q = 0U;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__slave_rid_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__read_pointer_n));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__write_pointer_n));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d)
                    : 0U);
            if (vlTOPp->rst_ni) {
                if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__gate_clock)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_n;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__mem_q = 0ULL;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_q 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__sreg_d)
                    : 0x7ffU);
            if (vlTOPp->rst_ni) {
                if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q 
                        = (1U & (((IData)(1U) + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q)) 
                                 >> 4U));
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q)));
                } else {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__baud_div_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tick_baud_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__discard_req_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_q 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__havereset_d_aligned)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__nmi_mode_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_d_aligned));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_src_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_d)));
            if (vlTOPp->rst_ni) {
                if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_val_q 
                        = ((0xfffeU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_val_q) 
                                       << 1U)) | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_val_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d)
                    : 0U);
            if (vlTOPp->rst_ni) {
                if (((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)) 
                     & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_resp_ready))) {
                    vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q 
                        = (1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q)));
                }
            } else {
                vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_prev_q 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_watermark_d)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_prev_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_watermark_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth_prev_q 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_depth)
                    : 0U);
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mie_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mie_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mtval_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mtval_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtval_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_d;
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcountinhibit_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle_q 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle)));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dscratch1_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dscratch1_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dscratch0_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dscratch0_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mscratch_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mscratch_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstack_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_cause_csr__DOT__rdata_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_d)
                    : 0U);
            if (vlTOPp->rst_ni) {
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_req_valid) 
                     & (2U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__i_fifo__DOT__i_fifo_v3__DOT__status_cnt_q)))) {
                    vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q 
                        = (1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q)));
                }
            } else {
                vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__enter_debug_mode_prio_d));
            if (vlTOPp->rst_ni) {
                if ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0) 
                      != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q1)) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_req_valid)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__data_dst_q = 0ULL;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                       & 1U);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q = 0ULL;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q = 0ULL;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst) {
                    __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                        = (1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)));
                }
            } else {
                __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst) {
                    __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                        = (1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)));
                }
            } else {
                __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst = 1U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q) {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q) {
                        if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q = 0U;
                        }
                    } else {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q = 0U;
                    }
                } else {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_break_err) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q = 1U;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_by_zero_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_numerator_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__op_quotient_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_parity_err_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x15U) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0xdU)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_timeout_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x16U) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0xeU)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_break_err_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x17U) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0xfU)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_frame_err_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x18U) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0x10U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_overflow_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x19U) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0x11U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_empty_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x1aU) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0x12U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_rx_watermark_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x1bU) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0x13U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_intr_tx_watermark_o 
                = ((IData)(vlTOPp->rst_ni) & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                               >> 0x1cU) 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                                 >> 0x14U)));
            if (vlTOPp->rst_ni) {
                if ((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                            >> 0x1cU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                         >> 0x1bU)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q 
                        = (0x1ffffU & ((0xffffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q) 
                                       + (0xffffU & 
                                          ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                            << 0x1cU) 
                                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                              >> 4U)))));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_out_q 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | ((0x4000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U])
                             ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                >> 0x19U) : ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                              >> 0x19U) 
                                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tx_q)))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q 
                = ((IData)(vlTOPp->rst_ni) & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q) 
                                              & (1U 
                                                 == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q))));
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_d) 
                       & 1U);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__do_single_step_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_txrst) {
                    vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
                } else {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                        vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                            = (0x3fU & ((0x1fU == (0x1fU 
                                                   & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                         ? (0x20U & 
                                            ((~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 5U)) 
                                             << 5U))
                                         : ((IData)(1U) 
                                            + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
                    }
                }
            } else {
                vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_rxrst) {
                    vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
                } else {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                        vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr 
                            = (0x3fU & ((0x1fU == (0x1fU 
                                                   & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr)))
                                         ? (0x20U & 
                                            ((~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                 >> 5U)) 
                                             << 5U))
                                         : ((IData)(1U) 
                                            + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr))));
                    }
                }
            } else {
                vlTOPp->__Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_counter_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_txrst) {
                    __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
                } else {
                    if ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rvalid) 
                          & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_fifo_rready)) 
                         & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst)))) {
                        __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                            = (0x3fU & ((0x1fU == (0x1fU 
                                                   & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                         ? (0x20U & 
                                            ((~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 5U)) 
                                             << 5U))
                                         : ((IData)(1U) 
                                            + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
                    }
                }
            } else {
                __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_rxrst) {
                    __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
                } else {
                    if ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_rvalid) 
                          & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                             >> 0xfU)) & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst)))) {
                        __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                            = (0x3fU & ((0x1fU == (0x1fU 
                                                   & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr)))
                                         ? (0x20U & 
                                            ((~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr) 
                                                 >> 5U)) 
                                             << 5U))
                                         : ((IData)(1U) 
                                            + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr))));
                    }
                }
            } else {
                __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txrst_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxrst_we));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wdata_we));
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_parity_err_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x11U)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_parity_err__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_timeout_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x13U)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_timeout__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_break_err_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x15U)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_break_err__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_frame_err_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x17U)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_frame_err__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_overflow_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x19U)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_overflow__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_empty_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x1bU)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_empty__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_watermark_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x1dU)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_rx_watermark__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                              >> 0x1fU)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_intr_state_tx_watermark__DOT__wr_data;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstack_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q 
                        = (7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q) 
                                 >> 2U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_csr__DOT__rdata_q = 4U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__lsu_err_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__lsu_err_d));
            if (vlTOPp->rst_ni) {
                if ((0x20000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                    if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0xcU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0 = 0U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0xdU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1 = 1U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0xeU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2 = 2U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0xfU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3 = 3U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x10U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4 = 4U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x11U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5 = 5U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x12U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6 = 6U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x13U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7 = 7U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x14U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8 = 8U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x15U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9 = 9U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x16U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10 = 0xaU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x17U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11 = 0xbU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x18U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12 = 0xcU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x19U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13 = 0xdU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x1aU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14 = 0xeU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x1bU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15 = 0xfU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x1cU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16 = 0x10U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x1dU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17 = 0x11U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x1eU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18 = 0x12U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                         >> 0x1fU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19 = 0x13U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20 
                                = (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U]);
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20 = 0x14U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 1U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21 = 0x15U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 2U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22 = 0x16U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 3U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23 = 0x17U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 4U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24 = 0x18U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 5U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25 = 0x19U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 6U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26 = 0x1aU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 7U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27 = 0x1bU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 8U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28 = 0x1cU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 9U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29 = 0x1dU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 0xaU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30 = 0x1eU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                        if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                         >> 0xbU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31 = 0x1fU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               << 0x12U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                 >> 0xeU)));
                        }
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i = 0U;
                while ((0x2000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i)) {
                    __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32 
                        = (((0U == (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                             << 5U)))
                             ? 0U : (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[
                                     ((IData)(1U) + 
                                      (0x1fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                             << 5U))))) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[
                              (0x1fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i)] 
                              >> (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                           << 5U))));
                    __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32 = 1U;
                    __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32 
                        = (0x1fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i);
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i);
                }
            }
            if (vlTOPp->rst_ni) {
                if ((0x800U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                    if ((0x400U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 6U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0 = 0U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 7U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1 = 1U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 8U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2 = 2U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 9U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3 = 3U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0xaU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4 = 4U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0xbU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5 = 5U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0xcU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6 = 6U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0xdU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7 = 7U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0xeU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8 = 8U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0xfU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9 = 9U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x10U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10 = 0xaU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x11U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11 = 0xbU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x12U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12 = 0xcU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x13U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13 = 0xdU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x14U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14 = 0xeU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x15U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15 = 0xfU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x16U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16 = 0x10U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x17U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17 = 0x11U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x18U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18 = 0x12U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x19U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19 = 0x13U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x1aU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20 = 0x14U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x1bU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21 = 0x15U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x1cU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22 = 0x16U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x1dU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23 = 0x17U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x1eU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24 = 0x18U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[2U] 
                                         >> 0x1fU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25 = 0x19U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26 
                                = (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U]);
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26 = 0x1aU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                         >> 1U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27 = 0x1bU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                         >> 2U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28 = 0x1cU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                         >> 3U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29 = 0x1dU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                         >> 4U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30 = 0x1eU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                        if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                         >> 5U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31 = 0x1fU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31 
                                = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                               << 0x18U) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                 >> 8U)));
                        }
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i = 0U;
                while ((0x2000U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i)) {
                    __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32 
                        = (((0U == (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                             << 5U)))
                             ? 0U : (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__init_val[
                                     ((IData)(1U) + 
                                      (0x1fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                             << 5U))))) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__init_val[
                              (0x1fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i)] 
                              >> (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                           << 5U))));
                    __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32 = 1U;
                    __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32 
                        = (0x1fffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i);
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i);
                }
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req) {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we) {
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0 
                                = (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata);
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0 = 0U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 1U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1 = 1U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 2U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2 = 2U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 3U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3 = 3U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 4U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4 = 4U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 5U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5 = 5U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 6U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6 = 6U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 7U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7 = 7U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 8U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8 = 8U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 9U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9 = 9U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0xaU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10 = 0xaU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0xbU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11 = 0xbU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0xcU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12 = 0xcU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0xdU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13 = 0xdU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0xeU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14 = 0xeU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0xfU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15 = 0xfU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x10U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16 = 0x10U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x11U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17 = 0x11U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x12U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18 = 0x12U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x13U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19 = 0x13U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x14U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20 = 0x14U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x15U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21 = 0x15U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x16U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22 = 0x16U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x17U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23 = 0x17U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x18U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24 = 0x18U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x19U));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25 = 0x19U;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x1aU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26 = 0x1aU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x1bU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27 = 0x1bU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x1cU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28 = 0x1cU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x1dU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29 = 0x1dU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x1eU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30 = 0x1eU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                        if ((8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be))) {
                            __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31 
                                = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                                         >> 0x1fU));
                            __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31 = 1U;
                            __Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31 = 0x1fU;
                            __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31 
                                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        }
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i = 0U;
                while ((0x80U > vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i)) {
                    __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32 
                        = (((0U == (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                             << 5U)))
                             ? 0U : (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[
                                     ((IData)(1U) + 
                                      (0x7fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i))] 
                                     << ((IData)(0x20U) 
                                         - (0x1fU & 
                                            (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                             << 5U))))) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[
                              (0x7fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i)] 
                              >> (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                                           << 5U))));
                    __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32 = 1U;
                    __Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32 
                        = (0x7fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i);
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i 
                        = ((IData)(1U) + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__unnamedblk5__DOT__i);
                }
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__cpuctrl_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_cpuctrl_csr__DOT__rdata_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__pmp_err_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__pmp_err_d));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_update) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q 
                        = (0xffffffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[2U] 
                                         << 0x16U) 
                                        | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                                           >> 0xaU)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_q 
                = ((IData)(vlTOPp->rst_ni) ? ((1U & 
                                               vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U])
                                               ? (1U 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n) 
                                                     >> 1U))
                                               : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__branch_discard_n))
                    : 0U);
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__mult_en_internal) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__gen_mult_fast__DOT__mult_state_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__gen_int_rr__DOT__rr_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_d) 
                       & 1U);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__rr_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__2__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__1__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__valid_inflight_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_master__DOT__gen_outputs__BRA__0__KET____DOT__gen_rr_arb_tree__DOT__i_rr_arb_tree__DOT__gen_arbiter__DOT__req_nodes) 
                     & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__neck_resp_gnt))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT____Vcellout__gen_xbar_1toM__DOT__addr_decode_i__idx_o;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__system_xbar_i__DOT__gen_xbar_1toM__DOT__i_xbar_slave__DOT__gen_inputs__BRA__0__KET____DOT__i_addr_dec_resp_mux__DOT__gen_several_outputs__DOT__bank_sel_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_n;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_n;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_n) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_n) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_n;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_n) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q 
                    = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req) 
                        & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we)))
                        ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                       [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr]
                        : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                       [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__r_addr_q]);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__init_val[0U];
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ctrl_update) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q 
                        = (3U & (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                         >> 1U)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__rdata_offset_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_opc_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(
                                                     (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o 
                                                      >> 0x21U)));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__depc_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__depc_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_depc_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mtvec_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__csr_mtvec_init)
                            ? 0x101U : (1U | (0xffffff00U 
                                              & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__csr_wdata_int)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mtvec_csr__DOT__rdata_q = 1U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstack_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstack_epc_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q 
                    = ((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U])
                        ? (1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n) 
                                 >> 1U)) : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_n));
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__gnt_o) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q 
                    = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                        >> 0x14U) & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__slave_rvalid_q 
                    = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                        >> 0x17U) & 1U);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__rdata_outstanding_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_valid_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__word_enable32_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__slave_rvalid_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__random1 
                    = VL_RANDOM_I(32);
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__random2 
                    = VL_RANDOM_I(32);
            }
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__rdata_q 
                    = ((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                               >> 0x11U) & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                               >> 0x10U))))
                        ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                       [(0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                     << 0x12U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                                  >> 0xeU)))]
                        : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                       [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__r_addr_q]);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__rdata_q 
                    = ((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                               >> 0xbU) & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                              >> 0xaU))))
                        ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                       [(0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                     << 0x18U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                                  >> 8U)))]
                        : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                       [vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__r_addr_q]);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_rdata_q 
                    = (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_valid_q 
                    = ((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram1_slave_resp 
                                >> 0x21U)) & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_valid_q 
                    = ((IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram0_slave_resp 
                                >> 0x21U)) & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_n) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_n;
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__rdata_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__init_val[0U];
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__rdata_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__init_val[0U];
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__periph_to_reg_i__DOT__r_rdata_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_valid_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_valid_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[0U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[1U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[2U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[3U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[4U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[5U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[6U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_d[7U];
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_d;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_d;
                } else {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                        = (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_d);
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmderr_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__abstractauto_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[0U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[1U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[2U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[3U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[4U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[5U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[6U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[7U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q = 0ULL;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q = 0ULL;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q = 0ULL;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__fwd_rom_q 
                = ((IData)(vlTOPp->rst_ni) & (0x800U 
                                              <= (0xfffU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                      << 0xeU) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                        >> 0x12U)))));
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_set_raw_d) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_d) 
                       & 1U);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q = 0ULL;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__debug_mode_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txrst_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txrst_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x17U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxrst_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxrst_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x16U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wdata_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wdata_we)
                            ? (0xffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                         << 0xaU) | 
                                        (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                         >> 0x16U)))
                            : 0U);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_en_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_en_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                              >> 0x15U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_val_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_val_we)
                            ? (0xffffffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                             << 0xaU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                               >> 0x16U)))
                            : 0U);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txval_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txval_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x17U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txen_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txen_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x16U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nco_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nco_we)
                            ? (0xffffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                           << 0x1aU) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                             >> 6U)))
                            : 0U);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rxblvl_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rxblvl_we)
                            ? (3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                      << 2U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                >> 0x1eU)))
                            : 0U);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_odd_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_odd_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1dU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_en_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_en_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1cU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_llpbk_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_llpbk_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1bU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_slpbk_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_slpbk_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1aU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nf_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nf_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x18U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rx_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rx_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x17U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_tx_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_tx_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x16U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_parity_err_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_parity_err_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1dU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_timeout_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_timeout_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1cU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_break_err_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_break_err_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1bU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_frame_err_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_frame_err_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x1aU));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_overflow_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_overflow_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x19U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_empty_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_empty_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x18U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_watermark_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_watermark_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x17U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_watermark_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_watermark_we) 
                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                              >> 0x16U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                              >> 0x1cU)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q 
                        = (3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we)
                                  ? ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                      << 5U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                >> 0x1bU))
                                  : ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U] 
                                      << 3U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                                                >> 0x1dU))));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we) 
                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                              >> 0x1fU)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q 
                        = (7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we)
                                  ? ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                      << 8U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                >> 0x18U))
                                  : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[1U]));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__exc_req_d));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__dcsr_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q = 0x40000003U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_en_internal) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_jump_set_done_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_jump_set_done_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_d)
                    : 3U);
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__addr_update) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__addr_last_q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req)
                            ? (0xfffffffcU & ((IData)(
                                                      (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                                       >> 3U)) 
                                              << 2U))
                            : (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_adder_result_ext 
                                       >> 1U)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__addr_last_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__store_err_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_store_err));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__load_err_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_load_err));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__handle_misaligned_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__handle_misaligned_d));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs 
                = ((IData)(vlTOPp->rst_ni) ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_ns)
                    : 0U);
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_value_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_value__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_value_we)
                            ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]
                            : 0U);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_value__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_valid_we) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_valid__q 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_valid_we) 
                           & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U]);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_valid__q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req)
                            ? 1U : 0U);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error 
                        = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error) 
                           | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata 
                        = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error) 
                             | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)) 
                            | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req))
                            ? 0xffffffffU : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_rdata_next);
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz 
                        = (3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                 >> 2U));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid 
                        = (0xffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                     << 6U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                               >> 0x1aU)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 1U;
                } else {
                    if ((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                >> 1U) & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U]))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ctrl_update) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_sign_ext;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_sign_ext_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ctrl_update) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_type_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_type;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_type_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ctrl_update) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_we_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__lsu_we;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_we_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0U] = 0U;
            if (vlTOPp->rst_ni) {
                if ((2U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[1U] = 0U;
                } else {
                    if ((2U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[1U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[1U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((4U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[2U] = 0U;
                } else {
                    if ((4U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[2U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[2U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((8U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[3U] = 0U;
                } else {
                    if ((8U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[3U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[3U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x10U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[4U] = 0U;
                } else {
                    if ((0x10U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[4U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[4U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x20U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[5U] = 0U;
                } else {
                    if ((0x20U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[5U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[5U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[6U] = 0U;
                } else {
                    if ((0x40U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[6U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[6U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[7U] = 0U;
                } else {
                    if ((0x80U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[7U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[7U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[8U] = 0U;
                } else {
                    if ((0x100U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[8U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[8U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[9U] = 0U;
                } else {
                    if ((0x200U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[9U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[9U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x400U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xaU] = 0U;
                } else {
                    if ((0x400U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xaU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xaU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x800U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xbU] = 0U;
                } else {
                    if ((0x800U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xbU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xbU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xcU] = 0U;
                } else {
                    if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xcU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xcU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xdU] = 0U;
                } else {
                    if ((0x2000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xdU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xdU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xeU] = 0U;
                } else {
                    if ((0x4000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xeU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xeU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xfU] = 0U;
                } else {
                    if ((0x8000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xfU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0xfU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x10U] = 0U;
                } else {
                    if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x10U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x10U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x20000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x11U] = 0U;
                } else {
                    if ((0x20000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x11U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x11U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x40000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x12U] = 0U;
                } else {
                    if ((0x40000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x12U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x12U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x80000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x13U] = 0U;
                } else {
                    if ((0x80000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x13U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x13U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x100000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x14U] = 0U;
                } else {
                    if ((0x100000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x14U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x14U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x200000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x15U] = 0U;
                } else {
                    if ((0x200000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x15U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x15U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x16U] = 0U;
                } else {
                    if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x16U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x16U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x17U] = 0U;
                } else {
                    if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x17U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x17U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x1000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x18U] = 0U;
                } else {
                    if ((0x1000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x18U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x18U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x2000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x19U] = 0U;
                } else {
                    if ((0x2000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x19U] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x19U] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x4000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1aU] = 0U;
                } else {
                    if ((0x4000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1aU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1aU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1bU] = 0U;
                } else {
                    if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1bU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1bU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x10000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1cU] = 0U;
                } else {
                    if ((0x10000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1cU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1cU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x20000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1dU] = 0U;
                } else {
                    if ((0x20000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1dU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1dU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x40000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1eU] = 0U;
                } else {
                    if ((0x40000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1eU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1eU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x80000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_b_dec)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1fU] = 0U;
                } else {
                    if ((0x80000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__we_a_dec)) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1fU] 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__rf_wdata_wb;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_register_file_i__DOT__mem[0x1fU] = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__instr_executing_spec) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__id_fsm_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__id_fsm_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__id_fsm_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_we_ex))) {
                    __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                        [0U];
                    __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0 = 1U;
                }
            } else {
                __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v1 = 1U;
            }
            if (vlTOPp->rst_ni) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_we_ex))) {
                    __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__id_stage_i__imd_val_d_ex_i
                        [1U];
                    __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2 = 1U;
                }
            } else {
                __Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v3 = 1U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__under_rst;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst 
                = __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__under_rst;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr 
                = __Vdly__testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_rptr;
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v0))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v1))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v2))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v3))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v4))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v5))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v6))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v7))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v8))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v9))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v10))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v11))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v12))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v13))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v14))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v15))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v16))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v17))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v18))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v19))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v20))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v21))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v22))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v23))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v24))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v25))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v26))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v27))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v28))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v29))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v30))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v31))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32] 
                    = __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__sram__v32;
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v0))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v1))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v2))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v3))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v4))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v5))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v6))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v7))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v8))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v9))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v10))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v11))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v12))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v13))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v14))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v15))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v16))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v17))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v18))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v19))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v20))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v21))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v22))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v23))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v24))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v25))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v26))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v27))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v28))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v29))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v30))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v31))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32] 
                    = __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__sram__v32;
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v0))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v1))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v2))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v3))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v4))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v5))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v6))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v7))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v8))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v9))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v10))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v11))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v12))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v13))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v14))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v15))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v16))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v17))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v18))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v19))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v20))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v21))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v22))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v23))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v24))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v25))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v26))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v27))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v28))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v29))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v30))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31] 
                    = (((~ ((IData)(1U) << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31))) 
                        & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                        [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31]) 
                       | (0xffffffffULL & ((IData)(__Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31) 
                                           << (IData)(__Vdlyvlsb__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v31))));
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram
                            [__Vdlyvdim0__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32] 
                    = __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__sram__v32;
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q
                            [0U] = __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v0;
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v1) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q
                            [0U] = 0ULL;
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q
                            [1U] = __Vdlyvval__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v2;
            }
            if (__Vdlyvset__testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q__v3) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q
                            [1U] = 0ULL;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__ack_src_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U] 
                = ((0xffff0000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__hw2reg[0U]) 
                   | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_val_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 0U;
            if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume = 1U;
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
            if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 0U;
                }
            } else {
                if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__go = 1U;
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmdbusy 
                = (1U & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                          >> 1U) | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync)));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcause_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcause_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mcause_csr__DOT__rdata_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q1 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter
                            [2U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__minstret_counter_i__DOT__counter_q;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mhpmcounter
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mcycle_counter_i__DOT__counter_q;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tx_q 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tx_d)));
            if (vlTOPp->rst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d) 
                       & 1U);
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                   & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                         >> 0xaU)));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mstatus_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mstatus_csr__DOT__rdata_q = 0x10U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__data_or_pmp_err 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__lsu_err_q) 
                   | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__pmp_err_q));
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT____Vlvbound10 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr;
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__r_addr_q 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT____Vlvbound10;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__r_addr_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mepc_en) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__mepc_d;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_mepc_csr__DOT__rdata_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x20000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U])) {
                    if ((1U & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                  >> 0x10U)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT____Vlvbound10 
                            = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                           << 0x12U) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[5U] 
                                             >> 0xeU)));
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__r_addr_q 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT____Vlvbound10;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__r_addr_q = 0U;
            }
            if (vlTOPp->rst_ni) {
                if ((0x800U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U])) {
                    if ((1U & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                  >> 0xaU)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT____Vlvbound10 
                            = (0x1fffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                           << 0x18U) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[3U] 
                                             >> 8U)));
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__r_addr_q 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT____Vlvbound10;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__r_addr_q = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 0U;
            if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__we = 1U;
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_n 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q;
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_n = 1U;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_n = 0U;
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_q;
                    }
                }
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_q;
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[1U] = 0x517U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[2U] = 0xc55513U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[3U] = 0xc51513U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x13U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x13U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x13U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x13U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[8U] = 0x7b302573U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x100073U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xaU] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xbU] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xcU] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xdU] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xeU] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0xfU] = 0U;
            if ((0U == (0xffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                 >> 0x18U)))) {
                if ((((3U > (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                   >> 0x14U))) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                  >> 0x11U)) 
                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                        >> 0x10U))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
                    if ((0U != (3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0xeU)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                    } else {
                        if (((IData)((0x1000U == (0x1020U 
                                                  & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q))) 
                             & (0xaU == (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                            vlTOPp->__Vfunc_load__23__size 
                                = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                         >> 0x14U));
                            vlTOPp->__Vfunc_load__23__Vfuncout 
                                = (0x38050403U | ((IData)(vlTOPp->__Vfunc_load__23__size) 
                                                  << 0xcU));
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                                = vlTOPp->__Vfunc_load__23__Vfuncout;
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] = 0x7b341073U;
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] = 0x7b202473U;
                        } else {
                            if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                                vlTOPp->__Vfunc_load__27__dest 
                                    = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
                                vlTOPp->__Vfunc_load__27__size 
                                    = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x14U));
                                vlTOPp->__Vfunc_load__27__Vfuncout 
                                    = (0x38050003U 
                                       | (((IData)(vlTOPp->__Vfunc_load__27__size) 
                                           << 0xcU) 
                                          | ((IData)(vlTOPp->__Vfunc_load__27__dest) 
                                             << 7U)));
                                vlTOPp->__Vfunc_float_load__26__dest 
                                    = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
                                vlTOPp->__Vfunc_float_load__26__size 
                                    = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x14U));
                                vlTOPp->__Vfunc_float_load__26__Vfuncout 
                                    = (0x38050007U 
                                       | (((IData)(vlTOPp->__Vfunc_float_load__26__size) 
                                           << 0xcU) 
                                          | ((IData)(vlTOPp->__Vfunc_float_load__26__dest) 
                                             << 7U)));
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                                    = ((0x20U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)
                                        ? vlTOPp->__Vfunc_float_load__26__Vfuncout
                                        : vlTOPp->__Vfunc_load__27__Vfuncout);
                            } else {
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                                vlTOPp->__Vfunc_load__29__size 
                                    = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x14U));
                                vlTOPp->__Vfunc_load__29__Vfuncout 
                                    = (0x38050403U 
                                       | ((IData)(vlTOPp->__Vfunc_load__29__size) 
                                          << 0xcU));
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                                    = vlTOPp->__Vfunc_load__29__Vfuncout;
                                vlTOPp->__Vfunc_csrw__30__csr 
                                    = (0xfffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
                                vlTOPp->__Vfunc_csrw__30__Vfuncout 
                                    = (0x41073U | ((IData)(vlTOPp->__Vfunc_csrw__30__csr) 
                                                   << 0x14U));
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                                    = (IData)((0x7b20247300000000ULL 
                                               | (QData)((IData)(vlTOPp->__Vfunc_csrw__30__Vfuncout))));
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                                    = (IData)(((0x7b20247300000000ULL 
                                                | (QData)((IData)(vlTOPp->__Vfunc_csrw__30__Vfuncout))) 
                                               >> 0x20U));
                            }
                        }
                    }
                } else {
                    if ((IData)(((0x20000U == (0x30000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) 
                                 & (3U > (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                >> 0x14U)))))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x7b351073U;
                        if ((0U != (3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                          >> 0xeU)))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                        } else {
                            if (((IData)((0x1000U == 
                                          (0x1020U 
                                           & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q))) 
                                 & (0xaU == (0x1fU 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)))) {
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] = 0x7b302473U;
                                vlTOPp->__Vfunc_store__36__size 
                                    = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                             >> 0x14U));
                                vlTOPp->__Vfunc_store__36__Vfuncout 
                                    = (0x38850023U 
                                       | ((IData)(vlTOPp->__Vfunc_store__36__size) 
                                          << 0xcU));
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                                    = (IData)((0x7b20247300000000ULL 
                                               | (QData)((IData)(vlTOPp->__Vfunc_store__36__Vfuncout))));
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                                    = (IData)(((0x7b20247300000000ULL 
                                                | (QData)((IData)(vlTOPp->__Vfunc_store__36__Vfuncout))) 
                                               >> 0x20U));
                            } else {
                                if ((0x1000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)) {
                                    vlTOPp->__Vfunc_store__39__src 
                                        = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
                                    vlTOPp->__Vfunc_store__39__size 
                                        = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                 >> 0x14U));
                                    vlTOPp->__Vfunc_store__39__Vfuncout 
                                        = (0x38050023U 
                                           | (((IData)(vlTOPp->__Vfunc_store__39__src) 
                                               << 0x14U) 
                                              | ((IData)(vlTOPp->__Vfunc_store__39__size) 
                                                 << 0xcU)));
                                    vlTOPp->__Vfunc_float_store__38__src 
                                        = (0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
                                    vlTOPp->__Vfunc_float_store__38__size 
                                        = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                 >> 0x14U));
                                    vlTOPp->__Vfunc_float_store__38__Vfuncout 
                                        = (0x38050027U 
                                           | (((IData)(vlTOPp->__Vfunc_float_store__38__src) 
                                               << 0x14U) 
                                              | ((IData)(vlTOPp->__Vfunc_float_store__38__size) 
                                                 << 0xcU)));
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] 
                                        = ((0x20U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)
                                            ? vlTOPp->__Vfunc_float_store__38__Vfuncout
                                            : vlTOPp->__Vfunc_store__39__Vfuncout);
                                } else {
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[4U] = 0x7b241073U;
                                    vlTOPp->__Vfunc_csrr__41__csr 
                                        = (0xfffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q);
                                    vlTOPp->__Vfunc_csrr__41__Vfuncout 
                                        = (0x2473U 
                                           | ((IData)(vlTOPp->__Vfunc_csrr__41__csr) 
                                              << 0x14U));
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[5U] 
                                        = vlTOPp->__Vfunc_csrr__41__Vfuncout;
                                    vlTOPp->__Vfunc_store__42__size 
                                        = (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                 >> 0x14U));
                                    vlTOPp->__Vfunc_store__42__Vfuncout 
                                        = (0x38850023U 
                                           | ((IData)(vlTOPp->__Vfunc_store__42__size) 
                                              << 0xcU));
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[6U] 
                                        = (IData)((0x7b20247300000000ULL 
                                                   | (QData)((IData)(vlTOPp->__Vfunc_store__42__Vfuncout))));
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[7U] 
                                        = (IData)((
                                                   (0x7b20247300000000ULL 
                                                    | (QData)((IData)(vlTOPp->__Vfunc_store__42__Vfuncout))) 
                                                   >> 0x20U));
                                }
                            }
                        }
                    } else {
                        if ((1U & ((3U <= (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                                 >> 0x14U))) 
                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                                      >> 0x13U)))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
                        }
                    }
                }
                if ((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q 
                            >> 0x12U) & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command))))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[9U] = 0x13U;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[0U] = 0x100073U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command = 1U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel 
                = ((0xffc00U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                << 4U)) | (0x3ffU & 
                                           (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                                            >> 0x10U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[0U] 
                = (IData)((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
                            << 0x20U) | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[1U] 
                = (IData)(((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)) 
                             << 0x20U) | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbdata_q))) 
                           >> 0x20U));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sberror_valid = 0U;
            if (((3U < (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x11U))) & (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sberror_valid = 1U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sberror = 0U;
            if (((3U < (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x11U))) & (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__sberror = 3U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
            if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 1U;
                    }
                }
            }
            if (((3U < (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                              >> 0x11U))) & (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__req = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask = 0U;
            if ((1U & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q 
                          >> 0x13U)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask 
                    = ((0x40000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                        ? 0xfU : ((0x20000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbcs_q)
                                   ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                                      | (0xfU & ((IData)(3U) 
                                                 << 
                                                 (2U 
                                                  & ((IData)(
                                                             (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q 
                                                              >> 1U)) 
                                                     << 1U)))))
                                   : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask) 
                                      | (0xfU & ((IData)(1U) 
                                                 << 
                                                 (3U 
                                                  & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__sbaddr_q)))))));
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
            if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_hold = 0U;
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 0U;
            if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__div_valid = 1U;
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_set 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__g_branch_set_flop__DOT__branch_set_raw_q) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__branch_jump_set_done_q)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ebreak_into_debug 
                = (1U & ((3U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q))
                          ? (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                             >> 0xfU) : ((0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__priv_lvl_q)) 
                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__cs_registers_i__DOT__u_dcsr_csr__DOT__rdata_q 
                                            >> 0xcU))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req = 0U;
            if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs) 
                              >> 1U)))) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req = 1U;
                    }
                }
            } else {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__lsu_addr_incr_req 
                        = (1U & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__ls_fsm_cs)) 
                                 | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__load_store_unit_i__DOT__handle_misaligned_q)));
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__reg2hw 
                = (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_valid__q)) 
                    << 0x20U) | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_value__q)));
            __Vtemp25[1U] = ((3U & ((IData)((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                                              << 0x3fU) 
                                             | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                                                 << 0x3cU) 
                                                | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                                    << 0x37U) 
                                                   | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                                       << 0x2fU) 
                                                      | ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                         << 0xeU)))))) 
                                    >> 0x1eU)) | (0xfffffffcU 
                                                  & ((IData)(
                                                             ((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                                                                << 0x3fU) 
                                                               | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                                                                   << 0x3cU) 
                                                                  | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                                                      << 0x37U) 
                                                                     | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                                                         << 0x2fU) 
                                                                        | ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                                           << 0xeU))))) 
                                                              >> 0x20U)) 
                                                     << 2U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                = ((0xfffffffcU & ((IData)((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                                             << 0x3fU) 
                                            | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                                                << 0x3cU) 
                                               | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                                   << 0x37U) 
                                                  | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                                      << 0x2fU) 
                                                     | ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                        << 0xeU)))))) 
                                   << 2U)) | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__error) 
                                               << 1U) 
                                              | (1U 
                                                 & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                = __Vtemp25[1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                = (3U & ((IData)(((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__outstanding)) 
                                    << 0x3fU) | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rspop)) 
                                                  << 0x3cU) 
                                                 | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqsz)) 
                                                     << 0x37U) 
                                                    | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__reqid)) 
                                                        << 0x2fU) 
                                                       | ((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rdata)) 
                                                          << 0xeU))))) 
                                  >> 0x20U)) >> 0x1eU));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q
                [0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
                            [1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__imd_val_q
                [1U];
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_q;
                    }
                }
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_q;
                    }
                }
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_q;
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                = ((0x2fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U]) 
                   | (0x30U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__we) 
                               << 4U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0 
                = (0x7fffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel 
                              >> 5U));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted 
                = ((0xfffffffeU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted) 
                   | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted;
            if ((1U > (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum0 
                    = (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0 
                       >> (0x1fU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx0) 
                                    << 5U)));
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart 
                = (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel);
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq = 0U;
            if ((0U >= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound3 
                    = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                             >> 0x1fU));
                if (VL_LIKELY((0U >= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq 
                        = (((~ ((IData)(1U) << (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                            & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq)) 
                           | (1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound3) 
                                    << (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
                }
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound4 
                    = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__dmcontrol_q 
                             >> 0x1eU));
                if (VL_LIKELY((0U >= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq 
                        = (((~ ((IData)(1U) << (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))) 
                            & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq)) 
                           | (1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT____Vlvbound4) 
                                    << (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__selected_hart))));
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                = ((0x1fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U]) 
                   | (0x20U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__req) 
                               << 5U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be = 0U;
            if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                    if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__state_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be 
                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be_mask;
                    }
                }
            }
            vlTOPp->exit_valid_o = (1U & (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__reg2hw 
                                                  >> 0x20U)));
            vlTOPp->exit_value_o = (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__reg2hw);
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o 
                = ((0x1ffffffffULL & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o) 
                   | ((QData)((IData)((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                             >> 1U)))) 
                      << 0x21U));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_q_ex
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
                [0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_q_ex
                            [1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellout__id_stage_i__imd_val_q_ex_o
                [1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_q0 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_dst_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1 
                = (0x3ffU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel 
                             >> 0xaU));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1 
                = ((0xfffffffeU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1) 
                   | (0U != vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped0));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat1;
            if ((1U > (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum1 
                    = (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1 
                       >> (0x1fU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx1) 
                                    << 5U)));
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U] 
                = ((0x30U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_master_req[2U]) 
                   | (0x3fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_sba__DOT__be)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_q_ex
                [0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i
                            [1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__imd_val_q_ex
                [1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2 
                = (0x1fU & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel 
                            >> 0xfU));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2 
                = ((0xfffffffeU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2) 
                   | (0U != vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped1));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat2;
            if ((1U > (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum2 
                    = (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2 
                       >> (0x1fU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__hartsel_idx2) 
                                    << 5U)));
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_imd_val_q
                            [0U] = (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i
                                           [0U]);
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_imd_val_q
                            [1U] = (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i
                                           [1U]);
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i
                [0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                            [1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT____Vcellinp__ex_block_i__imd_val_q_i
                [1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__sync_rx__DOT__gen_generic__DOT__u_impl_generic__DOT__intq 
                = (1U & ((~ (IData)(vlTOPp->rst_ni)) 
                         | (IData)(vlTOPp->testharness__DOT__uart_rx)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__req_dst_q 
                = ((IData)(vlTOPp->rst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3 
                = ((0xfffffffeU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3) 
                   | (0U != vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_reshaped2));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__haltsum3 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__halted_flat3;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_imd_val_q
                [0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
                            [1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_imd_val_q
                [1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a = 1ULL;
            if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))) {
                if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q) 
                              >> 1U)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                        = ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                            ? 1ULL : (1ULL | ((QData)((IData)(
                                                              vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                              [0U])) 
                                              << 1U)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__multdiv_alu_operand_a 
                    = ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                        ? ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__gen_multdiv_fast__DOT__multdiv_i__DOT__md_state_q))
                            ? (1ULL | ((QData)((IData)(
                                                       vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__gen_multdiv_fast__DOT__multdiv_i__imd_val_q_i
                                                       [0U])) 
                                       << 1U)) : 1ULL)
                        : 1ULL);
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q
                            [0U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
                [0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT__alu_i__DOT__g_no_alu_rvb__DOT__unused_imd_val_q
                            [1U] = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__ex_block_i__DOT____Vcellinp__alu_i__imd_val_q_i
                [1U];
        }
        
        VL_INLINE_OPT void Vtestharness::_sequent__TOP__5(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_sequent__TOP__5\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            if (vlTOPp->jtag_trst_ni) {
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_valid) 
                     & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_ready))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__data_src_q = 0ULL;
            }
            if (vlTOPp->jtag_trst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_d;
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_q = 0U;
            }
            if (vlTOPp->jtag_trst_ni) {
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_valid) 
                     & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_ready))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q 
                        = (1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q = 0U;
            }
            if (vlTOPp->jtag_trst_ni) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_resp_valid) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q 
                        = (1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q)));
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q = 0U;
            }
            if (vlTOPp->jtag_trst_ni) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_d;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_q 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_src_q) 
                       & 1U);
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_d;
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__error_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_q = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q = 1U;
            }
            if (vlTOPp->jtag_trst_ni) {
                if ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q0) 
                      != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q1)) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_resp_valid)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q 
                        = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__data_src_q;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__data_dst_q = 0ULL;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_valid = 0U;
            if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q) 
                          >> 2U)))) {
                if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q))) {
                    if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_valid = 1U;
                    }
                } else {
                    if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_valid = 1U;
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req 
                = (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__address_q)) 
                    << 0x22U) | (((QData)((IData)((
                                                   (3U 
                                                    == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__state_q))
                                                    ? 2U
                                                    : 1U))) 
                                  << 0x20U) | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__data_q))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_req_ready 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__req_src_q) 
                   == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_src__DOT__ack_src_q 
                = ((IData)(vlTOPp->jtag_trst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_req__DOT__i_dst__DOT__ack_dst_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q1 
                = ((IData)(vlTOPp->jtag_trst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q0));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dmi_resp_valid 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__ack_dst_q) 
                   != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q1));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_q0 
                = ((IData)(vlTOPp->jtag_trst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_dst_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_dst__DOT__req_dst_q 
                = ((IData)(vlTOPp->jtag_trst_ni) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_cdc__DOT__i_cdc_resp__DOT__i_src__DOT__req_src_q));
        }
        
        VL_INLINE_OPT void Vtestharness::_sequent__TOP__6(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_sequent__TOP__6\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            VlWide<38>/*1215:0*/ __Vtemp28;
            // Body
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_c_id 
                    = (0xffffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata);
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                VL_ASSIGNSEL_WIII(256,8,(0xf8U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                  << 3U)), vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_rxfifo__DOT__gen_normal_fifo__DOT__storage, vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data);
            }
            if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[0U] 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[0U];
            }
            if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[1U] 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[1U];
            }
            if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_q[2U] 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__rdata_d[2U];
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_incr_wptr) {
                VL_ASSIGNSEL_WIII(256,8,(0xf8U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__fifo_wptr) 
                                                  << 3U)), vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__u_uart_txfifo__DOT__gen_normal_fifo__DOT__storage, 
                                  (0xffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             << 0x19U) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                               >> 7U))));
            }
            if ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                  & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))) 
                 & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__master_resp_o[1U] 
                       >> 1U)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__stored_addr_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__instr_addr;
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err_plus2 
                    = (1U & (((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                 >> 1U) & (3U == (3U 
                                                  & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata))) 
                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                               [1U]) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                        & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__valid_q) 
                                            >> 1U) 
                                           & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q) 
                                               >> 1U) 
                                              & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)))))) 
                             & (~ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                [0U])));
            }
            if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set) 
                 | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_new_req) 
                    & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_req_q))))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fetch_addr_d;
            }
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q 
                    = (0x1fU & (IData)(((QData)((IData)(
                                                        ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                          << 0xeU) 
                                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                            >> 0x12U)))) 
                                        >> 3U)));
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_id 
                    = (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                       << 1U);
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_is_compressed_id 
                    = (3U != (3U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata));
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err 
                    = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_err) 
                       | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                          [0U] | (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                                    >> 1U) & (3U == 
                                              (3U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__fetch_rdata))) 
                                  & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pmp_req_err
                                  [1U])));
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_alu_id 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_decompressed;
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__illegal_c_insn_id 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__illegal_c_insn;
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_new_id_d) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_decompressed;
            }
            if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                    = ((6U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                       | (1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
            }
            if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                    = ((5U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                       | (2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
            }
            if ((4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__entry_en))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q 
                    = ((3U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_q)) 
                       | (4U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__err_d)));
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata = 0ULL;
            if ((0x13U > (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q))) {
                __Vtemp28[0U] = 0xc0006fU;
                __Vtemp28[1U] = 0x7c0006fU;
                __Vtemp28[2U] = 0x4c0006fU;
                __Vtemp28[3U] = 0xff0000fU;
                __Vtemp28[4U] = 0x7b241073U;
                __Vtemp28[5U] = 0x7b351073U;
                __Vtemp28[6U] = 0x517U;
                __Vtemp28[7U] = 0xc55513U;
                __Vtemp28[8U] = 0xc51513U;
                __Vtemp28[9U] = 0xf1402473U;
                __Vtemp28[0xaU] = 0x10852023U;
                __Vtemp28[0xbU] = 0xa40433U;
                __Vtemp28[0xcU] = 0x40044403U;
                __Vtemp28[0xdU] = 0x147413U;
                __Vtemp28[0xeU] = 0x2041c63U;
                __Vtemp28[0xfU] = 0xf1402473U;
                __Vtemp28[0x10U] = 0xa40433U;
                __Vtemp28[0x11U] = 0x40044403U;
                __Vtemp28[0x12U] = 0x247413U;
                __Vtemp28[0x13U] = 0xfa041ce3U;
                __Vtemp28[0x14U] = 0xfd5ff06fU;
                __Vtemp28[0x15U] = 0x517U;
                __Vtemp28[0x16U] = 0xc55513U;
                __Vtemp28[0x17U] = 0xc51513U;
                __Vtemp28[0x18U] = 0x10052623U;
                __Vtemp28[0x19U] = 0x7b302573U;
                __Vtemp28[0x1aU] = 0x7b202473U;
                __Vtemp28[0x1bU] = 0x100073U;
                __Vtemp28[0x1cU] = 0x10052223U;
                __Vtemp28[0x1dU] = 0x7b302573U;
                __Vtemp28[0x1eU] = 0x7b202473U;
                __Vtemp28[0x1fU] = 0xa85ff06fU;
                __Vtemp28[0x20U] = 0xf1402473U;
                __Vtemp28[0x21U] = 0x10852423U;
                __Vtemp28[0x22U] = 0x7b302573U;
                __Vtemp28[0x23U] = 0x7b202473U;
                __Vtemp28[0x24U] = 0x7b200073U;
                __Vtemp28[0x25U] = 0U;
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rom_rdata 
                    = ((0x4bfU >= (0x7ffU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                             << 6U)))
                        ? (((0U == (0x1fU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                             << 6U)))
                             ? 0ULL : ((QData)((IData)(
                                                       __Vtemp28[
                                                       ((IData)(2U) 
                                                        + 
                                                        (0x3eU 
                                                         & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                            << 1U)))])) 
                                       << ((IData)(0x40U) 
                                           - (0x1fU 
                                              & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                 << 6U))))) 
                           | (((QData)((IData)(__Vtemp28[
                                               ((IData)(1U) 
                                                + (0x3eU 
                                                   & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                      << 1U)))])) 
                               << ((0U == (0x1fU & 
                                           ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                            << 6U)))
                                    ? 0x20U : ((IData)(0x20U) 
                                               - (0x1fU 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 6U))))) 
                              | ((QData)((IData)(__Vtemp28[
                                                 (0x3eU 
                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                                     << 1U))])) 
                                 >> (0x1fU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT__addr_q) 
                                              << 6U)))))
                        : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__gen_rom_snd_scratch__DOT__i_debug_rom__DOT____Vxrand1);
            }
            if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_set) 
                 | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_in_ready) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__valid_raw)))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_q 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__gen_prefetch_buffer__DOT__prefetch_buffer_i__DOT__fifo_i__DOT__instr_addr_d;
            }
        }
        
        VL_INLINE_OPT void Vtestharness::_sequent__TOP__7(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_sequent__TOP__7\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            CData/*7:0*/ __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__51__Vfuncout;
            CData/*7:0*/ __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol;
            IData/*31:0*/ __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__50__Vfuncout;
            IData/*31:0*/ __Vdly__testharness__DOT__i_uart0__DOT__txcyccount;
            IData/*31:0*/ __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount;
            IData/*31:0*/ __Vdly__testharness__DOT__i_uart0__DOT__rxcount;
            // Body
            __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol 
                = vlTOPp->testharness__DOT__i_uart0__DOT__rxsymbol;
            __Vdly__testharness__DOT__i_uart0__DOT__rxcount 
                = vlTOPp->testharness__DOT__i_uart0__DOT__rxcount;
            __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount 
                = vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount;
            __Vdly__testharness__DOT__i_uart0__DOT__txcyccount 
                = vlTOPp->testharness__DOT__i_uart0__DOT__txcyccount;
            __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount 
                = ((IData)(1U) + vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount);
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__i_uart0__DOT__rxactive) {
                    if ((0U == vlTOPp->testharness__DOT__i_uart0__DOT__rxcount)) {
                        if ((7U == vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount)) {
                            if (vlTOPp->testharness__DOT__uart_tx) {
                                vlTOPp->testharness__DOT__i_uart0__DOT__rxactive = 0U;
                            } else {
                                __Vdly__testharness__DOT__i_uart0__DOT__rxcount 
                                    = ((IData)(1U) 
                                       + vlTOPp->testharness__DOT__i_uart0__DOT__rxcount);
                                __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0U;
                            }
                        }
                    } else {
                        if (VL_GTES_III(1,32,32, 8U, vlTOPp->testharness__DOT__i_uart0__DOT__rxcount)) {
                            if ((0x10U == vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount)) {
                                __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol 
                                    = (((~ ((IData)(1U) 
                                            << (7U 
                                                & (vlTOPp->testharness__DOT__i_uart0__DOT__rxcount 
                                                   - (IData)(1U))))) 
                                        & (IData)(__Vdly__testharness__DOT__i_uart0__DOT__rxsymbol)) 
                                       | (0xffU & ((IData)(vlTOPp->testharness__DOT__uart_tx) 
                                                   << 
                                                   (7U 
                                                    & (vlTOPp->testharness__DOT__i_uart0__DOT__rxcount 
                                                       - (IData)(1U))))));
                                __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0U;
                                __Vdly__testharness__DOT__i_uart0__DOT__rxcount 
                                    = ((IData)(1U) 
                                       + vlTOPp->testharness__DOT__i_uart0__DOT__rxcount);
                            }
                        } else {
                            if ((0x10U == vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount)) {
                                if (vlTOPp->testharness__DOT__uart_tx) {
                                    vlTOPp->__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_write_TOP(vlTOPp->testharness__DOT__i_uart0__DOT__ctx, (IData)(vlTOPp->testharness__DOT__i_uart0__DOT__rxsymbol));
                                }
                                vlTOPp->testharness__DOT__i_uart0__DOT__rxactive = 0U;
                            }
                        }
                    }
                } else {
                    if (((~ (IData)(vlTOPp->testharness__DOT__uart_tx)) 
                         & (IData)(vlTOPp->testharness__DOT__i_uart0__DOT__seen_reset))) {
                        __Vdly__testharness__DOT__i_uart0__DOT__rxcount = 0U;
                        vlTOPp->testharness__DOT__i_uart0__DOT__rxactive = 1U;
                        __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount = 0U;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__i_uart0__DOT__rxactive = 0U;
                vlTOPp->testharness__DOT__i_uart0__DOT__seen_reset = 1U;
            }
            if (vlTOPp->rst_ni) {
                if (vlTOPp->testharness__DOT__i_uart0__DOT__txactive) {
                    __Vdly__testharness__DOT__i_uart0__DOT__txcyccount 
                        = ((IData)(1U) + vlTOPp->testharness__DOT__i_uart0__DOT__txcyccount);
                    vlTOPp->testharness__DOT__uart_rx 
                        = (1U & ((9U >= (0xfU & vlTOPp->testharness__DOT__i_uart0__DOT__txcount))
                                  ? ((IData)(vlTOPp->testharness__DOT__i_uart0__DOT__txsymbol) 
                                     >> (0xfU & vlTOPp->testharness__DOT__i_uart0__DOT__txcount))
                                  : (IData)(vlTOPp->testharness__DOT__i_uart0__DOT____Vxrand1)));
                    if ((0x10U == vlTOPp->testharness__DOT__i_uart0__DOT__txcyccount)) {
                        __Vdly__testharness__DOT__i_uart0__DOT__txcyccount = 0U;
                        if ((9U == vlTOPp->testharness__DOT__i_uart0__DOT__txcount)) {
                            vlTOPp->testharness__DOT__i_uart0__DOT__txactive = 0U;
                        } else {
                            vlTOPp->testharness__DOT__i_uart0__DOT__txcount 
                                = ((IData)(1U) + vlTOPp->testharness__DOT__i_uart0__DOT__txcount);
                        }
                    }
                } else {
                    vlTOPp->__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_can_read_TOP(vlTOPp->testharness__DOT__i_uart0__DOT__ctx, __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__50__Vfuncout);
                    vlTOPp->testharness__DOT__uart_rx = 1U;
                    if ((0U != __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_can_read__50__Vfuncout)) {
                        vlTOPp->__Vdpiimwrap_testharness__DOT__i_uart0__DOT__uartdpi_read_TOP(vlTOPp->testharness__DOT__i_uart0__DOT__ctx, __Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__51__Vfuncout);
                        vlTOPp->testharness__DOT__i_uart0__DOT__unnamedblk1__DOT__c 
                            = VL_EXTENDS_II(32,8, (IData)(__Vfunc_testharness__DOT__i_uart0__DOT__uartdpi_read__51__Vfuncout));
                        vlTOPp->testharness__DOT__i_uart0__DOT__txcount = 0U;
                        vlTOPp->testharness__DOT__i_uart0__DOT__txsymbol 
                            = (0x200U | (0x1feU & (vlTOPp->testharness__DOT__i_uart0__DOT__unnamedblk1__DOT__c 
                                                   << 1U)));
                        vlTOPp->testharness__DOT__i_uart0__DOT__txactive = 1U;
                        __Vdly__testharness__DOT__i_uart0__DOT__txcyccount = 0U;
                    }
                }
            } else {
                vlTOPp->testharness__DOT__uart_rx = 1U;
                vlTOPp->testharness__DOT__i_uart0__DOT__txactive = 0U;
            }
            vlTOPp->testharness__DOT__i_uart0__DOT__rxcyccount 
                = __Vdly__testharness__DOT__i_uart0__DOT__rxcyccount;
            vlTOPp->testharness__DOT__i_uart0__DOT__rxcount 
                = __Vdly__testharness__DOT__i_uart0__DOT__rxcount;
            vlTOPp->testharness__DOT__i_uart0__DOT__rxsymbol 
                = __Vdly__testharness__DOT__i_uart0__DOT__rxsymbol;
            vlTOPp->testharness__DOT__i_uart0__DOT__txcyccount 
                = __Vdly__testharness__DOT__i_uart0__DOT__txcyccount;
        }
        
        VL_INLINE_OPT void Vtestharness::_sequent__TOP__8(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_sequent__TOP__8\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__tdo_oe_o 
                = ((IData)(vlTOPp->jtag_trst_ni) & 
                   ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir) 
                    | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__shift_dr)));
            vlTOPp->jtag_tdo_o = ((IData)(vlTOPp->jtag_trst_ni) 
                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir)
                                      ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_shift_q)
                                      : ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                          ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__idcode_q
                                          : ((0x10U 
                                              == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                              ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__dtmcs_q
                                              : ((0x11U 
                                                  == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__jtag_ir_q))
                                                  ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__dr_q)
                                                  : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__bypass_q))))));
        }
        
        VL_INLINE_OPT void Vtestharness::_sequent__TOP__9(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_sequent__TOP__9\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Body
            if (VL_UNLIKELY(((((5U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__ctrl_fsm_cs)) 
                               & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__if_stage_i__DOT__instr_valid_id_q)) 
                              & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_fetch_err))) 
                             & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__id_stage_i__DOT__controller_i__DOT__illegal_insn_d)))) {
                VL_WRITEF("%t: Illegal instruction (hart 0) at PC 0x%x: 0x%x\n",
                          64,VL_TIME_UNITED_Q(1),32,
                          vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__pc_id,
                          32,vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__cpu_subsystem_i__DOT__gen_cv32e20__DOT__cv32e20_i__DOT__instr_rdata_id);
            }
        }
        
        VL_INLINE_OPT void Vtestharness::_combo__TOP__11(Vtestharness__Syms* __restrict vlSymsp) {
            VL_DEBUG_IF(VL_DBG_MSGF("+    Vtestharness::_combo__TOP__11\n"); );
            Vtestharness* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
            // Variables
            VlWide<4>/*127:0*/ __Vtemp124;
            VlWide<3>/*95:0*/ __Vtemp126;
            VlWide<4>/*127:0*/ __Vtemp129;
            VlWide<4>/*127:0*/ __Vtemp131;
            // Body
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[0U] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound1[0U] 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound1[1U] 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound1[2U] 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__reg_req_o[2U];
            if ((0x8bU >= (0xffU & ((IData)(0x46U) 
                                    * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o))))) {
                VL_ASSIGNSEL_WIIW(140,70,(0xffU & ((IData)(0x46U) 
                                                   * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o))), vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o, vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vlvbound1);
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U == (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                            = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned) 
                               | (3U & ((IData)(1U) 
                                        << (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                  >> 0x12U)))));
                    } else {
                        if ((0x104U != (0xfffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U))))) {
                            if ((0x108U == (0xfffU 
                                            & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                << 0xeU) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  >> 0x12U))))) {
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned 
                                    = ((~ ((IData)(1U) 
                                           << (1U & 
                                               (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                >> 0x12U)))) 
                                       & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_d_aligned));
                            }
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram1_slave_resp 
                = (((QData)((IData)((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                           >> 0x11U)))) 
                    << 0x21U) | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_valid_q)) 
                                  << 0x20U) | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram1_i__DOT__tc_ram_i__DOT__rdata_q))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__ram0_slave_resp 
                = (((QData)((IData)((1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[4U] 
                                           >> 0xbU)))) 
                    << 0x21U) | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_valid_q)) 
                                  << 0x20U) | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__memory_subsystem_i__DOT__ram0_i__DOT__tc_ram_i__DOT__rdata_q))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_n 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_n 
                = (0x1fU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q) 
                            - (IData)(1U)));
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_q) {
                    if ((1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_n = 0U;
                    }
                }
            } else {
                if ((8U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU])) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o 
                        = (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__random1);
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__state_n = 1U;
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__counter_n 
                            = (0x1fU & ((IData)(1U) 
                                        + vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__random2));
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_req_n 
                            = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                     >> 3U));
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_we_n 
                            = (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                     >> 2U));
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_addr_n 
                            = (0x7fU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xcU]);
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_wdata_n 
                            = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xbU] 
                                << 2U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                                          >> 0x1eU));
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__mem_be_n 
                            = (0xfU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xdU] 
                                        << 2U) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xcU] 
                                                  >> 0x1eU)));
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((0x400000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                    if ((0x100U != (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        if ((0x104U != (0xfffU & ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U))))) {
                            if ((0x108U != (0xfffU 
                                            & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                << 0xeU) 
                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                  >> 0x12U))))) {
                                if ((0x10cU != (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U))))) {
                                    if (((0x380U <= 
                                          (0xfffU & 
                                           ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                             << 0xeU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                               >> 0x12U)))) 
                                         & (0x387U 
                                            >= (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U)))))) {
                                        if ((0x40000U 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                                = (
                                                   (0xffffffffffffff00ULL 
                                                    & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                                   | (IData)((IData)(
                                                                     (0xffU 
                                                                      & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                          << 0xeU) 
                                                                         | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                                            >> 0x12U))))));
                                        }
                                        if ((0x80000U 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                                = (
                                                   (0xffffffffffff00ffULL 
                                                    & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                                   | ((QData)((IData)(
                                                                      (0xffU 
                                                                       & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                           << 6U) 
                                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                                                             >> 0x1aU))))) 
                                                      << 8U));
                                        }
                                        if ((0x100000U 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                                = (
                                                   (0xffffffffff00ffffULL 
                                                    & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                                   | ((QData)((IData)(
                                                                      (0xffU 
                                                                       & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                           << 0x1eU) 
                                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                             >> 2U))))) 
                                                      << 0x10U));
                                        }
                                        if ((0x200000U 
                                             & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits 
                                                = (
                                                   (0xffffffff00ffffffULL 
                                                    & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits) 
                                                   | ((QData)((IData)(
                                                                      (0xffU 
                                                                       & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                           << 0x16U) 
                                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                             >> 0xaU))))) 
                                                      << 0x18U));
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT____Vcellout__i_dm_mem__data_o 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__data_bits;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror = 0U;
            if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
                    if ((1U & (~ (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                                   & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                      >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel))) 
                                  & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                        if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror = 4U;
                        }
                    }
                }
            }
            if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
                 & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror = 2U;
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror = 3U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror_valid = 0U;
            if ((1U & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q) 
                          >> 1U)))) {
                if ((1U & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q)))) {
                    if ((1U & (~ (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                                   & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                      >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel))) 
                                  & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))))) {
                        if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror_valid = 1U;
                        }
                    }
                }
            }
            if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command) 
                 & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q))) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror_valid = 1U;
            }
            if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__exception) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmderror_valid = 1U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_q;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata = 0ULL;
            if ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U])) {
                if ((1U & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                              >> 0x16U)))) {
                    if ((0x300U == (0xfffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                               << 0xeU) 
                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                 >> 0x12U))))) {
                        if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq) 
                                   >> (1U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[6U] 
                                             >> 0x12U))))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d = 0x5040006fULL;
                        }
                        if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__cmdbusy) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                = ((IData)((0x40000U 
                                            == (0xff060000U 
                                                & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__command_q)))
                                    ? 0x600006fULL : 0x380006fULL);
                        }
                    } else {
                        if (((0x380U <= (0xfffU & (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U)))) 
                             & (0x387U >= (0xfffU & 
                                           ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                             << 0xeU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                               >> 0x12U)))))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                = (((QData)((IData)(
                                                    (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                     >> 
                                                     (0x20U 
                                                      & (((IData)(1U) 
                                                          + 
                                                          ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                            << 0xbU) 
                                                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                              >> 0x15U))) 
                                                         << 5U))))) 
                                    << 0x20U) | (QData)((IData)(
                                                                (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__data_q 
                                                                 >> 
                                                                 (0x20U 
                                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                      << 0x10U) 
                                                                     | (0xffe0U 
                                                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                           >> 0x10U))))))));
                        } else {
                            if (((0x360U <= (0xfffU 
                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                 << 0xeU) 
                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                   >> 0x12U)))) 
                                 & (0x37fU >= (0xfffU 
                                               & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                   << 0xeU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                     >> 0x12U)))))) {
                                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                    = (((QData)((IData)(
                                                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                        ((IData)(1U) 
                                                         + 
                                                         (6U 
                                                          & ((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                << 0xbU) 
                                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                  >> 0x15U)) 
                                                              - (IData)(4U)) 
                                                             << 1U)))])) 
                                        << 0x20U) | (QData)((IData)(
                                                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__progbuf_q[
                                                                    (6U 
                                                                     & ((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                           << 0xbU) 
                                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                             >> 0x15U)) 
                                                                         - (IData)(4U)) 
                                                                        << 1U))])));
                            } else {
                                if (((0x338U <= (0xfffU 
                                                 & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                     << 0xeU) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                       >> 0x12U)))) 
                                     & (0x35fU >= (0xfffU 
                                                   & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                       << 0xeU) 
                                                      | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                         >> 0x12U)))))) {
                                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                        = (((QData)((IData)(
                                                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                            ((IData)(1U) 
                                                             + 
                                                             (0xeU 
                                                              & ((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                    << 0xbU) 
                                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                      >> 0x15U)) 
                                                                  - (IData)(7U)) 
                                                                 << 1U)))])) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__abstract_cmd[
                                                             (0xeU 
                                                              & ((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                                    << 0xbU) 
                                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                                      >> 0x15U)) 
                                                                  - (IData)(7U)) 
                                                                 << 1U))])));
                                } else {
                                    if (((0x400U <= 
                                          (0xfffU & 
                                           ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                             << 0xeU) 
                                            | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                               >> 0x12U)))) 
                                         & (0x7ffU 
                                            >= (0xfffU 
                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                    << 0xeU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                      >> 0x12U)))))) {
                                        if ((0U == 
                                             (0xfffU 
                                              & ((0xff8U 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[8U] 
                                                      << 0xeU) 
                                                     | (0x3ff8U 
                                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[7U] 
                                                           >> 0x12U)))) 
                                                 - (IData)(0x400U))))) {
                                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata 
                                                = (
                                                   ((~ 
                                                     (0xffULL 
                                                      << 
                                                      (8U 
                                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel 
                                                          << 3U)))) 
                                                    & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata) 
                                                   | ((QData)((IData)(
                                                                      (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resume) 
                                                                        << 1U) 
                                                                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__go)))) 
                                                      << 
                                                      (8U 
                                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel 
                                                          << 3U))));
                                        }
                                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata_d 
                                            = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__rdata;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d 
                = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q;
            if ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                    if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_aligned) 
                               >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
                    }
                } else {
                    if ((1U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                               >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 0U;
                    }
                }
            } else {
                if ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_q))) {
                    if (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__going) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 3U;
                    }
                } else {
                    if ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_csrs__DOT__cmd_valid_q) 
                          & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                             >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel))) 
                         & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__unsupported_command)))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 1U;
                    }
                    if ((1U & (((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__resumereq) 
                                  >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel)) 
                                 & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__resuming_q) 
                                       >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel)))) 
                                & (~ ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__haltreq) 
                                      >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel)))) 
                               & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__halted_q) 
                                  >> (1U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__hartsel))))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dm_obi_top_i__DOT__i_dm_top__DOT__i_dm_mem__DOT__state_d = 2U;
                    }
                }
            }
            vlTOPp->__Vtableidx8 = (((IData)(vlTOPp->jtag_tms_i) 
                                     << 4U) | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__test_logic_reset 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__test_logic_reset
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__capture_dr 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__capture_dr
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__shift_dr 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__shift_dr
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__update_dr 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__update_dr
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_ir 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__capture_ir
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__shift_ir
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_ir 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__update_ir
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_d 
                = vlTOPp->__Vtable8_testharness__DOT__core_v_mini_mcu_i__DOT__debug_subsystem_i__DOT__dmi_jtag_i__DOT__i_dmi_jtag_tap__DOT__tap_state_d
                [vlTOPp->__Vtableidx8];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                          >> 5U) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                    >> 4U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit 
                = (((4U == (7U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])) 
                    << 1U) | (0U == (7U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[1U])));
            __Vtemp124[1U] = ((0xffc00000U & ((IData)(
                                                      (0x200000000000ULL 
                                                       | (((QData)((IData)(
                                                                           ((8U 
                                                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                >> 8U) 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                                                << 3U))) 
                                                                            | ((0x400U 
                                                                                & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U])
                                                                                ? 0U
                                                                                : 4U)))) 
                                                           << 0x31U) 
                                                          | (((QData)((IData)(
                                                                              ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                << 0x1aU) 
                                                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                                                >> 6U)))) 
                                                              << 4U) 
                                                             | (QData)((IData)(
                                                                               (0xfU 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                >> 6U)))))))) 
                                              << 0x16U)) 
                              | (IData)(((0x10001ULL 
                                          | ((QData)((IData)(
                                                             ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                               << 0x1aU) 
                                                              | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                                                 >> 6U)))) 
                                             << 0x16U)) 
                                         >> 0x20U)));
            __Vtemp124[2U] = ((0x3fffffU & ((IData)(
                                                    (0x200000000000ULL 
                                                     | (((QData)((IData)(
                                                                         ((8U 
                                                                           & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                               >> 8U) 
                                                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                                                << 3U))) 
                                                                          | ((0x400U 
                                                                              & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U])
                                                                              ? 0U
                                                                              : 4U)))) 
                                                         << 0x31U) 
                                                        | (((QData)((IData)(
                                                                            ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                              << 0x1aU) 
                                                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                                                >> 6U)))) 
                                                            << 4U) 
                                                           | (QData)((IData)(
                                                                             (0xfU 
                                                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                >> 6U)))))))) 
                                            >> 0xaU)) 
                              | (0xffc00000U & ((IData)(
                                                        ((0x200000000000ULL 
                                                          | (((QData)((IData)(
                                                                              ((8U 
                                                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                >> 8U) 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                                                << 3U))) 
                                                                               | ((0x400U 
                                                                                & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U])
                                                                                 ? 0U
                                                                                 : 4U)))) 
                                                              << 0x31U) 
                                                             | (((QData)((IData)(
                                                                                ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                << 0x1aU) 
                                                                                | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                                                >> 6U)))) 
                                                                 << 4U) 
                                                                | (QData)((IData)(
                                                                                (0xfU 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                                >> 6U))))))) 
                                                         >> 0x20U)) 
                                                << 0x16U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                = (IData)((0x10001ULL | ((QData)((IData)(
                                                         ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                           << 0x1aU) 
                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                                             >> 6U)))) 
                                         << 0x16U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                = __Vtemp124[1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                = __Vtemp124[2U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                = (0x3fffffU & ((IData)(((0x200000000000ULL 
                                          | (((QData)((IData)(
                                                              ((8U 
                                                                & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                    >> 8U) 
                                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                                      << 3U))) 
                                                               | ((0x400U 
                                                                   & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U])
                                                                   ? 0U
                                                                   : 4U)))) 
                                              << 0x31U) 
                                             | (((QData)((IData)(
                                                                 ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                   << 0x1aU) 
                                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[3U] 
                                                                     >> 6U)))) 
                                                 << 4U) 
                                                | (QData)((IData)(
                                                                  (0xfU 
                                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[4U] 
                                                                      >> 6U))))))) 
                                         >> 0x20U)) 
                                >> 0xaU));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[5U] 
                = ((0x3ffU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[5U]) 
                   | (0xfffffc00U & ((IData)((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o)) 
                                               << 0x21U) 
                                              | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q)) 
                                                  << 0x20U) 
                                                 | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q))))) 
                                     << 0xaU)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT__slave_resp[6U] 
                = (0xfffU & ((0x3ffU & ((IData)((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o)) 
                                                  << 0x21U) 
                                                 | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q)) 
                                                     << 0x20U) 
                                                    | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q))))) 
                                        >> 0x16U)) 
                             | (0xfffffc00U & ((IData)(
                                                       ((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT____Vcellout__slow_ram_i__gnt_o)) 
                                                          << 0x21U) 
                                                         | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__rvalid_q)) 
                                                             << 0x20U) 
                                                            | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__slow_ram_i__DOT__tc_ram_i__DOT__rdata_q)))) 
                                                        >> 0x20U)) 
                                               << 0xaU))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next 
                = ((1U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit))
                    ? ((0xfffffffeU & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next) 
                       | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_valid__q))
                    : ((2U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit))
                        ? vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT____Vcellout__u_exit_value__q
                        : 0xffffffffU));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error 
                = (1U & (((((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                             >> 5U) & (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U] 
                                          >> 4U))) 
                           | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we)) 
                          & (~ (IData)((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit))))) 
                         | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we) 
                            & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit) 
                                & (0U != (1U & (~ vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U])))) 
                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit) 
                                   >> 1U) & (0U != 
                                             (0xfU 
                                              & (~ 
                                                 vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__out_req_o[2U]))))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit = 0U;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit 
                = ((0xff8U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit)) 
                   | (((8U == (0x3cU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                         << 6U) | (0x3cU 
                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                      >> 0x1aU))))) 
                       << 2U) | (((4U == (0x3cU & (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                    << 6U) 
                                                   | (0x3cU 
                                                      & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                         >> 0x1aU))))) 
                                  << 1U) | (0U == (0x3cU 
                                                   & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                       << 6U) 
                                                      | (0x3cU 
                                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                            >> 0x1aU))))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit 
                = ((0xfc7U & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit)) 
                   | (((0x14U == (0x3cU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                            << 6U) 
                                           | (0x3cU 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                 >> 0x1aU))))) 
                       << 5U) | (((0x10U == (0x3cU 
                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                 << 6U) 
                                                | (0x3cU 
                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                      >> 0x1aU))))) 
                                  << 4U) | ((0xcU == 
                                             (0x3cU 
                                              & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                  << 6U) 
                                                 | (0x3cU 
                                                    & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                       >> 0x1aU))))) 
                                            << 3U))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit 
                = ((0xe3fU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit)) 
                   | (((0x20U == (0x3cU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                            << 6U) 
                                           | (0x3cU 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                 >> 0x1aU))))) 
                       << 8U) | (((0x1cU == (0x3cU 
                                             & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                 << 6U) 
                                                | (0x3cU 
                                                   & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                      >> 0x1aU))))) 
                                  << 7U) | ((0x18U 
                                             == (0x3cU 
                                                 & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                     << 6U) 
                                                    | (0x3cU 
                                                       & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                          >> 0x1aU))))) 
                                            << 6U))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit 
                = ((0x1ffU & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit)) 
                   | (((0x2cU == (0x3cU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                            << 6U) 
                                           | (0x3cU 
                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                 >> 0x1aU))))) 
                       << 0xbU) | (((0x28U == (0x3cU 
                                               & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                   << 6U) 
                                                  | (0x3cU 
                                                     & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                        >> 0x1aU))))) 
                                    << 0xaU) | ((0x24U 
                                                 == 
                                                 (0x3cU 
                                                  & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                      << 6U) 
                                                     | (0x3cU 
                                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                           >> 0x1aU))))) 
                                                << 9U))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk 
                = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                    >> 0xaU) & ((0U == (3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                              >> 2U)))
                                 ? (0U != (0xfU & (
                                                   ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                     << 0xaU) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                       >> 0x16U)) 
                                                   & ((IData)(1U) 
                                                      << 
                                                      (3U 
                                                       & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                           << 6U) 
                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                             >> 0x1aU)))))))
                                 : ((1U == (3U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                  >> 2U)))
                                     ? ((0x8000000U 
                                         & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U])
                                         ? (3U == (3U 
                                                   & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                       << 8U) 
                                                      | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                         >> 0x18U))))
                                         : (3U == (3U 
                                                   & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                       << 0xaU) 
                                                      | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                         >> 0x16U)))))
                                     : ((2U == (3U 
                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                   >> 2U))) 
                                        & (0xfU == 
                                           (0xfU & 
                                            ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                              << 0xaU) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                >> 0x16U))))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                          >> 0xaU) & ((0U == (3U & 
                                              (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 2U))) 
                                      | ((1U == (3U 
                                                 & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                    >> 2U)))
                                          ? (~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                >> 0x1aU))
                                          : ((2U == 
                                              (3U & 
                                               (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                >> 2U))) 
                                             & (~ (IData)(
                                                          (0U 
                                                           != 
                                                           (3U 
                                                            & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                                << 6U) 
                                                               | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                                  >> 0x1aU)))))))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                          >> 0xaU) & ((0U == (3U & 
                                              (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                               >> 2U)))
                                       ? (~ (IData)(
                                                    (0U 
                                                     != 
                                                     (0xfU 
                                                      & (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                           << 0xaU) 
                                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                             >> 0x16U)) 
                                                         & (~ 
                                                            ((IData)(1U) 
                                                             << 
                                                             (3U 
                                                              & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                                  << 6U) 
                                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                                    >> 0x1aU))))))))))
                                       : ((1U == (3U 
                                                  & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                     >> 2U)))
                                           ? ((0x8000000U 
                                               & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U])
                                               ? (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (3U 
                                                              & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                                  << 0xaU) 
                                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                                    >> 0x16U))))))
                                               : (~ (IData)(
                                                            (0U 
                                                             != 
                                                             (0xcU 
                                                              & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                                  << 0xaU) 
                                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                                    >> 0x16U)))))))
                                           : (2U == 
                                              (3U & 
                                               (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                >> 2U)))))));
            vlTOPp->__Vfunc_tl_a_user_chk__47__user 
                = (0x1fffffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                 << 0x1fU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                              >> 1U)));
            vlTOPp->__Vfunc_tl_a_user_chk__47__malformed_err 
                = (1U & (~ ((1U == (3U & (vlTOPp->__Vfunc_tl_a_user_chk__47__user 
                                          >> 0xeU))) 
                            | (2U == (3U & (vlTOPp->__Vfunc_tl_a_user_chk__47__user 
                                            >> 0xeU))))));
            vlTOPp->__Vfunc_tl_a_user_chk__47__Vfuncout 
                = vlTOPp->__Vfunc_tl_a_user_chk__47__malformed_err;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err 
                = vlTOPp->__Vfunc_tl_a_user_chk__47__Vfuncout;
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                          >> 0xaU) & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U]));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o 
                = ((0x200000000ULL & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o) 
                   | (((QData)((IData)((1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[2U] 
                                               >> 1U) 
                                              & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U])))) 
                       << 0x20U) | (QData)((IData)(
                                                   ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[1U] 
                                                     << 0x10U) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__tl_reg_d2h[0U] 
                                                       >> 0x10U))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_valid_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__exit_value_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
                   & (4U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                   >> 7U))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__a_ack) 
                   & ((0U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                    >> 7U))) | (1U 
                                                == 
                                                (7U 
                                                 & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                    >> 7U)))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[0U] 
                = (IData)((0x100000000ULL | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error)) 
                                              << 0x21U) 
                                             | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next)))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[1U] 
                = ((0xfffffffcU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o) 
                                   << 2U)) | (IData)(
                                                     ((0x100000000ULL 
                                                       | (((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_error)) 
                                                           << 0x21U) 
                                                          | (QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__soc_ctrl_i__DOT__soc_ctrl_reg_top_i__DOT__reg_rdata_next)))) 
                                                      >> 0x20U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[2U] 
                = ((3U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o) 
                          >> 0x1eU)) | (0xfffffffcU 
                                        & ((IData)(
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_to_tlul_i__reg_rsp_o 
                                                    >> 0x20U)) 
                                           << 2U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal 
                = (1U & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                           & (0U != (3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                            << 6U) 
                                           | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                              >> 0x1aU))))) 
                          | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__malformed_meta_err)) 
                         | ((~ ((((0U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                >> 7U))) 
                                  | (1U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                  >> 7U)))) 
                                 | (4U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                 >> 7U)))) 
                                & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__addr_sz_chk) 
                                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__mask_chk)) 
                                   & (((4U == (7U & 
                                               (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                >> 7U))) 
                                       | (1U == (7U 
                                                 & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                    >> 7U)))) 
                                      | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__u_err__DOT__fulldata_chk))))) 
                            | ((1U == (3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                              << 0x11U) 
                                             | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                >> 0xfU)))) 
                               & ((0U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                >> 7U))) 
                                  | (1U == (7U & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[3U] 
                                                  >> 7U))))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o 
                = (0x3ffffffffULL & ((0x43U >= (0x7fU 
                                                & ((IData)(0x22U) 
                                                   * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o))))
                                      ? (((0U == (0x1fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o))))
                                           ? 0ULL : 
                                          ((QData)((IData)(
                                                           vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[
                                                           ((IData)(2U) 
                                                            + 
                                                            (3U 
                                                             & (((IData)(0x22U) 
                                                                 * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o)) 
                                                                >> 5U)))])) 
                                           << ((IData)(0x40U) 
                                               - (0x1fU 
                                                  & ((IData)(0x22U) 
                                                     * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o)))))) 
                                         | (((QData)((IData)(
                                                             vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[
                                                             ((IData)(1U) 
                                                              + 
                                                              (3U 
                                                               & (((IData)(0x22U) 
                                                                   * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o)) 
                                                                  >> 5U)))])) 
                                             << ((0U 
                                                  == 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o))))
                                                  ? 0x20U
                                                  : 
                                                 ((IData)(0x20U) 
                                                  - 
                                                  (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o)))))) 
                                            | ((QData)((IData)(
                                                               vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__peripheral_slv_rsp[
                                                               (3U 
                                                                & (((IData)(0x22U) 
                                                                    * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o)) 
                                                                   >> 5U))])) 
                                               >> (0x1fU 
                                                   & ((IData)(0x22U) 
                                                      * (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__i_addr_decode_soc_regbus_periph_xbar__idx_o))))))
                                      : vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__reg_demux_i__DOT____Vxrand2));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__rd_req) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__wr_req) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__u_reg_if__DOT__err_internal)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__periph_to_reg_i__gnt_o 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__system_bus_i__DOT____Vcellout__system_xbar_i__slave_req_o[0xaU] 
                          >> 0x1dU) & (IData)((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT____Vcellout__reg_demux_i__in_rsp_o 
                                               >> 0x20U))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wr_err 
                = ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                   & (((((((((((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                 & (0U != (1U & (~ 
                                                 ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                     >> 0x16U)))))) 
                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                    >> 1U) & (0U != 
                                              (1U & 
                                               (~ (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                    << 0xaU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                      >> 0x16U))))))) 
                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                   >> 2U) & (0U != 
                                             (1U & 
                                              (~ ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                     >> 0x16U))))))) 
                              | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                  >> 3U) & (0U != (0xfU 
                                                   & (~ 
                                                      ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                        << 0xaU) 
                                                       | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                          >> 0x16U))))))) 
                             | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                 >> 4U) & (0U != (1U 
                                                  & (~ 
                                                     ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                       << 0xaU) 
                                                      | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                         >> 0x16U))))))) 
                            | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                >> 5U) & (0U != (1U 
                                                 & (~ 
                                                    ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                      << 0xaU) 
                                                     | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                        >> 0x16U))))))) 
                           | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                               >> 6U) & (0U != (1U 
                                                & (~ 
                                                   ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                     << 0xaU) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                       >> 0x16U))))))) 
                          | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                              >> 7U) & (0U != (1U & 
                                               (~ (
                                                   (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                    << 0xaU) 
                                                   | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                      >> 0x16U))))))) 
                         | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                             >> 8U) & (0U != (7U & 
                                              (~ ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                     >> 0x16U))))))) 
                        | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                            >> 9U) & (0U != (1U & (~ 
                                                   ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                     << 0xaU) 
                                                    | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                       >> 0x16U))))))) 
                       | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                           >> 0xaU) & (0U != (3U & 
                                              (~ ((
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                   << 0xaU) 
                                                  | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                     >> 0x16U))))))) 
                      | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                          >> 0xbU) & (0U != (0xfU & 
                                             (~ ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[2U] 
                                                  << 0xaU) 
                                                 | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[1U] 
                                                    >> 0x16U))))))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                     | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                    & (~ (IData)((0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit))))) 
                   | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wr_err));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_watermark_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_watermark_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_tx_empty_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_overflow_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_frame_err_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_break_err_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_timeout_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_enable_rx_parity_err_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 1U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_tx_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rx_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nf_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_slpbk_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_llpbk_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_en_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_parity_odd_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_rxblvl_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ctrl_nco_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 3U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__wdata_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 6U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxrst_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 7U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txrst_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 7U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_rxilvl_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 7U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__fifo_ctrl_txilvl_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 7U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txen_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 9U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__ovrd_txval_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 9U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_val_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 0xbU) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__timeout_ctrl_en_we 
                = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                     >> 0xbU) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_watermark_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_watermark_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_tx_empty_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_overflow_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_frame_err_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_break_err_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_timeout_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__intr_state_rx_parity_err_we 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                    & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)));
            __Vtemp126[0U] = (IData)((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q)) 
                                       << 0x15U) | (QData)((IData)(
                                                                   ((0xfff80000U 
                                                                     & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                          << 0xfU) 
                                                                         & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                            << 0x13U)) 
                                                                        & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                           << 0x13U))) 
                                                                    | ((0xfffe0000U 
                                                                        & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                             << 0xdU) 
                                                                            & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                               << 0x11U)) 
                                                                           & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                              << 0x11U))) 
                                                                       | ((0xffff8000U 
                                                                           & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xbU) 
                                                                               & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                                << 0xfU)) 
                                                                              & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xfU))) 
                                                                          | ((0xffffe000U 
                                                                              & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 9U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                                << 0xdU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xdU))) 
                                                                             | ((0xfffff800U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 7U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                                << 0xbU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xbU))) 
                                                                                | ((0xfffffe00U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 5U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                                << 9U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 9U))) 
                                                                                | ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 5U) 
                                                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re)) 
                                                                                & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))))))))))));
            __Vtemp126[1U] = ((0xffffffe0U & ((IData)(
                                                      ((((QData)((IData)(
                                                                         (((((((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U)))))))) 
                                                                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U))))) 
                                                                              | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U))))) 
                                                                             | ((0x8000U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 7U)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0xaU)) 
                                                                                | (0xfffff000U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xcU))))))) 
                                                                            | ((0x800U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0xdU)) 
                                                                               | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x10U)) 
                                                                                | (0xffffff00U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 8U))))))) 
                                                                           | ((0x80U 
                                                                               & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x13U)) 
                                                                              | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x16U)) 
                                                                                | (0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 4U))))))) 
                                                                          | ((8U 
                                                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x19U)) 
                                                                             | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x1cU)) 
                                                                                | ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error))))))))) 
                                                         << 9U) 
                                                        | ((QData)((IData)(
                                                                           (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                             << 3U) 
                                                                            | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                                << 2U) 
                                                                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q)))))) 
                                                           << 5U)) 
                                                       | (QData)((IData)(
                                                                         (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                           << 4U) 
                                                                          | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                              << 3U) 
                                                                             | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q)))))))) 
                                              << 5U)) 
                              | (IData)(((((QData)((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nco__q)) 
                                           << 0x15U) 
                                          | (QData)((IData)(
                                                            ((0xfff80000U 
                                                              & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                   << 0xfU) 
                                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                     << 0x13U)) 
                                                                 & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                    << 0x13U))) 
                                                             | ((0xfffe0000U 
                                                                 & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                      << 0xdU) 
                                                                     & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                        << 0x11U)) 
                                                                    & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                       << 0x11U))) 
                                                                | ((0xffff8000U 
                                                                    & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                         << 0xbU) 
                                                                        & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                           << 0xfU)) 
                                                                       & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                          << 0xfU))) 
                                                                   | ((0xffffe000U 
                                                                       & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                            << 9U) 
                                                                           & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                              << 0xdU)) 
                                                                          & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                             << 0xdU))) 
                                                                      | ((0xfffff800U 
                                                                          & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                               << 7U) 
                                                                              & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                                << 0xbU)) 
                                                                             & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xbU))) 
                                                                         | ((0xfffffe00U 
                                                                             & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 5U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re) 
                                                                                << 9U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 9U))) 
                                                                            | ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 5U) 
                                                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_re)) 
                                                                               & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)))))))))))) 
                                         >> 0x20U)));
            __Vtemp126[2U] = ((0x1fU & ((IData)(((((QData)((IData)(
                                                                   (((((((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                           << 0x1fU) 
                                                                          | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                              << 0x1eU) 
                                                                             | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U)))))))) 
                                                                         | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                             << 0x17U) 
                                                                            | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U))))) 
                                                                        | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                            << 0x13U) 
                                                                           | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                               << 0x12U) 
                                                                              | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U))))) 
                                                                       | ((0x8000U 
                                                                           & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                              >> 7U)) 
                                                                          | ((0xffffc000U 
                                                                              & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xeU))) 
                                                                             | ((0x2000U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0xaU)) 
                                                                                | (0xfffff000U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xcU))))))) 
                                                                      | ((0x800U 
                                                                          & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                             >> 0xdU)) 
                                                                         | ((0xfffffc00U 
                                                                             & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xaU))) 
                                                                            | ((0x200U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x10U)) 
                                                                               | (0xffffff00U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 8U))))))) 
                                                                     | ((0x80U 
                                                                         & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                            >> 0x13U)) 
                                                                        | ((0xffffffc0U 
                                                                            & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                               & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 6U))) 
                                                                           | ((0x20U 
                                                                               & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x16U)) 
                                                                              | (0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 4U))))))) 
                                                                    | ((8U 
                                                                        & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                           >> 0x19U)) 
                                                                       | ((0xfffffffcU 
                                                                           & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                               & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                              & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 2U))) 
                                                                          | ((2U 
                                                                              & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x1cU)) 
                                                                             | ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error))))))))) 
                                                   << 9U) 
                                                  | ((QData)((IData)(
                                                                     (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                       << 3U) 
                                                                      | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                          << 2U) 
                                                                         | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                             << 1U) 
                                                                            | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q)))))) 
                                                     << 5U)) 
                                                 | (QData)((IData)(
                                                                   (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                     << 4U) 
                                                                    | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                        << 3U) 
                                                                       | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                           << 2U) 
                                                                          | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q)))))))) 
                                        >> 0x1bU)) 
                              | (0xffffffe0U & ((IData)(
                                                        (((((QData)((IData)(
                                                                            (((((((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_watermark__q) 
                                                                                << 0x1fU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_watermark__q) 
                                                                                << 0x1eU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_tx_empty__q) 
                                                                                << 0x1dU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_overflow__q) 
                                                                                << 0x1cU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_frame_err__q) 
                                                                                << 0x1bU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_break_err__q) 
                                                                                << 0x1aU) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_timeout__q) 
                                                                                << 0x19U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_state_rx_parity_err__q) 
                                                                                << 0x18U)))))))) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_watermark__q) 
                                                                                << 0x17U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_watermark__q) 
                                                                                << 0x16U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_tx_empty__q) 
                                                                                << 0x15U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_overflow__q) 
                                                                                << 0x14U))))) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_frame_err__q) 
                                                                                << 0x13U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_break_err__q) 
                                                                                << 0x12U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_timeout__q) 
                                                                                << 0x11U) 
                                                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_intr_enable_rx_parity_err__q) 
                                                                                << 0x10U))))) 
                                                                                | ((0x8000U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 7U)) 
                                                                                | ((0xffffc000U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xcU) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xeU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xeU))) 
                                                                                | ((0x2000U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0xaU)) 
                                                                                | (0xfffff000U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 0xaU) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xcU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xcU))))))) 
                                                                               | ((0x800U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0xdU)) 
                                                                                | ((0xfffffc00U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 8U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 0xaU)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 0xaU))) 
                                                                                | ((0x200U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x10U)) 
                                                                                | (0xffffff00U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 6U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 8U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 8U))))))) 
                                                                              | ((0x80U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x13U)) 
                                                                                | ((0xffffffc0U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 4U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 6U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 6U))) 
                                                                                | ((0x20U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x16U)) 
                                                                                | (0xfffffff0U 
                                                                                & ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                << 2U) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 4U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 4U))))))) 
                                                                             | ((8U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x19U)) 
                                                                                | ((0xfffffffcU 
                                                                                & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we) 
                                                                                << 2U)) 
                                                                                & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error)) 
                                                                                << 2U))) 
                                                                                | ((2U 
                                                                                & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_tl_h2d[0U] 
                                                                                >> 0x1cU)) 
                                                                                | ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__addr_hit) 
                                                                                >> 2U) 
                                                                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_we)) 
                                                                                & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT__reg_error))))))))) 
                                                            << 9U) 
                                                           | ((QData)((IData)(
                                                                              (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_tx__q) 
                                                                                << 3U) 
                                                                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rx__q) 
                                                                                << 2U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_nf__q) 
                                                                                << 1U) 
                                                                                | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_slpbk__q)))))) 
                                                              << 5U)) 
                                                          | (QData)((IData)(
                                                                            (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_llpbk__q) 
                                                                              << 4U) 
                                                                             | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_en__q) 
                                                                                << 3U) 
                                                                                | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_parity_odd__q) 
                                                                                << 2U) 
                                                                                | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ctrl_rxblvl__q))))))) 
                                                         >> 0x20U)) 
                                                << 5U)));
            __Vtemp129[1U] = ((7U & ((7U & ((__Vtemp126[0U] 
                                             >> 0xcU) 
                                            | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                >> 0x14U) 
                                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                   >> 0x15U) 
                                                  | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                      >> 0x16U) 
                                                     | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                        >> 0x17U)))))) 
                                     | ((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                               >> 0x18U)) 
                                        | ((7U & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                  >> 0x19U)) 
                                           | ((7U & 
                                               ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                >> 0x1cU)) 
                                              | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                 >> 0x1dU)))))) 
                              | (0xfffffff8U & ((0x1f8U 
                                                 & ((__Vtemp126[0U] 
                                                     >> 0xcU) 
                                                    | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                        >> 0x14U) 
                                                       | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                           >> 0x15U) 
                                                          | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                              >> 0x16U) 
                                                             | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                >> 0x17U)))))) 
                                                | (0xfffffe00U 
                                                   & ((0xffe00U 
                                                       & (__Vtemp126[0U] 
                                                          >> 0xcU)) 
                                                      | (0xfff00000U 
                                                         & (__Vtemp126[1U] 
                                                            << 0x14U)))))));
            __Vtemp129[2U] = ((7U & (__Vtemp126[1U] 
                                     >> 0xcU)) | (0xfffffff8U 
                                                  & ((0x1f8U 
                                                      & (__Vtemp126[1U] 
                                                         >> 0xcU)) 
                                                     | (0xfffffe00U 
                                                        & ((0xffe00U 
                                                            & (__Vtemp126[1U] 
                                                               >> 0xcU)) 
                                                           | (0xfff00000U 
                                                              & (__Vtemp126[2U] 
                                                                 << 0x14U)))))));
            __Vtemp131[0U] = ((0xfe000000U & ((0xf8000000U 
                                               & ((0xc0000000U 
                                                   & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                       << 0x1fU) 
                                                      | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                         << 0x1eU))) 
                                                  | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                      << 0x1cU) 
                                                     | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                        << 0x1bU)))) 
                                              | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                  << 0x1aU) 
                                                 | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                    << 0x19U)))) 
                              | ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_val__q 
                                  << 1U) | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_timeout_ctrl_en__q)));
            __Vtemp131[1U] = ((0x1ffffffU & ((0x1ffffffU 
                                              & (((0x1fffff0U 
                                                   & ((0x1ff8000U 
                                                       & (__Vtemp126[0U] 
                                                          << 0xfU)) 
                                                      | ((0x1ffff80U 
                                                          & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                             << 7U)) 
                                                         | ((0x1ffffc0U 
                                                             & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                << 6U)) 
                                                            | ((0x1ffffe0U 
                                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                   << 5U)) 
                                                               | (0x1fffff0U 
                                                                  & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                     << 4U))))))) 
                                                  | ((0x1fffff8U 
                                                      & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                         << 3U)) 
                                                     | ((0x1fffffcU 
                                                         & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                            << 2U)) 
                                                        | (0x1ffffffU 
                                                           & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                               >> 1U) 
                                                              | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                 >> 2U)))))) 
                                                 | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                     >> 4U) 
                                                    | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                       >> 5U)))) 
                                             | ((0x1ffffffU 
                                                 & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txen__q) 
                                                    >> 6U)) 
                                                | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_ovrd_txval__q) 
                                                   >> 7U)))) 
                              | (0xfe000000U & ((0x6000000U 
                                                 & (((0xfe000000U 
                                                      & ((__Vtemp126[0U] 
                                                          << 0xfU) 
                                                         | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__q) 
                                                             << 7U) 
                                                            | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_wdata__qe) 
                                                                << 6U) 
                                                               | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__q) 
                                                                   << 5U) 
                                                                  | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxrst__qe) 
                                                                     << 4U)))))) 
                                                     | ((0xfe000000U 
                                                         & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__q) 
                                                            << 3U)) 
                                                        | ((0xfe000000U 
                                                            & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txrst__qe) 
                                                               << 2U)) 
                                                           | ((0x7e000000U 
                                                               & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__q) 
                                                                  >> 1U)) 
                                                              | (0x3e000000U 
                                                                 & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_rxilvl__qe) 
                                                                    >> 2U)))))) 
                                                    | (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__q) 
                                                        >> 4U) 
                                                       | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__u_reg__DOT____Vcellout__u_fifo_ctrl_txilvl__qe) 
                                                          >> 5U)))) 
                                                | (0xf8000000U 
                                                   & (__Vtemp129[1U] 
                                                      << 0x1bU)))));
            __Vtemp131[2U] = ((0x1ffffffU & (__Vtemp129[1U] 
                                             >> 5U)) 
                              | (0xfe000000U & ((0x6000000U 
                                                 & (__Vtemp129[1U] 
                                                    >> 5U)) 
                                                | (0xf8000000U 
                                                   & (__Vtemp129[2U] 
                                                      << 0x1bU)))));
            __Vtemp131[3U] = ((0x1ffffffU & (__Vtemp129[2U] 
                                             >> 5U)) 
                              | (0xfe000000U & ((0x6000000U 
                                                 & (__Vtemp129[2U] 
                                                    >> 5U)) 
                                                | (0x38000000U 
                                                   & (__Vtemp126[2U] 
                                                      << 0xfU)))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                = __Vtemp131[0U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                = __Vtemp131[1U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                = __Vtemp131[2U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                = __Vtemp131[3U];
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_rxrst 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                          >> 5U) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                    >> 4U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_fifo_txrst 
                = (1U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                          >> 3U) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                    >> 2U)));
            vlTOPp->testharness__DOT__uart_tx = ((0x1000000U 
                                                  & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                                                  ? (IData)(vlTOPp->testharness__DOT__uart_rx)
                                                  : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_out_q));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in 
                = (1U & ((0x2000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                          ? (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__tx_q)
                          : ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                              >> 0x18U) | ((0x4000000U 
                                            & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                                            ? (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync) 
                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1) 
                                                   | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2))) 
                                               | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q1) 
                                                  & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync_q2)))
                                            : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_sync)))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_frame_err__DOT__new_event 
                = (1U & (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                           >> 3U) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                     >> 4U)) | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_timeout 
                = ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_timeout_count_q 
                    == (0xffffffU & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[1U] 
                                      << 0x1fU) | (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U] 
                                                   >> 1U)))) 
                   & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[0U]);
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__tx_uart_idle 
                = (1U & ((~ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                             >> 0x1cU)) | (0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_tx__DOT__bit_cnt_q))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_parity_err 
                = (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                     >> 0x17U) & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q)) 
                   & (VL_REDXOR_32((0x1ffU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                              >> 1U))) 
                      ^ (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                         >> 0x16U)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data 
                = (0xffU & ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                             ? ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                >> 1U) : ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                          >> 2U)));
            if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q;
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                         & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_d 
                            = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                 == ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                                      ? 0xbU : 0xaU)) 
                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in)) 
                               | (1U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q)));
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_d = 1U;
            }
            if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q;
                if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d 
                        = (0xfU & ((IData)(1U) + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)));
                }
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 8U;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_d = 0U;
            }
            if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q;
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                        = ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                            ? 0xbU : 0xaU);
                } else {
                    if (((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                         & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                        vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d 
                            = ((((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                 == ((0x800000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                                      ? 0xbU : 0xaU)) 
                                & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in))
                                ? 0U : (0xfU & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                                - (IData)(1U))));
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_d = 0U;
            }
            if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
                if ((0x10000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__nco_sum_q)) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d 
                        = (1U & (((IData)(1U) + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__baud_div_q)) 
                                 >> 4U));
                }
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_d = 0U;
            }
            if ((0x8000000U & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])) {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                    = vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q;
                if (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q) 
                     & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in)))) {
                    vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
                } else {
                    if (((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__idle_q)) 
                         & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__tick_baud_q))) {
                        if ((1U & (~ (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__bit_cnt_q) 
                                       == ((0x800000U 
                                            & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U])
                                            ? 0xbU : 0xaU)) 
                                      & (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in))))) {
                            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_d 
                                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_in) 
                                    << 0xaU) | (0x3ffU 
                                                & ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_q) 
                                                   >> 1U)));
                        }
                    }
                }
            } else {
                vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__sreg_d = 0U;
            }
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_timeout__DOT__new_event 
                = (1U & (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                           >> 0x1fU) & vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U]) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_timeout)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_parity_err__DOT__new_event 
                = (1U & (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                           >> 0x1dU) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                        >> 0x1eU)) 
                         | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_parity_err)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_wvalid 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                    & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err))) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_parity_err)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d 
                = (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q) 
                    | ((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__uart_rx__DOT__rx_valid_q) 
                       & ((~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err)) 
                          | (0U != (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data)))))
                    ? 0U : (0x1fU & (((IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_frame_err) 
                                      & (0U == (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__rx_fifo_data)))
                                      ? ((IData)(1U) 
                                         + (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_q))
                                      : (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_q))));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_break_err 
                = (((0U == (3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                   << 0xcU) | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                               >> 0x14U))))
                     ? (2U <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))
                     : ((1U == (3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                       << 0xcU) | (
                                                   vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                                   >> 0x14U))))
                         ? (4U <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))
                         : ((2U == (3U & ((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                           << 0xcU) 
                                          | (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[2U] 
                                             >> 0x14U))))
                             ? (8U <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))
                             : (0x10U <= (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__allzero_cnt_d))))) 
                   & (~ (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__break_st_q)));
            vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__intr_hw_rx_break_err__DOT__new_event 
                = (1U & (((vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                           >> 1U) & (vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__reg2hw[3U] 
                                     >> 2U)) | (IData)(vlTOPp->testharness__DOT__core_v_mini_mcu_i__DOT__peripheral_subsystem_i__DOT__uart_i__DOT__uart_core__DOT__event_rx_break_err)));
        }
