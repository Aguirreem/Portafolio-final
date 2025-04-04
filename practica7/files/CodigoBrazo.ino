#include <Servo.h>
#include <SoftwareSerial.h>
 
int v1,v2,v3,v4,v5;
int p1,p2,p3,p4,p5;
int r = 0;
 
//Declra
Servo m1;
Servo m2;
Servo m3;
Servo m4;
 
SoftwareSerial mySerial(2,3);
void setup()
{
  mySerial.begin(9600);
  m1.attach(11);
  m2.attach(10);
  m3.attach(6);
  m4.attach(5);
  Serial.begin(9600);
 
}
 
void loop()
{
  if(mySerial.available()>0)
  {
    p1=mySerial.read();//DATO1 M1
    p2=mySerial.read();//DATO1 M2
    p3=mySerial.read();//DATO1 M3
    p4=mySerial.read();//DATO1 M4
  }
 
  m1.write(p1);
  Serial.println(p1);
  delay(r);
 
  m2.write(p2);
  Serial.println(p2);
  delay(r);
 
  m3.write(p3);
  Serial.println(p3);
  delay(r);
 
  m4.write(p4);
  Serial.println(p4);
  delay(r);
   
}