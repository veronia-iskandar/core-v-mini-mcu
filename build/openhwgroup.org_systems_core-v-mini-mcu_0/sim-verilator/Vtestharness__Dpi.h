// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif
    
    
    // DPI EXPORTS
    // DPI export at ../../../hw/vendor/openhwgroup_cv32e20/rtl/ibex_if_stage.sv:316:28
    extern int simutil_get_scramble_key(svBitVecVal* val);
    // DPI export at ../../../hw/vendor/openhwgroup_cv32e20/rtl/ibex_if_stage.sv:319:28
    extern int simutil_get_scramble_nonce(svBitVecVal* nonce);
    // DPI export at ../../../tb/tb_util.svh:17:6
    extern void tb_getMemSize(int* mem_size);
    // DPI export at ../../../tb/tb_util.svh:28:6
    extern void tb_loadHEX(const char* file);
    // DPI export at ../../../tb/tb_util.svh:22:6
    extern void tb_readHEX(const char* file, svLogicVecVal* stimuli);
    // DPI export at ../../../tb/tb_util.svh:45:6
    extern void tb_writetoSram(const svLogicVecVal* addr, const svLogicVecVal* val, svLogicVecVal* retval);
    // DPI export at ../../../tb/tb_util.svh:68:6
    extern void tb_writetoSram0(const svLogicVecVal* addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    // DPI export at ../../../tb/tb_util.svh:82:6
    extern void tb_writetoSram1(const svLogicVecVal* addr, const svLogicVecVal* val3, const svLogicVecVal* val2, const svLogicVecVal* val1, const svLogicVecVal* val0);
    
    // DPI IMPORTS
    // DPI import at ../../../hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:32:9
    extern int uartdpi_can_read(void* ctx);
    // DPI import at ../../../hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:26:10
    extern void uartdpi_close(void* ctx);
    // DPI import at ../../../hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:23:13
    extern void* uartdpi_create(const char* name, const char* log_file_path);
    // DPI import at ../../../hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:29:10
    extern char uartdpi_read(void* ctx);
    // DPI import at ../../../hw/vendor/lowrisc_opentitan/hw/dv/dpi/uartdpi/uartdpi.sv:35:10
    extern void uartdpi_write(void* ctx, int data);
    
#ifdef __cplusplus
}
#endif
