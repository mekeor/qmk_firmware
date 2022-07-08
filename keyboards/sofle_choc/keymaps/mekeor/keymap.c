#include QMK_KEYBOARD_H

#define _A      KC_LALT
#define _C      KC_LCTL
#define _G      KC_LGUI
#define _I      MO(_INVISIBLE)
#define _S      KC_LSFT
#define _U      MO(_UMLAUT)
#define _Y      MO(_SYMBOL)

#define _U_AE    XXXXXXX
#define _U_CC    XXXXXXX
#define _U_CS    XXXXXXX
#define _U_G     XXXXXXX
#define _U_I     XXXXXXX
#define _U_MICRO XXXXXXX
#define _U_OE    XXXXXXX
#define _U_SZ    XXXXXXX
#define _U_UE    XXXXXXX

#define _Y_APOS  XXXXXXX
#define _Y_ASTSK XXXXXXX
#define _Y_AT    XXXXXXX
#define _Y_BRL   XXXXXXX
#define _Y_BRR   XXXXXXX
#define _Y_BSLSH XXXXXXX
#define _Y_CBRL  XXXXXXX
#define _Y_CBRR  XXXXXXX
#define _Y_CLN   XXXXXXX
#define _Y_COMM  XXXXXXX
#define _Y_CURR  XXXXXXX
#define _Y_DOT   XXXXXXX
#define _Y_EQ    XXXXXXX
#define _Y_ET    XXXXXXX
#define _Y_EXCL  XXXXXXX
#define _Y_GT    XXXXXXX
#define _Y_LT    XXXXXXX
#define _Y_MINUS XXXXXXX
#define _Y_PERC  XXXXXXX
#define _Y_PRL   XXXXXXX
#define _Y_PRR   XXXXXXX
#define _Y_QUEST XXXXXXX
#define _Y_QUOT  XXXXXXX
#define _Y_SCLN  XXXXXXX
#define _Y_SLSH  XXXXXXX
#define _Y_UNDRS XXXXXXX

enum sofle_layers {
  _LETTER,
  _UMLAUT,
  _SYMBOL,
  _NUMBER,
  _INVISIBLE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  [_LETTER] = LAYOUT(
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , KC_Q     , KC_W     , KC_E     , KC_R     , KC_T     ,                       KC_Z     , KC_U     , KC_I     , KC_O     , KC_P     , XXXXXXX  ,
      XXXXXXX  , KC_A     , KC_S     , KC_D     , KC_F     , KC_G     ,                       KC_H     , KC_J     , KC_K     , KC_L     , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , KC_Y     , KC_X     , KC_C     , KC_V     , KC_B     , KC_BTN1  , KC_BTN2  , KC_N     , KC_M     , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
                            XXXXXXX  , _G       , _A       , _C       , KC_BSPC  , KC_SPC   , _S       , _U       , _Y       , _I
  ),

  // this layer corresponds to the letter-layer.
  // todo: spanish-n turkish-i turkish-g turkish-c turkish-s

  [_UMLAUT] = LAYOUT(
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       _U_SZ    , _U_UE    , _U_I     , _U_OE    , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , _U_AE    , _U_CS    , XXXXXXX  , XXXXXXX  , _U_G     ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , XXXXXXX  , XXXXXXX  , _U_CC    , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _U_MICRO , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
                            _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [_SYMBOL] = LAYOUT(
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , _Y_LT    , _Y_GT    , _Y_CBRL  , _Y_CBRR  , XXXXXXX  ,                       XXXXXXX  , _Y_PRR   , _Y_PRL   , _Y_BRL   , _Y_BRR   , XXXXXXX  ,
      XXXXXXX  , _Y_EXCL  , _Y_QUEST , _Y_APOS  , _Y_QUOT  , _Y_ASTSK ,                       _Y_EQ    , _Y_DOT   , _Y_COMM  , _Y_CLN   , _Y_SCLN  , XXXXXXX  ,
      XXXXXXX  , _Y_AT    , _Y_CURR  , _Y_PERC  , _Y_ET    , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , _Y_MINUS , _Y_UNDRS , _Y_SLSH  , _Y_BSLSH , XXXXXXX  ,
                            _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [_NUMBER] = LAYOUT(
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , KC_1     , KC_2     , KC_3     , KC_4     , KC_5     ,                       KC_6     , KC_7     , KC_8     , KC_9     , KC_0     , XXXXXXX  ,
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
                            _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

  [_INVISIBLE] = LAYOUT(
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,                       XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
      XXXXXXX  , KC_ESC   , KC_TAB   , KC_LEFT  , KC_RIGHT , XXXXXXX  ,                       XXXXXXX  , KC_DOWN  , KC_UP    , XXXXXXX  , KC_ENT   , XXXXXXX  ,
      XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_HOME  , KC_END   , XXXXXXX  , XXXXXXX  , XXXXXXX  , XXXXXXX  , KC_PGDN  , KC_PGUP  , XXXXXXX  , XXXXXXX  , XXXXXXX  ,
                            _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______  , _______
  ),

};

bool encoder_update_user(uint8_t index, bool clockwise) {
  // left half
  if (index == 0) {
    tap_code(clockwise ? KC_MS_LEFT : KC_MS_RIGHT);
  }
  // right half
  else {
    tap_code(clockwise ? KC_MS_DOWN : KC_MS_UP);
  }
  return true;
}
