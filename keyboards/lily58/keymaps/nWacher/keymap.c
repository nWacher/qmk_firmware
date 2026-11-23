#include QMK_KEYBOARD_H

enum layer_number {
    _DVORAK = 0,
    _QWERTY,
    _LOWER,
    _RAISE,
    _ADJUST,
};

// Tap for Caps Lock; hold for Shift.
#define SFT_CPS LSFT_T(KC_CAPS)
// Ctrl+Left / Ctrl+Right word navigation.
#define CLeft LCTL(KC_LEFT)
#define CRight LCTL(KC_RIGHT)
// Ctrl+Space.
#define CSPC LCTL(KC_SPC)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |CPSSFT|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Enter  \  |RAISE |BackSP| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LCTL, KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  SFT_CPS,  KC_Z,   KC_X,    KC_C,    KC_V,    KC_B, KC_LBRC,  KC_RBRC,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_ENT, MO(_RAISE), KC_BSPC, KC_RALT
),
 /* DVORAK
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  \   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   ´  |   ,  |   .  |   P  |   Y  |                    |   F  |   G  |   C  |   R  |   L  |  /   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   O  |   E  |   U  |   I  |-------.    ,-------|   D  |   H  |   T  |   N  |   S  |  -   |
 * |------+------+------+------+------+------|   [   |    |    ]  |------+------+------+------+------+------|
 * |CPSSFT|   ;  |   Q  |   J  |   K  |   X  |-------|    |-------|   B  |   M  |   W  |   V  |   Z  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Enter  /       \Space \  |RAISE |BackSP| RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_DVORAK] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSLS,
  KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,                     KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_SLSH,
  KC_LCTL, KC_A,   KC_O,    KC_E,    KC_U,    KC_I,                     KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_MINS,
  SFT_CPS, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X, KC_LBRC,  KC_RBRC,  KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_RSFT,
                        KC_LALT, KC_LGUI, MO(_LOWER), KC_ENT, KC_SPC, MO(_RAISE), KC_BSPC, KC_RALT
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |  F7  |  F8  |  F9  | F10  | F11  | F12  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |   `  |   !  |   @  |   #  |   $  |   %  |-------.    ,-------|   ^  |   &  |   *  |   (  |   )  | =/+  |
 * |------+------+------+------+------+------| TRNS |    | TRNS |------+------+------+------+------+------|
 * | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |-------|    |-------| [/{  |  ]/} |   \  |   {  |   }  |   |  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                  | TRNS | TRNS | TRNS | / TRNS  /       \ TRNS  \  | ADJ  | Del  | TRNS |
 *                  |      |      |      |/       /         \      \ |      |      |      |
 *                  `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,
  KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_GRV, KC_EXLM,  KC_AT,   KC_HASH, KC_DLR,  KC_PERC,                   KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_EQL,
  _______, _______, _______, _______, _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_BSLS, KC_LCBR, KC_RCBR, KC_PIPE,
                             _______, _______, _______, _______, _______, MO(_ADJUST), KC_DEL,  _______
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |                    | TRNS | TRNS | TRNS | TRNS | TRNS | TRNS |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   1  |   2  |   3  |   4  |   5  |                    |Pg Up |CLeft |  Up  |CRight|   0  | TRNS |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL | NO*  |  F3  |  F4  |  F5  |  F6  |-------.    ,-------|Pg Dn | Left | Down |Right |Right |XXXXXX|
 * |------+------+------+------+------+------| PSCRN|    |AltPSCR|------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |-------|    |-------|  +   | Home |CSpace| End  |   ]  |   \\  |
 * `-----------------------------------------/       /     \\      \\-----------------------------------------'
 *                  | TRNS | TRNS | ADJ  | / TRNS  /       \\ TRNS  \\  | TRNS | TRNS | TRNS |
 *                  |      |      |      |/       /         \\      \\ |      |      |      |
 *                  `----------------------------'           '------''--------------------'
 * NO* = LCA(KC_NO), a modified KC_NO with no useful key action.
 */
[_RAISE] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  KC_TAB,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                        KC_PGUP, CLeft,   KC_UP,   CRight,  KC_0,    _______,
  KC_LCTL, LCA(KC_NO), KC_F3,  KC_F4,   KC_F5,   KC_F6,                       KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_RGHT, XXXXXXX,
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,   KC_PSCR, LALT(KC_PSCR),  KC_PLUS, KC_HOME, CSPC,    KC_END,  KC_RBRC, KC_BSLS,
                             _______, _______, MO(_ADJUST),  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |XXXXXX|XXXXXX|XXXXXX| VOL- | VOL+ | MUTE |                    | PREV | NEXT | PLAY |XXXXXX|XXXXXX|XXXXXX|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|                    |XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |XXXXXX|XXXXXX|XXXXXX|XXXXXX|AG_LSWP|AG_LNRM|-------.    ,-------|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|
 * |------+------+------+------+------+------| DF(DV)|    |DF(QW) |------+------+------+------+------+------|
 * |XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|-------|    |-------|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|XXXXXX|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                  | TRNS | TRNS | TRNS | / TRNS  /       \ TRNS  \  | TRNS | TRNS | TRNS |
 *                  |      |      |      |/       /         \      \ |      |      |      |
 *                  `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_VOLU, KC_MUTE,                   KC_MPRV, KC_MNXT, KC_MPLY, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, AG_LSWP, AG_LNRM,                   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, DF(_DVORAK), DF(_QWERTY), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______, _______, _______,  _______, _______, _______
  )
};

// Keep ADJUST active while both LOWER and RAISE are held.
layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

// Enable OLED_ENABLE = yes in rules.mk to compile this display code.
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// OLED helper functions supplied by the Lily58 keymap's lib directory.
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);

/*

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // Show the highest active layer, including the selected base layout.
    switch (get_highest_layer(layer_state | default_layer_state)) {
      case _DVORAK:
      case _QWERTY:
        oled_write_ln("Layer: Base", false);
        break;
      case _LOWER:
        oled_write_ln("Layer: Lower", false);
        break;
      case _RAISE:
        oled_write_ln("Layer: Raise", false);
        break;
      case _ADJUST:
        oled_write_ln("Layer: Adjust", false);
        break;
      default:
        oled_write_ln("Layer: Unknown", false);
        break;
    }

    // Keep the original key logger, then show base layout and Alt/GUI mode.
    oled_write_ln(read_keylog(), false);

    const bool dvorak = get_highest_layer(default_layer_state) == _DVORAK;
    const bool mac_mode = keymap_config.swap_lalt_lgui;
    if (dvorak) {
      oled_write_ln(mac_mode ? "Dvorak | Mac" : "Dvorak | Normal", false);
    } else {
      oled_write_ln(mac_mode ? "Qwerty | Mac" : "Qwerty | Normal", false);
    }

    // host_keyboard_led_state() reflects the host's actual Caps Lock LED state.
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln(led_usb_state.caps_lock ? "Caps: ON" : "Caps: off", false);
  } else {
    oled_write(read_logo(), false);
  }
  return false;
}
*/

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        oled_write_ln("MASTER", false);
    } else {
        oled_write_ln("SLAVE", false);
    }

    return false;
}

#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (record->event.pressed) {
#ifdef OLED_ENABLE
    set_keylog(keycode, record);
#endif
    // set_timelog();
  }
  return true;
}
