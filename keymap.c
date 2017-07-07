#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
#include "keymap_extras/keymap_uk.h"
#include "keymap_extras/keymap_german.h"
#include "keymap_extras/keymap_norwegian.h"
#include "keymap_extras/keymap_fr_ch.h"
#include "keymap_extras/keymap_german_osx.h"
#include "keymap_extras/keymap_spanish.h"
#include "keymap_extras/keymap_bepo.h"


/**
* This layout was generated using the ErgodoxLayoutGenerator (ELG). You can download it from https://github.com/sboesebeck/ErgodoxLayoutGenerator/releases
* documentation about it can be found here https://boesebeck.name/2016/04/16/ergodoxlayoutgenerator-documentation/
* Thanks to the team of Erez Zukerman for building the great Ergodox-EZ!
*
* use at own risk!
**/

#define BASE 0
#define SYMB 1
#define MOUSE 2

    //macro name is number 0

//Layout keymap.c generated with ErgodoxLayoutGenerator V1.0BETA1
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/**
* Layer: 0
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | ESCAPE     | 1          | 2          | 3          | 4          | 5          | °         |                | RIGHT      | 6          | 7          | 8          | 9          | 0          | ß          |
* |            |            |            |            |            |            | ^         |                |            |            |            |            |            |            |            |
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | TAB        | Q          | W          | E          | R          | T          | SYMB       |               | SYMB       | Z          | U          | I          | O          | P          | Ü          |
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------/\            |               |            /-----------//-----------//-----------//-----------//-----------//-----------/
* | SYMB       | A          | S          | D          | F          | G          |            |               |            | H          | J          | K          | L          | Ö          | Ä          |
* |            |            |            |            |            |            |----------- /               /------------|            |            |            |            | MOUSE      | SYMB       |
* /-----------//-----------//-----------//-----------//-----------//-----------//            |               |            /-----------//-----------//-----------//-----------//-----------//------------/
* | Shift      | Y          | X          | C          | V          | B          | BSPACE     |               | DEL        | N          | M          | ,          | .          | /          | Shift      |
* |            | Ctrl       |            |            |            |            |            |               |            |            |            |            |            | Ctrl       |            |
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\               
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
* /-----------//-----------//-----------//-----------//-----------/                                                                     /-----------//-----------//-----------//-----------//-----------/
* | GRAVE      | 'E         | ALT+Shift  | LEFT       | RIGHT      |                                                                    | UP         | DOWN       | LBRACKET   | RBRACKET   | SYMB       |
* | MOUSE      |            |            |            |            |                                                                    |            |            |            |            |            |
* \-----------\\-----------\\-----------\\-----------\/-----------/ /-----------//-----------/                /-----------/\-----------\\-----------\\-----------\\-----------\\-----------\\-----------/
*                                                                   | APPLICATION| HOME       |               | Alt        | ESCAPE     |
*                                                                   | ALT        |            |               |            | Ctrl       |
*                                                                   \-----------\/-----------/                /-----------/\-----------\
*                                                                                | END         |              | PGUP       |
*                                                                                |            |               |            |
*                                                      /-----------//-----------//-----------/                /-----------//-----------//-----------/
*                                                      | SPACE      | CMD        | ENTER      |               | TAB        | Cmd        | SPACE     |
*                                                      |            |            |            |               |            |            |           |
*                                                      \-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\
*                                                                                                                                                                                                                      
* 
**/
[BASE]=KEYMAP(
//left half
    KC_ESCAPE,              KC_1,               KC_2,               KC_3,               KC_4,               KC_5,           KC_EQUAL,
    KC_TAB,                 KC_Q,               KC_W,               KC_E,               KC_R,               KC_T,           TG(SYMB),
    MO(SYMB),               LT(MOUSE,KC_A),     KC_S,               KC_D,               KC_F,               KC_G,
    KC_LSHIFT,              CTL_T(DE_OSX_Y), KC_X,               KC_C,               KC_V,               KC_B,           KC_BSPACE,

    LT(MOUSE,KC_GRAVE),     KC_QUOTE,           LALT(KC_LSHIFT),    KC_LEFT,            KC_RIGHT,

                                                                                                    ALT_T(KC_APPLICATION),  KC_HOME,
                                                                                                                            KC_END,
                                                                                        KC_SPACE,           KC_LGUI,        KC_ENTER,
    //right half
    KC_RIGHT,               KC_6,               KC_7,               KC_8,               KC_9,               KC_0,           DE_SS,
    TG(SYMB),               DE_Z,               KC_U,               KC_I,               KC_O,               KC_P,           DE_UE,
                            KC_H,               KC_J,               KC_K,               KC_L,               LT(MOUSE,DE_OE),LT(SYMB,DE_AE),
    KC_DEL,                 KC_N,               KC_M,               KC_COMMA,           KC_DOT,             CTL_T(KC_SLASH),KC_RSHIFT,
                            KC_UP,              KC_DOWN,            KC_LBRACKET,        KC_RBRACKET,        MO(SYMB),
    KC_LALT,                CTL_T(KC_ESCAPE),
    KC_PGUP, 
    KC_TAB,                 KC_LGUI,            KC_SPACE),
/**
* Layer: 1
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | ESCAPE     | F1         | F2         | F3         | F4         | F5         |            |               |            | F6         | F7         | F8         | F9         | F10        | F11        |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* |            | !          | @          | {          | }          | |          |            |               |            | UP         | 7          | 8          | 9          | *          | F12        |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------/\-----------\                \-----------\/-----------//-----------//-----------//-----------//-----------//-----------/               
* |            | $          | /          | (          | )          | #          |                                         | DOWN       | 4          | 5          | 6          | +          |            |
* |            |            |            |            |            |            |                                         |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* |            | %          | °          | [          | ]          | ~          |            |               |            | €          | 1          | 2          | 3          | BSLASH     |            |
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\               
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
* /-----------//-----------//-----------//-----------//-----------/                                                                     /-----------//-----------//-----------//-----------//-----------/
* |            |            |            |            |            |                                                                    |            | .          | 0          | EQUAL      |            |
* |            |            |            |            |            |                                                                    |            |            |            |            |            |
* \-----------\\-----------\\-----------\\-----------\/------------//-----------//-----------/                 /-----------//-----------/\-----------\\-----------\\-----------\\-----------\\-----------\
*                                                                  | invalid    |            |                | invalid    | invalid    |
*                                                                  |            |            |                |            |            |
*                                                                  \-----------\/-----------/                 /-----------/\-----------\
*                                                                               |            |                |            |
*                                                                               |            |                |            |
*                                                     /-----------//-----------//-----------/                 /-----------//-----------//-----------/
*                                                     |            |            |            |                |            |            |            |
*                                                     |            |            |            |                |            |            |            |
*                                                     \-----------\\-----------\\-----------\                 \-----------\\-----------\\-----------\
*                                                                                                                                                                                                                      
* 
**/
[SYMB]=KEYMAP(
//left half
    KC_ESCAPE,              KC_F1,              KC_F2,              KC_F3,              KC_F4,              KC_F5,              KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_EXLM,            DE_OSX_AT,          DE_OSX_LCBR,        DE_OSX_RCBR,        DE_OSX_PIPE,        KC_TRANSPARENT,
    KC_TRANSPARENT,         DE_OSX_DLR,         DE_OSX_SLSH,        DE_OSX_LPRN,        DE_OSX_RPRN,        DE_OSX_HASH,
    KC_TRANSPARENT,         KC_PERC,            DE_OSX_AMPR,        DE_OSX_LBRC,        DE_OSX_RBRC,        KC_TILD,            KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                                                            KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                                                                                KC_TRANSPARENT,
                                                                                        KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    //right half
    KC_TRANSPARENT,         KC_F6,              KC_F7,              KC_F8,              KC_F9,              KC_F10,             KC_F11,
    KC_TRANSPARENT,         KC_UP,              KC_7,               KC_8,               KC_9,               KC_ASTR,            KC_F12,
                            KC_DOWN,            KC_4,               KC_5,               KC_6,               KC_PLUS,            KC_TRANSPARENT,
    KC_TRANSPARENT,         DE_OSX_EURO,        KC_1,               KC_2,               KC_3,               KC_BSLASH,          KC_TRANSPARENT,

                                                KC_TRANSPARENT,     KC_DOT,             KC_0,               KC_EQUAL,           KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT, KC_TRANSPARENT),
/**
* Layer: 2
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------/ -----------//
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------/ -----------//
* |            |            |            | UP         |            |            |            |               |            |            |            | UP         |            |            |            |
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |
* /-----------//-----------//-----------//-----------//-----------//-----------/\-----------\                \-----------\/-----------//-----------//-----------//-----------//-----------/ -----------//
* |            |            | LEFT       | DOWN       | RIGHT      |            |                                         |            | LEFT       | DOWN       | RIGHT      |            |            |
* |            |            |            |            |            |            |                                         |            |            |            |            |            |            |
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------/ -----------//
* |            |            |            |            |            |            |            |               |            |            | NEXT       | PREV       |            |            |            |
* |            |            |            |            |            |            |            |               |            |            | TRACK      | TRACK      |            |            |            |
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\ -----------\\
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
*                           /-----------//-----------//-----------//-----------//-----------/                                           /-----------//-----------//-----------//-----------//-----------/
*                           |            |            |            | BTN1       | BTN2       |                                          | UP         | DOWN       | MUTE       | PAUSE      |           |
*                           |            |            |            |            |            |                                          |            |            |            |            |           |
*                           \-----------\\-----------\\-----------\\-----------\/-----------//-----------/   /-----------//-----------/ \-----------\\-----------\\-----------\\-----------\\-----------\
*                                                                               |            |            |  |            |            |                                                                               
*                                                                               |            |            |  |            |            |                                                                               
*                                                                               \-----------\/-----------/   /-----------/\-----------\                                                                                
*                                                                                            |            |  |            |                                                                                            
*                                                                                            |            |  |            |                                                                                            
*                                                                  /-----------//-----------//-----------/   /-----------//-----------//-----------/                                                                   
*                                                                  |  ENTER     | DEL        |            |  |            |            | BACK       |
*                                                                  |            |            |            |  |            |            |            |                                                                  
*                                                                  \-----------\\-----------\\-----------\   \-----------\\-----------\\-----------\                                                                   
*                                                                                                                                                                                                                      
* 
**/
[MOUSE]=KEYMAP(
//left half
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_MS_UP,           KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_MS_LEFT,         KC_MS_DOWN,         KC_MS_RIGHT,        KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,

    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_MS_BTN1,         KC_MS_BTN2,
                                                                                                            KC_TRANSPARENT,     KC_TRANSPARENT,
                                                                                                                                KC_TRANSPARENT,
                                                                                        KC_ENTER,           KC_DEL,             KC_TRANSPARENT,
    //right half
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_TRANSPARENT,     KC_UP,              KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,
                            KC_TRANSPARENT,     KC_LEFT,            KC_DOWN,            KC_RIGHT,           KC_TRANSPARENT,     KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_MEDIA_PREV_TRACK,KC_MEDIA_NEXT_TRACK,KC_TRANSPARENT,     KC_TRANSPARENT,     KC_TRANSPARENT,

                                                KC_AUDIO_VOL_UP,    KC_AUDIO_VOL_DOWN,  KC_AUDIO_MUTE,      KC_MEDIA_PLAY_PAUSE,KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,
    KC_TRANSPARENT,
    KC_TRANSPARENT,         KC_TRANSPARENT,     KC_WWW_BACK),
};

const uint16_t PROGMEM fn_actions[] = {

};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
//static uint16_t start;
switch(id) {
case 0:
//Macro: 0//-----------------------



        if (record->event.pressed) {

        }
        

break;
}
return MACRO_NONE;
};

// Runs just one time when the keyboard initializes.
void matrix_init_user(void) {

};

// Runs constantly in the background, in a loop.
void matrix_scan_user(void) {

    uint8_t layer = biton32(layer_state);

    ergodox_board_led_off();
    ergodox_right_led_1_off();
    ergodox_right_led_2_off();
    ergodox_right_led_3_off();
    switch (layer) {
        case 1:
            ergodox_right_led_1_on();
            break;
        case 2:
            ergodox_right_led_2_on();
            break;
/*
        case 3:
            ergodox_right_led_3_on();
            break;
        case 4:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            break;
        case 5:
            ergodox_right_led_1_on();
            ergodox_right_led_3_on();
            break;
        case 6:
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
        case 7:
            ergodox_right_led_1_on();
            ergodox_right_led_2_on();
            ergodox_right_led_3_on();
            break;
            */
        default:
            break;
    }

};