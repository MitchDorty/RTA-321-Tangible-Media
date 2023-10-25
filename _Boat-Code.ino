int bluePin1 = 7; // Blue pin for the first RGB LED
int bluePin2 = 10; // Blue pin for the second RGB LED
int redPin = 11; // Red LED pin
int speakerPin = 12; // Speaker pin

int notes[] = {329.63-4, 349.23-8, 392.00-8, 349.23-8, 329.63-8, 293.66-8, 329.63-4,
349.23-8, 392.00-8, 349.23-8, 329.63-8, 293.66-8, 261.63-2,
293.66-8, 329.63-8, 349.23-8, 329.63-8, 293.66-8, 261.63-2,
329.63-4, 349.23-8, 392.00-8, 349.23-8, 329.63-8, 293.66-8, 329.63-2
}; // Notes for the melody
int tempo = 200; // Adjust the tempo as needed

void setup() {
  pinMode(speakerPin, OUTPUT);
  pinMode(bluePin1, OUTPUT);
  pinMode(bluePin2, OUTPUT);
  pinMode(redPin, OUTPUT);
}

void loop() {
  digitalWrite(redPin, HIGH);
  // lost asea
  for (int i = 0; i < 2; i++) {
    // Initial rising notes
    for (int j = 0; j < 8; j++) {
      tone(speakerPin, notes[j]); // Play the current note
      analogWrite(bluePin1, random(255)); // Control the brightness of the first LED
      analogWrite(bluePin2, random(255)); // Control the brightness of the second LED
      delay(tempo); // Control the tempo
    }
    delay(tempo); // Add a short pause between phrases

    // Descending notes
    for (int j = 7; j >= 0; j--) {
      tone(speakerPin, notes[j]); // Play the current note
      analogWrite(bluePin1, random(255)); // Control the brightness of the first LED
      analogWrite(bluePin2, random(255)); // Control the brightness of the second LED
      delay(tempo); // Control the tempo
    }
    delay(tempo); // Add a short pause between phrases
  }
}
