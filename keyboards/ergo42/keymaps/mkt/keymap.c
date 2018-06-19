#include QMK_KEYBOARD_H
#include "keymap_jp.h"

extern keymap_config_t keymap_config;

#define BASE 0
#define META 1
#define SYMB 2
#define GAME 3

// Fillers to make layering more clear
#define _______ KC_TRNS
#define XXXXXXX KC_NO

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* BASE
   * ,------------------------------------------------.   ,-------------------------------------------------.
   * | ESC  | Del  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |  @`   | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+-------+------|
   * | Tab  |  `   |   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |  ;+  | RCtrl | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+-------+------|
   * | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |  ,<  |  .>  |  /?  |  UP   | RSft |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   * | META | LCtrl|  [{  |  ]}  | LAlt | LGUI |Space |   |Space |  :*  |  -=  |  ^~  | LEFT | DOWN  | RIGHT|
   * `------------------------------------------------'   `-------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_ESC,   KC_DELT, KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_LBRC, KC_BSPC, \
    KC_TAB,   KC_GRV,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,   KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_RCTL, KC_ENT, \
    MO(SYMB), KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_UP,   KC_RSFT, \
    MO(META), KC_LCTL, KC_RBRC,KC_BSLS, KC_LALT, KC_LGUI, KC_SPC, KC_SPC, KC_QUOT, KC_MINS, KC_EQL, KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  /* META
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | Reset|   1  |   2  |   3  |   4  |   5  |  [   |   |  ]   |   6  |   7  |   8  |   9  |   0  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |      |      |Muhen | Henk | PScr | INS  |   | Left | Down |  Up  |Right | PGDN | PGUP | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   |  F7  |  F8  |  F9  | F10  | F11  | F12  |      |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LCtrl|  [{  |  ]}  | LAlt | LGUI |Space |   |Space |  :*  |  -=  |  ^~  |      |      |      |
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    RESET,   KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_LBRC,    KC_RBRC, KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______, \
    _______, XXXXXXX, XXXXXXX, KC_MHEN, KC_HENK, KC_PSCR, KC_INS,     KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, KC_PGDN, KC_PGUP, _______, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  XXXXXXX, \
    _______, _______, _______, _______, _______, _______, _______,    _______, _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,------------------------------------------------.
   * | ESC  |   !  |   "  |   #  |   $  |   %  |  [   |   |  ]   |   &  |   `  |      |  \   |  ｜  | Bksp |
   * |------+------+------+------+------+------+------|   |-------------+------+------+------+------+------|
   * | Del  |      |      |      |      |      |  (   |   |  )   |      |      |      |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|------+------+------+------+------+------|
   * | SYMB |      |      |      |      |      |  {   |   |  }   |      |      |      |  _   |  UP  | Sft  |
   * |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   * | META | LCtrl|  [{  |  ]}  | LAlt | LGUI |Space |   |Space |  :*  |  -=  |  ^~  | LEFT | DOWN | RIGHT|
   * `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, KC_EXLM, S(KC_2), KC_HASH, KC_DLR,  KC_PERC, KC_RBRC,    KC_BSLS,    JP_AMPR, JP_CIRC, XXXXXXX, KC_RO,   S(KC_JYEN), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, JP_LPRN,    JP_RPRN,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,    _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, JP_UNDS, _______,    _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______,    _______ \
  )

};

