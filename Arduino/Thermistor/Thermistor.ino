int THERMISTOR_PIN = A0;
int min = 0;
int max = 0;
int notSet = 1;

void setup () {
  Serial.begin(9600);
  pinMode(THERMISTOR_PIN, INPUT);
}

void loop () {
  int val = analogRead(THERMISTOR_PIN);
  if (notSet) {
    max = val;
    min = val;
    notSet = 0;
  }
  if (val > max) {
    max = val;
  }
  if (val < min) {
    min = val;
  }
  
  int c = map(val, min, max, 0,50);
  Serial.println("temp ");
  Serial.println(c);
}