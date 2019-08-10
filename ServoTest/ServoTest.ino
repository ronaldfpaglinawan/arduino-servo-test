/*
  Created by Ronald Fornis Paglinawan on 27/07/19.
  Copyright © 2019 Paglinawan Technologies. All rights reserved.
*/

#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 90;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object

  // initiate Serial communication
  Serial.begin(9600);
}

void loop() {

  // set the servo to initial position (90 degree)
  myservo.write(pos);
  Serial.println("Setting the servo position to 90 dergrees");
  delay(3000);

  pos = 180;
  myservo.write(pos);
  Serial.println("Setting the servo position to 180 dergrees");
  delay(6000);

  pos = 90;
  myservo.write(pos);
}
