#include QMK_KEYBOARD_H

enum layer_number {
  _WINDOWS = 0,
  _MAC,
  _NAV,
  _NUMBER,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Windows QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |Alt_Tab|  1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |BackSP|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | ` ~  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  RGB  |    |  MUTE |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  | MAC  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt |NUMBER|LCtrl | /  NAV  /       \Space \  |Enter | DEL  | RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_WINDOWS] = LAYOUT(
  A(KC_TAB),   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
     KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,     KC_GRV,
     KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  RM_NEXT, KC_MUTE,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TG(_MAC),
                        KC_LALT, MO(_NUMBER), KC_LCTL,  MO(_NAV),  KC_SPC,  KC_ENT, KC_DEL, KC_RGUI
),

/* Mac QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |Cmd_Tab|  1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |BackSP|
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  | ` ~  |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | ESC  |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  RGB  |    |  MUTE |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  | MAC  |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LCtrl|NUMBER| LCmd | /  NAV  /       \Space \  |Enter | DEL  | RAlt |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_MAC] = LAYOUT(
  G(KC_TAB),   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                     KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
     KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                     KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_GRV,
     KC_ESC,   KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                     KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT,   KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,  RM_NEXT, KC_MUTE,  KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, TG(_MAC),
                        KC_LCTL, MO(_NUMBER), KC_LGUI, MO(_NAV), KC_SPC,  KC_ENT, KC_DEL, KC_RALT
),

/* NAVIGATION
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |   !  |   @  |   #  |   $  |   %  |                    |   ^  |   &  |   *  |   (  |   )  |  ~   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |   [  |   ]  |   +  |                    |   =  |   (  |   )  |      |  \   |  |   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      | HOME |      |   _  |   -  |  END |-------.    ,-------| Left | Down |  Up  | Right|      |      |
 * |------+------+------+------+------+------|       |    |RGB_TOG|------+------+------+------+------+------|
 * |      |      |      |   <  |   >  |   +  |-------|    |-------|   =  |   {  |   }  |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Space \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_NAV] = LAYOUT(
  _______, KC_EXLM,   KC_AT, KC_HASH,   KC_DLR, KC_PERC,                    KC_CIRC, KC_AMPR, KC_ASTR, _______, _______, KC_TILD,
  _______, XXXXXXX, XXXXXXX, KC_LBRC,  KC_RBRC, KC_PLUS,                     KC_EQL, KC_LPRN, KC_RPRN, XXXXXXX, KC_BSLS, KC_PIPE,
  _______, KC_HOME, XXXXXXX, KC_UNDS, KC_MINUS,  KC_END,                    KC_LEFT, KC_DOWN,   KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
  _______, _______, _______,   KC_LT,    KC_GT, KC_PLUS, _______, RM_TOGG,   KC_EQL, KC_LCBR, KC_RCBR, _______, _______, _______,
                             _______,  _______, _______, _______, _______,  _______, _______, _______
),
/* NUMBER PAD
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |   7  |   8  |   9  |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|   4  |   5  |   6  |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------|    |-------|   1  |   2  |   3  |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \ Space\  |  0   |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_NUMBER] = LAYOUT(
  _______, _______, _______, _______, _______, _______,                     _______, _______, _______, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                       KC_P7,   KC_P8,   KC_P9, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,                       KC_P4,   KC_P5,   KC_P6, _______, _______, _______,
  _______, _______, _______, _______, _______, _______,  _______, _______,    KC_P1,   KC_P2,   KC_P3, _______, _______, _______,
                             _______, _______, _______,  _______, _______,    KC_P0, _______, _______
),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_WINDOWS]  = { ENCODER_CCW_CW(RM_VALU, RM_VALD), ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [_MAC]      = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
    [_NAV]      = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(RM_SPDU, RM_SPDD) },
    [_NUMBER]   = { ENCODER_CCW_CW(KC_TRNS, KC_TRNS), ENCODER_CCW_CW(KC_TRNS, KC_TRNS) },
};

// layer_state_t layer_state_set_user(layer_state_t state) {
//   return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
// }

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);
const char *read_rgb_info(void);
void draw_bongo(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
// void set_timelog(void);
// const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
    oled_write_ln(read_keylog(), false);
    oled_write_ln(read_keylogs(), false);
    oled_write_ln(read_rgb_info(), false);
    //oled_write_ln(read_mode_icon(keymap_config.swap_lalt_lgui), false);
    //oled_write_ln(read_host_led_state(), false);
    //oled_write_ln(read_timelog(), false);
  } else {
    draw_bongo();
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
