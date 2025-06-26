int a;

void setup() 
{
  pinMode(4, INPUT_PULLUP);        
  pinMode(5, OUTPUT);              

  Serial.begin(9600);   
}           

void loop()
  {
    a = digitalRead(4);              
  Serial.println(a);               

  delay(100);                      

  if (a == 0) {
    digitalWrite(5, LOW);         
  } else {
    digitalWrite(5, HIGH);          
  }
 }


