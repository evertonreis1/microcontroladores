#include <LiquidCrystal.h>
float v, t;
int sensorValue = 0;
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);
  pinMode(A1, INPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(7, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  sensorValue = analogRead(A1);
  v = (5.0*sensorValue)/1023;
  t = (v-0.5)/0.01;
  Serial.print(v,2);
  Serial.println(" V");
  Serial.print(t,2);
  Serial.println(" c");
  delay(20);
  
   if (t<25){
     digitalWrite(8, LOW);
     digitalWrite(9, HIGH);
     digitalWrite(7, HIGH);
     lcd.setCursor(0, 0);
     lcd.print("Lampada acesa");
     lcd.setCursor(0, 1);
     lcd.print("Temperatura<25");
   }
  
  
if (t>=25 && t<=50){
     digitalWrite(8, LOW);
     digitalWrite(9, HIGH);
     digitalWrite(7, HIGH);
     lcd.setCursor(0, 0);
     lcd.print("Temperatura   ");
     lcd.setCursor(0, 1);
     lcd.print("Estavel!    ");
   }  

   if (t>50){
     digitalWrite(8, HIGH);
     digitalWrite(9, LOW);
     digitalWrite(7, LOW);
     lcd.setCursor(0, 0);
     lcd.print("ATENCAO!     ");
     lcd.setCursor(0, 1);
     lcd.print("TEMPERATURA>50");
  }}