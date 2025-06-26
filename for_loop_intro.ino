int i;

void setup() {
  // Set pins 2 to 13 as OUTPUT
  for(i = 2; i < 14; i = i + 1) {
    pinMode(i, OUTPUT);  // Set each pin as an OUTPUT
  }
}

void loop() {
  // Loop to control LEDs or other outputs
  for(i = 2; i < 13; i = i + 1) {
    digitalWrite(i, LOW);         // Turn the current pin off
    digitalWrite(i + 1, HIGH);    // Turn the next pin on
    delay(300);                   // Wait for 300ms
    digitalWrite(i + 1, LOW);     // Turn the next pin off
    delay(300);                   // Wait for another 300ms
  }
}
