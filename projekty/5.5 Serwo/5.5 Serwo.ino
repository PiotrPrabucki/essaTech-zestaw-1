#include <Servo.h>


Servo myservo;  // utworzenie obiektu serwa
int potpin = 4;  // pin używany do odczytywania wartości
int val;    // wartość przesyłana do serwa


void setup() {
  myservo.attach(11);  // podłączenie serwa do portu 11
}


void loop() {
  val = analogRead(potpin);            //odczytanie wartości z potencjometru 0-1023
  val = map(val, 0, 1023, 0, 180);     // skalowanie wartości z zakresu 0 - 1023 do wartości 0 - 180
  myservo.write(val);                  // ustawienie serwa na zadaną wartość
  delay(15);                           // odczekanie aż serwo usatwi się na zadaną wartość
}
