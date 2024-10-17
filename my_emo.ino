// my_emo.ino
#include <Adafruit_GFX.h>
#include <Adafruit_ILI9341.h>
#include "roboteyes.h"

// Define the pins for the ILI9341
#define TFT_CLK 13   // Clock pin (SCK)
#define TFT_MISO 12  // MISO pin (not used in this example)
#define TFT_MOSI 11  // MOSI pin (SDA)
#define TFT_CS 10    // Chip select pin
#define TFT_DC 9     // Data/Command pin
#define TFT_RST 8    // Reset pin

// Create ILI9341 display object
Adafruit_ILI9341 display(TFT_CS, TFT_DC, TFT_MOSI, TFT_CLK, TFT_RST, TFT_MISO);

void setup() {
    // Start the Serial communication
    Serial.begin(115200);
    
    Serial.println("Initializing display...");
    
    // Initialize the ILI9341 display
    display.begin();
    display.setRotation(3); // Set rotation (optional)
    
    // Clear the display buffer
    display.fillScreen(ILI9341_BLACK);
    
    // Display a test message
    display.setTextColor(ILI9341_WHITE);
    display.setTextSize(2);
    display.setCursor(10, 10);
    display.println(F("Display Test"));
    
    Serial.println("Display initialized!");
}

void loop() {
    // Main loop code that utilizes the eye functions
    look_neutral(500);
    look_left(500);
    look_right(500);
    delay(1000);
}