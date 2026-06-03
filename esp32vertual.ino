#include <Servo.h>
int trigPin = 6;
int echoPin = 7;
Servo LL;
Servo LF;
Servo RL;
Servo RF;

void setup() {
LL.attach(2); 
LF.attach(3);  
RL.attach(4); 
RF.attach(5); 
pinMode(6,OUTPUT);//trig
pinMode(7,INPUT);//echo
}

void loop() {
LL.write(90); 
LF.write(90); 
RL.write(90); 
RF.write(90);                 
  delay(15);                           
}
