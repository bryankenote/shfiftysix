// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#define BASE     TO(_BASE)
#define NAV      MO(_NAV)
#define NUM      MO(_NUM)

#define GUI_ESC  MT(MOD_LGUI,KC_ESC)

enum layer_names {
    _BASE,
    _NAV,
    _NUM,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
     /*
      * ┌───┬───┬───┬───┬───┐               ┌───┬───┬───┬───┬───┐
      * │ 1 │ 2 │ 3 │ 4 │ 5 │               │ 6 │ 7 │ 8 │ 9 │ 0 │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ Q │ W │ E │ R │ T │               │ Y │ U │ I │ O │ P │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ A │ S │ D │ F │ G │               │ H │ J │ K │ L │ ' │
      * ├───┼───┼───┼───┼───┤               ├───┼───┼───┼───┼───┤
      * │ Z │ X │ C │ V │ B │               │ N │ M │ , │ . │ / │
      * └───┼───┼───┼───┴───┘               └───┴───┼───┼───┼───┘
      *     │TAB│ESC│  ┌───┬───┬───┐ ┌───┬───┬───┐  │BSP│ ; │
      *     └───┴───┘  │CTl│SFT│MO1│ │MO2│SPC│ALT│  └───┴───┘
      *                ├───┼───┼───┤ ├───┼───┼───┤
      *                │ALT│GUI│   │ │ENT│GUI│CTL│
      *                └───┴───┴───┘ └───┴───┴───┘
      */
    [_BASE] = LAYOUT(
        KC_1,      KC_2,       KC_3,      KC_4,                 KC_5,                                        KC_6,    KC_7,                            KC_8,     KC_9,     KC_0,
        KC_Q,      KC_W,       KC_E,      KC_R,                 KC_T,                                        KC_Y,    KC_U,                            KC_I,     KC_O,     KC_P,
        KC_A,      KC_S,       KC_D,      KC_F,                 KC_G,                                        KC_H,    KC_J,                            KC_K,     KC_L,     KC_QUOT,
        KC_Z,      KC_X,       KC_C,      KC_V,                 KC_B,                                        KC_N,    KC_M,                            KC_COMM,  KC_DOT,   KC_SLSH,
                   KC_TAB,     GUI_ESC,   KC_LCTL,              KC_LSFT,              NAV,       NUM,        KC_SPC,  KC_LALT,                         KC_BSPC,  KC_SCLN,
                                          KC_LALT,              KC_LGUI,              KC_NO,     KC_ENT,     KC_RGUI, KC_RCTL
    ),

    [_NAV] = LAYOUT(
        KC_F1,     KC_F2,      KC_F3,     KC_F4,                 KC_F5,                                      KC_F6,   KC_F7,                           KC_F8,    KC_F9,    KC_F10,
        KC_NO,     KC_MINS,    S(KC_EQL), S(KC_LBRC),            S(KC_RBRC),                                 KC_HOME, KC_PGDN,                         KC_PGUP,  KC_END,   KC_INS,
        S(KC_GRV), S(KC_MINS), KC_EQL,    S(KC_9),               S(KC_0),                                    KC_LEFT, KC_DOWN,                         KC_UP,    KC_RIGHT, KC_NO,
        KC_GRV,    S(KC_BSLS), KC_BSLS,   KC_LBRC,               KC_RBRC,                                    KC_NO,   KC_LEFT,                         KC_DOWN,  KC_RIGHT, KC_NO,
                   KC_TAB,     GUI_ESC,   KC_LCTL,              KC_LSFT,              NAV,       NUM,        KC_SPC,  KC_LALT,                         KC_F11,  KC_F12,
                                          KC_LALT,              KC_LGUI,              KC_NO,     KC_ENT,     KC_RGUI, KC_RCTL
    ),

    [_NUM] = LAYOUT(
        KC_1,      KC_2,       KC_3,      KC_4,                 KC_5,                                        KC_6,    KC_7,                            KC_8,     KC_9,     KC_0,
        KC_F1,     KC_F2,      KC_F3,     KC_F4,                 KC_F5,                                      KC_F6,   KC_F7,                           KC_F8,    KC_F9,    KC_F10,
        KC_1,      KC_2,       KC_3,      KC_4,                  KC_5,                                       KC_6,    KC_7,                            KC_8,     KC_9,     KC_0,
        KC_NO,     KC_NO,      KC_NO,     KC_LALT,               KC_NO,                                      KC_NO,   KC_RALT,                         KC_NO,    KC_NO,    KC_NO,
                   KC_TAB,     GUI_ESC,   KC_LCTL,              KC_LSFT,              NAV,       NUM,        KC_SPC,  KC_LALT,                         KC_F11,  KC_F12,
                                          KC_LALT,              KC_LGUI,              KC_NO,     KC_ENT,     KC_RGUI, KC_RCTL
    ),
};
