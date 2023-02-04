 
double czestotliwosc = 10.0; //częstotliwośc w HZ. 1HZ = 1 cykl w ciągu sekundy


void setup() {
 pinMode(7, OUTPUT); //ustawienie pinu 7 jako wyjście dla diody
}


void loop() {
  digitalWrite(7, HIGH); //zapalenie diody
  delay(((1/czestotliwosc)/2*1000)); // Zamiana HZ na milisekundy i odczekanie połowy cyklu
  digitalWrite(7, LOW); //zapalenie diody
  delay(((1/czestotliwosc)/2*1000)); // Zamiana HZ na milisekundy i odczekanie połowy cyklu
}
