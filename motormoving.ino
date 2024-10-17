#include <Serial.h>
int rxPin = 0;
int txPin = 1;



// MOTOR PINS

int ena1 = 5;
int enab = 10;
int forwardRight1 = 6;
int forwardRight2 = 7;
int forwardLeft1 = 8;
int fowardLeft2 = 9;
char val = "";

void setup() {
  // put your setup code here, to run once:
   pinMode(ena1, OUTPUT);
   pinMode(enab, OUTPUT); 
   pinMode(forwardLeft1, OUTPUT);
   pinMode(forwardLeft2, OUTPUT);
   pinMode(forwardRight1, OUTPUT);
   pinMode(forwardRight2, OUTPUT);

    Serial.begin(9600);
   
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() > 0){
    val = char(Serial.read());

 switch(val){
  case "W":
    forward();
   break;
  case "A":
    left();
   break;
  case "S":
    back();
    break;
  case "D":
    right():
    break;
  }

}
}



void forward(){
   digitalWrite(forwardLeft1, HIGH);
   digitalWrite(forwardLeft2, HIGH);
   digitalWrite(forwardRight1, HIGH);
   digitalWrite(forwardRight2, HIGH);
}

void left(){
   digitalWrite(forwardLeft1, HIGH);
   digitalWrite(forwardLeft2, HIGH);
}

void right(){
   digitalWrite(forwardRight1, HIGH);
   digitalWrite(forwardRight2, HIGH);
}

void back(){
  digitalWrite(forwardLeft1, HIGH);
   digitalWrite(forwardLeft2, LOW);
   digitalWrite(forwardRight1, HIGH);
   digitalWrite(forwardRight2, LOW);
}


