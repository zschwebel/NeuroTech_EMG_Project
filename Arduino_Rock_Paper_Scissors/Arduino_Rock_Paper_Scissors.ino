/* 
Rock Paper Scissors code for moving 3d printed servo actuated hand
Witten by Zeno 11/1/23
*/

#include <Servo.h>

// create servo object to control a servo
Servo myservo;
Servo myserv1;
Servo myserv2;
Servo myserv3;
Servo myserv4;
// twelve servo objects can be created on most boards


void setup() {
  myservo.attach(9); //pinkie
  myserv1.attach(10); //ring
  myserv2.attach(11); //middle
  myserv3.attach(12); //index
  myserv4.attach(13); //thumb
}

void loop() {
  rock();
  delay(1500); 
  rest();
  delay(1500);
  paper();
  delay(1500); 
  rest();
  delay(1500);
  scissors();
  delay(1500); 
  rest();
  delay(3000); 
}

void rock(){
  Serial.println("Rock");
  myservo.write(150);
  myserv1.write(150);
  myserv2.write(150);
  myserv3.write(150);
  myserv4.write(150);
}

void paper(){
  Serial.println("Paper");
  myservo.write(0);
  myserv1.write(0);
  myserv2.write(0);
  myserv3.write(0);
  myserv4.write(0);
}

void scissors(){
  Serial.println("Scissors");
  myservo.write(150);
  myserv1.write(150);
  myserv2.write(0);
  myserv3.write(0);
  myserv4.write(150);
}

void rest(){
  Serial.println("Rest");
  myservo.write(80);
  myserv1.write(80);
  myserv2.write(80);
  myserv3.write(80);
  myserv4.write(80);
}

