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
int delaytime = 30;


void setup() {
joint0.attach(8);
joint1.attach(9);
joint2.attach(10);
grip.attach(11);
pinMode(ledpin,OUTPUT);
}
void loop() {
  digitalWrite(ledpin,HIGH);
  
for(pos0;pos0 <= 90;pos0++){
  joint0.write(pos0);
  delay(delaytime);
}
for(pos1;pos1 <= 180;pos1++){
  joint1.write(pos1);
  delay(delaytime);
}
for(pos2;pos2 <= 180;pos2++){
  joint2.write(pos2);
  delay(delaytime);
}
delay(2000);
for(pos2;pos2 >= 0;pos2--){
  joint2.write(pos2);
  delay(delaytime);
}
for(pos2;pos2 <= 90;pos2++){
  joint2.write(pos2);
  delay(30);
}
for(posg;posg <= 60;posg++){
  grip.write(posg);
  delay(delaytime);
}
for(posg;posg >= 0;posg--){
  grip.write(posg);
  delay(delaytime);
}
  digitalWrite(ledpin,HIGH);
delay(1000);
  digitalWrite(ledpin,LOW);
delay(1000);
  digitalWrite(ledpin,HIGH);
for(pos1;pos1 >= 0;pos1--){
  joint1.write(pos1);
  delay(delaytime);
}
for(pos0;pos0 >= 40;pos0--){
  joint0.write(pos0);
  delay(delaytime);
}
delay(3000);
}
