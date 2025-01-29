// SOLAR ALARM

const int photoR = A0;     
const int buzzer = 8;  

void setup() {
  pinMode(photoR, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  int prRead = analogRead(photoR);
  if (prRead > 500) { 
    tone(buzzer, 1000); // Turn on the buzzer
  } 
  else {
    noTone(buzzer);      // Turn off the buzzer
  }
}
