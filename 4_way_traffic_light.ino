#define red1 2
#define red2 3
#define red3 4
#define red4 5
#define yellow1 6
#define yellow2 7
#define yellow3 8
#define yellow4 9
#define green1 10
#define green2 11
#define green3 12
#define green4 13

int i; 

 void setup()
 {
  //anvitha();
  pinMode(red1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(red3,OUTPUT);
  pinMode(red4,OUTPUT);
  pinMode(yellow1,OUTPUT);
  pinMode(yellow2,OUTPUT);
  pinMode(yellow3,OUTPUT);
  pinMode(yellow4,OUTPUT);
  pinMode(green1,OUTPUT);
  pinMode(green2,OUTPUT);
  pinMode(green3,OUTPUT);
  pinMode(green4,OUTPUT);
  Serial.begin(9600);
 }

 void loop()
{
  digitalWrite(red1,LOW); //side 1 and 3 are open
  digitalWrite(red2,HIGH); // side 2 and 4 are closed.
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  digitalWrite(green1,HIGH); //green1 and green3 are on 
  digitalWrite(green2, LOW);
  digitalWrite(green3,HIGH);
  digitalWrite(green4,LOW);

delay(3000);

  digitalWrite(red1,LOW);
  digitalWrite(red2,HIGH);
  digitalWrite(red3,LOW);
  digitalWrite(red4,HIGH);
  digitalWrite(yellow1,HIGH); //yellow one and yellow 3 are turning on
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,HIGH);
  digitalWrite(yellow4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);

 delay(3000);
  
  digitalWrite(red1,HIGH);//red1 and red3 are on 
  digitalWrite(red2,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);

  delay(3000);

  digitalWrite(red1,HIGH);
  digitalWrite(red2,LOW); //red2 and red4 are open
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,HIGH);//green2 and green4 are on
  digitalWrite(green3,LOW);
  digitalWrite(green4,HIGH);

  delay(3000);

  digitalWrite(red1,HIGH);
  digitalWrite(red2,LOW);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,LOW);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,HIGH); //yellow2 and yellow4 are on
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,HIGH);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);

  delay(3000);

  digitalWrite(red1,HIGH);// all reds are turned on
  digitalWrite(red2,HIGH);
  digitalWrite(red3,HIGH);
  digitalWrite(red4,HIGH);
  digitalWrite(yellow1,LOW);
  digitalWrite(yellow2,LOW);
  digitalWrite(yellow3,LOW);
  digitalWrite(yellow4,LOW);
  digitalWrite(green1,LOW);
  digitalWrite(green2,LOW);
  digitalWrite(green3,LOW);
  digitalWrite(green4,LOW);

  delay(3000);

}

