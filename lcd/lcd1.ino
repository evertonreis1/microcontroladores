#include <LiquidCrystal.h>
LiquidCrystal lcd(A0, A1, A2, A3, A4, A5);
int L = 1;
const String senha = "C0C0";
String senhaDigitada = "" ;
void setup() {
  lcd.begin(16, 2);


  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
   
 
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, INPUT);
  pinMode(11, INPUT);
   
  Serial.begin(9600);
  Serial.println("Aguardando acionamento das teclas...");
  Serial.println();
  lcd.print("Senha:");
  lcd.setCursor (0,1);
  lcd.print(" # p/ confirmar");
}

void loop() {

  for (int ti = 3; ti<7; ti++)
    {
    
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    digitalWrite(ti, HIGH);
   
    if (digitalRead(8) == HIGH)
    {
      numero(ti-2, 1);
      while(digitalRead(8) == HIGH){}
    }
 
     
    if (digitalRead(9) == HIGH)
    {
      
      numero(ti-2, 2);
      while(digitalRead(9) == HIGH){};
    }
     
   
    if (digitalRead(10) == HIGH)
    {
      
      numero(ti-2, 3);
      while(digitalRead(10) == HIGH){}
    }
      
  
    if (digitalRead(11) == HIGH)
    {
      
      numero(ti-2, 4);
      while(digitalRead(11) == HIGH){} 
    }
  
  }
   delay(10);
}

void numero(int x, int y)
{
  if(x==1 && y==1){
  Serial.print("1");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("1");
  senhaDigitada+= "1";
  L++;
  }
  if(x==1 && y==2){
  Serial.print("2");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("2");
  senhaDigitada+= "2";
  L++;
  }
  if(x==1 && y==3){
  Serial.print("3");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("3");
  senhaDigitada+= "3";
  L++;
  }
  if(x==1 && y==4){
  Serial.print("A");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("A");
  senhaDigitada+= "A";
  L++;
  }
  if(x==2 && y==1){
  Serial.print("4");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("4");
  senhaDigitada+= "4";
  L++;
  }
  if(x==2 && y==2){
  Serial.print("5");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("5");
  senhaDigitada+= "5";
  L++;
  }
  if(x==2 && y==3){
  Serial.print("6");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("6");
  senhaDigitada+= "6";
  L++;
  }
  if(x==2 && y==4){
  Serial.print("B");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("B");
  senhaDigitada+= "B";
  L++;
  }
  if(x==3 && y==1){
  Serial.print("7");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("7");
  senhaDigitada+= "7";
  L++;
  }
  if(x==3 && y==2){
  Serial.print("8");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("8");
  senhaDigitada+= "8";
  L++;
  }
  if(x==3 && y==3){
  Serial.print("9");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("9");
  senhaDigitada+= "9";
  L++;
  }
  if(x==3 && y==4){
  Serial.print("C");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("C");
  senhaDigitada+= "C";
  L++;
  }
  if(x==4 && y==1){
  Serial.print("*");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("*");
  senhaDigitada+= "*";
  L++;
  }
  if(x==4 && y==2){
  Serial.print("0");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("0");
  senhaDigitada+= "0";
  L++;
  }
    if(x==4 && y==3){
    Serial.print("#");
    lcd.clear();
      if(senha == senhaDigitada){
      lcd.setCursor(0, 0);
      lcd.print("SENHA CORRETA, MEU PEIXE");
      delay(1000);
      lcd.clear ();
      lcd.setCursor(0, 0);
      lcd.print("ACESSO PERMITIDO, MEU PEIXE");
      delay(1000);
      }
      else {
      lcd.setCursor(0, 0);
      lcd.print("SENHA ERRRADAAAAAAAAA"); 
      delay(1000);
      lcd.clear ();
      lcd.setCursor(0, 0);
      lcd.print("ACESSO NEGADO, HMM");
      delay(1000);
      }
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Senha:");
    lcd.setCursor (0,1);
    lcd.print(" # p/ confirmar");
    L=1;
    senhaDigitada = "";
  }
  if(x==4 && y==4){
  Serial.print("D");
  lcd.setCursor(0, 0);
  lcd.print("Senha:");
  lcd.setCursor(L+6,0);
  lcd.print("D");
  senhaDigitada+= "D";
  L++;
  }

}
 