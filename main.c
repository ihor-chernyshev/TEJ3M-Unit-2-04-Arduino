//Created by Ihor Chernyshev
//Created on March 2025
//This program turns the RGB LED on and off

int counter;
const int RED = 5;
const int GREEN = 6;
const int BLUE = 7;

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
}

void loop()
{
  //Turns red during first cycle and yellow during second one
  digitalWrite(RED, HIGH);
  if (counter == 1)
  {
    digitalWrite(GREEN, HIGH);
  }
  delay(1000);
  digitalWrite(RED, LOW);
  digitalWrite(GREEN, LOW);
  
  //Turns green during first cycle and yellow during second one
  digitalWrite(GREEN, HIGH);
  if (counter == 1)
  {
    digitalWrite(BLUE, HIGH);
  }
  delay(1000);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
  
  //Turns blue during first cycle and violet during second one
  digitalWrite(BLUE, HIGH);
  if (counter == 1)
  {
    digitalWrite(RED, HIGH);
  }
  delay(1000);
  digitalWrite(RED, LOW);
  digitalWrite(BLUE, LOW);
  
  //Turns white and black during second cycle
  if (counter == 1)
  {
    digitalWrite(RED, HIGH);
    digitalWrite(GREEN, HIGH);
    digitalWrite(BLUE, HIGH);
    delay(1000);
    digitalWrite(RED, LOW);
    digitalWrite(GREEN, LOW);
    digitalWrite(BLUE, LOW);
    delay(1000);
    counter = -1;
  }
  counter = counter + 1;
}
