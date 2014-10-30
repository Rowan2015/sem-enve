int sensorPin;
int ledPin;
int sensorValue = 0;
int scaleFactor = 1024/256;

void setup()
{
    pinMode(ledPin, OUTPUT);
    pinMode(sensorPin, INPUT);
}

void loop()
{
    sensorValue = analogRead(sensorPin);
    analogWrite(ledPin, sensorValue/scaleFactor);
}
