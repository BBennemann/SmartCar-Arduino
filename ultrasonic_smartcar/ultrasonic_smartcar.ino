//Setup for Ultrasonic sensor

#include <SR04.h>

#define trig_pin 13
#define echo_pin 12

SR04 sr04 = SR04(echo_pin,trig_pin);

//Setup for Servo Motor

#include <Servo.h>

Servo myservo;

int pos = 0;
int leftDis = 0;
int rightDis = 0;
int forward = 0;

//Setup for Wheel Motors

#define enA 6
#define in1 7
#define in2 5
#define enB 3
#define in3 4
#define in4 2

void go() {
  analogWrite(enA, 140);
  analogWrite(enB, 140);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void left() {
  analogWrite(enA, 135);
  analogWrite(enB, 135);
  digitalWrite(in1, HIGH);
  digitalWrite(in2, LOW);
  digitalWrite(in3, LOW);
  digitalWrite(in4, HIGH);
}

void right() {
  analogWrite(enA, 135);
  analogWrite(enB, 135);
  digitalWrite(in1, LOW);
  digitalWrite(in2, HIGH);
  digitalWrite(in3, HIGH);
  digitalWrite(in4, LOW);
}

void stop() {
  digitalWrite(enA, LOW);
  digitalWrite(enB, LOW);
}

void setup() {
  Serial.begin(9600);
  myservo.attach(11);
  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
 
}

void loop() {
  
  myservo.write(80);
  delay(500);
  
  forward = sr04.Distance();
  Serial.println(forward);

  if (forward < 75) {
    stop();
    delay(1000);

    myservo.write(0);
    delay(1000);
    rightDis = sr04.Distance();
    Serial.println(leftDis);
    delay(1000);
  
    myservo.write(180);
    delay(1000);
    leftDis = sr04.Distance();
    Serial.println(rightDis);
    delay(1000);

    if(rightDis > leftDis) {
        right();
        delay(15);
      }
      else if(rightDis < leftDis) {
        left();
        delay(15);
      }
      myservo.write(80);
      delay(250);
  }
  
  else{
    go();
  }
  

}
