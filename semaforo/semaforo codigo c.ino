// C++ code
//

#define LEDVERMELHO 10
#define LEDAMARELO 9
#define LEDVERDE 8
#define tempo1 250
#define tempo2 500
#define tempo3 1000


void setup()
{
  pinMode(LEDVERMELHO, OUTPUT);
  pinMode(LEDAMARELO, OUTPUT);  
  pinMode(LEDVERDE, OUTPUT); 
}

void loop()
{
  for(int x=0;x<10;x++){
  digitalWrite(LEDVERMELHO, HIGH);
  delay(tempo1);
  digitalWrite(LEDVERMELHO, LOW);
  delay(tempo1);
  }
  
  for(int x=0; x<5;x++){
  digitalWrite(LEDAMARELO, HIGH);
  delay(tempo2);
  digitalWrite(LEDAMARELO, LOW);
  delay(tempo2);
  }
  
  for(int x=0;x<4;x++){
  digitalWrite(LEDVERDE, HIGH);
  delay(tempo3);
  digitalWrite(LEDVERDE, LOW);
  delay(tempo3);
  }
 
  
}