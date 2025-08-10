/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

#define VIAL_KEYBOARD_UID {0x23, 0xF6, 0x89, 0x3C, 0x02, 0xC8, 0x2A, 0x48}

#define VIAL_UNLOCK_COMBO_ROWS {0, 0}
#define VIAL_UNLOCK_COMBO_COLS {0, 1}

 /* LED Setting */
#define RGBLIGHT_LAYERS // 機能の有効化
#define RGBLIGHT_LED_COUNT 1 // LEDの個数
#define RGBLIGHT_MAX_LAYERS 4 // (最大32)

#define LED_LAYOUT(LED0){LED0}
#define RGBLIGHT_LED_MAP LED_LAYOUT(0)