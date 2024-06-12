/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------.                               ,-----------------------------------------------------------------------------------.
       KC_GRV,          KC_Q,          KC_W,          KC_F,          KC_P,         KC_B,                                          KC_J,          KC_L,          KC_U,          KC_Y,          KC_P, KC_QUOT,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      KC_LCTL,  LCTL_T(KC_A),  LALT_T(KC_R),  LGUI_T(KC_S),  LSFT_T(KC_T),         KC_G,                                          KC_M,  RSFT_T(KC_N),  RGUI_T(KC_E),  RALT_T(KC_I),  RCTL_T(KC_O), KC_SCLN,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      KC_LBRC,          KC_Z,          KC_X,          KC_C,          KC_D,         KC_V,                                          KC_K,          KC_H,       KC_COMM,        KC_DOT,       KC_SLSH, KC_RBRC,
  //|--------+--------------+--------------+--------------+--------------+-------------+-------------|  |--------------+--------------+--------------+--------------+--------------+--------------+--------|
                                                                   KC_ESC,LT(1, KC_SPC),LT(2, KC_TAB),    LT(3, KC_ENT),LT(4, KC_BSPC),        KC_DEL
                                                        //`------------------------------------------'  `--------------------------------------------'
  ),

    [1] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------.                               ,-----------------------------------------------------------------------------------.
      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX,                                       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,      XXXXXXX,                                       XXXXXXX,  RSFT_T(KC_N),  RGUI_T(KC_E),  RALT_T(KC_I),  RCTL_T(KC_O), XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX,                                       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------+-------------|  |--------------+--------------+--------------+--------------+--------------+--------------+--------|
                                                                  KC_TRNS,      KC_TRNS,      KC_TRNS,          KC_TRNS,       KC_TRNS,       KC_TRNS
                                                        //`------------------------------------------'  `--------------------------------------------'
  ),

    [2] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------.                               ,-----------------------------------------------------------------------------------.
      XXXXXXX,       KC_EXLM,         KC_AT,       KC_HASH,        KC_DLR,      KC_PERC,                                       KC_CIRC,       KC_AMPR,       KC_ASTR,       KC_LPRN,       KC_RPRN, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,  LCTL_T(KC_1),  LALT_T(KC_2),  LGUI_T(KC_3),  LSFT_T(KC_4),         KC_5,                                          KC_6,  RSFT_T(KC_7),  RGUI_T(KC_8),  RALT_T(KC_9),  RCTL_T(KC_0), XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,        KC_GRV,       XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX,                                       XXXXXXX,       KC_MINS,        KC_EQL,       KC_BSLS,       KC_SCLN, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------+-------------|  |--------------+--------------+--------------+--------------+--------------+--------------+--------|
                                                                  KC_TRNS,      KC_TRNS,      KC_TRNS,          KC_TRNS,       KC_TRNS,       KC_TRNS
                                                        //`------------------------------------------'  `--------------------------------------------'
  ),

    [3] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
        QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, XXXXXXX,                      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                          KC_LGUI, _______,  KC_SPC,     KC_ENT, _______, KC_RALT
                                      //`--------------------------'  `--------------------------'
  )
};
