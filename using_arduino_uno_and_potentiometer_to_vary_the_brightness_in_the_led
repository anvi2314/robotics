int i ;

 void setup()
 {
  pinMode(A1,INPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
 }

 void loop()
 {
 i=analogRead(A1);
 Serial.println(i);

 analogWrite(11,i/4);
 }
