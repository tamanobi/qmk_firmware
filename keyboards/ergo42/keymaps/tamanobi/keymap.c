#include QMK_KEYBOARD_H

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
   * ,--------------------------------------------------.   ,--------------------------------------------------.
   * | ESC  |   `  |   Q    |   W  |   E  |   R  |  T   |   |  Y   |   U    |   I  |   O  |   P  |   -  | Bksp |
   * |------+------+--------+------+------+------+------|   |---------------+------+------+------+------+------|
   * | Tab  | RCtrl|   A    |   S  |   D  |   F  |  G   |   |  H   |   J    |   K  |   L  |   ;  |   '  | Enter|
   * |------+------+--------+------+------+------+------|   |------|--------+------+------+------+------+------|
   * | LCtrl| LSft |   Z    |   X  |   C  |   V  |  B   |   |  N   |   M    |   ,  |   .  |   /  | RSft |  UP  |
   * |------+------+--------+------+------+------+------|   |------+--------+------+------+------+------+------|
   * | LGUI | LGUI |MO(SYMB)| LAlt | LGUI | META |Space |   |Enter |MO(SYMB)| RGUI | RALT | LEFT | DOWN | RIGHT|
   * `--------------------------------------------------'   `--------------------------------------------------'
   */
  [BASE] = LAYOUT( \
    KC_ESC,   KC_GRV,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,   KC_Y,   KC_U,    KC_I,    KC_O,   KC_P,    KC_MINS, KC_BSPC, \
    KC_TAB,   KC_RCTL, KC_A,    KC_S,    KC_D,    KC_F,     KC_G,   KC_H,   KC_J,    KC_K,    KC_L,   KC_SCLN, KC_QUOT, KC_ENT, \
    KC_LCTL,  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,   KC_N,   KC_M,    KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, \
    KC_LGUI,  KC_LGUI, MO(SYMB),KC_LALT, KC_LGUI, MO(META), KC_SPC, KC_ENT, MO(SYMB),KC_RGUI, KC_RALT,KC_LEFT, KC_DOWN, KC_RGHT \
  ),

  /* META
   * ,------------------------------------------------.   ,--------------------------------------------------.
   * | Reset|  DEL |   1  |   2  |   3  |   4  |   5  |   |   6  |   7    |   8  |   9  |   0  |   [  | Bksp |
   * |------+------+------+------+------+------+------|   |---------------+------+------+------+------+------|
   * | Del  |  F1  |      |Muhen | Henk |      |      |   | Left | Down   |  Up  |Right |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|--------+------+------+------+------+------|
   * | SYMB |  F2  |  F3  |  F4  |  F5  |  F6  |  {   |   |  }   |  F7    |  F8  |  F9  | F10  | F11  | F12  |
   * |------+------+------+------+------+------+------|   |------+--------+------+------+------+------+------|
   * |   \  |  '   |   `  | LAlt | LGUI | META |Space |   |Enter |MO(SYMB)| RGUI |   =  |      |      |      |
   * `------------------------------------------------'   `--------------------------------------------------'
   */
  [META] = LAYOUT( \
    RESET,   _______, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,       KC_6,       KC_7,    KC_8,    KC_9,    KC_0,    _______, _______, \
    _______, KC_F1,   XXXXXXX, KC_MHEN, KC_HENK, XXXXXXX, XXXXXXX,    KC_LEFT,    KC_DOWN, KC_UP,   KC_RGHT, XXXXXXX, XXXXXXX, _______, \
    _______, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   S(KC_LBRC), S(KC_RBRC), KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, XXXXXXX, XXXXXXX, XXXXXXX \
  ),

  /* SYMB
   * ,------------------------------------------------.   ,--------------------------------------------------.
   * | ESC  |   !  |   @  |   #  |   $  |   %  |  [   |   |  ]   |   ^    |   &  |   *  |   -  |   =  | Bksp |
   * |------+------+------+------+------+------+------|   |---------------+------+------+------+------+------|
   * | Del  |      |      |      |      |      |  (   |   |  )   |        |      |      |      |      | Enter|
   * |------+------+------+------+------+------+------|   |------|--------+------+------+------+------+------|
   * | SYMB |      |      |      |      |      |  {   |   |  }   |        |      |      |      |  UP  | Sft  |
   * |------+------+------+------+------+------+------|   |------+--------+------+------+------+------+------|
   * |   \  |  '   |   `  | LAlt | LGUI | META |Space |   |Enter |MO(SYMB)| RGUI |   =  |      |      |      |
   * `------------------------------------------------'   `--------------------------------------------------'
   */
  [SYMB] = LAYOUT( \
    _______, S(KC_1), S(KC_2), S(KC_3), S(KC_4), S(KC_5), KC_LBRC,    KC_RBRC,    S(KC_6), S(KC_7), S(KC_8), KC_MINS, KC_EQL,  _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_9),    S(KC_0),    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, \
    _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, S(KC_LBRC), S(KC_RBRC), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______, \
    _______, _______, _______, _______, _______, _______, _______,    _______,    _______, _______, _______, _______, _______, _______ \
  )
};

