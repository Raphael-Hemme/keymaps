/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>
Copyright 2021 @HellSingCoder
Copyright 2023 @asdfire1
Copyright 2024 Raphael Hemme

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
#include "./custom_macros.h"

enum custom_keycodes {
  JS_ARROWFUNCTION = SAFE_RANGE,
  RXJS_PIPE_SUBSCRIBE
};

enum combos {
  DELF_COMBO,
  DELS_COMBO
};

const uint16_t PROGMEM del_f_combo[] = {KC_DEL, KC_F, COMBO_END};
const uint16_t PROGMEM del_s_combo[] = {KC_DEL, KC_P, COMBO_END};

combo_t key_combos[] = {
  [DELF_COMBO] = COMBO(del_f_combo, JS_ARROWFUNCTION),
  [DELS_COMBO] = COMBO(del_s_combo, RXJS_PIPE_SUBSCRIBE),
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  // COLEMAK-DH  
  [0] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------.                               ,-----------------------------------------------------------------------------------.
       KC_GRV,          KC_Q,          KC_W,          KC_F,          KC_P,         KC_B,                                          KC_J,          KC_L,          KC_U,          KC_Y,          KC_P, KC_QUOT,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      KC_LCTL,  LCTL_T(KC_A),  LALT_T(KC_R),  LGUI_T(KC_S),  LSFT_T(KC_T),         KC_G,                                          KC_M,  RSFT_T(KC_N),  RGUI_T(KC_E),  RALT_T(KC_I),  RCTL_T(KC_O), KC_SCLN,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      KC_LBRC,          KC_Z,          KC_X,          KC_C,          KC_D,         KC_V,                                          KC_K,          KC_H,       KC_COMM,        KC_DOT,       KC_SLSH, KC_RBRC,
  //|--------+--------------+--------------+--------------+--------------+-------------+-------------|  |--------------+--------------+--------------+--------------+--------------+--------------+--------|
                                                                   KC_ESC,LT(1, KC_SPC),LT(2, KC_TAB),    LT(3, KC_ENT),RALT_T(KC_BSPC),       KC_DEL
                                                        //`------------------------------------------'  `--------------------------------------------'
  ),

  // ARROW NAVIGATION
  [1] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------.                               ,-----------------------------------------------------------------------------------.
      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX,                                       KC_HOME,       KC_PGDN,       KC_PGUP,        KC_END,       XXXXXXX, KC_PSCR,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,       KC_TRNS,       KC_TRNS,       KC_TRNS,       KC_TRNS,      XXXXXXX,                                       KC_LEFT,       KC_DOWN,         KC_UP,      KC_RIGHT,       XXXXXXX, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX,                                       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------+-------------|  |--------------+--------------+--------------+--------------+--------------+--------------+--------|
                                                                  KC_TRNS,      KC_TRNS,      KC_TRNS,          KC_TRNS,       KC_TRNS,       KC_TRNS
                                                        //`------------------------------------------'  `--------------------------------------------'
  ),

  // Numbers & Symbols
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

  // Function and Settings
  [3] = LAYOUT_split_3x6_3(
  //,----------------------------------------------------------------------------------.                               ,-----------------------------------------------------------------------------------.
      XXXXXXX,         KC_F1,         KC_F2,         KC_F3,         KC_F4,      XXXXXXX,                                      RGB_RMOD,       RGB_HUD,       RGB_HUI,       RGB_MOD,       XXXXXXX, RGB_TOG,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,         KC_F5,         KC_F6,         KC_F7,         KC_F8,      XXXXXXX,                                       XXXXXXX,       RGB_VAD,       RGB_VAI,       XXXXXXX,       XXXXXXX, XXXXXXX,
  //|--------+--------------+--------------+--------------+--------------+-------------|                               |--------------+--------------+--------------+--------------+--------------+--------|
      XXXXXXX,         KC_F9,        KC_F10,        KC_F11,        KC_F12,      XXXXXXX,                                       XXXXXXX,       RGB_SAD,       RGB_SAI,       XXXXXXX,       CG_LSWP, CG_LNRM,
  //|--------+--------------+--------------+--------------+--------------+-------------+-------------|  |--------------+--------------+--------------+--------------+--------------+--------------+--------|
                                                                  XXXXXXX,      XXXXXXX,      XXXXXXX,          KC_TRNS,       KC_TRNS,       KC_TRNS
                                                        //`------------------------------------------'  `--------------------------------------------'
  ),
};

#ifdef OLED_ENABLE

// Add the Luna animation from colemak_luna and my own logo to display on the screens

// Renders own logo converted into bite array with: https://mischianti.org/images-to-byte-array-online-converter-cpp-arduino/
/* 32 * 32 logo */
static void render_logo(void) {
    static const char PROGMEM rh_logo[] = {
    0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x08, 0xe8, 0xe4, 0xe4, 0xe0, 0xe2, 0xe2, 0xe2, 0xe2, 
    0xe2, 0xe2, 0xe2, 0xe2, 0xe0, 0xe4, 0xe4, 0xc8, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0xf0, 0x06, 0x01, 0x00, 0x00, 0x00, 0x00, 0xe7, 0x3c, 0x38, 0x18, 0x18, 0x18, 0x18, 0x38, 
    0x38, 0x78, 0x78, 0xf8, 0x9c, 0x1f, 0x0f, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x06, 0xf0, 0x00, 
    0x00, 0x0f, 0x60, 0x80, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf8, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 
    0xe0, 0xe0, 0xe0, 0xf8, 0x01, 0x03, 0x03, 0xfe, 0x00, 0x00, 0x00, 0x00, 0x80, 0x60, 0x0f, 0x00, 
    0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x08, 0x10, 0x17, 0x20, 0x2f, 0x00, 0x40, 0x40, 0x40, 0x40, 
    0x40, 0x40, 0x40, 0x4f, 0x00, 0x20, 0x20, 0x17, 0x10, 0x08, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00
};
    oled_write_raw_P(rh_logo, sizeof(rh_logo));
}

// Render black logo to fix flashing pixels in the colemak_luna implementation
static void render_black(void) {
    static const char PROGMEM black_logo[] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
    oled_write_raw_P(black_logo, sizeof(black_logo));
}



/* KEYBOARD PET START */

/* settings */
#    define MIN_WALK_SPEED      10
#    define MIN_RUN_SPEED       40

/* advanced settings */
#    define ANIM_FRAME_DURATION 200  // how long each frame lasts in ms
#    define ANIM_SIZE           96   // number of bytes in array. If you change sprites, minimize for adequate firmware size. max is 1024

/* timers */
uint32_t anim_timer = 0;
uint32_t anim_sleep = 0;

/* current frame */
uint8_t current_frame = 0;

/* status variables */
int   current_wpm = 0;
led_t led_usb_state;

bool isSneaking = false;
bool isJumping  = false;
bool showedJump = true;
bool isBarking = false;

/* logic */
static void render_luna(int LUNA_X, int LUNA_Y) {
    /* Sit */
    static const char PROGMEM sit[2][ANIM_SIZE] = {/* 'sit1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x68, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x06, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'sit2', 32x22px */
                                                   {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x1c, 0x02, 0x05, 0x02, 0x24, 0x04, 0x04, 0x02, 0xa9, 0x1e, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x90, 0x08, 0x18, 0x60, 0x10, 0x08, 0x04, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x0e, 0x82, 0x7c, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x0c, 0x10, 0x10, 0x20, 0x20, 0x20, 0x28, 0x3e, 0x1c, 0x20, 0x20, 0x3e, 0x0f, 0x11, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00}};

    /* Walk */
    static const char PROGMEM walk[2][ANIM_SIZE] = {/* 'walk1', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x10, 0x90, 0x90, 0x90, 0xa0, 0xc0, 0x80, 0x80, 0x80, 0x70, 0x08, 0x14, 0x08, 0x90, 0x10, 0x10, 0x08, 0xa4, 0x78, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x08, 0xfc, 0x01, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x18, 0xea, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x03, 0x06, 0x18, 0x20, 0x20, 0x3c, 0x0c, 0x12, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'walk2', 32x22px */
                                                    {
                                                        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x28, 0x10, 0x20, 0x20, 0x20, 0x10, 0x48, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x20, 0xf8, 0x02, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x10, 0x30, 0xd5, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x02, 0x1c, 0x14, 0x08, 0x10, 0x20, 0x2c, 0x32, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Run */
    static const char PROGMEM run[2][ANIM_SIZE] = {/* 'run1', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0x00, 0xe0, 0x10, 0x08, 0x08, 0xc8, 0xb0, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x40, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0xc4, 0xa4, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x58, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x09, 0x04, 0x04, 0x04, 0x04, 0x02, 0x03, 0x02, 0x01, 0x01, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   },

                                                   /* 'run2', 32x22px */
                                                   {
                                                       0x00, 0x00, 0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x80, 0x78, 0x28, 0x08, 0x10, 0x20, 0x30, 0x08, 0x10, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x10, 0xb0, 0x50, 0x55, 0x20, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x1e, 0x20, 0x20, 0x18, 0x0c, 0x14, 0x1e, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                   }};

    /* Bark */
    static const char PROGMEM bark[2][ANIM_SIZE] = {/* 'bark1', 32x22px */
                                                    {
                                                        0x00, 0xc0, 0x20, 0x10, 0xd0, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x3c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc8, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    },

                                                    /* 'bark2', 32x22px */
                                                    {
                                                        0x00, 0xe0, 0x10, 0x10, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x40, 0x2c, 0x14, 0x04, 0x08, 0x90, 0x18, 0x04, 0x08, 0xb0, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x04, 0x08, 0x10, 0x11, 0xf9, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x48, 0x28, 0x2a, 0x10, 0x0f, 0x20, 0x4a, 0x09, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x0c, 0x10, 0x20, 0x28, 0x37, 0x02, 0x02, 0x04, 0x08, 0x10, 0x26, 0x2b, 0x32, 0x04, 0x05, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                    }};

    /* Sneak */
    static const char PROGMEM sneak[2][ANIM_SIZE] = {/* 'sneak1', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x40, 0x40, 0x80, 0x00, 0x80, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x21, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x04, 0x04, 0x04, 0x03, 0x01, 0x00, 0x00, 0x09, 0x01, 0x80, 0x80, 0xab, 0x04, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x1c, 0x20, 0x20, 0x3c, 0x0f, 0x11, 0x1f, 0x02, 0x06, 0x18, 0x20, 0x20, 0x38, 0x08, 0x10, 0x18, 0x04, 0x04, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00,
                                                     },

                                                     /* 'sneak2', 32x22px */
                                                     {
                                                         0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x40, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xa0, 0x20, 0x40, 0x80, 0xc0, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3e, 0x41, 0xf0, 0x04, 0x02, 0x02, 0x02, 0x03, 0x02, 0x02, 0x02, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 0x00, 0x04, 0x00, 0x40, 0x40, 0x55, 0x82, 0x7c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, 0x20, 0x30, 0x0c, 0x02, 0x05, 0x09, 0x12, 0x1e, 0x04, 0x18, 0x10, 0x08, 0x10, 0x20, 0x28, 0x34, 0x06, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
                                                     }};

    /* animation */
    void animate_luna(void) {
        /* jump */
        if (isJumping || !showedJump) {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y + 2);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y - 1);

            showedJump = true;
        } else {
            /* clear */
            oled_set_cursor(LUNA_X, LUNA_Y - 1);
            oled_write("     ", false);

            oled_set_cursor(LUNA_X, LUNA_Y);
        }

        /* switch frame */
        current_frame = (current_frame + 1) % 2;

        /* current status */
        if (led_usb_state.caps_lock) {
            oled_write_raw_P(bark[abs(1 - current_frame)], ANIM_SIZE);

        } else if (isSneaking) {
            oled_write_raw_P(sneak[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_WALK_SPEED) {
            oled_write_raw_P(sit[abs(1 - current_frame)], ANIM_SIZE);

        } else if (current_wpm <= MIN_RUN_SPEED) {
            oled_write_raw_P(walk[abs(1 - current_frame)], ANIM_SIZE);

        } else {
            oled_write_raw_P(run[abs(1 - current_frame)], ANIM_SIZE);
        }
    }

    /* animation timer */
    if (timer_elapsed32(anim_timer) > ANIM_FRAME_DURATION) {
        anim_timer = timer_read32();
        animate_luna();
    }

    /* this fixes the screen on and off bug */
    if (current_wpm > 0) {
        oled_on();
        rgb_matrix_enable();
        anim_sleep = timer_read32();
    } else if(timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0,0);
        oled_write("                                                                                                    ", false);
        oled_off();
        oled_set_cursor(LUNA_X,LUNA_Y);
        rgb_matrix_disable();
    }
}

/* KEYBOARD PET END */

static void print_logo_narrow(void) {
    render_logo();
if (current_wpm > 0) {
    anim_sleep = timer_read32();
    /* wpm counter */
    oled_set_cursor(0, 14);
    oled_write(get_u8_str(get_current_wpm(), '0'), false);

    oled_set_cursor(0, 15);
    oled_write(" wpm", false);

 /* this fixes the screen on and off bug */
   
    } else if(timer_elapsed32(anim_sleep) > OLED_TIMEOUT) {
        /* clear */
        oled_set_cursor(0,0);
        render_black();
        oled_write("                                                                                                      ", false);
        oled_off();
        rgb_matrix_disable();
    }
}

static void print_status_narrow(void) {
    /* Print current layer */
    oled_write("LAYER", false);

    oled_set_cursor(0, 6);

    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write("Base ", false);
            break;
        case 1:
            oled_write("Nav. ", false);
            break;
        case 2:
            oled_write("Num. ", false);
            break;
        case 3:
            oled_write("Func ", false);
            break;
        default:
            oled_write("Undef", false);
    }


    /* KEYBOARD PET RENDER START */

    render_luna(0, 13);

    /* KEYBOARD PET RENDER END */
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_270; }

bool oled_task_user(void) {
    /* KEYBOARD PET VARIABLES START */

    current_wpm   = get_current_wpm();
    led_usb_state = host_keyboard_led_state();

    /* KEYBOARD PET VARIABLES END */

    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_logo_narrow();
    }
    return false;
}

#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case JS_ARROWFUNCTION:
            if (record->event.pressed) {
                js_arrow_function_macro();
            }
            break;

        case RXJS_PIPE_SUBSCRIBE:
            if (record->event.pressed) {
                rxjs_pipe_subscribe_macro();
            }
            break;

        /* KEYBOARD PET STATUS START */
        case LCTL_T(KC_A):
            isSneaking = record->event.pressed;
            break;
        case LT(1, KC_SPC):
            isJumping = record->event.pressed;
            if (isJumping) {
                showedJump = false;
            }
            break;
        case LGUI_T(KC_S):
            isBarking = record->event.pressed;
            break;
 
        /* KEYBOARD PET STATUS END */
    }

    return true;
}