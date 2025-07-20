// C++ code
//
int a;

void setup()
{
  pinMode(A0,INPUT);
  pinMode(6,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  int a = analogRead(A0);
  Serial.print("Flex sensor value = ");
  Serial.println(a);
  
  if(a==787)
  {
   
    digitalWrite(6,LOW);
                 
  }
   
  
if(a<687 && a>287)
  {
    
    digitalWrite(6,HIGH);
  }
}
  
  
