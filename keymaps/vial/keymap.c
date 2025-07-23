// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌─────┬─────┬─────┬─────┬─────┐
     * │ ESC │ NUM │  /  │  *  │  -  │
     * ├─────┼─────┼─────┼─────┼─────┤
     * │ TAB │  7  │  8  │  9  │  +  │
     * ├─────┼─────┼─────┼─────┼─────┤
     * │TO(1)│  4  │  5  │  6  │  =  │
     * ├─────┼─────┼─────┼─────┼─────┤
     * │LSFT │  1  │  2  │  3  │BSPC │
     * ├─────┼─────┼─────┼─────┼─────┤
     * │LCTL │  0  │  .  │  ,  │ Ent │
     * └─────┴─────┴─────┴─────┴─────┘
     */
    [0] = LAYOUT(
      KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      TO(1),  KC_P4,   KC_P5,   KC_P6,   KC_EQL,
      KC_LSFT,  KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
      KC_LCTL,  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [1] = LAYOUT(
      KC_ESC,  KC_B,  KC_N, KC_BSLS, KC_PSCR,
      KC_TAB,  KC_PAST,   KC_PDOT,   KC_P0,   KC_PPLS,
      TO(0),  KC_P4,   KC_W,   KC_P6,   KC_P8,
      KC_LSFT,  KC_A,   KC_S,   KC_D,   KC_P2,
      KC_LCTL,  KC_Z,  KC_PSLS, KC_M, KC_SPC
    ),
    [2] = LAYOUT(
      KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      TO(1),  KC_P4,   KC_P5,   KC_P6,   KC_EQL,
      KC_LSFT,  KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
      KC_LCTL,  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [3] = LAYOUT(
      KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      TO(1),  KC_P4,   KC_P5,   KC_P6,   KC_EQL,
      KC_LSFT,  KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
      KC_LCTL,  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    )};
