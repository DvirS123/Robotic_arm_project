#include <Servo.h>
Servo joint0;
int pos0 = 90;
Servo joint1;
int pos1 = 0;
Servo joint2;
int pos2 = 90;
Servo grip;
int posg = 0;
int ledpin = 13;
int delaytime = 10;


void setup() {
joint0.attach(8);
joint1.attach(9);
joint2.attach(10);
 grip.attach(11);
pinMode(ledpin,OUTPUT);

}

void loop() {
joint0.write(pos0);
joint1.write(pos1);
joint2.write(pos2);
grip.write(posg);
delay(3000);
joint0.write(140);
joint1.write(110);
joint2.write(pos2);
grip.write(60);
delay(3000);
