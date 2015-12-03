#ifndef _TRANSLATE_h
#define _TRANSLATE_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

#define LED 4
#define DUR 250

void translate(String);
void letter(char);
void dot();
void dash();
void space();

#endif