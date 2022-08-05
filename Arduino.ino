#include <Servo.h>

Servo myservo;
int postion = 0;

void setup()

{
  Serial.begin(115200);
  myservo.attach(9);
}

void loop() {

  if (Serial.available() > 0){
    String commend = Serial.readString();
    if (commend == "Left" || commend == "left"||commend == "يسار"){
      postion=180;
      delay(100);
      myservo.write(pos);
      
    } if (commend == "Right" || commend == "right" || commend == "يمين"){
      postion=0;
      delay(100); 
      myservo.write(postion);
    }
  }}
