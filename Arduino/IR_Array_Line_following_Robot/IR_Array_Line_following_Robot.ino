const int ir0 = 2,
  ir1 = 3,
  ir2 = 4,
  ir3 = 5,
  ir4 = 6; //ir signals white=1 and black=0

int val0 = 0; //variables void
int val1 = 0;
int val2 = 0;
int val3 = 0;
int val4 = 0;

void setup()

{
  pinMode(ir0, INPUT);

  pinMode(ir1, INPUT);

  pinMode(ir2, INPUT);

  pinMode(ir3, INPUT);

  pinMode(ir4, INPUT);

  Serial.begin(9600);
}

void loop()

{ // put your main code here, to run repeatedly:

  val0 = !digitalRead(ir0);

  val1 = !digitalRead(ir1);

  val2 = !digitalRead(ir2);

  val3 = !digitalRead(ir3);

  val4 = !digitalRead(ir4);


  if (val0 && val1 && !val2 && val3 && val4 || val0 && !val1 && !val2 && val3 && val4 || val0 && val1 && !val2 && !val3 && val4) //forward

  {
    Serial.println("forward");
  } else if (val0 && val1 && val2 && !val3 && !val4 || val0 && val1 && val2 && val3 && !val4) //turn right

  {
    Serial.println("right");
  } else if (!val0 && !val1 && val2 && val3 && val4 || !val0 && val1 && val2 && val3 && val4) //turn left

  {
    Serial.println("left");
    
  } else if (!val0 && !val1 && !val2 && !val3 && !val4) //stop
  {
    Serial.println("stop");
  }
  delay(100);
}