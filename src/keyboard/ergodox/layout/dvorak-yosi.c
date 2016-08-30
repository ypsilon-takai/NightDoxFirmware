/* ----------------------------------------------------------------------------
 * ergoDOX layout : Dvorak for me!
 * ----------------------------------------------------------------------------
 * Copyright (c) 2012 Ben Blazak <benblazak.dev@gmail.com>
 * Released under The MIT License (MIT) (see "license.md")
 * Project located at <https://github.com/benblazak/ergodox-firmware>
 * ------------------------------------------------------------------------- */


#include <stdint.h>
#include <stddef.h>
#include <avr/pgmspace.h>
#include "../../../lib/data-types/misc.h"
#include "../../../lib/usb/usage-page/keyboard--short-names.h"
#include "../../../lib/key-functions/public.h"
#include "../matrix.h"
#include "../layout.h"

#define _scLk               KEY_ScrollLock

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

const uint8_t PROGMEM _kb_layout[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

	KB_MATRIX_LAYER_NIGHTDOX(  // layout: layer 0: default
// unused
0,
// left hand
3,    _equal,         _1,         _2,      _3,      _4, _5, _numLock_kp,
2,      _tab,     _quote,     _comma, _period,      _P, _Y, _bs,
1,      _esc,         _A,         _O,      _E,      _U, _I,
     _shiftL, _semicolon,         _Q,      _J,      _K, _X, _enter,
                  _grave, _backslash, _arrowL, _arrowR,
                                                 _ctrlL, _altL,
                                              0,      0,     3,
                                            _space, _bs,  _del,
// right hand
     _del, _6,      _7,      _8,      _9,      _0, _backslash, 3,
     _tab, _F,      _G,      _C,      _R,      _L,     _slash, 2,
           _D,      _H,      _T,      _N,      _S,      _dash, 1,
   _enter, _B,      _M,      _W,      _V,      _Z,    _shiftR,
               _arrowU, _arrowD, _bracketL, _bracketR,
 _ctrlR, _altR,
      2,      0,      0,
_insert, _enter, _space),


	KB_MATRIX_LAYER_NIGHTDOX(  // layout: layer 1: function and symbol keys
// unused
0,
// left hand
3,    0,   _F1,   _F2,   _F3,   _F4,   _F5,     0,
2,    0,   _F6,   _F7,   _F8,   _F9,  _F10,     1,
1,    0,   _F11,  _F12,    0,     0,     0,
      0,     0,     0,     0,     0,     0,     2,
             0,     0,     0,     0,
                                               0,  0,
                                           0,  0,  0,
                                           0,  0,  0,
// right hand
     0,   _F6,   _F7,   _F8,   _F9,  _F10,     0, 3,
     0,     0,_print, _scLk,_pause,     0,     0, 2,
            0,     0,     0,     0,     0,     0, 1,
     0,     0,     0,     0,     0,     0,     0,
                   0,     0,     0,     0,
  0,  0,
  0,  0,  0,
  0,  0,  0 ),


	KB_MATRIX_LAYER_NIGHTDOX(  // layout: layer 2: qwerty for someone
// unused
0,
// left hand
3,    _equal,     _1,         _2,      _3,      _4,    _5, _esc,
2,_backslash,     _Q,         _W,      _E,      _R,    _T,    1,
1,      _tab,     _A,         _S,      _D,      _F,    _G,
     _shiftL,     _Z,         _X,      _C,      _V,    _B,    1,
              _grave, _backslash, _arrowL, _arrowR,
                                                 _ctrlL, _altL,
                                              0,      0, _home,
                                            _bs,   _del,  _end,
// right hand
        3, _6,      _7,      _8,      _9,         _0,     _dash, 3,
_bracketL, _Y,      _U,      _I,      _O,         _P, _bracketR, 2,
           _H,      _J,      _K,      _L, _semicolon,    _quote, 1,
        1, _N,      _M,  _comma, _period,     _slash,   _shiftR,
               _arrowL, _arrowD, _arrowU,    _arrowR, 
 _altR, _ctrlR,
_pageU,      0,      0,
_pageD, _enter, _space ),
	

	KB_MATRIX_LAYER_NIGHTDOX(  // layout: layer 3: numpad
// unused
0,
// left hand
3, 0, 0, 0, 0, 0, 0, 0,
2, 0, 0, 0, 0, 0, 0, 0,
1, 0, 0, 0, 0, 0, 0,
   0, 0, 0, 0, 0, 0, 0,
      0, 0, 0, 0,
                     0, 0,
                  0, 0, 0,
                  0, 0, 0,
// right hand
3, 0,     3, _equal_kp, _div_kp,   _mul_kp, 0, 3,
0, 0, _7_kp,     _8_kp,   _9_kp,   _sub_kp, 0, 2,
   0, _4_kp,     _5_kp,   _6_kp,   _add_kp, 0, 1,
0, 0, _1_kp,     _2_kp,   _3_kp, _enter_kp, 0,
      _0_kp,     _0_kp, _period, _enter_kp,
0, 0,
0, 0,     0,
0, 0, _0_kp ),

};

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

// aliases

// basic
#define  kprrel  &kbfun_press_release
#define  ktog    &kbfun_toggle
#define  ktrans  &kbfun_transparent
// --- layer push/pop functions
#define  lpush1   &kbfun_layer_push_1
#define  lpush2   &kbfun_layer_push_2
#define  lpush3   &kbfun_layer_push_3
#define  lpush4   &kbfun_layer_push_4
#define  lpush5   &kbfun_layer_push_5
#define  lpush6   &kbfun_layer_push_6
#define  lpush7   &kbfun_layer_push_7
#define  lpush8   &kbfun_layer_push_8
#define  lpush9   &kbfun_layer_push_9
#define  lpush10  &kbfun_layer_push_10
#define  lpop1    &kbfun_layer_pop_1
#define  lpop2    &kbfun_layer_pop_2
#define  lpop3    &kbfun_layer_pop_3
#define  lpop4    &kbfun_layer_pop_4
#define  lpop5    &kbfun_layer_pop_5
#define  lpop6    &kbfun_layer_pop_6
#define  lpop7    &kbfun_layer_pop_7
#define  lpop8    &kbfun_layer_pop_8
#define  lpop9    &kbfun_layer_pop_9
#define  lpop10   &kbfun_layer_pop_10
// ---

// device
#define  dbtldr  &kbfun_jump_to_bootloader

// special
#define  sshprre  &kbfun_shift_press_release
#define  s2kcap   &kbfun_2_keys_capslock_press_release
#define  slpunum  &kbfun_layer_push_numpad
#define  slponum  &kbfun_layer_pop_numpad

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

const void_funptr_t PROGMEM _kb_layout_press[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

	KB_MATRIX_LAYER_NIGHTDOX(  // press: layer 0: default
// unused
NULL,
// left hand
lpush3,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
lpush2,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
lpush1,  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
         s2kcap, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
                 kprrel, kprrel, kprrel, kprrel,
                                                 kprrel, kprrel,
                                           NULL,   NULL, lpush3,
                                         kprrel, kprrel, kprrel,
// right hand
         kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush3,
         kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush2,
                 kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpush1,
         kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, s2kcap,
                         kprrel, kprrel, kprrel, kprrel,
 kprrel, kprrel,
 lpush2,   NULL,   NULL,
 kprrel, kprrel, kprrel ),


	KB_MATRIX_LAYER_NIGHTDOX(  // press: layer 1: function and symbol keys
// unused
NULL,
// left hand
NULL,   NULL, kprrel, kprrel, kprrel, kprrel, kprrel,   NULL,
NULL,   NULL, kprrel, kprrel, kprrel, kprrel, kprrel,   NULL,
NULL,   NULL, kprrel, kprrel,   NULL,   NULL,   NULL,
        NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,,
                NULL,   NULL, ktrans, ktrans,
                                                 ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
// right hand
          NULL, kprrel, kprrel, kprrel, kprrel, kprrel,   NULL,   NULL,
          NULL,   NULL, kprrel, kprrel, kprrel,   NULL,   NULL,   NULL,
	          NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
          NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	                  NULL,   NULL,   NULL,   NULL,
 ktrans, ktrans,
 ktrans, ktrans, ktrans,
 ktrans, ktrans, ktrans ),


	KB_MATRIX_LAYER_NIGHTDOX(  // press: layer 2: keyboard functions
// unused
NULL,
// left hand
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        s2kcap, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
                kprrel, kprrel, kprrel, kprrel,
                                                 kprrel, kprrel,
                                           NULL,   NULL, kprrel,
                                         kprrel, kprrel, kprrel,
// right hand
        slpunum, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,  NULL,
         ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,  NULL,
                 kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,  NULL,
         ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, s2kcap,
                         kprrel, kprrel, kprrel, kprrel,
 kprrel, kprrel,
 kprrel,   NULL,   NULL,
 kprrel, kprrel, kprrel ),

	KB_MATRIX_LAYER_NIGHTDOX(  // press: layer 3: numpad
// unused
NULL,
// left hand
  NULL, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
  NULL, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
  NULL, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
        ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
                ktrans, ktrans, ktrans, ktrans,
                                                 ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
// right hand
       slponum, ktrans,slponum, kprrel, kprrel, kprrel, ktrans,  NULL,
        ktrans, ktrans, kprrel, kprrel, kprrel, kprrel, ktrans,  NULL,
                ktrans, kprrel, kprrel, kprrel, kprrel, ktrans,  NULL,
        ktrans, ktrans, kprrel, kprrel, kprrel, kprrel, ktrans,
                        ktrans, ktrans, kprrel, kprrel,
 ktrans, ktrans,
 ktrans, ktrans, ktrans,
 ktrans, ktrans, kprrel ),

};

// ----------------------------------------------------------------------------
// ----------------------------------------------------------------------------

const void_funptr_t PROGMEM _kb_layout_release[KB_LAYERS][KB_ROWS][KB_COLUMNS] = {

	KB_MATRIX_LAYER_NIGHTDOX(  // release: layer 0: default
// unused
NULL,
// left hand
NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
      s2kcap, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
              kprrel, kprrel, kprrel, kprrel,
                                                 kprrel, kprrel,
                                           NULL,   NULL, lpop3,
                                         kprrel, kprrel, kprrel,
// right hand
        kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
        kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
                kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, NULL,
        kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, s2kcap,
                        kprrel, kprrel, kprrel, kprrel,
 kprrel, kprrel,
 NULL,   NULL,   NULL,
 kprrel, kprrel, kprrel ),


	KB_MATRIX_LAYER_NIGHTDOX(  // release: layer 1: function and symbol keys
// unused
NULL,
// left hand
  NULL,   NULL, kprrel, kprrel, kprrel, kprrel, kprrel,   NULL,
  NULL,   NULL, kprrel, kprrel, kprrel, kprrel, kprrel,   NULL,
 lpop1,   NULL, kprrel, kprrel,   NULL,   NULL,   NULL,
          NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,,
                  NULL,   NULL, ktrans, ktrans,
                                                 ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
// right hand
          NULL, kprrel, kprrel, kprrel, kprrel, kprrel,   NULL,   NULL,
          NULL,   NULL, kprrel, kprrel, kprrel,   NULL,   NULL,   NULL,
	          NULL,   NULL,   NULL,   NULL,   NULL,   NULL,  lpop1,
          NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	                  NULL,   NULL,   NULL,   NULL,
 ktrans, ktrans,
 ktrans, ktrans, ktrans,
 ktrans, ktrans, ktrans ),


	KB_MATRIX_LAYER_NIGHTDOX(  // release: layer 2: keyboard functions
// unused
NULL,
// left hand
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
 lpop2  kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
  NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,
        s2kcap, kprrel, kprrel, kprrel, kprrel, kprrel, ktrans,
                kprrel, kprrel, kprrel, kprrel,
                                                 kprrel, kprrel,
                                           NULL,   NULL, kprrel,
                                         kprrel, kprrel, kprrel,
// right hand
          NULL, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,  NULL,
        ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, kprrel, lpop2,
                kprrel, kprrel, kprrel, kprrel, kprrel, kprrel,  NULL,
        ktrans, kprrel, kprrel, kprrel, kprrel, kprrel, s2kcap,
                        kprrel, kprrel, kprrel, kprrel,
 kprrel, kprrel,
 kprrel,   NULL,   NULL,
 kprrel, kprrel, kprrel ),


	KB_MATRIX_LAYER_NIGHTDOX(  // release: layer 3: numpad
// unused
NULL,
// left hand
 lpop3, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
  NULL, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
  NULL, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
        ktrans, ktrans, ktrans, ktrans, ktrans, ktrans, ktrans,
                kprrel, ktrans, ktrans, ktrans,
                                                 ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
                                         ktrans, ktrans, ktrans,
// right hand
          NULL, ktrans,   NULL, kprrel, kprrel, kprrel, ktrans, lpop3,
        ktrans, ktrans, kprrel, kprrel, kprrel, kprrel, ktrans,  NULL,
                ktrans, kprrel, kprrel, kprrel, kprrel, ktrans,  NULL,
        ktrans, ktrans, kprrel, kprrel, kprrel, kprrel, ktrans,
                        kprrel, kprrel, kprrel, kprrel,
 ktrans, ktrans,
 ktrans, ktrans, ktrans,
 ktrans, ktrans, kprrel ),


	KB_MATRIX_LAYER(  // release: layer 3: nothing (just making sure unused
			  // functions don't get compiled out)
// unused
NULL,
// other
 kprrel, lpush8,  lpop8,   NULL,   NULL,   NULL,   NULL,   NULL,
   ktog, lpush9,  lpop9,   NULL,   NULL,   NULL,   NULL,   NULL,
 ktrans,lpush10, lpop10,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush1,  lpop1,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush2,  lpop2, dbtldr,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush3,  lpop3,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush4,  lpop4, s2kcap,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush5,  lpop5,slpunum,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush6,  lpop6,slponum,   NULL,   NULL,   NULL,   NULL,   NULL,
 lpush7,  lpop7,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL )

};

