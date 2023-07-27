// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐
     * │ 7 │ 8 │ 9 │ BS│
     * ├───┼───┼───┼───┤
     * │ 4 │ 5 │ 6 │ESC│
     * ├───┼───┼───┼───┤
     * │ 1 │ 2 │ 3 │TAB│
     * ├───┼───┼───┼───┤
     * │FN │ 0 │ . │RET│
     * └───┴───┴───┴───┘
     */
    [0] = LAYOUT_ortho_4x4(
        KC_P7,    KC_P8,  KC_P9,    KC_BSPC,
        KC_P4,    KC_P5,  KC_P6,    KC_ESC,
        KC_P1,    KC_P2,  KC_P3,    KC_TAB,
        KC_P1, KC_P0,  KC_PDOT,  KC_ENTER
    ),
};
