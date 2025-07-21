// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┐
     * │MO(1) │ NUM  │   /  │   *  │   -  │
     * ├───┼───┼───┼───┼───┤
     * │MO(2) │   7  │   8  │   9  │   +  │
     * ├───┼───┼───┼───┼───┤
     * │MO(3) │   4  │   5  │   6  │   =  │
     * ├───┼───┼───┼───┼───┤
     * │MO(4) │   1  │   2  │   3  │  SPC │
     * ├───┼───┼───┼───┼───┤
     * │MO(5) │   0  │   .  │   ,  │  Ent │
     * └───┴───┴───┴───┴───┘
     */
    [0] = LAYOUT(
      MO(1),  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      MO(2),  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      MO(3),  KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
      MO(4),  KC_P1,   KC_P2,   KC_P3,   KC_SPC,
      MO(5),  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [1] = LAYOUT(
      MO(1),  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      MO(2),  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      MO(3),  KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
      MO(4),  KC_P1,   KC_P2,   KC_P3,   KC_SPC,
      MO(5),  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [2] = LAYOUT(
      MO(1),  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      MO(2),  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      MO(3),  KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
      MO(4),  KC_P1,   KC_P2,   KC_P3,   KC_SPC,
      MO(5),  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [3] = LAYOUT(
      MO(1),  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      MO(2),  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      MO(3),  KC_P4,   KC_P5,   KC_P6,   KC_PEQL,
      MO(4),  KC_P1,   KC_P2,   KC_P3,   KC_SPC,
      MO(5),  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    )};
