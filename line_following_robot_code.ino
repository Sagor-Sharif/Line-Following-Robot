#include <SoftwareSerial.h>
// 5 IR SENSOR
int SENSOR1 = 2;
int SENSOR2 = 3;
int SENSOR4 = 4;
int SENSOR5 = 5;
int SENSOR6 = 6;

//RIGHT MOTOR
const int rmf = 12;
const int rmb = 13;

//LEFT MOTOR
const int lmf = 10;
const int lmb = 11;

void setup() 
{
pinMode(2,INPUT);
pinMode(3,INPUT);
pinMode(4,INPUT);
pinMode(5,INPUT);
pinMode(6,INPUT);
pinMode(lmf,OUTPUT);
pinMode(lmb,OUTPUT);
pinMode(rmf,OUTPUT);
pinMode(rmb,OUTPUT);
Serial.begin(9600);
}
void loop(){
SENSOR1=digitalRead(2);
SENSOR2=digitalRead(3);
SENSOR4=digitalRead(4);
SENSOR5=digitalRead(5);
SENSOR6=digitalRead(6);

if(SENSOR4==0)
{
  digitalWrite(rmf,HIGH);
  digitalWrite(rmb,LOW);
  digitalWrite(lmf,HIGH);
  digitalWrite(lmb,LOW);
  }
else if(SENSOR2==0&&SENSOR4==0&&SENSOR5==0)
{
  digitalWrite(rmf,HIGH);
  digitalWrite(rmb,LOW);
  digitalWrite(lmf,HIGH);
  digitalWrite(lmb,LOW);
  }
 if(SENSOR1==0||SENSOR2==0||SENSOR4==0){
    digitalWrite(rmf,HIGH);
    digitalWrite(rmb,LOW);
    digitalWrite(lmf,LOW);
    digitalWrite(lmb,LOW);
}
if(SENSOR4==0||SENSOR5==0||SENSOR6==0){
    digitalWrite(rmf,LOW);
    digitalWrite(rmb,LOW);
    digitalWrite(lmf,HIGH);
    digitalWrite(lmb,LOW);
}