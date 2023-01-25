// C++ code
//

const int BUTTON_INPUT_ADD = 4;
const int BUTTON_INPUT_MINUS = 5;
const int LED_OUTPUT = 12;
int compteur = 0;

void render()
{
   for(int i = 0 ; i < compteur; i++)
   {
     digitalWrite(LED_OUTPUT, HIGH);
     delay(300);
     digitalWrite(LED_OUTPUT, LOW);
     delay(300); 
   }
      
  Serial.println(compteur);
}

void setup()
{
  pinMode(BUTTON_INPUT_ADD, INPUT);
  pinMode(BUTTON_INPUT_MINUS, INPUT);
  pinMode(LED_OUTPUT, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (digitalRead(BUTTON_INPUT_ADD) == 1)
  {
    compteur ++;
   	render();
  }
  if (digitalRead(BUTTON_INPUT_MINUS) == 1)
  {
    if(compteur > 0)
    {
      compteur --;
      render();
    }
  }

}