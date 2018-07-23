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
   ,------------------------------------------------.   ,-------------------------------------------------.
   | ESC  | Del  |   Q  |   W  |   E  |   R  |  T   |   |  Y   |   U  |   I  |   O  |   P  |  @`   | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | Tab  |  `   |   A  |   S  |   D  |   F  |  G   |   |  H   |   J  |   K  |   L  |  ;+  |  :*   | Enter|
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | SYMB | LSft |   Z  |   X  |   C  |   V  |  B   |   |  N   |   M  |  ,<  |  .>  |  /?  | RSft  | SYMB |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+-------+------|
   | META | LCtrl| LGUI | PScr | INS  | LALT |Space |   |Space |  -=  |  ^~  | HOME | End  | RCtl  | META |
   `------------------------------------------------'   `-------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_ESC,   KC_DELT, KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,   KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_BSPC, \
    KC_TAB,   KC_GRV,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,    KC_H,   KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,  \
    MO(SYMB), KC_LSFT, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,    KC_N,   KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, MO(SYMB),\
    MO(META), KC_LCTL, KC_LGUI,KC_PSCR, KC_INS,  KC_LALT, KC_SPC,  KC_SPC, KC_MINS, KC_EQL,  KC_HOME, KC_END,  KC_RCTL, MO(META) \
  ),

  /* META
   ,------------------------------------------------.   ,------------------------------------------------.
   | Reset|      |   1  |   2  |   3  |   4  |  5   |   |  6   |   7  |   8  |   9  |   0  | PGUP | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | Tab  |      |      |Muhen | Henk |      |      |   | Left | Down |  Up  |Right |      | PGDN | Enter|
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | SYMB |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   |  F7  |  F8  |  F9  | F10  | F11  | F12  | SYMB |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | META | LCtrl| LGUI | PScr | INS  | LALT |Space |   |Space |  -=  |  ^~  | HOME | End  | RCtl | META |
   `------------------------------------------------'   `------------------------------------------------'
   */
  [META] = LAYOUT( \
    RESET,   XXXXXXX, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_PGUP, _______, \
    _______, XXXXXXX, XXXXXXX, KC_MHEN, KC_HENK, XXXXXXX, XXXXXXX,  KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, KC_PGDN, _______, \
    _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  _______, \
    _______, _______, _______, _______, _______, _______, _______,  _______, _______, _______, _______, _______, _______, _______  \
  ),

  /* SYMB
   ,------------------------------------------------.   ,------------------------------------------------.
   | ESC  |      |   !  |   "  |   #  |   $  |   %  |   |   &  |   `  |  (   |   )  |  \   |  |   | Bksp |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | Tab  |      |      |      |      |      |      |   |  [   |  {   |      |      |  +   |  *   | Enter|
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | SYMB |      |      |      |      |      |      |   |  ]   |  }   |      |      |  _   | RSft | SYMB |
   |------+------+------+------+------+------+------|   |------+------+------+------+------+------+------|
   | META | LCtrl| LGUI | PScr | INS  | LALT |Space |   |Space |  -=  |  ^~  | HOME | End  | RCtl | META |
   `------------------------------------------------'   `------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, XXXXXXX, KC_EXLM, S(KC_2), KC_HASH, KC_DLR,  KC_PERC,  JP_AMPR, S(KC_7),    JP_LPRN, JP_RPRN, KC_RO,      S(KC_JYEN), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_RBRC, S(KC_RBRC), XXXXXXX, XXXXXXX, S(KC_SCLN), S(KC_QUOT), _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,  KC_BSLS, S(KC_BSLS), XXXXXXX, XXXXXXX, JP_UNDS,    _______,    _______, \
    _______, _______, _______, _______, _______, _______, _______,  _______, _______,    _______, _______, _______,    _______,    _______  \
  )

};

