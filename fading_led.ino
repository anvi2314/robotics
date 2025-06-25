#define fade 3

int i;

void setup() {
  pinMode(fade, OUTPUT);
}

void loop() {
  // Fade in
  for (i = 0; i < 256; i += 3) {
    analogWrite(fade, i);
    delay(50);
  }

  // Fade out
  for (i = 255; i > 0; i -= 3) {
    analogWrite(fade, i);
    delay(50);
  }
}
