// Define the pin numbers for the switch and LED
const int switchPin = 2; // Connect the switch to digital pin 2
const int ledPin = 13;   // Connect the LED to digital pin 13

// Variable to store the state of the switch
int switchState = 0;

void setup() {
  // Set the switch pin as input and the LED pin as output
  pinMode(switchPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Read the state of the switch
  switchState = digitalRead(switchPin);

  // If the switch is pressed (LOW), turn on the LED; otherwise, turn it off
  if (switchState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on the LED
    delay(100);
  } else {
    digitalWrite(ledPin, LOW);  // Turn off the LED
    delay(100);
  }
}
