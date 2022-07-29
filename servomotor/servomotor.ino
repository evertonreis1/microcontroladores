#include <LiquidCrystal.h>
#include <Servo.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int ang=0;
Servo servo;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Posicao:");
  lcd.setCursor(0,1);
  lcd.print(ang);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  servo.attach(6,500,2500);
  servo.write(ang);
}

void loop() {
  
  if(digitalRead(9)== HIGH){
    servo.write(ang);
    delay(25);
    ang--;
   if(ang<0) ang=0;
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Posicao:");
    lcd.setCursor(0,1);
    lcd.print(ang);
   
  }
  if(digitalRead(10)== HIGH){
    servo.write(ang);
    delay(25);
    ang++;
   if(ang>180) ang=180;
    lcd.clear();
    lcd.setCursor(0,0); 
    lcd.print("Posicao:");
    lcd.setCursor(0,1);
    lcd.print(ang);
   
  }
}
 