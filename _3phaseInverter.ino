//
// 3 phase variable frequency inverter
//
// Created by Dalton Herrewynen on Jan. 28, 2018
//

#define p1 11
#define p2 10
#define p3 9
#define n1 6
#define n2 5
#define n3 3
#define LED 13
#define s1 A5

void setup() {
  // put your setup code here, to run once:
  pinMode(p1,OUTPUT);
  pinMode(p2,OUTPUT);
  pinMode(p3,OUTPUT);
  pinMode(n1,OUTPUT);
  pinMode(n2,OUTPUT);
  pinMode(n3,OUTPUT);
  pinMode(LED,OUTPUT);
  digitalWrite(p1,LOW);
  digitalWrite(p2,LOW);
  digitalWrite(p3,LOW);
  digitalWrite(n1,LOW);
  digitalWrite(n2,LOW);
  digitalWrite(n3,LOW);
  digitalWrite(LED,HIGH);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int wait;
  bool p1=0,p2=0,p3=0,n1=0,n2=0,n3=0;
  
  //step 1 
  p1=1;
  p2=0;
  p3=0;
  n1=0;
  n2=0;
  n3=1;
  //step 2
  p1=0;
  p2=0;
  p3=1;
  n1=0;
  n2=1;
  n3=0;
  //step 3
  p1=0;
  p2=1;
  p3=0;
  n1=1;
  n2=0;
  n3=0;
}
