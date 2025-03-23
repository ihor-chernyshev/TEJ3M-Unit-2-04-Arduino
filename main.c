//Created by Ihor Chernyshev
//Created on March 2025
//This program turns the RGB LED on and off

int counter;

void setup()
{
  pinMode(5, OUTPUT);//RED
  pinMode(6, OUTPUT);//GREEN
  pinMode(7, OUTPUT);//BLUE
}

void loop()
{
  //Turns red during first cycle and yellow during second one
  digitalWrite(5, HIGH);
  if (counter == 1)
  {
    digitalWrite(6, HIGH);
  }
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  
  //Turns green during first cycle and yellow during second one
  digitalWrite(6, HIGH);
  if (counter == 1)
  {
    digitalWrite(7, HIGH);
  }
  delay(1000);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  
  //Turns blue during first cycle and violet during second one
  digitalWrite(7, HIGH);
  if (counter == 1)
  {
    digitalWrite(5, HIGH);
  }
  delay(1000);
  digitalWrite(5, LOW);
  digitalWrite(7, LOW);
  
  //Turns white and black during second cycle
  if (counter == 1)
  {
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    delay(1000);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    delay(1000);
    counter = -1;
  }
  counter = counter + 1;
}
