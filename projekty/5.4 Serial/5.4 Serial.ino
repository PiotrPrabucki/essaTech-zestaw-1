
void setup() {
  Serial.begin(9600); //Ustawiamy częstotliwość komunikacjii
}

void loop() {
  int a = analogRead(A0); //Pobranie wartości potencjometru
  Serial.println(a); //wysłanie wartośći
}
