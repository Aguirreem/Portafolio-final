#include <Servo.h>

int valor1, valor2, valor3, valor4;
int pos1, pos2, pos3, pos4, pos5, pos6;  

Servo myservo1, myservo2, myservo3, myservo4, myservo5, myservo6;  

void setup() {
  myservo1.attach(13);
  myservo2.attach(12);  
  myservo3.attach(11);
  myservo4.attach(10);
  myservo5.attach(9);
  myservo6.attach(8);  
}

void loop() {
  valor1 = analogRead(A0);
  valor2 = analogRead(A1); 
  valor3 = analogRead(A2);
  valor4 = analogRead(A3);

  pos1 = map(valor1, 0, 1023, 0, 180);
  pos2 = map(valor2, 0, 1023, 0, 180);
  pos3 = map(valor3, 0, 1023, 0, 180);
  pos4 = map(valor4, 0, 1023, 0, 180);
  pos5 = 180 - pos4; 
  pos6 = 180 - pos2;  

  myservo1.write(pos1);
  myservo2.write(pos2);  
  myservo3.write(pos3);
  myservo4.write(pos4);
  myservo5.write(pos5);
  myservo6.write(pos6); 

  delay(10);  
}