#include <Arduino.h>

void turn_led_on(uint8_t led_pin) {
    digitalWrite(led_pin, HIGH);
}

/*void setup() {
    Serial.begin(9600);
    delay(2000);
    turn_led_on();
}

void loop() {
}*/
