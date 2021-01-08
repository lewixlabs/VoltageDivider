#include <SoftwareSerial.h>

void setup()
{
  pinMode(A5, INPUT);
  Serial.begin(115200);           //  setup serial
}

int analogResult = 0;
void loop()
{
  analogResult = analogRead(A5);
  Serial.println(analogResult);
  Serial.println((float)(analogResult*5)/1023);
  delay(1000); // Wait for 1000 millisecond(s)
}