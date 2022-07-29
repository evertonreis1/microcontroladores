#include <LiquidCrystal.h>

float t ,d ,n;

LiquidCrystal lcd(13, 12, 5, 4, 3, 2);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);
  

  pinMode(6, INPUT);
  pinMode(7, OUTPUT);
}

void loop() {

  digitalWrite(7,HIGH);
  delayMicroseconds(10);
  digitalWrite(7,LOW);
 
  t = pulseIn(6, HIGH);
  d = t/58;
  n = 400-d;
  
  Serial.print ("distancia: ");
  Serial.println (d);
  lcd.print ("Distancia:" );
  lcd.setCursor (11,0);
  lcd.print (d);
  lcd.setCursor (0,1);
  lcd.print ("Nivel: ");
  lcd.setCursor (7,1);
  lcd.print (n);
  lcd.setCursor (0,0);
}