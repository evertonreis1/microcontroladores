

int disp [10] = {0xBF, 0x06, 0xDB,0xCF, 0xE6, 
                 0xED, 0xFD, 0x07, 0xFF, 0xE7};

void setup()
{
 DDRB = 0xFF;
 DDRD = 0xFF;
 
}
 
void loop()
{
    for (int ti = 7; ti<11; ti++)
    {
    //hm
    digitalWrite(7, LOW);
    digitalWrite(8, LOW);
    digitalWrite(9, LOW);
    digitalWrite(10, LOW);
    digitalWrite(ti, HIGH);
    //hm
    if (digitalRead(11) == HIGH)
    {
      numero(ti-6, 1);
      while(digitalRead(11) == HIGH){}
    }
 
    //análise 
    if (digitalRead(12) == HIGH)
    {
      numero(ti-6, 2);
      while(digitalRead(12) == HIGH){};
    }
     
    // hm
    if (digitalRead(13) == HIGH)
    {
      numero(ti-6, 3);
      while(digitalRead(13) == HIGH){}
    }
 if (digitalRead(13) == HIGH)
    {
      numero(ti-6, 4);
      while(digitalRead(13) == HIGH){} 
    }
   }
   delay(20);
}
 
void numero(int a, int b)
{
  if(a==1 && b==1){
  PORTD = disp[1];
  delay(10);
  }
  if(a==1 && b==2){
  PORTD = disp[2];
  delay(10);
  }
  if(a==1 && b==3){
  PORTD = disp[3];
  delay(10);
  }
  if(a==2 && b==1){
  PORTD = disp[4];
  delay(10);
  }
  if(a==2 && b==2){
  PORTD = disp[5];
  delay(10);
  }
  if(a==2 && b==3){
  PORTD = disp[6];
  delay(10);
  }
  if(a==3 && b==1){
  PORTD = disp[7];
  delay(10);
  }
  if(a==3 && b==2){
  PORTD = disp[8];
  delay(10);
  }
 
  if(a==3 && b==3){
  PORTD = disp[9];
  delay(10);
  }
  if(a==4 && b==2){
  PORTD = disp[0];
  delay(10);
  }
  
}