// Copyright lowRISC contributors.
// Licensed under the Apache License, Version 2.0, see LICENSE for details.
// SPDX-License-Identifier: Apache-2.0

// This file is auto-generated.


// This is to prevent AscentLint warnings in the generated
// abstract prim wrapper. These warnings occur due to the .*
// use. TODO: we may want to move these inline waivers
// into a separate, generated waiver file for consistency.
//ri lint_check_off OUTPUT_NOT_DRIVEN INPUT_NOT_READ
module prim_clock_gating

#(

  parameter bit NoFpgaGate = 1'b0 // this parameter has no function in generic

) (
  input        clk_i,
  input        en_i,
  input        test_en_i,
  output logic clk_o
);

  if (1) begin : gen_generic
    prim_generic_clock_gating #(
      .NoFpgaGate(NoFpgaGate)
    ) u_impl_generic (
      .*
    );

  end

endmodule
//ri lint_check_on OUTPUT_NOT_DRIVEN INPUT_NOT_READ
