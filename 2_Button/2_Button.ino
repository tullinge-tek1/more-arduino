
int ledPin = 2;
int buttonPin = 2;

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, HIGH);
}

void loop() {
  int buttonValue = digitalRead(buttonPin);

  if (buttonValue == HIGH) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }
}
