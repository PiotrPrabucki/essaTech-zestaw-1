
int wartoscGraniczna = 200; //Ustawienie wartości granicznej uruchomienia diody LED z zakresu 0-1024

void setup() {
}

void loop() {
 int a = analogRead(A1);
 if(a<600){
   analogWrite(4, 1024);
}else{
   analogWrite(4, 0);
 }
}
