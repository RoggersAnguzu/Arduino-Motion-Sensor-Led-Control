// C++ code
//
void setup()
{
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  Serial.begin(96000);
}

void loop()
{
  int x = digitalRead(3);
  int y = digitalRead(4);
  int w = digitalRead(3);
  int z = digitalRead(4);
  
  if(x==LOW&&y==LOW)
  {
  digitalWrite(6,HIGH);
  delay(500);
  }
  else
  {
  digitalWrite(6,LOW);
  }
  
  //THIS PART IS USED TO ILLUSTRATE THE MOTOR
  if(w==LOW &&z==LOW)
  {
  analogWrite(5,255);
  }
  else
  {
  analogWrite(5,0);
  }
}