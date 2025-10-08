int TrigPin = 13, EchoPin = 12;
float time;

void setup()
{
  pinMode(TrigPin,OUTPUT);
  pinMode (EchoPin,INPUT);
  Serial.begin(9600);

}

float distance()
digitalWrite(TrigPin,LOW);
delayMicroseconds(10);
  digitalWrite(TrigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(TrigPin,LOW);
  time = pulseIn(EchoPin,HIGH);
  return time*0.017;
}
void loop()
{
  Serial.println(distance());
  delay(2000);
}
