#pragma once

#include "runner3680.h"

#include "quantum.h"

#define LAYOUT( \
   L02, L03, L04, L05, L06, L07, R00, R01, R02, R03, R04, R05, R06, R07, \
   L12, L13, L14, L15, L16, L17, R10, R11, R12, R13, R14, R15, R16, R17, \
   L22, L23, L24, L25, L26, L27, R20, R21, R22, R23, R24, R25, R26, R27, \
   L32, L33, L34, L35, L36, L37, R30, R31, R32, R33, R34, R35, R36, R37, \
   L42, L43, L44, L45, L46, L47, R40, R41, R42, R43, R44, R45, R46, R47  \
   ) \
   { \
     { KC_NO, KC_NO, L02, L03, L04, L05, L06, L07 }, \
     { KC_NO, KC_NO, L12, L13, L14, L15, L16, L17 }, \
     { KC_NO, KC_NO, L22, L23, L24, L25, L26, L27 }, \
     { KC_NO, KC_NO, L32, L33, L34, L35, L36, L37 }, \
     { KC_NO, KC_NO, L42, L43, L44, L45, L46, L47 }, \
     { R07, R06, R05, R04, R03, R02, R01, R00 }, \
     { R17, R16, R15, R14, R13, R12, R11, R10 }, \
     { R27, R26, R25, R24, R23, R22, R21, R20 }, \
     { R37, R36, R35, R34, R33, R32, R31, R30 }, \
     { R47, R46, R45, R44, R43, R42, R41, R40 } \
   }
