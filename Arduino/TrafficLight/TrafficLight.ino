void setup() {

 
  //pinMode(1,OUTPUT);
  pinMode(2,OUTPUT); //GREEN
  pinMode(3,OUTPUT); //YELLOW
  pinMode(4,OUTPUT); //RED
  pinMode(5,OUTPUT); 
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);  //RED
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT); //RED
}

void loop() {
digitalWrite(4,LOW);
digitalWrite(3,LOW);
digitalWrite(2,HIGH);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(2000);
digitalWrite(3,HIGH);
digitalWrite(6,LOW);
digitalWrite(9,LOW);
digitalWrite(4,LOW);
digitalWrite(7,HIGH);et5
digitalWrite(10,HIGH);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
delay(2000);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(7,LOW);
digitalWrite(6,LOW);
digitalWrite(5,HIGH);
digitalWrite(10,HIGH);
digitalWrite(9,LOW);
digitalWrite(8,LOW);
delay(2000);
digitalWrite(3,LOW);
digitalWrite(6,HIGH);
digitalWrite(9,LOW);
digitalWrite(4,HIGH);
digitalWrite(7,LOW);
digitalWrite(10,HIGH);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
delay(2000);
digitalWrite(4,HIGH);
digitalWrite(3,LOW);
digitalWrite(2,LOW);
digitalWrite(7,HIGH);
digitalWrite(6,LOW);
digitalWrite(5,LOW);
digitalWrite(10,LOW);
digitalWrite(9,LOW);
digitalWrite(8,HIGH);
delay(2000);
digitalWrite(3,LOW);
digitalWrite(6,LOW);
digitalWrite(9,HIGH);
digitalWrite(4,HIGH);
digitalWrite(7,HIGH);
digitalWrite(10,LOW);
digitalWrite(2,LOW);
digitalWrite(5,LOW);
digitalWrite(8,LOW);
delay(2000);


}