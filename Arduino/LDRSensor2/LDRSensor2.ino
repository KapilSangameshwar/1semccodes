const int ledPin = 12;

const int ldrPin = A0;

int count=0;


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


Serial.println(ldr);
delay(1000);

} else {


digitalWrite(ledPin, HIGH);

//Serial.print("Its Night Time");
count++;
Serial.println(ldr);
delay(1000);
}

//Serial.println(ldr);

}


