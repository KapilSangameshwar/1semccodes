#define trigger 12
#define echo 11
#define buzzer 8
#define LED 7
int duration;
int distance;

void setup()
{
  pinMode(trigger,OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer,OUTPUT);
  pinMode(LED,OUTPUT);
  Serial.begin(9600);

}

void loop() 
{
  digitalWrite(trigger,LOW);
  delayMicroseconds(2);
  digitalWrite(trigger,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger,LOW);
  duration = pulseIn(echo,HIGH);
  distance = duration*0.034/2;
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("  cm");
  if(distance<=20)
{
  digitalWrite(LED,HIGH);
  delay(100);
  digitalWrite(LED,LOW);
}
if(distance>50)
{
  digitalWrite(buzzer,HIGH);
  delay(500);
  digitalWrite(buzzer,LOW);
}
  
}
