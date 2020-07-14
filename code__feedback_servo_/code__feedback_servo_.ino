#include <Servo.h>
Servo motor_A;
Servo motor_B;

int val ; 
int manualchange= A0;


void setup() {

  motor_A.attach(11);
  motor_B.attach(3);
  pinMode(manualchange, INPUT);
}

void loop() { 
 
             
  val = map(analogRead(manualchange), 0, 1023, 0, 180);     
  motor_A.write(val);      
  motor_B.write(val);   
                
  delay(15); 

}
