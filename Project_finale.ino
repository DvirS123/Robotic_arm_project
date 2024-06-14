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
for(pos0;pos0 <=130;pos0++){
  joint0.write(pos0);
  delay(delaytime);
}
delay(1000);
for(pos1;pos1 <=110;pos1++){
  joint1.write(pos1);
  delay(delaytime);
}
delay(1000);
grip.write(90);
delay(500);
grip.write(0);
delay(500);
grip.write(90);
delay(500);
grip.write(0);
delay(1000);
for(pos2;pos2 >=60;pos2--){
  joint2.write(pos2);
  delay(delaytime);
}
for(posg;posg <=60;posg++){
  grip.write(posg);
  delay(delaytime);
}
delay(1000);
for(pos0;pos0 <=130;pos0++){
  joint0.write(pos0);
  delay(delaytime);
}
delay(1000);
for(posg;posg >=0;posg--){
  grip.write(posg);
  delay(delaytime);
}
for(pos2;pos2 <=90;pos2++){
  joint2.write(pos2);
  delay(delaytime);
}
delay(1000);
for(pos1;pos1 >=0;pos1--){
  joint1.write(pos1);
  delay(delaytime);
}
delay(1000);
for(pos0;pos0 >=90;pos0--){
  joint0.write(pos0);
  delay(delaytime);
}
delay(5000);
for(pos0;pos0 <=130;pos0++){
  joint0.write(pos0);
  delay(delaytime);
}
delay(1000);
for(pos1;pos1 <=110;pos1++){
  joint1.write(pos1);
  delay(delaytime);
}
delay(1000);
for(pos2;pos2 <=135;pos2++){
  joint2.write(pos2);
  delay(delaytime);
}
delay(1000);
for(posg;posg <=60;posg++){
  grip.write(posg);
  delay(delaytime);
}
delay(1000);
for(posg;posg >=0;posg--){
  grip.write(posg);
  delay(delaytime);
}
for(pos2;pos2 >=90;pos2--){
  joint2.write(pos2);
  delay(delaytime);
}
delay(1000);
for(pos1;pos1 >=0;pos1--){
  joint1.write(pos1);
  delay(delaytime);
}
delay(1000);
for(pos0;pos0 >=90;pos0--){
  joint0.write(pos0);
  delay(delaytime);
}
digitalWrite(ledpin,HIGH);
delay(1000);
digitalWrite(ledpin,LOW);
delay(1000);
digitalWrite(ledpin,HIGH);
delay(1000);
digitalWrite(ledpin,LOW);
delay(1000);

}
