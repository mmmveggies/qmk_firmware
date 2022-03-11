#include QMK_KEYBOARD_H

#define LAYER_1 MO(1)
#define LAYER_2 MO(2)
#define LAYER_3 MO(3)
#define CTRLESC MT(MOD_LCTL, KC_ESC)
#define SHFTSPC MT(MOD_LSFT, KC_SPC)
#define ALTBSPC MT(MOD_LALT, KC_BSPC)
#define GUIENTR MT(MOD_LGUI, KC_ENT)

#define X_C_SPC C(KC_SPC)
#define X_S_SPC S(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(
    KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
    KC_A   , KC_S   , KC_D   , KC_F   , KC_G   ,                   KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN,
    KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
                      LAYER_1, CTRLESC, SHFTSPC,                   ALTBSPC, GUIENTR, LAYER_2
  ),

  [1] = LAYOUT_split_3x5_3(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    KC_GRV , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_QUOT, KC_MINS, KC_EQL , KC_LBRC, KC_RBRC,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_PIPE, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX,
                      _______, _______, _______,                   _______, _______, LAYER_3
  ),

  [2] = LAYOUT_split_3x5_3(
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
    KC_TAB , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_LEFT, KC_DOWN, KC_UP  , KC_RGHT, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END , XXXXXXX,
                      LAYER_3, _______, _______,                   _______, _______, _______
  ),

  [3] = LAYOUT_split_3x5_3(
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                      _______, _______, _______,                   _______, _______, _______
  )
};
