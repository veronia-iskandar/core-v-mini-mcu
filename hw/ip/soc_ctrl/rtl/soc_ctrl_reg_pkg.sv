// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0
//
// Register Package auto-generated by `reggen` containing data structure

package soc_ctrl_reg_pkg;

  // Address widths within the block
  parameter int BlockAw = 3;

  ////////////////////////////
  // Typedefs for registers //
  ////////////////////////////

  typedef struct packed {logic q;} soc_ctrl_reg2hw_exit_valid_reg_t;

  typedef struct packed {logic [31:0] q;} soc_ctrl_reg2hw_exit_value_reg_t;

  // Register -> HW type
  typedef struct packed {
    soc_ctrl_reg2hw_exit_valid_reg_t exit_valid;  // [32:32]
    soc_ctrl_reg2hw_exit_value_reg_t exit_value;  // [31:0]
  } soc_ctrl_reg2hw_t;

  // Register offsets
  parameter logic [BlockAw-1:0] SOC_CTRL_EXIT_VALID_OFFSET = 3'h0;
  parameter logic [BlockAw-1:0] SOC_CTRL_EXIT_VALUE_OFFSET = 3'h4;

  // Register index
  typedef enum int {
    SOC_CTRL_EXIT_VALID,
    SOC_CTRL_EXIT_VALUE
  } soc_ctrl_id_e;

  // Register width information to check illegal writes
  parameter logic [3:0] SOC_CTRL_PERMIT[2] = '{
      4'b0001,  // index[0] SOC_CTRL_EXIT_VALID
      4'b1111  // index[1] SOC_CTRL_EXIT_VALUE
  };

endpackage

