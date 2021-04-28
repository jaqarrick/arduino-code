#include <Servo.h>


int servoPin = 9;
int pos = 0;
Servo myServo;

void setup(){

  Serial.begin(9600);
  myServo.attach(servoPin);
  
}
void loop() {

  for(pos = 0; pos <= 40; pos +=1){
    myServo.write(pos);
    delay(10);
  }

  for(pos=40; pos >= 0; pos -= 1){
    myServo.write(pos);
    delay(10);
  }
  
                          
}

