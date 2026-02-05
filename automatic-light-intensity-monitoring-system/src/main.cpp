#include <Arduino.h>
#define ldrPin A0
void setup() {
    Serial.begin(9600);
    pinMode(ldrPin, INPUT);
    Serial.println("LDR Test");
}

void loop() {
    int ldrRaw = analogRead(ldrPin);
    int LightPercent = map(ldrRaw,0,1023,0,100);
    Serial.print("LDR Raw: ");
    Serial.println(ldrRaw);
    Serial.print("light percent: ");
    Serial.print(LightPercent);
    Serial.println("%");
    delay(500);
// write your code here
}