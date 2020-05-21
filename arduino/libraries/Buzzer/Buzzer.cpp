#include <Buzzer.h>

Buzzer::Buzzer(byte buzzerPin) {
    pinMode(buzzerPin, OUTPUT);
    _buzzerPin = buzzerPin;
}

void Buzzer::arrived(){
  tone(_buzzerPin, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1 sec
  noTone(_buzzerPin);     // Stop sound...
  delay(1000);        // ...for 1 sec
  tone(_buzzerPin, 1000); // Send 1KHz sound signal...
  delay(1000);        // ...for 1sec
  noTone(_buzzerPin);     // Stop sound...
  delay(1000);        // ...for 1 sec
  tone(_buzzerPin, 1000); // Send 1KHz sound signal...
  delay(2000);        // ...for 1sec
  noTone(_buzzerPin);     // Stop sound...
}

void Buzzer::rotate(){
  tone(_buzzerPin, 1000); // Send 1KHz sound signal...
  delay(500);        // ...for .5 sec
  noTone(_buzzerPin);     // Stop sound...
}

void Buzzer::error(){
  tone(_buzzerPin, 300); // Send 300Hz sound signal...
  delay(500);        // ...for .5 sec
  tone(_buzzerPin, 200); // Send 200Hz sound signal...
  delay(1000);        // ...for 1sec
  noTone(_buzzerPin);     // Stop sound...
}