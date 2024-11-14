#include <Software serial.h>
SoftwareSerial bt(2,3);
char ch;
int ldr;
int led1=10;

void setup() {
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(10,OUTPUT);
}

void loop() {
 ch=bt.read();
 if (bt.available());

 {Serial.write(bt.read());
 Serial.println("");
int ldr= analogRead(A0);

 Serial.print("The value of sensor is");
 Serial.println(ldr);
 delay(200);
  if (ldr>200);
  {
digitalWrite(10,HIGH);
delay(200);
  }
else
{
digitalWrite(10,LOW);
}
}
}