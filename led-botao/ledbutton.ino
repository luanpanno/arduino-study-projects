const int LED = 10;
const int BUTTON = 9;

void setup()
{
    pinMode(BUTTON, INPUT);
    pinMode(LED, OUTPUT);
}

void loop()
{
    digitalWrite(LED, !digitalRead(BUTTON));
}