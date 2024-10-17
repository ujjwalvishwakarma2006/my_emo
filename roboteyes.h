// roboteyes.h
#ifndef ROBOTEYES_H
#define ROBOTEYES_H

#include <Arduino.h>
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>

// Declare display as extern
extern Adafruit_ILI9341 display;

// Function declarations
void look_neutral(int t);
void blink_eyes(int t, int numberOfBlinks);
void look_left(int t);
void look_right(int t);
void look_squint(int t);

#endif
