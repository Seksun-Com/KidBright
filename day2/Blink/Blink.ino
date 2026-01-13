/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/

// the setup function runs once when you press reset or power the board
const int led1 = 17;
const int led2 = 2;
const int led3 = 15;
const int led4 = 12;
const int delayTime = 100;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
}

// the loop function runs over and over again forever
void loop() {
  digitalWrite(led1, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led1, HIGH);   // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
  digitalWrite(led2, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led2, HIGH);   // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
  digitalWrite(led3, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led3, HIGH);   // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
  digitalWrite(led4, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led4, HIGH);   // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
  digitalWrite(led3, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led3, HIGH);   // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
  digitalWrite(led2, LOW);  // turn the LED on (HIGH is the voltage level)
  delay(delayTime);               // wait for a second
  digitalWrite(led2, HIGH);   // turn the LED off by making the voltage LOW
  delay(delayTime);              // wait for a second
}
