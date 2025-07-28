const int trigPin = 9;
const int echoPin = 8;

const int redPin = 10;
const int bluePin = 11;
const int greenPin = 12;

void setup() {
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Trigger the ultrasonic pulse
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  // Read the duration of the echo pulse
  long duration = pulseIn(echoPin, HIGH);

  // Convert duration to distance in inches
  int distance = duration / 148; // Speed of sound formula

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" inches");

  // Set LED color based on distance
  if (distance < 20) {
    digitalWrite(redPin, HIGH);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, LOW);
  } else if (distance >= 20 && distance <= 30) {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  } else {
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  delay(200); // Small delay for readability and stability
}
