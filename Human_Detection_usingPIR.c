cpp
Copy
int ledPin = 13; // LED connected to digital pin 13
int pirPin = 2;  // PIR sensor connected to digital pin 2
int pirState = LOW; // Start with no motion detected

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as output
  pinMode(pirPin, INPUT);  // Set PIR pin as input
  Serial.begin(9600);      // Start serial communication
}

void loop() {
  pirState = digitalRead(pirPin); // Read the PIR sensor output
  if (pirState == HIGH) {          // If motion is detected
    digitalWrite(ledPin, HIGH);    // Turn on LED
    Serial.println("Motion detected!"); // Print message
  } else {
    digitalWrite(ledPin, LOW);     // Turn off LED
  }
}
