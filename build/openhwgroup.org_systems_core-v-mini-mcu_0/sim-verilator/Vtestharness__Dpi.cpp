// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call Vtestharness::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "Vtestharness__Dpi.h"
#include "Vtestharness.h"

#ifndef VL_DPIDECL_simutil_get_scramble_key_
#define VL_DPIDECL_simutil_get_scramble_key_
int simutil_get_scramble_key(svBitVecVal* val) {
    // DPI export at ../../../hw/vendor/openhwgroup_cv32e20/rtl/ibex_if_stage.sv:316:28
    return Vtestharness::simutil_get_scramble_key(val);
}
#endif

#ifndef VL_DPIDECL_simutil_get_scramble_nonce_
#define VL_DPIDECL_simutil_get_scramble_nonce_
int simutil_get_scramble_nonce(svBitVecVal* nonce) {
    // DPI export at ../../../hw/vendor/openhwgroup_cv32e20/rtl/ibex_if_stage.sv:319:28
    return Vtestharness::simutil_get_scramble_nonce(nonce);
}
#endif

#ifndef VL_DPIDECL_tb_getMemSize_
#define VL_DPIDECL_tb_getMemSize_
void tb_getMemSize(int* mem_size) {
    // DPI export at ../../../tb/tb_util.svh:17:6
    return Vtestharness::tb_getMemSize(mem_size);
}
#endif

#ifndef VL_DPIDECL_tb_loadHEX_
#define VL_DPIDECL_tb_loadHEX_
void tb_loadHEX(const char* file) {
    // DPI export at ../../../tb/tb_util.svh:28:6
    return Vtestharness::tb_loadHEX(file);
}
#endif

#ifndef VL_DPIDECL_tb_readHEX_
#define VL_DPIDECL_tb_readHEX_
void tb_readHEX(const char* file, svLogicVecVal* stimuli) {
    // DPI export at ../../../tb/tb_util.svh:22:6
    return Vtestharness::tb_readHEX(file, stimuli);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram_
#define VL_DPIDECL_tb_writetoSram_
void tb_writetoSram(const svLogicVecVal* addr, const svLogicVecVal* val, svLogicVecVal* retval) {
    // DPI export at ../../../tb/tb_util.svh:45:6
    return Vtestharness::tb_writetoSram(addr, val, retval);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram0_
#define VL_DPIDECL_tb_writetoSram0_
void tb_writetoSram0(const svLogicVecVal* addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:68:6
    return Vtestharness::tb_writetoSram0(addr, val3, val2, val1, val0);
}
#endif

#ifndef VL_DPIDECL_tb_writetoSram1_
#define VL_DPIDECL_tb_writetoSram1_
void tb_writetoSram1(const svLogicVecVal* addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0) {
    // DPI export at ../../../tb/tb_util.svh:82:6
    return Vtestharness::tb_writetoSram1(addr, val3, val2, val1, val0);
}
#endif

