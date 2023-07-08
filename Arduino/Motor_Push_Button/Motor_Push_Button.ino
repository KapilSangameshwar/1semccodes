#include <Servo.h>
const int BUTTON_PIN = 7; 
const int SERVO_PIN  = 9; 

Servo servo; 

int angle = 0;          
int lastButtonState;    
int currentButtonState;

void setup() {
  Serial.begin(9600);                
  pinMode(BUTTON_PIN, INPUT_PULLUP); 
  servo.attach(SERVO_PIN);           

  servo.write(angle);
  currentButtonState = digitalRead(BUTTON_PIN);
}

void loop() {
  lastButtonState    = currentButtonState;      
  currentButtonState = digitalRead(BUTTON_PIN); 

  if(lastButtonState == HIGH && currentButtonState == LOW) {
    Serial.println("The button is pressed");

    
    if(angle == 0)
      angle = 90;
    else
    if(angle == 90)
      angle = 180;
    else
    if(angle==180)
      angle= 0;
    

    
    servo.write(angle);
  }
}