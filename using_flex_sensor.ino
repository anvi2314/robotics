int a;

void setup()
{
  pinMode(3,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{  
  int a = analogRead(A0);

  if(a==787)
  {
    Serial.print("Normal");
  }

  if(a<786 & a>400)
{
  digitalWrite(3,HIGH);
  Serial.println("LED is on");


}
}
