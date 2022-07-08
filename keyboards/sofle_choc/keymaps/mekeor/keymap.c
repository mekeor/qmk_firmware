#include QMK_KEYBOARD_H

#define _A      KC_LALT
#define _C      KC_LCTL
#define _G      KC_LGUI
#define _I      MO(_INVISIBLE)
#define _S      KC_LSFT
#define _U      MO(_UMLAUT)
#define _Y      MO(_SYMBOL)

#define _U_AE    XP(_LOWER_AE, _UPPER_AE)
#define _U_CC    XP(_LOWER_CC, _UPPER_CC)
#define _U_CS    XP(_LOWER_CS, _UPPER_CS)
#define _U_G     XP(_LOWER_G,  _UPPER_G)
#define _U_I     XP(_LOWER_I,  _UPPER_I)
#define _U_MICRO _MICRO
#define _U_OE    XP(_LOWER_OE, _UPPER_OE)
#define _U_SZ    XP(_LOWER_SZ, _UPPER_SZ)
#define _U_UE    XP(_LOWER_UE, _UPPER_UE)

#define _Y_APOS  KC_QUOTE
#define _Y_ASTSK LSFT(KC_8)
#define _Y_AT    LSFT(KC_2)
#define _Y_BRL   KC_LEFT_BRACKET
#define _Y_BRR   KC_RIGHT_BRACKET
#define _Y_BSLSH KC_BACKSLASH
#define _Y_CBRL  LSFT(KC_LEFT_BRACKET)
#define _Y_CBRR  LSFT(KC_RIGHT_BRACKET)
#define _Y_CLN   LSFT(KC_SEMICOLON)
#define _Y_COMM  KC_COMMA
#define _Y_CURR  LSFT(KC_4)
#define _Y_DOT   KC_DOT
#define _Y_EQ    KC_EQUAL
#define _Y_ET    LSFT(KC_7)
#define _Y_EXCL  LSFT(KC_1)
#define _Y_GT    LSFT(KC_DOT)
#define _Y_LT    LSFT(KC_COMMA)
#define _Y_MINUS KC_MINUS
#define _Y_PERC  LSFT(KC_5)
#define _Y_PRL   LSFT(KC_9)
#define _Y_PRR   LSFT(KC_0)
#define _Y_QUEST LSFT(KC_SLASH)
#define _Y_QUOT  LSFT(KC_QUOTE)
#define _Y_SCLN  KC_SEMICOLON
#define _Y_SLSH  KC_SLASH
#define _Y_UNDRS LSFT(KC_MINUS)

enum unicode_names {
  _UPPER_AE,
  _LOWER_AE,
  _UPPER_CC,
  _LOWER_CC,
  _UPPER_CS,
  _LOWER_CS,
  _UPPER_G,
  _LOWER_G,
  _UPPER_I,
  _LOWER_I,
  _MICRO,
  _UPPER_OE,
  _LOWER_OE,
  _UPPER_SZ,
  _LOWER_SZ,
  _UPPER_UE,
  _LOWER_UE
};

const uint32_t PROGMEM unicode_map[] = {
  [_UPPER_AE] = 0xc4,   // Ä
  [_LOWER_AE] = 0xe4,   // ä
  [_UPPER_CC] = 0xc7,   // Ç
  [_LOWER_CC] = 0xe7,   // ç
  [_UPPER_CS] = 0x15e,  // Ş
  [_LOWER_CS] = 0x15f,  // ş
  [_UPPER_G]  = 0x11e,  // Ğ
  [_LOWER_G]  = 0x11f,  // ğ
  [_UPPER_I]  = 0x130,  // İ
  [_LOWER_I]  = 0x131,  // ı
  [_MICRO]    = 0xb5,   // µ
  [_UPPER_OE] = 0xd6,   // Ö
  [_LOWER_OE] = 0xf6,   // ö
  [_UPPER_SZ] = 0x1e9e, // ẞ
  [_LOWER_SZ] = 0xdf,   // ß
  [_UPPER_UE] = 0xdc,   // Ü
  [_LOWER_UE] = 0xfc,   // ü
};

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
