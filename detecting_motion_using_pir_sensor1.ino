void setup()
{
  Serial.begin(9600);
  pinMode(2,INPUT);
}

void loop()
{
  int motion = digitalRead(2);
  if(motion == HIGH){
    Serial.println("Motion detected");
    delay(1000);
  }
  else
  {
    Serial.println("Not detected");
  	delay(1000);
   }
}
  