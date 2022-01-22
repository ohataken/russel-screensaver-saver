#include "Keyboard.h"

unsigned long lastLoopTime;
unsigned long lastKeyHitTime;
unsigned long antiScreenSaverCount;

void setup() {
    lastLoopTime = millis();
    lastKeyHitTime = lastLoopTime;

    antiScreenSaverCount = 0;

    Keyboard.begin();
    Keyboard.releaseAll();
}

void loop() {
    lastLoopTime = millis();

    if ( lastLoopTime - lastKeyHitTime > 1000L * 59 ) {
        Keyboard.press(antiScreenSaverCount % 2 == 0 ? KEY_RIGHT_SHIFT : KEY_LEFT_SHIFT);
        delay(50);
        Keyboard.release(antiScreenSaverCount % 2 == 0 ? KEY_RIGHT_SHIFT : KEY_LEFT_SHIFT);        

        lastKeyHitTime = millis();
        ++antiScreenSaverCount;
    }

    delay(50);
}