#define TRIG1 13
#define ECHO1 12
#define TRIG2 11
#define ECHO2 10
#define TRIG3 9
#define ECHO3 8
#define TRIG4 7
#define ECHO4 6
#define TRIG5 5
#define ECHO5 4
#define TRIG6 3
#define ECHO6 2
int duration1, duration2, duration3, duration4, duration5, duration6;
int distance1, distance2, distance3, distance4, distance5, distance6;
int flag1, flag2, flag3, flag4, flag5, flag6;
void setup()
{ pinMode(TRIG1,OUTPUT);
  pinMode(TRIG2,OUTPUT);
  pinMode(TRIG3,OUTPUT);
  pinMode(TRIG4,OUTPUT);
  pinMode(TRIG5,OUTPUT);
  pinMode(TRIG6,OUTPUT);
  pinMode(ECHO1,INPUT);
  pinMode(ECHO2,INPUT);
  pinMode(ECHO3,INPUT);
  pinMode(ECHO4,INPUT);
  pinMode(ECHO5,INPUT);
  pinMode(ECHO6,INPUT);
  
  Serial.begin(9600);
 
}

void loop()
{
  digitalWrite(TRIG1,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG1,HIGH);
  delayMicroseconds(10);
  duration1 = pulseIn(ECHO1,HIGH);
  distance1 = duration1*0.034/2;
  digitalWrite(TRIG2,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG2,HIGH);
  delayMicroseconds(10);
  duration2 = pulseIn(ECHO2,HIGH);
  distance2 = duration2*0.034/2;
  digitalWrite(TRIG3,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG3,HIGH);
  delayMicroseconds(10);
  duration3 = pulseIn(ECHO3,HIGH);
  distance3 = duration3*0.034/2;
  digitalWrite(TRIG4,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG4,HIGH);
  delayMicroseconds(10);
  duration4 = pulseIn(ECHO4,HIGH);
  distance4 = duration4*0.034/2;
  digitalWrite(TRIG5,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG5,HIGH);
  delayMicroseconds(10);
  duration5 = pulseIn(ECHO5,HIGH);
  distance5 = duration5*0.034/2;
  digitalWrite(TRIG6,LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG6,HIGH);
  delayMicroseconds(10);
  duration6 = pulseIn(ECHO6,HIGH);
  distance6 = duration6*0.034/2;

  if (distance1 < 20)
  {
    flag1 = 1;
  }
  if (distance2 < 20)
  {
    flag2 = 1;
  }
  if (distance3 < 20)
  {
    flag3 = 1;
  }

  if(flag1 == 1 && flag2 == 1 && flag3 == 1)
  {
    Serial.print("Vehicle is incoming");
    flag1 = 0;
    flag2 = 0;
    flag3 = 0;
  }

    if (distance4 < 20)
  {
    flag4 = 1;
  }
  if (distance5 < 20)
  {
    flag5 = 1;
  }
  if (distance6 < 20)
  {
    flag6 = 1;
  }

  if(flag4 == 1 && flag5 == 1 && flag6 == 1)
  {
    Serial.print("Vehicle is incoming");
    flag4 = 0;
    flag5 = 0;
    flag6 = 0;
  }
}