
#define fade 3           //Giving the name fade to the LED which is set on pin 3. Define is a macro meaning wherever you find fade replace it with pin 3.

int i;                  // int i is a global integer variable to i 
void setup() {         // Anything inside the void setup runs once 
  pinMode(fade, OUTPUT); // It basically says that the pin 3 will be used as an output
}

void loop() {          // Anything inside the void loop will be repeated any amount of times
  // Fade in
  for (i = 0; i < 256; i += 3) { // We are setting "i" as 0 and we will increase the brightness by three until we reach 255
    analogWrite(fade, i);       //  Using analogWrite to list all the number from 0 to 255 and increasing by 3
    delay(50);                 //   Stopping the loop for 50 milliseconds
  }

  // Fade out
  for (i = 255; i > 0; i -= 3) { // In this for loop, i is equal to 255, and i is now greater than 0, and i is decreasing by three 
    analogWrite(fade, i);        // We are now using the analogWrite to list all the numbers from 255 to 0 and decreasing each amount by three
    delay(50);                  //  We are again delaying the loop for 50 milliseconds 
  }
}
