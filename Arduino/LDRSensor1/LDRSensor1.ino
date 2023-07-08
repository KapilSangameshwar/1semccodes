const int ledPin = 12;

const int ldrPin = A0;
int count=0;
int flag=0;
void setup() {

Serial.begin(9600);

pinMode(ledPin, OUTPUT);

pinMode(ldrPin, INPUT);

}


void loop() {

int ldr = analogRead(ldrPin);

if (ldr >= 200) {
digitalWrite(ledPin, LOW);

//Serial.print("Its daytime");


} else {


digitalWrite(ledPin, HIGH);

//Serial.print("Its Night Time");
count++;
Serial.print("Number of Objects Passing through:");
Serial.println(count);
delay(1000);

}

//Serial.println(ldr);

}


