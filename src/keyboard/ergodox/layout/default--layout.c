
/* ----------------------------------------------------------------------------
* ergoDOX layout : auto generated layout (modified from the Kinesis layout)
* -----------------------------------------------------------------------------
* Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
* Released under The MIT License (MIT) (see "license.md")
* Project located at <https://github.com/benblazak/ergodox-firmware>
* -------------------------------------------------------------------------- */
#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"
// FUNCTIONS ------------------------------------------------------------------
void kbfun_layer_pop_all(void) {
  kbfun_layer_pop_1();
  kbfun_layer_pop_2();
  kbfun_layer_pop_3();
  kbfun_layer_pop_4();
  kbfun_layer_pop_5();
  kbfun_layer_pop_6();
  kbfun_layer_pop_7();
  kbfun_layer_pop_8();
  kbfun_layer_pop_9();
  kbfun_layer_pop_10();
}
// LAYOUT ---------------------------------------------------------------------
const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
{
{ // row 0
    0, // SW0:0 [L0] 0 &kbfun_layer_pop_all NULL
    0, // SW0:1  0 NULL NULL
    0, // SW0:2  0 NULL NULL
    KEY_LeftControl, // SW0:3 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    0, // SW0:4  0 NULL NULL
    0, // SW0:5  0 NULL NULL
    0, // SW0:6  0 NULL NULL
    0, // SW0:7  0 NULL NULL
    0, // SW0:8  0 NULL NULL
    0, // SW0:9  0 NULL NULL
    KEY_Spacebar, // SW0:10 [Spc] KEY_Spacebar &kbfun_press_release &kbfun_press_release
    0, // SW0:11  0 NULL NULL
    0, // SW0:12  0 NULL NULL
    KEY_Dash_Underscore, // SW0:13 _ - KEY_Dash_Underscore &kbfun_press_release &kbfun_press_release
},
{ // row 1
    0, // SW1:0 [Teensy] 0 &kbfun_jump_to_bootloader NULL
    KEY_LeftAlt, // SW1:1 [LAlt] KEY_LeftAlt &kbfun_press_release &kbfun_press_release
    KEY_LeftGUI, // SW1:2 [LGui] KEY_LeftGUI &kbfun_press_release &kbfun_press_release
    0, // SW1:3  0 NULL NULL
    0, // SW1:4  0 NULL NULL
    0, // SW1:5  0 NULL NULL
    0, // SW1:6  0 NULL NULL
    0, // SW1:7  0 NULL NULL
    0, // SW1:8  0 NULL NULL
    0, // SW1:9  0 NULL NULL
    0, // SW1:10  0 NULL NULL
    0, // SW1:11  0 NULL NULL
    KEY_RightAlt, // SW1:12 [RAlt] KEY_RightAlt &kbfun_press_release &kbfun_press_release
    KEY_RightBracket_RightBrace, // SW1:13 } ] KEY_RightBracket_RightBrace &kbfun_press_release &kbfun_press_release
},
{ // row 2
    KEY_LeftShift, // SW2:0 [LShift] KEY_LeftShift &kbfun_press_release &kbfun_press_release
    KEY_z_Z, // SW2:1 Z z KEY_z_Z &kbfun_press_release &kbfun_press_release
    KEY_x_X, // SW2:2 X x KEY_x_X &kbfun_press_release &kbfun_press_release
    KEY_c_C, // SW2:3 C c KEY_c_C &kbfun_press_release &kbfun_press_release
    KEY_v_V, // SW2:4 V v KEY_v_V &kbfun_press_release &kbfun_press_release
    KEY_b_B, // SW2:5 B b KEY_b_B &kbfun_press_release &kbfun_press_release
    0, // SW2:6  0 NULL NULL
    0, // SW2:7  0 NULL NULL
    KEY_n_N, // SW2:8 N n KEY_n_N &kbfun_press_release &kbfun_press_release
    KEY_m_M, // SW2:9 M m KEY_m_M &kbfun_press_release &kbfun_press_release
    KEY_Comma_LessThan, // SW2:10 < , KEY_Comma_LessThan &kbfun_press_release &kbfun_press_release
    KEY_Period_GreaterThan, // SW2:11 > . KEY_Period_GreaterThan &kbfun_press_release &kbfun_press_release
    KEY_Slash_Question, // SW2:12 ? / KEY_Slash_Question &kbfun_press_release &kbfun_press_release
    KEY_RightShift, // SW2:13 [RShift] KEY_RightShift &kbfun_press_release &kbfun_press_release
},
{ // row 3
    KEY_LeftControl, // SW3:0 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    KEY_a_A, // SW3:1 A a KEY_a_A &kbfun_press_release &kbfun_press_release
    KEY_s_S, // SW3:2 S s KEY_s_S &kbfun_press_release &kbfun_press_release
    KEY_d_D, // SW3:3 D d KEY_d_D &kbfun_press_release &kbfun_press_release
    KEY_f_F, // SW3:4 F f KEY_f_F &kbfun_press_release &kbfun_press_release
    KEY_g_G, // SW3:5 G g KEY_g_G &kbfun_press_release &kbfun_press_release
    KEY_LeftControl, // SW3:6 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    KEY_ReturnEnter, // SW3:7 [Ent] KEY_ReturnEnter &kbfun_press_release &kbfun_press_release
    KEY_h_H, // SW3:8 H h KEY_h_H &kbfun_press_release &kbfun_press_release
    KEY_j_J, // SW3:9 J j KEY_j_J &kbfun_press_release &kbfun_press_release
    KEY_k_K, // SW3:10 K k KEY_k_K &kbfun_press_release &kbfun_press_release
    KEY_l_L, // SW3:11 L l KEY_l_L &kbfun_press_release &kbfun_press_release
    KEY_Semicolon_Colon, // SW3:12 : ; KEY_Semicolon_Colon &kbfun_press_release &kbfun_press_release
    KEY_SingleQuote_DoubleQuote, // SW3:13 " ' KEY_SingleQuote_DoubleQuote &kbfun_press_release &kbfun_press_release
},
{ // row 4
    0, // SW4:0  0 NULL NULL
    KEY_q_Q, // SW4:1 Q q KEY_q_Q &kbfun_press_release &kbfun_press_release
    KEY_w_W, // SW4:2 W w KEY_w_W &kbfun_press_release &kbfun_press_release
    KEY_e_E, // SW4:3 E e KEY_e_E &kbfun_press_release &kbfun_press_release
    KEY_r_R, // SW4:4 R r KEY_r_R &kbfun_press_release &kbfun_press_release
    KEY_t_T, // SW4:5 T t KEY_t_T &kbfun_press_release &kbfun_press_release
    0, // SW4:6  0 NULL NULL
    0, // SW4:7  0 NULL NULL
    KEY_y_Y, // SW4:8 Y y KEY_y_Y &kbfun_press_release &kbfun_press_release
    KEY_u_U, // SW4:9 U u KEY_u_U &kbfun_press_release &kbfun_press_release
    KEY_i_I, // SW4:10 I i KEY_i_I &kbfun_press_release &kbfun_press_release
    KEY_o_O, // SW4:11 O o KEY_o_O &kbfun_press_release &kbfun_press_release
    KEY_p_P, // SW4:12 P p KEY_p_P &kbfun_press_release &kbfun_press_release
    KEY_LeftBracket_LeftBrace, // SW4:13 { [ KEY_LeftBracket_LeftBrace &kbfun_press_release &kbfun_press_release
},
{ // row 5
    KEY_a_A, // SW5:0 A a KEY_a_A &kbfun_press_release &kbfun_press_release
    KEY_1_Exclamation, // SW5:1 ! 1 KEY_1_Exclamation &kbfun_press_release &kbfun_press_release
    KEY_2_At, // SW5:2 @ 2 KEY_2_At &kbfun_press_release &kbfun_press_release
    KEY_3_Pound, // SW5:3 # 3 KEY_3_Pound &kbfun_press_release &kbfun_press_release
    KEY_4_Dollar, // SW5:4 $ 4 KEY_4_Dollar &kbfun_press_release &kbfun_press_release
    KEY_5_Percent, // SW5:5 % 5 KEY_5_Percent &kbfun_press_release &kbfun_press_release
    0, // SW5:6  0 NULL NULL
    1, // SW5:7 PushLayers1 1 &kbfun_layer_push_1 NULL
    KEY_6_Caret, // SW5:8 ^ 6 KEY_6_Caret &kbfun_press_release &kbfun_press_release
    KEY_7_Ampersand, // SW5:9 & 7 KEY_7_Ampersand &kbfun_press_release &kbfun_press_release
    KEY_8_Asterisk, // SW5:10 * 8 KEY_8_Asterisk &kbfun_press_release &kbfun_press_release
    KEY_9_LeftParenthesis, // SW5:11 ( 9 KEY_9_LeftParenthesis &kbfun_press_release &kbfun_press_release
    KEY_0_RightParenthesis, // SW5:12 ) 0 KEY_0_RightParenthesis &kbfun_press_release &kbfun_press_release
    KEY_Equal_Plus, // SW5:13 + = KEY_Equal_Plus &kbfun_press_release &kbfun_press_release
},
},
// LAYER 1
{
{ // row 0
    0, // SW0:0  0 NULL NULL
    0, // SW0:1  0 NULL NULL
    0, // SW0:2  0 NULL NULL
    0, // SW0:3  0 NULL NULL
    0, // SW0:4  0 NULL NULL
    0, // SW0:5  0 NULL NULL
    0, // SW0:6  0 NULL NULL
    0, // SW0:7  0 NULL NULL
    0, // SW0:8  0 NULL NULL
    0, // SW0:9  0 NULL NULL
    0, // SW0:10  0 NULL NULL
    0, // SW0:11  0 NULL NULL
    0, // SW0:12  0 NULL NULL
    0, // SW0:13  0 NULL NULL
},
{ // row 1
    0, // SW1:0  0 NULL NULL
    0, // SW1:1  0 NULL NULL
    0, // SW1:2  0 NULL NULL
    0, // SW1:3  0 NULL NULL
    0, // SW1:4  0 NULL NULL
    0, // SW1:5  0 NULL NULL
    0, // SW1:6  0 NULL NULL
    0, // SW1:7  0 NULL NULL
    0, // SW1:8  0 NULL NULL
    0, // SW1:9  0 NULL NULL
    0, // SW1:10  0 NULL NULL
    0, // SW1:11  0 NULL NULL
    0, // SW1:12  0 NULL NULL
    0, // SW1:13  0 NULL NULL
},
{ // row 2
    0, // SW2:0  0 NULL NULL
    0, // SW2:1  0 NULL NULL
    0, // SW2:2  0 NULL NULL
    0, // SW2:3  0 NULL NULL
    0, // SW2:4  0 NULL NULL
    0, // SW2:5  0 NULL NULL
    0, // SW2:6  0 NULL NULL
    0, // SW2:7  0 NULL NULL
    0, // SW2:8  0 NULL NULL
    0, // SW2:9  0 NULL NULL
    0, // SW2:10  0 NULL NULL
    0, // SW2:11  0 NULL NULL
    0, // SW2:12  0 NULL NULL
    0, // SW2:13  0 NULL NULL
},
{ // row 3
    0, // SW3:0  0 NULL NULL
    0, // SW3:1  0 NULL NULL
    0, // SW3:2  0 NULL NULL
    0, // SW3:3  0 NULL NULL
    0, // SW3:4  0 NULL NULL
    0, // SW3:5  0 NULL NULL
    0, // SW3:6  0 NULL NULL
    0, // SW3:7  0 NULL NULL
    0, // SW3:8  0 NULL NULL
    0, // SW3:9  0 NULL NULL
    0, // SW3:10  0 NULL NULL
    0, // SW3:11  0 NULL NULL
    0, // SW3:12  0 NULL NULL
    0, // SW3:13  0 NULL NULL
},
{ // row 4
    0, // SW4:0  0 NULL NULL
    0, // SW4:1  0 NULL NULL
    0, // SW4:2  0 NULL NULL
    0, // SW4:3  0 NULL NULL
    0, // SW4:4  0 NULL NULL
    0, // SW4:5  0 NULL NULL
    0, // SW4:6  0 NULL NULL
    0, // SW4:7  0 NULL NULL
    0, // SW4:8  0 NULL NULL
    0, // SW4:9  0 NULL NULL
    0, // SW4:10  0 NULL NULL
    0, // SW4:11  0 NULL NULL
    0, // SW4:12  0 NULL NULL
    0, // SW4:13  0 NULL NULL
},
{ // row 5
    0, // SW5:0  0 NULL NULL
    KEY_F1, // SW5:1 F1 KEY_F1 &kbfun_press_release &kbfun_press_release
    KEY_F2, // SW5:2 F2 KEY_F2 &kbfun_press_release &kbfun_press_release
    KEY_F3, // SW5:3 F3 KEY_F3 &kbfun_press_release &kbfun_press_release
    KEY_F4, // SW5:4 F4 KEY_F4 &kbfun_press_release &kbfun_press_release
    KEY_F5, // SW5:5 F5 KEY_F5 &kbfun_press_release &kbfun_press_release
    0, // SW5:6  0 NULL NULL
    1, // SW5:7 PopLayers1 1 &kbfun_layer_pop_1 NULL
    KEY_F6, // SW5:8 F6 KEY_F6 &kbfun_press_release &kbfun_press_release
    KEY_F7, // SW5:9 F7 KEY_F7 &kbfun_press_release &kbfun_press_release
    KEY_F8, // SW5:10 F8 KEY_F8 &kbfun_press_release &kbfun_press_release
    KEY_F9, // SW5:11 F9 KEY_F9 &kbfun_press_release &kbfun_press_release
    KEY_F10, // SW5:12 F10 KEY_F10 &kbfun_press_release &kbfun_press_release
    0, // SW5:13  0 NULL NULL
},
},
// LAYER 2
{
{ // row 0
    0, // SW0:0  0 NULL NULL
    0, // SW0:1  0 NULL NULL
    0, // SW0:2  0 NULL NULL
    0, // SW0:3  0 NULL NULL
    0, // SW0:4  0 NULL NULL
    0, // SW0:5  0 NULL NULL
    0, // SW0:6  0 NULL NULL
    0, // SW0:7  0 NULL NULL
    0, // SW0:8  0 NULL NULL
    0, // SW0:9  0 NULL NULL
    0, // SW0:10  0 NULL NULL
    0, // SW0:11  0 NULL NULL
    0, // SW0:12  0 NULL NULL
    0, // SW0:13  0 NULL NULL
},
{ // row 1
    0, // SW1:0  0 NULL NULL
    0, // SW1:1  0 NULL NULL
    0, // SW1:2  0 NULL NULL
    0, // SW1:3  0 NULL NULL
    0, // SW1:4  0 NULL NULL
    0, // SW1:5  0 NULL NULL
    0, // SW1:6  0 NULL NULL
    0, // SW1:7  0 NULL NULL
    0, // SW1:8  0 NULL NULL
    0, // SW1:9  0 NULL NULL
    0, // SW1:10  0 NULL NULL
    0, // SW1:11  0 NULL NULL
    0, // SW1:12  0 NULL NULL
    0, // SW1:13  0 NULL NULL
},
{ // row 2
    0, // SW2:0  0 NULL NULL
    0, // SW2:1  0 NULL NULL
    0, // SW2:2  0 NULL NULL
    0, // SW2:3  0 NULL NULL
    0, // SW2:4  0 NULL NULL
    0, // SW2:5  0 NULL NULL
    0, // SW2:6  0 NULL NULL
    0, // SW2:7  0 NULL NULL
    0, // SW2:8  0 NULL NULL
    0, // SW2:9  0 NULL NULL
    0, // SW2:10  0 NULL NULL
    0, // SW2:11  0 NULL NULL
    0, // SW2:12  0 NULL NULL
    0, // SW2:13  0 NULL NULL
},
{ // row 3
    0, // SW3:0  0 NULL NULL
    0, // SW3:1  0 NULL NULL
    0, // SW3:2  0 NULL NULL
    0, // SW3:3  0 NULL NULL
    0, // SW3:4  0 NULL NULL
    0, // SW3:5  0 NULL NULL
    0, // SW3:6  0 NULL NULL
    0, // SW3:7  0 NULL NULL
    0, // SW3:8  0 NULL NULL
    0, // SW3:9  0 NULL NULL
    0, // SW3:10  0 NULL NULL
    0, // SW3:11  0 NULL NULL
    0, // SW3:12  0 NULL NULL
    0, // SW3:13  0 NULL NULL
},
{ // row 4
    0, // SW4:0  0 NULL NULL
    0, // SW4:1  0 NULL NULL
    0, // SW4:2  0 NULL NULL
    0, // SW4:3  0 NULL NULL
    0, // SW4:4  0 NULL NULL
    0, // SW4:5  0 NULL NULL
    0, // SW4:6  0 NULL NULL
    0, // SW4:7  0 NULL NULL
    0, // SW4:8  0 NULL NULL
    0, // SW4:9  0 NULL NULL
    0, // SW4:10  0 NULL NULL
    0, // SW4:11  0 NULL NULL
    0, // SW4:12  0 NULL NULL
    0, // SW4:13  0 NULL NULL
},
{ // row 5
    0, // SW5:0  0 NULL NULL
    0, // SW5:1  0 NULL NULL
    0, // SW5:2  0 NULL NULL
    0, // SW5:3  0 NULL NULL
    0, // SW5:4  0 NULL NULL
    0, // SW5:5  0 NULL NULL
    0, // SW5:6  0 NULL NULL
    0, // SW5:7  0 NULL NULL
    0, // SW5:8  0 NULL NULL
    0, // SW5:9  0 NULL NULL
    0, // SW5:10  0 NULL NULL
    0, // SW5:11  0 NULL NULL
    0, // SW5:12  0 NULL NULL
    0, // SW5:13  0 NULL NULL
},
},
};
// PRESS ----------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
{
{ // row 0
    &kbfun_layer_pop_all, // SW0:0 [L0] 0 &kbfun_layer_pop_all NULL
    NULL, // SW0:1  0 NULL NULL
    NULL, // SW0:2  0 NULL NULL
    &kbfun_press_release, // SW0:3 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    NULL, // SW0:4  0 NULL NULL
    NULL, // SW0:5  0 NULL NULL
    NULL, // SW0:6  0 NULL NULL
    NULL, // SW0:7  0 NULL NULL
    NULL, // SW0:8  0 NULL NULL
    NULL, // SW0:9  0 NULL NULL
    &kbfun_press_release, // SW0:10 [Spc] KEY_Spacebar &kbfun_press_release &kbfun_press_release
    NULL, // SW0:11  0 NULL NULL
    NULL, // SW0:12  0 NULL NULL
    &kbfun_press_release, // SW0:13 _ - KEY_Dash_Underscore &kbfun_press_release &kbfun_press_release
},
{ // row 1
    &kbfun_jump_to_bootloader, // SW1:0 [Teensy] 0 &kbfun_jump_to_bootloader NULL
    &kbfun_press_release, // SW1:1 [LAlt] KEY_LeftAlt &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW1:2 [LGui] KEY_LeftGUI &kbfun_press_release &kbfun_press_release
    NULL, // SW1:3  0 NULL NULL
    NULL, // SW1:4  0 NULL NULL
    NULL, // SW1:5  0 NULL NULL
    NULL, // SW1:6  0 NULL NULL
    NULL, // SW1:7  0 NULL NULL
    NULL, // SW1:8  0 NULL NULL
    NULL, // SW1:9  0 NULL NULL
    NULL, // SW1:10  0 NULL NULL
    NULL, // SW1:11  0 NULL NULL
    &kbfun_press_release, // SW1:12 [RAlt] KEY_RightAlt &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW1:13 } ] KEY_RightBracket_RightBrace &kbfun_press_release &kbfun_press_release
},
{ // row 2
    &kbfun_press_release, // SW2:0 [LShift] KEY_LeftShift &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:1 Z z KEY_z_Z &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:2 X x KEY_x_X &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:3 C c KEY_c_C &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:4 V v KEY_v_V &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:5 B b KEY_b_B &kbfun_press_release &kbfun_press_release
    NULL, // SW2:6  0 NULL NULL
    NULL, // SW2:7  0 NULL NULL
    &kbfun_press_release, // SW2:8 N n KEY_n_N &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:9 M m KEY_m_M &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:10 < , KEY_Comma_LessThan &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:11 > . KEY_Period_GreaterThan &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:12 ? / KEY_Slash_Question &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:13 [RShift] KEY_RightShift &kbfun_press_release &kbfun_press_release
},
{ // row 3
    &kbfun_press_release, // SW3:0 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:1 A a KEY_a_A &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:2 S s KEY_s_S &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:3 D d KEY_d_D &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:4 F f KEY_f_F &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:5 G g KEY_g_G &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:6 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:7 [Ent] KEY_ReturnEnter &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:8 H h KEY_h_H &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:9 J j KEY_j_J &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:10 K k KEY_k_K &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:11 L l KEY_l_L &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:12 : ; KEY_Semicolon_Colon &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:13 " ' KEY_SingleQuote_DoubleQuote &kbfun_press_release &kbfun_press_release
},
{ // row 4
    NULL, // SW4:0  0 NULL NULL
    &kbfun_press_release, // SW4:1 Q q KEY_q_Q &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:2 W w KEY_w_W &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:3 E e KEY_e_E &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:4 R r KEY_r_R &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:5 T t KEY_t_T &kbfun_press_release &kbfun_press_release
    NULL, // SW4:6  0 NULL NULL
    NULL, // SW4:7  0 NULL NULL
    &kbfun_press_release, // SW4:8 Y y KEY_y_Y &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:9 U u KEY_u_U &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:10 I i KEY_i_I &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:11 O o KEY_o_O &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:12 P p KEY_p_P &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:13 { [ KEY_LeftBracket_LeftBrace &kbfun_press_release &kbfun_press_release
},
{ // row 5
    &kbfun_press_release, // SW5:0 A a KEY_a_A &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:1 ! 1 KEY_1_Exclamation &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:2 @ 2 KEY_2_At &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:3 # 3 KEY_3_Pound &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:4 $ 4 KEY_4_Dollar &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:5 % 5 KEY_5_Percent &kbfun_press_release &kbfun_press_release
    NULL, // SW5:6  0 NULL NULL
    &kbfun_layer_push_1, // SW5:7 PushLayers1 1 &kbfun_layer_push_1 NULL
    &kbfun_press_release, // SW5:8 ^ 6 KEY_6_Caret &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:9 & 7 KEY_7_Ampersand &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:10 * 8 KEY_8_Asterisk &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:11 ( 9 KEY_9_LeftParenthesis &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:12 ) 0 KEY_0_RightParenthesis &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:13 + = KEY_Equal_Plus &kbfun_press_release &kbfun_press_release
},
},
// LAYER 1
{
{ // row 0
    NULL, // SW0:0  0 NULL NULL
    NULL, // SW0:1  0 NULL NULL
    NULL, // SW0:2  0 NULL NULL
    NULL, // SW0:3  0 NULL NULL
    NULL, // SW0:4  0 NULL NULL
    NULL, // SW0:5  0 NULL NULL
    NULL, // SW0:6  0 NULL NULL
    NULL, // SW0:7  0 NULL NULL
    NULL, // SW0:8  0 NULL NULL
    NULL, // SW0:9  0 NULL NULL
    NULL, // SW0:10  0 NULL NULL
    NULL, // SW0:11  0 NULL NULL
    NULL, // SW0:12  0 NULL NULL
    NULL, // SW0:13  0 NULL NULL
},
{ // row 1
    NULL, // SW1:0  0 NULL NULL
    NULL, // SW1:1  0 NULL NULL
    NULL, // SW1:2  0 NULL NULL
    NULL, // SW1:3  0 NULL NULL
    NULL, // SW1:4  0 NULL NULL
    NULL, // SW1:5  0 NULL NULL
    NULL, // SW1:6  0 NULL NULL
    NULL, // SW1:7  0 NULL NULL
    NULL, // SW1:8  0 NULL NULL
    NULL, // SW1:9  0 NULL NULL
    NULL, // SW1:10  0 NULL NULL
    NULL, // SW1:11  0 NULL NULL
    NULL, // SW1:12  0 NULL NULL
    NULL, // SW1:13  0 NULL NULL
},
{ // row 2
    NULL, // SW2:0  0 NULL NULL
    NULL, // SW2:1  0 NULL NULL
    NULL, // SW2:2  0 NULL NULL
    NULL, // SW2:3  0 NULL NULL
    NULL, // SW2:4  0 NULL NULL
    NULL, // SW2:5  0 NULL NULL
    NULL, // SW2:6  0 NULL NULL
    NULL, // SW2:7  0 NULL NULL
    NULL, // SW2:8  0 NULL NULL
    NULL, // SW2:9  0 NULL NULL
    NULL, // SW2:10  0 NULL NULL
    NULL, // SW2:11  0 NULL NULL
    NULL, // SW2:12  0 NULL NULL
    NULL, // SW2:13  0 NULL NULL
},
{ // row 3
    NULL, // SW3:0  0 NULL NULL
    NULL, // SW3:1  0 NULL NULL
    NULL, // SW3:2  0 NULL NULL
    NULL, // SW3:3  0 NULL NULL
    NULL, // SW3:4  0 NULL NULL
    NULL, // SW3:5  0 NULL NULL
    NULL, // SW3:6  0 NULL NULL
    NULL, // SW3:7  0 NULL NULL
    NULL, // SW3:8  0 NULL NULL
    NULL, // SW3:9  0 NULL NULL
    NULL, // SW3:10  0 NULL NULL
    NULL, // SW3:11  0 NULL NULL
    NULL, // SW3:12  0 NULL NULL
    NULL, // SW3:13  0 NULL NULL
},
{ // row 4
    NULL, // SW4:0  0 NULL NULL
    NULL, // SW4:1  0 NULL NULL
    NULL, // SW4:2  0 NULL NULL
    NULL, // SW4:3  0 NULL NULL
    NULL, // SW4:4  0 NULL NULL
    NULL, // SW4:5  0 NULL NULL
    NULL, // SW4:6  0 NULL NULL
    NULL, // SW4:7  0 NULL NULL
    NULL, // SW4:8  0 NULL NULL
    NULL, // SW4:9  0 NULL NULL
    NULL, // SW4:10  0 NULL NULL
    NULL, // SW4:11  0 NULL NULL
    NULL, // SW4:12  0 NULL NULL
    NULL, // SW4:13  0 NULL NULL
},
{ // row 5
    NULL, // SW5:0  0 NULL NULL
    &kbfun_press_release, // SW5:1 F1 KEY_F1 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:2 F2 KEY_F2 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:3 F3 KEY_F3 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:4 F4 KEY_F4 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:5 F5 KEY_F5 &kbfun_press_release &kbfun_press_release
    NULL, // SW5:6  0 NULL NULL
    &kbfun_layer_pop_1, // SW5:7 PopLayers1 1 &kbfun_layer_pop_1 NULL
    &kbfun_press_release, // SW5:8 F6 KEY_F6 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:9 F7 KEY_F7 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:10 F8 KEY_F8 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:11 F9 KEY_F9 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:12 F10 KEY_F10 &kbfun_press_release &kbfun_press_release
    NULL, // SW5:13  0 NULL NULL
},
},
// LAYER 2
{
{ // row 0
    NULL, // SW0:0  0 NULL NULL
    NULL, // SW0:1  0 NULL NULL
    NULL, // SW0:2  0 NULL NULL
    NULL, // SW0:3  0 NULL NULL
    NULL, // SW0:4  0 NULL NULL
    NULL, // SW0:5  0 NULL NULL
    NULL, // SW0:6  0 NULL NULL
    NULL, // SW0:7  0 NULL NULL
    NULL, // SW0:8  0 NULL NULL
    NULL, // SW0:9  0 NULL NULL
    NULL, // SW0:10  0 NULL NULL
    NULL, // SW0:11  0 NULL NULL
    NULL, // SW0:12  0 NULL NULL
    NULL, // SW0:13  0 NULL NULL
},
{ // row 1
    NULL, // SW1:0  0 NULL NULL
    NULL, // SW1:1  0 NULL NULL
    NULL, // SW1:2  0 NULL NULL
    NULL, // SW1:3  0 NULL NULL
    NULL, // SW1:4  0 NULL NULL
    NULL, // SW1:5  0 NULL NULL
    NULL, // SW1:6  0 NULL NULL
    NULL, // SW1:7  0 NULL NULL
    NULL, // SW1:8  0 NULL NULL
    NULL, // SW1:9  0 NULL NULL
    NULL, // SW1:10  0 NULL NULL
    NULL, // SW1:11  0 NULL NULL
    NULL, // SW1:12  0 NULL NULL
    NULL, // SW1:13  0 NULL NULL
},
{ // row 2
    NULL, // SW2:0  0 NULL NULL
    NULL, // SW2:1  0 NULL NULL
    NULL, // SW2:2  0 NULL NULL
    NULL, // SW2:3  0 NULL NULL
    NULL, // SW2:4  0 NULL NULL
    NULL, // SW2:5  0 NULL NULL
    NULL, // SW2:6  0 NULL NULL
    NULL, // SW2:7  0 NULL NULL
    NULL, // SW2:8  0 NULL NULL
    NULL, // SW2:9  0 NULL NULL
    NULL, // SW2:10  0 NULL NULL
    NULL, // SW2:11  0 NULL NULL
    NULL, // SW2:12  0 NULL NULL
    NULL, // SW2:13  0 NULL NULL
},
{ // row 3
    NULL, // SW3:0  0 NULL NULL
    NULL, // SW3:1  0 NULL NULL
    NULL, // SW3:2  0 NULL NULL
    NULL, // SW3:3  0 NULL NULL
    NULL, // SW3:4  0 NULL NULL
    NULL, // SW3:5  0 NULL NULL
    NULL, // SW3:6  0 NULL NULL
    NULL, // SW3:7  0 NULL NULL
    NULL, // SW3:8  0 NULL NULL
    NULL, // SW3:9  0 NULL NULL
    NULL, // SW3:10  0 NULL NULL
    NULL, // SW3:11  0 NULL NULL
    NULL, // SW3:12  0 NULL NULL
    NULL, // SW3:13  0 NULL NULL
},
{ // row 4
    NULL, // SW4:0  0 NULL NULL
    NULL, // SW4:1  0 NULL NULL
    NULL, // SW4:2  0 NULL NULL
    NULL, // SW4:3  0 NULL NULL
    NULL, // SW4:4  0 NULL NULL
    NULL, // SW4:5  0 NULL NULL
    NULL, // SW4:6  0 NULL NULL
    NULL, // SW4:7  0 NULL NULL
    NULL, // SW4:8  0 NULL NULL
    NULL, // SW4:9  0 NULL NULL
    NULL, // SW4:10  0 NULL NULL
    NULL, // SW4:11  0 NULL NULL
    NULL, // SW4:12  0 NULL NULL
    NULL, // SW4:13  0 NULL NULL
},
{ // row 5
    NULL, // SW5:0  0 NULL NULL
    NULL, // SW5:1  0 NULL NULL
    NULL, // SW5:2  0 NULL NULL
    NULL, // SW5:3  0 NULL NULL
    NULL, // SW5:4  0 NULL NULL
    NULL, // SW5:5  0 NULL NULL
    NULL, // SW5:6  0 NULL NULL
    NULL, // SW5:7  0 NULL NULL
    NULL, // SW5:8  0 NULL NULL
    NULL, // SW5:9  0 NULL NULL
    NULL, // SW5:10  0 NULL NULL
    NULL, // SW5:11  0 NULL NULL
    NULL, // SW5:12  0 NULL NULL
    NULL, // SW5:13  0 NULL NULL
},
},
};
// RELEASE --------------------------------------------------------------------
const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {
// LAYER 0
{
{ // row 0
    NULL, // SW0:0 [L0] 0 &kbfun_layer_pop_all NULL
    NULL, // SW0:1  0 NULL NULL
    NULL, // SW0:2  0 NULL NULL
    &kbfun_press_release, // SW0:3 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    NULL, // SW0:4  0 NULL NULL
    NULL, // SW0:5  0 NULL NULL
    NULL, // SW0:6  0 NULL NULL
    NULL, // SW0:7  0 NULL NULL
    NULL, // SW0:8  0 NULL NULL
    NULL, // SW0:9  0 NULL NULL
    &kbfun_press_release, // SW0:10 [Spc] KEY_Spacebar &kbfun_press_release &kbfun_press_release
    NULL, // SW0:11  0 NULL NULL
    NULL, // SW0:12  0 NULL NULL
    &kbfun_press_release, // SW0:13 _ - KEY_Dash_Underscore &kbfun_press_release &kbfun_press_release
},
{ // row 1
    NULL, // SW1:0 [Teensy] 0 &kbfun_jump_to_bootloader NULL
    &kbfun_press_release, // SW1:1 [LAlt] KEY_LeftAlt &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW1:2 [LGui] KEY_LeftGUI &kbfun_press_release &kbfun_press_release
    NULL, // SW1:3  0 NULL NULL
    NULL, // SW1:4  0 NULL NULL
    NULL, // SW1:5  0 NULL NULL
    NULL, // SW1:6  0 NULL NULL
    NULL, // SW1:7  0 NULL NULL
    NULL, // SW1:8  0 NULL NULL
    NULL, // SW1:9  0 NULL NULL
    NULL, // SW1:10  0 NULL NULL
    NULL, // SW1:11  0 NULL NULL
    &kbfun_press_release, // SW1:12 [RAlt] KEY_RightAlt &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW1:13 } ] KEY_RightBracket_RightBrace &kbfun_press_release &kbfun_press_release
},
{ // row 2
    &kbfun_press_release, // SW2:0 [LShift] KEY_LeftShift &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:1 Z z KEY_z_Z &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:2 X x KEY_x_X &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:3 C c KEY_c_C &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:4 V v KEY_v_V &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:5 B b KEY_b_B &kbfun_press_release &kbfun_press_release
    NULL, // SW2:6  0 NULL NULL
    NULL, // SW2:7  0 NULL NULL
    &kbfun_press_release, // SW2:8 N n KEY_n_N &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:9 M m KEY_m_M &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:10 < , KEY_Comma_LessThan &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:11 > . KEY_Period_GreaterThan &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:12 ? / KEY_Slash_Question &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW2:13 [RShift] KEY_RightShift &kbfun_press_release &kbfun_press_release
},
{ // row 3
    &kbfun_press_release, // SW3:0 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:1 A a KEY_a_A &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:2 S s KEY_s_S &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:3 D d KEY_d_D &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:4 F f KEY_f_F &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:5 G g KEY_g_G &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:6 [LCtrl] KEY_LeftControl &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:7 [Ent] KEY_ReturnEnter &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:8 H h KEY_h_H &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:9 J j KEY_j_J &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:10 K k KEY_k_K &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:11 L l KEY_l_L &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:12 : ; KEY_Semicolon_Colon &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW3:13 " ' KEY_SingleQuote_DoubleQuote &kbfun_press_release &kbfun_press_release
},
{ // row 4
    NULL, // SW4:0  0 NULL NULL
    &kbfun_press_release, // SW4:1 Q q KEY_q_Q &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:2 W w KEY_w_W &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:3 E e KEY_e_E &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:4 R r KEY_r_R &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:5 T t KEY_t_T &kbfun_press_release &kbfun_press_release
    NULL, // SW4:6  0 NULL NULL
    NULL, // SW4:7  0 NULL NULL
    &kbfun_press_release, // SW4:8 Y y KEY_y_Y &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:9 U u KEY_u_U &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:10 I i KEY_i_I &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:11 O o KEY_o_O &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:12 P p KEY_p_P &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW4:13 { [ KEY_LeftBracket_LeftBrace &kbfun_press_release &kbfun_press_release
},
{ // row 5
    &kbfun_press_release, // SW5:0 A a KEY_a_A &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:1 ! 1 KEY_1_Exclamation &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:2 @ 2 KEY_2_At &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:3 # 3 KEY_3_Pound &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:4 $ 4 KEY_4_Dollar &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:5 % 5 KEY_5_Percent &kbfun_press_release &kbfun_press_release
    NULL, // SW5:6  0 NULL NULL
    NULL, // SW5:7 PushLayers1 1 &kbfun_layer_push_1 NULL
    &kbfun_press_release, // SW5:8 ^ 6 KEY_6_Caret &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:9 & 7 KEY_7_Ampersand &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:10 * 8 KEY_8_Asterisk &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:11 ( 9 KEY_9_LeftParenthesis &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:12 ) 0 KEY_0_RightParenthesis &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:13 + = KEY_Equal_Plus &kbfun_press_release &kbfun_press_release
},
},
// LAYER 1
{
{ // row 0
    NULL, // SW0:0  0 NULL NULL
    NULL, // SW0:1  0 NULL NULL
    NULL, // SW0:2  0 NULL NULL
    NULL, // SW0:3  0 NULL NULL
    NULL, // SW0:4  0 NULL NULL
    NULL, // SW0:5  0 NULL NULL
    NULL, // SW0:6  0 NULL NULL
    NULL, // SW0:7  0 NULL NULL
    NULL, // SW0:8  0 NULL NULL
    NULL, // SW0:9  0 NULL NULL
    NULL, // SW0:10  0 NULL NULL
    NULL, // SW0:11  0 NULL NULL
    NULL, // SW0:12  0 NULL NULL
    NULL, // SW0:13  0 NULL NULL
},
{ // row 1
    NULL, // SW1:0  0 NULL NULL
    NULL, // SW1:1  0 NULL NULL
    NULL, // SW1:2  0 NULL NULL
    NULL, // SW1:3  0 NULL NULL
    NULL, // SW1:4  0 NULL NULL
    NULL, // SW1:5  0 NULL NULL
    NULL, // SW1:6  0 NULL NULL
    NULL, // SW1:7  0 NULL NULL
    NULL, // SW1:8  0 NULL NULL
    NULL, // SW1:9  0 NULL NULL
    NULL, // SW1:10  0 NULL NULL
    NULL, // SW1:11  0 NULL NULL
    NULL, // SW1:12  0 NULL NULL
    NULL, // SW1:13  0 NULL NULL
},
{ // row 2
    NULL, // SW2:0  0 NULL NULL
    NULL, // SW2:1  0 NULL NULL
    NULL, // SW2:2  0 NULL NULL
    NULL, // SW2:3  0 NULL NULL
    NULL, // SW2:4  0 NULL NULL
    NULL, // SW2:5  0 NULL NULL
    NULL, // SW2:6  0 NULL NULL
    NULL, // SW2:7  0 NULL NULL
    NULL, // SW2:8  0 NULL NULL
    NULL, // SW2:9  0 NULL NULL
    NULL, // SW2:10  0 NULL NULL
    NULL, // SW2:11  0 NULL NULL
    NULL, // SW2:12  0 NULL NULL
    NULL, // SW2:13  0 NULL NULL
},
{ // row 3
    NULL, // SW3:0  0 NULL NULL
    NULL, // SW3:1  0 NULL NULL
    NULL, // SW3:2  0 NULL NULL
    NULL, // SW3:3  0 NULL NULL
    NULL, // SW3:4  0 NULL NULL
    NULL, // SW3:5  0 NULL NULL
    NULL, // SW3:6  0 NULL NULL
    NULL, // SW3:7  0 NULL NULL
    NULL, // SW3:8  0 NULL NULL
    NULL, // SW3:9  0 NULL NULL
    NULL, // SW3:10  0 NULL NULL
    NULL, // SW3:11  0 NULL NULL
    NULL, // SW3:12  0 NULL NULL
    NULL, // SW3:13  0 NULL NULL
},
{ // row 4
    NULL, // SW4:0  0 NULL NULL
    NULL, // SW4:1  0 NULL NULL
    NULL, // SW4:2  0 NULL NULL
    NULL, // SW4:3  0 NULL NULL
    NULL, // SW4:4  0 NULL NULL
    NULL, // SW4:5  0 NULL NULL
    NULL, // SW4:6  0 NULL NULL
    NULL, // SW4:7  0 NULL NULL
    NULL, // SW4:8  0 NULL NULL
    NULL, // SW4:9  0 NULL NULL
    NULL, // SW4:10  0 NULL NULL
    NULL, // SW4:11  0 NULL NULL
    NULL, // SW4:12  0 NULL NULL
    NULL, // SW4:13  0 NULL NULL
},
{ // row 5
    NULL, // SW5:0  0 NULL NULL
    &kbfun_press_release, // SW5:1 F1 KEY_F1 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:2 F2 KEY_F2 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:3 F3 KEY_F3 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:4 F4 KEY_F4 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:5 F5 KEY_F5 &kbfun_press_release &kbfun_press_release
    NULL, // SW5:6  0 NULL NULL
    NULL, // SW5:7 PopLayers1 1 &kbfun_layer_pop_1 NULL
    &kbfun_press_release, // SW5:8 F6 KEY_F6 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:9 F7 KEY_F7 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:10 F8 KEY_F8 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:11 F9 KEY_F9 &kbfun_press_release &kbfun_press_release
    &kbfun_press_release, // SW5:12 F10 KEY_F10 &kbfun_press_release &kbfun_press_release
    NULL, // SW5:13  0 NULL NULL
},
},
// LAYER 2
{
{ // row 0
    NULL, // SW0:0  0 NULL NULL
    NULL, // SW0:1  0 NULL NULL
    NULL, // SW0:2  0 NULL NULL
    NULL, // SW0:3  0 NULL NULL
    NULL, // SW0:4  0 NULL NULL
    NULL, // SW0:5  0 NULL NULL
    NULL, // SW0:6  0 NULL NULL
    NULL, // SW0:7  0 NULL NULL
    NULL, // SW0:8  0 NULL NULL
    NULL, // SW0:9  0 NULL NULL
    NULL, // SW0:10  0 NULL NULL
    NULL, // SW0:11  0 NULL NULL
    NULL, // SW0:12  0 NULL NULL
    NULL, // SW0:13  0 NULL NULL
},
{ // row 1
    NULL, // SW1:0  0 NULL NULL
    NULL, // SW1:1  0 NULL NULL
    NULL, // SW1:2  0 NULL NULL
    NULL, // SW1:3  0 NULL NULL
    NULL, // SW1:4  0 NULL NULL
    NULL, // SW1:5  0 NULL NULL
    NULL, // SW1:6  0 NULL NULL
    NULL, // SW1:7  0 NULL NULL
    NULL, // SW1:8  0 NULL NULL
    NULL, // SW1:9  0 NULL NULL
    NULL, // SW1:10  0 NULL NULL
    NULL, // SW1:11  0 NULL NULL
    NULL, // SW1:12  0 NULL NULL
    NULL, // SW1:13  0 NULL NULL
},
{ // row 2
    NULL, // SW2:0  0 NULL NULL
    NULL, // SW2:1  0 NULL NULL
    NULL, // SW2:2  0 NULL NULL
    NULL, // SW2:3  0 NULL NULL
    NULL, // SW2:4  0 NULL NULL
    NULL, // SW2:5  0 NULL NULL
    NULL, // SW2:6  0 NULL NULL
    NULL, // SW2:7  0 NULL NULL
    NULL, // SW2:8  0 NULL NULL
    NULL, // SW2:9  0 NULL NULL
    NULL, // SW2:10  0 NULL NULL
    NULL, // SW2:11  0 NULL NULL
    NULL, // SW2:12  0 NULL NULL
    NULL, // SW2:13  0 NULL NULL
},
{ // row 3
    NULL, // SW3:0  0 NULL NULL
    NULL, // SW3:1  0 NULL NULL
    NULL, // SW3:2  0 NULL NULL
    NULL, // SW3:3  0 NULL NULL
    NULL, // SW3:4  0 NULL NULL
    NULL, // SW3:5  0 NULL NULL
    NULL, // SW3:6  0 NULL NULL
    NULL, // SW3:7  0 NULL NULL
    NULL, // SW3:8  0 NULL NULL
    NULL, // SW3:9  0 NULL NULL
    NULL, // SW3:10  0 NULL NULL
    NULL, // SW3:11  0 NULL NULL
    NULL, // SW3:12  0 NULL NULL
    NULL, // SW3:13  0 NULL NULL
},
{ // row 4
    NULL, // SW4:0  0 NULL NULL
    NULL, // SW4:1  0 NULL NULL
    NULL, // SW4:2  0 NULL NULL
    NULL, // SW4:3  0 NULL NULL
    NULL, // SW4:4  0 NULL NULL
    NULL, // SW4:5  0 NULL NULL
    NULL, // SW4:6  0 NULL NULL
    NULL, // SW4:7  0 NULL NULL
    NULL, // SW4:8  0 NULL NULL
    NULL, // SW4:9  0 NULL NULL
    NULL, // SW4:10  0 NULL NULL
    NULL, // SW4:11  0 NULL NULL
    NULL, // SW4:12  0 NULL NULL
    NULL, // SW4:13  0 NULL NULL
},
{ // row 5
    NULL, // SW5:0  0 NULL NULL
    NULL, // SW5:1  0 NULL NULL
    NULL, // SW5:2  0 NULL NULL
    NULL, // SW5:3  0 NULL NULL
    NULL, // SW5:4  0 NULL NULL
    NULL, // SW5:5  0 NULL NULL
    NULL, // SW5:6  0 NULL NULL
    NULL, // SW5:7  0 NULL NULL
    NULL, // SW5:8  0 NULL NULL
    NULL, // SW5:9  0 NULL NULL
    NULL, // SW5:10  0 NULL NULL
    NULL, // SW5:11  0 NULL NULL
    NULL, // SW5:12  0 NULL NULL
    NULL, // SW5:13  0 NULL NULL
},
},
};
