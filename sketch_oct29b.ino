#include <Servo.h>
Servo armservo;
Servo auxservo;
unsigned long start;
void setup() {
  // put your setup code here, to run once:
  armservo.attach(5);
  auxservo.attach(6);
  //motor1 PWM
  pinMode(9,OUTPUT);
  //motor2 PWM
  pinMode(10,OUTPUT);
  //Batarangs
  pinMode(23,OUTPUT);
  pinMode(24,OUTPUT);
  pinMode(25,OUTPUT);
  pinMode(26,OUTPUT);
  pinMode(27,OUTPUT);
  //Superman's eyes
  pinMode(28,OUTPUT);
  pinMode(29,OUTPUT);
  //motor1 DIR
  pinMode(32,OUTPUT);
  //motor2 DIR
  pinMode(33,OUTPUT);
  //solenoid
  pinMode(44,OUTPUT);
}
//times 19 UP 37 60 DOWN 62 77 UP 172 ROPE SPIN 174 ROPE STOP 182 ARM SWING 184 HIT 190 DROP 280 UP 287 DOWN 358 SUPERMAN LIGHT ON 
void loop() {
  // put your main code here, to run repeatedly:
  start = millis();
  
  armservo.writeMicroseconds(1500);
  auxservo.writeMicroseconds(1500);
  digitalWrite(32,HIGH);
  analogWrite(9,40);
  while(millis()-start<19000)
  {
  }
  digitalWrite(44,HIGH);
  while(millis()-start<60000)
  {
  }
  digitalWrite(44,LOW);
  while(millis()-start<77000)
  {
  }
  digitalWrite(44,HIGH);
  while(millis()-start<172000)
  {
  }
   while(millis()-start<174000){
  digitalWrite(33,HIGH);
  analogWrite(10,254);
  }
  digitalWrite(33,LOW);
  analogWrite(10,0);
  while(millis()-start<182000)
  {
  }
  armservo.writeMicroseconds(2400);
  while(millis()-start<182500)
  {
  }
  while(millis()-start<182800)
  {
    digitalWrite(23,HIGH);
  }
  digitalWrite(23,LOW);
  while(millis()-start<183100)
  {
    digitalWrite(24,HIGH);
  }
  digitalWrite(24,LOW);
   while(millis()-start<183400)
  {
    digitalWrite(25,HIGH);
  }
  digitalWrite(25,LOW);
   while(millis()-start<183700)
  {
    digitalWrite(26,HIGH);
  }
  digitalWrite(26,LOW);
   while(millis()-start<186000)
  {
    digitalWrite(27,HIGH);
  }
  digitalWrite(27,LOW);
  while(millis()-start<190000)
  {  
  }
  digitalWrite(44,LOW);
  while(millis()-start<280000)
  {
  }
  digitalWrite(44,HIGH);
  while(millis()-start<287000)
  {
  }
  digitalWrite(44,LOW);
  while((millis()-start)<358000)
  {
  }
  digitalWrite(28,HIGH);
  digitalWrite(29,HIGH);
  while((millis()-start)<411286)
  {
  }
}
