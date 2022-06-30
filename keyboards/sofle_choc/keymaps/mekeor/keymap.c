#include QMK_KEYBOARD_H
#include "keymap_german.h"


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// tap dance declarations

#define qk_td_state qk_tap_dance_state_t

#define _CG TD(TD_CG)
#define _SA TD(TD_SA)

enum td_keycodes {
  TD_CG,
  TD_SA,
};

typedef enum {
  TD_0,
  TD_1,
  TD_2,
  TD_3,
  TD_UNKNOWN
} td_state;

static td_state cg_state, sa_state;

td_state dance(qk_td_state *state);

void td_cg_finished(qk_td_state *state, void *user_data);
void td_cg_reset(qk_td_state *state, void *user_data);

void td_sa_finished(qk_td_state *state, void *user_data);
void td_sa_reset(qk_td_state *state, void *user_data);


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// layers

enum sofle_layers {
  _QWERTZ,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_QWERTZ] = LAYOUT(
    KC_NUBS  , DE_1     , DE_2     , DE_3     , DE_4     , DE_5     ,                       DE_6     , DE_7     , DE_8     , DE_9     , DE_0     , DE_SS    ,
    XXXXXXX  , DE_Q     , DE_W     , DE_E     , DE_R     , DE_T     ,                       DE_Z     , DE_U     , DE_I     , DE_O     , DE_P     , DE_UDIA  ,
    KC_LSFT  , DE_A     , DE_S     , DE_D     , DE_F     , DE_G     ,                       DE_H     , DE_J     , DE_K     , DE_L     , DE_ODIA  , DE_ADIA  ,
    KC_GRAVE , DE_Y     , DE_X     , DE_C     , DE_V     , DE_B     , KC_BTN1  , KC_BTN2  , DE_N     , DE_M     , DE_COMM  , DE_DOT   , DE_MINS  , DE_HASH  ,
                          XXXXXXX  , XXXXXXX  , XXXXXXX  , _SA      , _CG      , KC_ENT   , KC_SPC   , KC_BSPC  , KC_TAB   , XXXXXXX
),

};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// tap dance definitions

td_state dance(qk_td_state *state) {
  switch (state->count) {
  case 0: return TD_0;
  case 1: return TD_1;
  case 2: return TD_2;
  case 3: return TD_3;
  default: return TD_UNKNOWN;
  }
}

void td_cg_finished(qk_td_state *state, void *user_data) {
  cg_state = dance(state);
  switch (cg_state) {
  case TD_1: register_mods(MOD_LCTL); break;
  case TD_2: register_mods(MOD_LGUI); break;
  case TD_3: register_mods(MOD_LCTL | MOD_LGUI); break;
  default: break;
  }
}

void td_cg_reset(qk_td_state *state, void *user_data) {
  switch (cg_state) {
  case TD_1: unregister_mods(MOD_LCTL); break;
  case TD_2: unregister_mods(MOD_LGUI); break;
  case TD_3: unregister_mods(MOD_LCTL | MOD_LGUI); break;
  default: break;
  }
  cg_state = TD_0;
}

void td_sa_finished(qk_td_state *state, void *user_data) {
  sa_state = dance(state);
  switch (sa_state) {
  case TD_1: register_mods(MOD_LSFT); break;
  case TD_2: register_mods(MOD_LALT); break;
  case TD_3: register_mods(MOD_LSFT | MOD_LALT); break;
  default: break;
  }
}

void td_sa_reset(qk_td_state *state, void *user_data) {
  switch (sa_state) {
  case TD_1: unregister_mods(MOD_LSFT); break;
  case TD_2: unregister_mods(MOD_LALT); break;
  case TD_3: unregister_mods(MOD_LSFT | MOD_LALT); break;
  default: break;
  }
  sa_state = TD_0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_CG] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_cg_finished, td_cg_reset),
  [TD_SA] = ACTION_TAP_DANCE_FN_ADVANCED(NULL, td_sa_finished, td_sa_reset)
};


/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// encoder

bool encoder_update_user(uint8_t index, bool clockwise) {
  // left half
  if (index == 0)
    tap_code(clockwise ? KC_MS_LEFT : KC_MS_RIGHT);

  // right half
  else
    tap_code(clockwise ? KC_MS_DOWN : KC_MS_UP);

  return true;
}
