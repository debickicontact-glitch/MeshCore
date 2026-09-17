#include <Arduino.h>

void setup()
{
    Serial.begin(115200);
    delay(1000);

    Serial.println();
    Serial.println("========================");
    Serial.println("STARTUP TEST - ESP32-S3");
    Serial.println("START OK");
    Serial.println("========================");
}

void loop()
{
    Serial.println("ALIVE");
    delay(1000);
}
