int i;

void setup()
{
  pinMode(6, INPUT);
  pinMode(10, OUTPUT);
 Serial.begin(9600);
 }

void loop()
{
  i=digitalRead(6);
  Serial.println(i);
 
 delay(50);

 if (i==0) {
digitalWrite(10,HIGH);

 } else{
  digitalWrite(10,LOW);
 }
 

 }
