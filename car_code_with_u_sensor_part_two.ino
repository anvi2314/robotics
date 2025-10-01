// Motor A connections
int enA = 9; // integer
int in1 = 8;
int in2 = 7;

// Motor B connections
int enB = 3;
int in3 = 5;
int in4 = 4;

// ultrasonic sensor
int TrigPin = 13;
int EchoPin = 12;

void setup() {
  // Set all motor control pins to outputs
  pinMode(enA, OUTPUT); // pin enA - enB = OUTPUT
  pinMode(in1, OUTPUT); 
  pinMode(in2, OUTPUT); 

  pinMode(enB, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);

  // ultrasonic sensor
  pinMode(TrigPin,OUTPUT); // pin is output
  pinMode (EchoPin,INPUT); // pin = input

  // Turn off both motors - Initial state
  digitalWrite(in1, LOW); // in intial state, pins in1 - in4 are low
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, LOW);
  Serial.begin(9600);
}

void backward(){

} 

void forward (){
digitalWrite(enA,HIGH);
digitalWrite(enB,HIGH);
digitalWrite(in1,LOW);
digitalWrite(in2,LOW);
digitalWrite(in3,LOW);
digitalWrite(in4,LOW);
}

void right(){

}

void left(){

}

void setup(){
  // main code here
  // read distance

  //distance<10cm

  //move


  //distance>10cm
  //forward()
}



