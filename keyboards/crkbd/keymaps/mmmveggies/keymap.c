#include QMK_KEYBOARD_H

// layer switching is hold only
#define LAYER_1 MO(1)
#define LAYER_2 MO(2)
#define LAYER_3 MO(3)
#define L4_SPC LT(4, KC_SPC)
#define L5_ESC LT(5, KC_ESC)

/*
 * Homerow mod helpers, we try CAGS_SGAC
 * See https://precondition.github.io/home-row-mods#cags
 */

// used when the keys are only mods
#define HRM_L4 KC_LCTL
#define HRM_L3 KC_LALT
#define HRM_L2 KC_LGUI
#define HRM_L1 KC_LSFT

#define HRM_R1 KC_RSFT
#define HRM_R2 KC_RGUI
#define HRM_R3 KC_RALT
#define HRM_R4 KC_RCTL

// used when the keys are mod-tap
#define MT_L4(key) MT(MOD_LCTL, key)
#define MT_L3(key) MT(MOD_LALT, key)
#define MT_L2(key) MT(MOD_LGUI, key)
#define MT_L1(key) MT(MOD_LSFT, key)

#define MT_R1(key) MT(MOD_RSFT, key)
#define MT_R2(key) MT(MOD_RGUI, key)
#define MT_R3(key) MT(MOD_RALT, key)
#define MT_R4(key) MT(MOD_RCTL, key)

// layer 0 homerow mods
#define L0_L4 MT_L4(KC_A)
#define L0_L3 MT_L3(KC_S)
#define L0_L2 MT_L2(KC_D)
#define L0_L1 MT_L1(KC_F)

#define L0_R1 MT_R1(KC_J)
#define L0_R2 MT_R2(KC_K)
#define L0_R3 MT_R3(KC_L)
#define L0_R4 MT_R4(KC_SCLN)

// layer 1 homerow mods
#define L1_L4 MT_L4(KC_GRV)
#define L1_L3 HRM_L3
#define L1_L2 HRM_L2
#define L1_L1 HRM_L1

#define L1_R1 MT_R1(KC_MINS)
#define L1_R2 MT_R2(KC_EQL)
#define L1_R3 MT_R3(KC_LBRC)
#define L1_R4 MT_R4(KC_RBRC)

// layer 2 homerow mods
#define L2_L4 MT_L4(KC_TAB)
#define L2_L3 HRM_L3
#define L2_L2 HRM_L2
#define L2_L1 HRM_L1

#define L2_R1 MT_R1(KC_DOWN)
#define L2_R2 MT_R2(KC_UP)
#define L2_R3 MT_R3(KC_RGHT)
#define L2_R4 HRM_R4

// layer 3 homerow mods
#define L3_L4 HRM_L4
#define L3_L3 HRM_L3
#define L3_L2 HRM_L2
#define L3_L1 HRM_L1

#define L3_R1 HRM_R1
#define L3_R2 HRM_R2
#define L3_R3 HRM_R3
#define L3_R4 HRM_R4

// helpers
#define SCR_CAP C(S(G(KC_4)))
#define SCR_REC S(G(KC_5))

#define TM_LEFT S(KC_LEFT)
#define TM_UP   S(KC_9)
#define TM_DOWN S(KC_0)
#define TM_RGHT S(KC_RGHT)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x5_3(
    KC_Q   , KC_W   , KC_E   , KC_R   , KC_T   ,                   KC_Y   , KC_U   , KC_I   , KC_O   , KC_P   ,
    L0_L4  , L0_L3  , L0_L2  , L0_L1  , KC_G   ,                   KC_H   , L0_R1  , L0_R2  , L0_R3  , L0_R4  ,
    KC_Z   , KC_X   , KC_C   , KC_V   , KC_B   ,                   KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH,
    /*             */ LAYER_1, L5_ESC , L4_SPC ,                   KC_BSPC, KC_ENT , LAYER_2
  ),

  [1] = LAYOUT_split_3x5_3(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    L1_L4  , L1_L3  , L1_L2  , L1_L1  , XXXXXXX,                   KC_QUOT, L1_R1  , L1_R2  , L1_R3  , L1_R4  ,
    G(KC_Z), G(KC_X), G(KC_C), G(KC_V), XXXXXXX,                   KC_PIPE, KC_BSLS, XXXXXXX, XXXXXXX, XXXXXXX,
    /*             */ _______, _______, _______,                   _______, _______, LAYER_3
  ),

  [2] = LAYOUT_split_3x5_3(
    KC_F1  , KC_F2  , KC_F3  , KC_F4  , KC_F5  ,                   KC_F6  , KC_F7  , KC_F8  , KC_F9  , KC_F10 ,
    L2_L4  , L2_L3  , L2_L2  , L2_L1  , XXXXXXX,                   KC_LEFT, L2_R1  , L2_R2  , L2_R3  , L2_R4  ,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   KC_HOME, KC_PGDN, KC_PGUP, KC_END , SCR_CAP,
    /*             */ LAYER_3, _______, _______,                   _______, _______, _______
  ),

  [3] = LAYOUT_split_3x5_3(
    KC_F11 , KC_F12 , KC_F13 , KC_F14 , KC_F15 ,                   KC_F16 , KC_F17 , KC_F18 , KC_F19 , XXXXXXX,
    L3_L4  , L3_L3  , L3_L2  , L3_L1  , XXXXXXX,                   XXXXXXX, L3_R1  , L3_R2  , L3_R3  , L3_R4  ,
    XXXXXXX, XXXXXXX, KC_CAPS, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, SCR_REC,
    /*             */ _______, _______, _______,                   _______, _______, _______
  ),

  // All of these have a tmux prefix sent with them
  [4] = LAYOUT_split_3x5_3(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    XXXXXXX, KC_S   , XXXXXXX, XXXXXXX, XXXXXXX,                   TM_LEFT, TM_UP  , TM_DOWN, TM_RGHT, XXXXXXX,
    XXXXXXX, XXXXXXX, KC_C   , XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, KC_COMM, XXXXXXX, XXXXXXX,
    /*             */ _______, _______, _______,                   _______, _______, _______
  ),

  // Navigation?
  [5] = LAYOUT_split_3x5_3(
    KC_1   , KC_2   , KC_3   , KC_4   , KC_5   ,                   KC_6   , KC_7   , KC_8   , KC_9   , KC_0   ,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
    /*             */ _______, _______, _______,                   _______, _______, _______
  )
};

// https://getreuer.info/posts/keyboards/macros3/index.html#prefixing-layer
bool process_record_user(uint16_t keycode, keyrecord_t* record) {
  bool pressed = record->event.pressed;

  // Tap Ctrl+T, prefix of tmux
  if (IS_LAYER_ON(4) && pressed) {
    tap_code16(C(KC_T));
  }

  // Easier Aerospace worskspace switching
  if (IS_LAYER_ON(5)) {
    if (pressed) {
      register_code(KC_LALT);
    } else {
      unregister_code(KC_LALT);
    }
  }

  // Other macros...
  return true;
}
