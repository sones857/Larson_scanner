#include <Arduino.h>

// Larson scanner

int del = 120; // time delay

//###############################################################

void setup()

{

  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  
}

//################################################################

void loop()

{

  digitalWrite(4, HIGH);   // turn on LED on pin 4
  delay(del);              // wait
  digitalWrite(4, LOW);    // turn it off
  digitalWrite(5, HIGH);   // turn on LED on pin 5
  delay(del);              // wait
  digitalWrite(5, LOW);    // turn it off
  digitalWrite(6, HIGH);   // turn on LED on pin 6
  delay(del);              // wait
  digitalWrite(6, LOW);    // turn it off
  digitalWrite(7, HIGH);   // turn on LED on pin 7
  delay(del);              // wait
  digitalWrite(7, LOW);    // turn it off
  digitalWrite(8, HIGH);   // turn on LED on pin 8
  delay(del);              // wait
  digitalWrite(8, LOW);    // turn it off
  digitalWrite(9, HIGH);   // turn on LED on pin 9
  delay(del);              // wait
  digitalWrite(9, LOW);    // turn it off
  digitalWrite(8, HIGH);   // turn on LED on pin 8
  delay(del);              // wait
  digitalWrite(8, LOW);    // turn it off
  digitalWrite(7, HIGH);   // turn on LED on pin 7
  delay(del);              // wait
  digitalWrite(7, LOW);    // turn it off
  digitalWrite(6, HIGH);   // turn on LED on pin 6
  delay(del);              // wait
  digitalWrite(6, LOW);    // turn it off
  digitalWrite(5, HIGH);   // turn on LED on pin 5
  delay(del);              // wait
  digitalWrite(5, LOW);    // turn it off
  
}
