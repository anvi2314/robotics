int i = 0; // setting the variable i to zero
int a;     // naming the letter a as a variable

void setup() {
  pinMode(2, OUTPUT); // setting all the seven segment pins as output using digital pins 
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(10, INPUT_PULLUP); // this pin  is connected to the digital pin 10
}

void loop() {    // anything inside this thing will be repeated 
  a = digitalRead(10);

  if (a == 0) {  
    i++;        // i will increment by 1
    delay(200); // debouncing
  }
  if (i == 10) {  // if i is equal to ten it will reset back to 0
    i = 0;
  }
  if (i == 1) {
    digitalWrite(2, LOW); // I have turned on and off the pins to create the number one
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if (i == 2) {
    digitalWrite(2, HIGH);  // turned on and off pins to make the number two
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (i == 3) {
    digitalWrite(2, HIGH); // turned off and on pins to create the number three
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, HIGH);
  }
  if (i == 4) {
    digitalWrite(2, LOW); // turn off and on pins to create the number four 
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (i == 5) {
    digitalWrite(2, HIGH); // turn off and on pins to create the number five
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (i == 6) {
    digitalWrite(2, HIGH); // turn off and on pins to create the number six
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (i == 7) {
    digitalWrite(2, HIGH); // turn off and on pins to create the number seven
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
  }
  if (i == 8) {
    digitalWrite(2, HIGH);// turn off and on pins to create the number eight
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (i == 9) {
    digitalWrite(2, HIGH);// turn off and on pins to create the number nine
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
    digitalWrite(8, HIGH);
  }
  if (i == 0) {
    digitalWrite(2, HIGH); // turn off and on pins to create the number zero
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    digitalWrite(7, HIGH);
    digitalWrite(8, LOW);
  }
}
