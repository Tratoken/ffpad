// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

enum layer_number {
  _1ST = 0,
  _2ND,
  _3RD,
  _4TH
};


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
    [_1ST] = LAYOUT(
      KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      TO(1),  KC_P4,   KC_P5,   KC_P6,   KC_EQL,
      KC_LSFT,  KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
      KC_LCTL,  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [_2ND] = LAYOUT(
      KC_ESC,  KC_B,  KC_N, KC_BSLS, KC_PSCR,
      KC_TAB,  KC_PAST,   KC_PDOT,   KC_P0,   KC_PPLS,
      TO(0),  KC_P4,   KC_W,   KC_P6,   KC_P8,
      KC_LSFT,  KC_A,   KC_S,   KC_D,   KC_P2,
      KC_LCTL,  KC_Z,  KC_PSLS, KC_M, KC_SPC
    ),
    [_3RD] = LAYOUT(
      KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      TO(1),  KC_P4,   KC_P5,   KC_P6,   KC_EQL,
      KC_LSFT,  KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
      KC_LCTL,  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ),
    [_4TH] = LAYOUT(
      KC_ESC,  KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
      KC_TAB,  KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
      TO(1),  KC_P4,   KC_P5,   KC_P6,   KC_EQL,
      KC_LSFT,  KC_P1,   KC_P2,   KC_P3,   KC_BSPC,
      KC_LCTL,  KC_P0,   KC_PDOT, KC_PCMM, KC_PENT
    ) 
  };

  /////// LED Setting ////////

#ifdef RGBLIGHT_LAYERS

const rgblight_segment_t PROGMEM rgb_layer_1st[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, 170,255,100}  //BLUE
);
const rgblight_segment_t PROGMEM rgb_layer_2nd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, 0,255,100}   //RED
);
const rgblight_segment_t PROGMEM rgb_layer_3rd[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, 85,255,100}   //GREEN
);
const rgblight_segment_t PROGMEM rgb_layer_4th[] = RGBLIGHT_LAYER_SEGMENTS(
    {0, 1, 0,0,100}   // WHITE
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    rgb_layer_1st,
    rgb_layer_2nd,
    rgb_layer_3rd,
    rgb_layer_4th
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;
};

layer_state_t layer_state_set_user(layer_state_t state) {
    rgblight_set_layer_state(0, layer_state_cmp(state, _1ST));
    rgblight_set_layer_state(1, layer_state_cmp(state, _2ND));
    rgblight_set_layer_state(2, layer_state_cmp(state, _3RD));
    rgblight_set_layer_state(3, layer_state_cmp(state, _4TH));
    return state;
}

#endif // RGBLIGHT_LAYERS
