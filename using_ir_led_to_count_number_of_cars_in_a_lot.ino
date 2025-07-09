//In this project we are using an IR LED to detect how many cars have come in to the parking lot, and when some amount of 
cars have gone, how many cars still in the parking lot.

int ir_in;
int ir_out;
int count=0;
void setup()
{
  pinMode(2,INPUT);
  pinMode(4,INPUT);
  Serial.begin(9600);
}

void loop()
{
 ir_in=digitalRead(2);
 if (ir_in==0){
  count++;
  }
delay(1000);
  
  ir_out=digitalRead(4);
  if(ir_out==0){
  count--;}
  delay(1000);
  Serial.print("number of cars = ");
  Serial.println(count);
  
if(count==10){ 
Serial.print("Parking is full.");
}
  

  }
  
