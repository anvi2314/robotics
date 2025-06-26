int i ;

 void setup()
 {
  pinMode(A1,INPUT);
  Serial.begin(9600);
 }

 void loop()
 {
 i=analogRead(A1);
 Serial.println(i);

 delay(100);
 }
