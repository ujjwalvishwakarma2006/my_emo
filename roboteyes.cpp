// roboteyes.cpp
#include "roboteyes.h"
#include "eye_bitmaps.h"

// Note: Remove the pin definitions and display creation from here
// as they're already in the main .ino file

// Assuming you have your bitmap data defined somewhere
extern const uint8_t eye_neutral[];
extern const uint8_t eye_squint[];
extern const uint8_t eye_lookleft[];
extern const uint8_t eye_lookright[];

void look_neutral(int t) {
    display.fillScreen(ILI9341_BLACK);  // Clear screen with black
    // Calculate center position for the eye bitmap
    int x = (display.width() - 128) / 2;
    int y = (display.height() - 64) / 2;
    display.drawBitmap(x, y, eye_neutral, 128, 64, ILI9341_WHITE);
    delay(t);
}

void look_squint(int t) {
    display.fillScreen(ILI9341_BLACK);
    int x = (display.width() - 128) / 2;
    int y = (display.height() - 64) / 2;
    display.drawBitmap(x, y, eye_squint, 128, 64, ILI9341_WHITE);
    delay(t);
}

void look_right(int t) {
    look_squint(100);
    display.fillScreen(ILI9341_BLACK);
    int x = (display.width() - 128) / 2;
    int y = (display.height() - 64) / 2;
    display.drawBitmap(x, y, eye_lookright, 128, 64, ILI9341_WHITE);
    delay(t);
}

void look_left(int t) {
    look_squint(100);
    display.fillScreen(ILI9341_BLACK);
    int x = (display.width() - 128) / 2;
    int y = (display.height() - 64) / 2;
    display.drawBitmap(x, y, eye_lookleft, 128, 64, ILI9341_WHITE);
    delay(t);
}

void blink_eyes(int t, int numberOfBlinks) {
    for (int i = 0; i < numberOfBlinks; i++) {
        look_neutral(t);
        look_squint(100);
    }
}