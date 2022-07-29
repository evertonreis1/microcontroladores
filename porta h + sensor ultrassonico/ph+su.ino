//L293D
//Motor A
const int Pin1  = 5;  
const int Pin2  = 6;  
//Motor B
const int Pin3  = 10; 
const int Pin4  = 9; 

int inches = 0;

int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}


void setup(){
    pinMode(Pin1, OUTPUT);
    pinMode(Pin2, OUTPUT);
    pinMode(Pin3, OUTPUT);
    pinMode(Pin4, OUTPUT);    
  Serial.begin(9600);

}

void loop(){
  
   // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  Serial.print(inches);
  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(200); 
  
  if (cm <= 50){
    
    digitalWrite(Pin1, LOW); 
    digitalWrite(Pin2, LOW);
    digitalWrite(Pin3, LOW);
    digitalWrite(Pin4, LOW);    
  }
  else {
  
    digitalWrite(Pin1, HIGH); 
    digitalWrite(Pin2, LOW);   
    digitalWrite(Pin3, HIGH);
    digitalWrite(Pin4, LOW);   
  } 
}

