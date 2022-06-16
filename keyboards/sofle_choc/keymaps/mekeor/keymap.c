#include QMK_KEYBOARD_H
#include "keymap_german.h"

enum sofle_layers {
    _QWERTZ,
};

// enum custom_keycodes {};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/*
 * QWERTZ
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ^    |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |   ß  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   Q  |   W  |   E  |   R  |   T  |                    |   Z  |   U  |   I  |   O  |   P  |   Ü  |
  * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   Ö  |   Ä  |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |   Y  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   -  |   #  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *            |      |      |      |      | /       /       \      \  |      |      |      |      |
 *            |      |      |      |      |/       /         \      \ |      |      |      |      |
 *            `----------------------------------'           '------''---------------------------'
 */

[_QWERTZ] = LAYOUT( \
    KC_NUBS  , DE_1     , DE_2     , DE_3     , DE_4     , DE_5     ,                       DE_6     , DE_7     , DE_8     , DE_9     , DE_0     , DE_SS    ,
    XXXXXXX  , DE_Q     , DE_W     , DE_E     , DE_R     , DE_T     ,                       DE_Z     , DE_U     , DE_I     , DE_O     , DE_P     , DE_UDIA  ,
    KC_LSFT  , DE_A     , DE_S     , DE_D     , DE_F     , DE_G     ,                       DE_H     , DE_J     , DE_K     , DE_L     , DE_ODIA  , DE_ADIA  ,
    KC_GRAVE , DE_Y     , DE_X     , DE_C     , DE_V     , DE_B     , KC_BTN1  , KC_BTN2  , DE_N     , DE_M     , DE_COMM  , DE_DOT   , DE_MINS  , DE_HASH  ,
                          KC_LSFT  , KC_LGUI  , KC_LALT  , KC_LCTL  , KC_BSPC  , KC_ENT   , KC_SPC   , KC_TAB   , XXXXXXX  , KC_ESC
),

};

#ifdef ENCODER_ENABLE
bool encoder_update_user(uint8_t index, bool clockwise) {
  // left half
  if (index == 0) {
    if (clockwise) {
      tap_code(KC_MS_LEFT);
    } else {
      tap_code(KC_MS_RIGHT);
    }
  }

  // right half
  else {
    if (clockwise) {
      tap_code(KC_MS_DOWN);
    } else {
      tap_code(KC_MS_UP);
    }
  }

  return true;
}
#endif
