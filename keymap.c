#include "ergodox.h"
#include "debug.h"
#include "action_layer.h"
//#include "keymap_extras/keymap_french.h"
#include "keymap_extras/keymap_neo2.h"
#include "keymap_extras/keymap_uk.h"
#include "keymap_extras/keymap_colemak.h"
//#include "keymap_extras/keymap_french_osx.h"
#include "keymap_extras/keymap_nordic.h"
#include "keymap_extras/keymap_dvorak.h"
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
* | EQUAL      | 1          | 2          | 3          | 4          | 5          | LEFT       |               | RIGHT      | 6          | 7          | 8          | 9          | 0          | MINUS      |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | DELETE     | Q          | W          | E          | R          | T          | 1          |               | 1          | Y          | U          | I          | O          | P          | BSLASH     |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------/\-----------\                \-----------\/-----------//-----------//-----------//-----------//-----------//-----------/               
* | BSPACE     | A          | S          | D          | F          | G          |                                         | H          | J          | K          | L          | SCOLON     | 'E         |              
* |            |            |            |            |            |            |                                         |            |            |            |            | 2          | CMD        |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | Shift      | Z          | X          | C          | V          | B          | NO         |               | NO         | N          | M          | ,          | .          | /          | Shift      |              
* |            | Ctrl       |            |            |            |            | Hyper      |               | Meh        |            |            |            |            | Ctrl       |            |              
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\               
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
*                           /-----------//-----------//-----------//-----------//-----------/                                                       /-----------//-----------//-----------//-----------//-----------/  
*                           | GRAVE      | 'E         | ALT+Shift  | LEFT       | RIGHT      |                                                      | UP         | DOWN       | LBRACKET   | RBRACKET   | 1          | 
*                           | 1          |            |            |            |            |                                                      |            |            |            |            |            | 
*                           \-----------\\-----------\\-----------\\-----------\/-----------//-----------/   /-----------//-----------/             \-----------\\-----------\\-----------\\-----------\\-----------\  
*                                                                               | APPLICATION| HOME       |  | Alt        | ESCAPE     |                                                                               
*                                                                               | ALT        |            |  |            | Ctrl       |                                                                               
*                                                                               \-----------\/-----------/   /-----------/\-----------\                                                                                
*                                                                                            | END        |  | PGUP       |                                                                                            
*                                                                                            |            |  |            |                                                                                            
*                                                                  /-----------//-----------//-----------/   /-----------//-----------//-----------/                                                                   
*                                                                  | SPACE      | CMD        | ENTER      |  | TAB        | Cmd        | SPACE      |
*                                                                  |            |            |            |  |            |            |            |                                                                  
*                                                                  \-----------\\-----------\\-----------\   \-----------\\-----------\\-----------\                                                                   
*                                                                                                                                                                                                                      
* 
**/
[BASE]=KEYMAP(
//left half
    KC_EQUAL, KC_1, KC_2, KC_3, KC_4, KC_5, KC_LEFT, 
    KC_DELETE, KC_Q, KC_W, KC_E, KC_R, KC_T, TG(SYMB),
    KC_BSPACE, KC_A, KC_S, KC_D, KC_F, KC_G, 
    KC_LSHIFT, CTL_T(KC_Z), KC_X, KC_C, KC_V, KC_B, ALL_T(KC_NO), 
                  LT(SYMB,KC_GRAVE), KC_QUOTE, LALT(KC_LSHIFT), KC_LEFT, KC_RIGHT,
                                              ALT_T(KC_APPLICATION), KC_HOME, 
                                                     KC_END, 
                                       KC_SPACE, KC_LGUI, KC_ENTER,
    //right half
    KC_RIGHT, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINUS, 
    TG(SYMB), KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSLASH,
           KC_H, KC_J, KC_K, KC_L, LT(MOUSE,KC_SCOLON), GUI_T(KC_QUOTE),
    MEH_T(KC_NO), KC_N, KC_M, KC_COMMA, KC_DOT, CTL_T(KC_SLASH), KC_RSHIFT, 
                         KC_UP, KC_DOWN, KC_LBRACKET, KC_RBRACKET, MO(SYMB),
    KC_LALT, CTL_T(KC_ESCAPE), 
    KC_PGUP, 
    KC_TAB, KC_LGUI, KC_SPACE),
/**
* Layer: 1
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | ESCAPE     | F1         | F2         | F3         | F4         | F5         | TRANSPARENT|               | TRANSPARENT| F6         | F7         | F8         | F9         | F10        | F11        |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| !          | @          | {          | }          | |          | TRANSPARENT|               | TRANSPARENT| UP         | 7          | 8          | 9          | *          | F12        |              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------/\-----------\                \-----------\/-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| #          | $          | (          | )          | GRAVE      |                                         | DOWN       | 4          | 5          | 6          | +          | TRANSPARENT|              
* |            |            |            |            |            |            |                                         |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| %          | °          | LBRACKET   | RBRACKET   | ~          | TRANSPARENT|               | TRANSPARENT| &          | 1          | 2          | 3          | BSLASH     | TRANSPARENT|              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\               
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
*                           /-----------//-----------//-----------//-----------//-----------/                                                       /-----------//-----------//-----------//-----------//-----------/  
*                           | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT|                                                      | TRANSPARENT| .          | 0          | EQUAL      | TRANSPARENT| 
*                           |            |            |            |            |            |                                                      |            |            |            |            |            | 
*                           \-----------\\-----------\\-----------\\-----------\/-----------//-----------/   /-----------//-----------/             \-----------\\-----------\\-----------\\-----------\\-----------\  
*                                                                               | invalid    | TRANSPARENT|  | invalid    | invalid    |                                                                               
*                                                                               |            |            |  |            |            |                                                                               
*                                                                               \-----------\/-----------/   /-----------/\-----------\                                                                                
*                                                                                            | TRANSPARENT|  | TRANSPARENT|                                                                                            
*                                                                                            |            |  |            |                                                                                            
*                                                                  /-----------//-----------//-----------/   /-----------//-----------//-----------/                                                                   
*                                                                  | invalid    | invalid    | TRANSPARENT|  | TRANSPARENT| invalid    | invalid    |                                                                  
*                                                                  |            |            |            |  |            |            |            |                                                                  
*                                                                  \-----------\\-----------\\-----------\   \-----------\\-----------\\-----------\                                                                   
*                                                                                                                                                                                                                      
* 
**/
[SYMB]=KEYMAP(
//left half
    KC_ESCAPE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM, KC_AT, KC_LCBR, KC_RCBR, KC_PIPE, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_HASH, KC_DLR, KC_LPRN, KC_RPRN, KC_GRAVE, 
    KC_TRANSPARENT, KC_PERC, KC_CIRC, KC_LBRACKET, KC_RBRACKET, KC_TILD, KC_TRANSPARENT, 
                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                              RGB_MOD, KC_TRANSPARENT, 
                                                     KC_TRANSPARENT, 
                                       RGB_VAD, RGB_VAI, KC_TRANSPARENT, 
    //right half
    KC_TRANSPARENT, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
    KC_TRANSPARENT, KC_UP, KC_7, KC_8, KC_9, KC_ASTR, KC_F12, 
           KC_DOWN, KC_4, KC_5, KC_6, KC_PLUS, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_AMPR, KC_1, KC_2, KC_3, KC_BSLASH, KC_TRANSPARENT, 
                         KC_TRANSPARENT, KC_DOT, KC_0, KC_EQUAL, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT),
/**
* Layer: 2
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT|               | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT|              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| TRANSPARENT| TRANSPARENT| UP         | TRANSPARENT| TRANSPARENT| TRANSPARENT|               | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT|              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------/\-----------\                \-----------\/-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| TRANSPARENT| LEFT       | DOWN       | RIGHT      | TRANSPARENT|                                         | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| PAUSE      |              
* |            |            |            |            |            |            |                                         |            |            |            |            |            |            |              
* /-----------//-----------//-----------//-----------//-----------//-----------//-----------/                /-----------//-----------//-----------//-----------//-----------//-----------//-----------/               
* | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT| TRANSPARENT|               | TRANSPARENT| TRANSPARENT| TRANSPARENT| TRACK      | TRACK      | TRANSPARENT| TRANSPARENT|              
* |            |            |            |            |            |            |            |               |            |            |            |            |            |            |            |              
* \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\                \-----------\\-----------\\-----------\\-----------\\-----------\\-----------\\-----------\               
*                                                                                                                                                                                                                      
*                                                                                                                                                                                                                      
*                           /-----------//-----------//-----------//-----------//-----------/                                                       /-----------//-----------//-----------//-----------//-----------/  
*                           | TRANSPARENT| TRANSPARENT| TRANSPARENT| BTN1       | BTN2       |                                                      | UP         | DOWN       | MUTE       | TRANSPARENT| TRANSPARENT| 
*                           |            |            |            |            |            |                                                      |            |            |            |            |            | 
*                           \-----------\\-----------\\-----------\\-----------\/-----------//-----------/   /-----------//-----------/             \-----------\\-----------\\-----------\\-----------\\-----------\  
*                                                                               | TRANSPARENT| TRANSPARENT|  | TRANSPARENT| TRANSPARENT|                                                                               
*                                                                               |            |            |  |            |            |                                                                               
*                                                                               \-----------\/-----------/   /-----------/\-----------\                                                                                
*                                                                                            | TRANSPARENT|  | TRANSPARENT|                                                                                            
*                                                                                            |            |  |            |                                                                                            
*                                                                  /-----------//-----------//-----------/   /-----------//-----------//-----------/                                                                   
*                                                                  | TRANSPARENT| TRANSPARENT| TRANSPARENT|  | TRANSPARENT| TRANSPARENT| BACK       |                                                                  
*                                                                  |            |            |            |  |            |            |            |                                                                  
*                                                                  \-----------\\-----------\\-----------\   \-----------\\-----------\\-----------\                                                                   
*                                                                                                                                                                                                                      
* 
**/
[MOUSE]=KEYMAP(
//left half
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_UP, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_LEFT, KC_MS_DOWN, KC_MS_RIGHT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN1, KC_MS_BTN2, 
                                              KC_TRANSPARENT, KC_TRANSPARENT, 
                                                     KC_TRANSPARENT, 
                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    //right half
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PREV_TRACK, KC_MEDIA_NEXT_TRACK, KC_TRANSPARENT, KC_TRANSPARENT, 
                         KC_AUDIO_VOL_UP, KC_AUDIO_VOL_DOWN, KC_AUDIO_MUTE, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_WWW_BACK),
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
          //SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
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
        default:
            break;
    }

};