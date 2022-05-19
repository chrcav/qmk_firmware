#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
#define _QWERTY 1
#define _COLEMAK 2
#define _DVORAK 3
#define _LOWER 4
#define _RAISE 5
#define _ADJUST 6


enum tap {
  TD_ESC_CAPS = 0
};

qk_tap_dance_action_t tap_dance_actions[] = {
  [TD_ESC_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, KC_CAPS)
};

enum unicode_name {
  UNI_GRIN, // grinning face
  UNI_TJOY, // tears of joy
  UNI_SMILE, // grining face with smiling eyes
  UNI_HEART, // heart
  UNI_EYERT, // smiling face with heart shaped eyes
  UNI_CRY, // crying face
  UNI_SMEYE, // smiling face with smiling eyes
  UNI_UNAMU, // unamused
  UNI_KISS, // kiss
  UNI_HART2, // two hearts
  UNI_WEARY, // weary
  UNI_OKHND, // ok hand sign
  UNI_PENSV, // pensive
  UNI_SMIRK, // smirk
  UNI_RECYC, // recycle
  UNI_WINK, // wink
  UNI_THMUP, // thumb up
  UNI_THMDN, // thumb down
  UNI_PRAY, // pray
  UNI_PHEW, // relieved
  UNI_MUSIC, // musical notes
  UNI_FLUSH, // flushed
  UNI_CELEB, // celebration
  UNI_CRY2, // crying face
  UNI_COOL, // smile with sunglasses
  UNI_NOEVS, // see no evil
  UNI_NOEVH, // hear no evil
  UNI_NOEVK, // speak no evil
  UNI_POO, // pile of poo
  UNI_EYES, // eyes
  UNI_VIC, // victory hand
  UNI_BHART, // broken heart
  UNI_SLEEP, // sleeping face
  UNI_SMIL2, // smiling face with open mouth & sweat
  UNI_HUNRD, // 100
  UNI_CONFU, // confused
  UNI_TONGU, // face with tongue & winking eye
  UNI_DISAP, // disappointed
  UNI_YUMMY, // face savoring delicious food
  UNI_CLAP, // hand clapping
  UNI_FEAR, // face screaming in fear
  UNI_HORNS, // smiling face with horns
  UNI_HALO, // smiling face with halo
  UNI_BYE, // waving hand
  UNI_SUN, // sun
  UNI_MOON, // moon
  UNI_SKULL, // skull
};

const uint32_t PROGMEM unicode_map[] = {
  [UNI_GRIN] = 0x1F600,
  [UNI_TJOY] = 0x1F602,
  [UNI_SMILE] = 0x1F601,
  [UNI_HEART] = 0x2764,
  [UNI_EYERT] = 0x1f60d,
  [UNI_CRY] = 0x1f62d,
  [UNI_SMEYE] = 0x1F60A,
  [UNI_UNAMU] = 0x1F612,
  [UNI_KISS] = 0x1F618,
  [UNI_HART2] = 0x1F495,
  [UNI_WEARY] = 0x1F629,
  [UNI_OKHND] = 0x1F44C,
  [UNI_PENSV] = 0x1F614,
  [UNI_SMIRK] = 0x1F60F,
  [UNI_RECYC] = 0x267B,
  [UNI_WINK] = 0x1F609,
  [UNI_THMUP] = 0x1F44D,
  [UNI_THMDN] = 0x1F44E,
  [UNI_PRAY] = 0x1F64F,
  [UNI_PHEW] = 0x1F60C,
  [UNI_MUSIC] = 0x1F3B6,
  [UNI_FLUSH] = 0x1F633,
  [UNI_CELEB] = 0x1F64C,
  [UNI_CRY2] = 0x1F622,
  [UNI_COOL] = 0x1F60E,
  [UNI_NOEVS] = 0x1F648,
  [UNI_NOEVH] = 0x1F649,
  [UNI_NOEVK] = 0x1F64A,
  [UNI_POO] = 0x1F4A9,
  [UNI_EYES] = 0x1F440,
  [UNI_VIC] = 0x270C,
  [UNI_BHART] = 0x1F494,
  [UNI_SLEEP] = 0x1F634,
  [UNI_SMIL2] = 0x1F605,
  [UNI_HUNRD] = 0x1F4AF,
  [UNI_CONFU] = 0x1F615,
  [UNI_TONGU] = 0x1F61C,
  [UNI_DISAP] = 0x1F61E,
  [UNI_YUMMY] = 0x1F60B,
  [UNI_CLAP] = 0x1F44F,
  [UNI_FEAR] = 0x1F631,
  [UNI_HORNS] = 0x1F608,
  [UNI_HALO] = 0x1F607,
  [UNI_BYE] = 0x1F44B,
  [UNI_SUN] = 0x2600,
  [UNI_MOON] = 0x1F314,
  [UNI_SKULL] = 0x1F480
};

enum custom_keycodes {
  QWERTY = SAFE_RANGE,
  COLEMAK,
  DVORAK
};

#define KC_CAPW LGUI(LSFT(KC_3))        // Capture whole screen
#define KC_CPYW LGUI(LSFT(LCTL(KC_3)))  // Copy whole screen
#define KC_CAPP LGUI(LSFT(KC_4))        // Capture portion of screen
#define KC_CPYP LGUI(LSFT(LCTL(KC_4)))  // Copy portion of screen
#define LOWER  MO(_LOWER)
#define RAISE  MO(_RAISE)
#define ADJUS MO(_ADJUST)
#define KC_TDESC TD(TD_ESC_CAPS)
#define KC_SHFENT MT(MOD_LSFT, KC_ENT)
#define KC_THMUP X(UNI_THMUP)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Qwerty
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |   Y  |   U  |   I  |   O  |   P  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   S  |   D  |   F  |   G  |   H  |   J  |   K  |   L  |   ;  |  "   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   N  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | GUI  |Lower | Bkps |Space |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_QWERTY] = LAYOUT_ortho_4x12( \
   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS, \
   KC_TDESC,KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, \
   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SHFENT, \
   ADJUS,  KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_BSPC, KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT  \
),

/* Colemak
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   Q  |   W  |   F  |   P  |   G  |   J  |   L  |   U  |   Y  |   ;  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   R  |   S  |   T  |   D  |   H  |   N  |   E  |   I  |   O  |  '   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   Z  |   X  |   C  |   V  |   B  |   K  |   M  |   ,  |   .  |   /  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | GUI  |Lower |Space | Bksp |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_COLEMAK] = LAYOUT_ortho_4x12( \
  KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,    KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_MINS, \
  KC_TDESC,KC_A,    KC_R,    KC_S,    KC_T,    KC_D,    KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT, \
  KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_SHFENT, \
  ADJUS,  KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_BSPC, KC_SPC, RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* Dvorak
 * ,-----------------------------------------------------------------------------------.
 * | Tab  |   '  |   ,  |   .  |   P  |   Y  |   F  |   G  |   C  |   R  |   L  | Bksp |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Esc  |   A  |   O  |   E  |   U  |   I  |   D  |   H  |   T  |   N  |   S  |  /   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * | Shift|   ;  |   Q  |   J  |   K  |   X  |   B  |   M  |   W  |   V  |   Z  |Enter |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |Adjust| Ctrl | Alt  | GUI  |Lower |Space | Bksp |Raise | Left | Down |  Up  |Right |
 * `-----------------------------------------------------------------------------------'
 */
[_DVORAK] = LAYOUT_ortho_4x12( \
  KC_TAB,  KC_QUOT, KC_COMM, KC_DOT,  KC_P,    KC_Y,    KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_BSPC, \
  KC_ESC,  KC_A,    KC_O,    KC_E,    KC_U,    KC_I,    KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_SLSH, \
  KC_LSFT, KC_SCLN, KC_Q,    KC_J,    KC_K,    KC_X,    KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    KC_ENT , \
  ADJUS,  KC_LCTL, KC_LGUI, KC_LALT, LOWER,   KC_BSPC, KC_SPC,  RAISE,   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT \
),

/* Lower
 * ,-----------------------------------------------------------------------------------.
 * |   `  |   1  |   2  |   3  |   4  |   5  |   6  |   7  |   8  |   9  |   0  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   _  |   +  |   {  |   }  |  |   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO ~ |ISO | |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_LOWER] = LAYOUT_ortho_4x12( \
  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_DEL,  \
  KC_DEL,  KC_CAPP, KC_LEFT, KC_RGHT, KC_UP,   KC_LBRC, KC_RBRC, KC_4,    KC_5,    KC_6,    KC_PLUS, KC_PIPE, \
  _______, KC_CPYP, _______, _______, KC_DOWN, KC_LCBR, KC_RCBR, KC_1,    KC_2,    KC_3,    KC_MINS, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \
),

/* Raise
 * ,-----------------------------------------------------------------------------------.
 * |   ~  |   !  |   @  |   #  |   $  |   %  |   ^  |   &  |   *  |   (  |   )  | Del  |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * | Del  |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |   -  |   =  |   [  |   ]  |  \   |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |ISO # |ISO / |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      | Next | Vol- | Vol+ | Play |
 * `-----------------------------------------------------------------------------------'
 */
[_RAISE] = LAYOUT_ortho_4x12( \
  KC_TILD, KC_EXLM, KC_AT,   KC_HASH, KC_DLR,  KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL,  \
  KC_DEL , KC_MPRV, KC_MNXT, KC_VOLU, KC_PGUP, KC_UNDS, KC_EQL,  KC_HOME, _______, _______, _______, KC_BSLS, \
  KC_MUTE, KC_MSTP, KC_MPLY, KC_VOLD, KC_PGDN, KC_MINS, KC_PLUS, KC_END,  KC_THMUP,_______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY  \
),

/* Adjust (Lower + Raise)
 * ,-----------------------------------------------------------------------------------.
 * |      | Reset|      |      |      |      |      |      |      |      |      |  Del |
 * |------+------+------+------+------+-------------+------+------+------+------+------|
 * |      |      |      |Aud on|Audoff|AGnorm|AGswap|Qwerty|Colemk|Dvorak|      |      |
 * |------+------+------+------+------+------|------+------+------+------+------+------|
 * |      |      |      |      |      |      |      |      |      |      |      |      |
 * |------+------+------+------+------+------+------+------+------+------+------+------|
 * |      |      |      |      |      |             |      |      |      |      |      |
 * `-----------------------------------------------------------------------------------'
 */
[_ADJUST] =  LAYOUT_ortho_4x12( \
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  \
  RESET,   _______, _______, AU_ON,   AU_OFF,  AG_NORM, AG_SWAP, QWERTY,  COLEMAK, DVORAK,  _______, _______, \
  _______, _______, _______, _______, _______, UC_M_LN, UC_M_WI, _______, _______, _______, _______, _______, \
  _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______  \
)


};

void eeconfig_init_user(void) {
    set_unicode_input_mode(UC_WIN);
}

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case QWERTY:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_QWERTY);
      }
      return false;
    case COLEMAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_COLEMAK);
      }
      return false;
    case DVORAK:
      if (record->event.pressed) {
        set_single_persistent_default_layer(_DVORAK);
      }
      return false;
  }
  return true;
}
