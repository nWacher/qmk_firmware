/*
 * Lily58 keymap configuration
 *
 * Hardware-specific settings below assume a Pro Micro-compatible
 * controller and the original Lily58 serial connection on PD2 / D2.
 */
#pragma once

// Split keyboard handedness: USB is connected to the left half.
#define MASTER_LEFT

// Split transport: modern equivalent of the legacy USE_SERIAL_PD2.
#define SOFT_SERIAL_PIN D2

// Tap/hold behaviour.
#define TAPPING_TERM 110
// Replaces the deprecated TAPPING_FORCE_HOLD setting.
// A zero quick-tap term disables tap-key auto-repeat after a quick tap.
#define QUICK_TAP_TERM 0
/*
// RGB underglow.
#define RGBLIGHT_LED_COUNT 27
#define RGBLIGHT_LIMIT_VAL 120
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

// Explicit replacements for the deprecated RGBLIGHT_ANIMATIONS macro.
#define RGBLIGHT_EFFECT_ALTERNATING
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_CHRISTMAS
#define RGBLIGHT_EFFECT_KNIGHT
#define RGBLIGHT_EFFECT_RAINBOW_MOOD
#define RGBLIGHT_EFFECT_RAINBOW_SWIRL
#define RGBLIGHT_EFFECT_RGB_TEST
#define RGBLIGHT_EFFECT_SNAKE
#define RGBLIGHT_EFFECT_STATIC_GRADIENT
#define RGBLIGHT_EFFECT_TWINKLE
*/
