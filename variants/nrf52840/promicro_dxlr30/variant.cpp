/*
 * variant.cpp - NRF52840 Pro Micro + DXLR30 / E22-900M22S (SX1262)
 *
 * Copyright (c) 2014-2015 Arduino LLC. All right reserved.
 * Copyright (c) 2016 Sandeep Mistry All right reserved.
 * Copyright (c) 2018, Adafruit Industries (adafruit.com)
 *
 * LGPL 2.1 or later
 */

#include "variant.h"
#include "nrf.h"
#include "wiring_constants.h"
#include "wiring_digital.h"

// Flat pin map: index 0-47 -> NRF52840 GPIO
// P0.xx = index xx,  P1.xx = index 32+xx
const uint32_t g_ADigitalPinMap[] = {
  // P0 port
  0,   1,   2,   3,   4,   5,   6,   7,
  8,   9,  10,  11,  12,  13,  14,  15,
  16,  17,  18,  19,  20,  21,  22,  23,
  24,  25,  26,  27,  28,  29,  30,  31,
  // P1 port
  32,  33,  34,  35,  36,  37,  38,  39,
  40,  41,  42,  43,  44,  45,  46,  47
};

void initVariant()
{
  // Turn off the LED at boot
  pinMode(PIN_LED1, OUTPUT);
  digitalWrite(PIN_LED1, HIGH); // Active LOW - HIGH = off
}

void variant_shutdown() {}
