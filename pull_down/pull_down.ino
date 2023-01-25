const int BUTTON_INPUT = 4;
const int LED_OUTPUT = 12;

void setup()
{
  pinMode(BUTTON_INPUT, INPUT);
  pinMode(LED_OUTPUT, OUTPUT);
}

void loop()
{
  if (digitalRead(BUTTON_INPUT) == 1)
  {
    digitalWrite(LED_OUTPUT, HIGH);
  }
  else
  {
    digitalWrite(LED_OUTPUT, LOW);
  }
}