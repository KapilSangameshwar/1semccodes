#include <LiquidCrystal.h>

int ECHO_PIN = 10;
int TRIGGER_PIN = 9;
int contrast = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  pinMode(ECHO_PIN, INPUT);
  pinMode(TRIGGER_PIN, OUTPUT);
  lcd.begin(16, 2);
}

void loop() {

  digitalWrite(TRIGGER_PIN, LOW);
  delay(3);
  digitalWrite(TRIGGER_PIN, HIGH);
  delay(10);
  digitalWrite(TRIGGER_PIN, LOW);

  int duration = pulseIn(ECHO_PIN, HIGH);
  int distance = duration * 0.034 / 2;
  lcd.setCursor(0, 0);
  lcd.print(distance);
  delay(1000);
  lcd.clear();
}