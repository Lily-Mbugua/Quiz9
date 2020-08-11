include <servo.h>
servo myservo;

int PotPin =0;
int Val;
void setup (){
  myservo.attach(a); 
  }

void loop(){

val =analogRead(PotPin);
val =map(val,011023, 0, 180);
myservo.write(val);
delay(15)
  }
