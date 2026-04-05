int sensor = 2;
int led = 6;
int buzzer = 7;
int motor1 = 8;
int motor2 = 9;

void setup() {
  pinMode(sensor, INPUT);
  pinMode(led, OUTPUT);
  pinMode(buzzer, OUTPUT);
  pinMode(motor1, OUTPUT);
  pinMode(motor2, OUTPUT);
}

void loop() {
  int value = digitalRead(sensor);

  if (value == LOW) {   // 🔴 Alcohol detected
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);

    // Stop motor
    digitalWrite(motor1, LOW);
    digitalWrite(motor2, LOW);
  } 
  else {                // 🟢 No alcohol
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);

    // Run motor
    digitalWrite(motor1, HIGH);
    digitalWrite(motor2, LOW);
  }
}
