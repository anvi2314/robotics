const int redPins[]= {2,3,4,5};
const int yellowPins[]={6,7,8,9};
const int greenPins[]={10,11,12,13};

void setup()
//We now have to set all pins as OUTPUT PINS
for(int i = 0; i<4; i++){   // in for loop: set the integer as 0, the loop will continue as long as the number is under 4, after every loop, the integer increases by one
pinMode(redPins[i],OUTPUT);  // all red pins are output pins
pinMode(yellowPins[i],OUTPUT); // all yellowPins are ouptut pins
pinMode(greenPins[i],OUTPUT);  // all greenPins are output pins 
}
Serial.begin(9600);
}

void setLight(bool
