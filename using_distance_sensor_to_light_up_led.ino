#define trig 2
#define echo 3
float duration;
int distance;

void setup()
{
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT);
  pinMode(5,OUTPUT);
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);
  digitalWrite(trig,LOW);
  duration = pulseIn(echo,HIGH); //calculating duration sound takes to travel back
  distance = (duration*0.034)/2;
  Serial.print("Distance = ");
  Serial.print(distance);
  Serial.println(" cm");
  delay(100);

  if(distance<50)
  {digitalWrite(5,HIGH);
  }

  if(distance>50)
  {digitalWrite(5,LOW);}

}
  
  

