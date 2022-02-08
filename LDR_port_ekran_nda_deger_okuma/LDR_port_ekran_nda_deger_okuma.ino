//LDR Port Ekranında Değer Okuma
void setup() {
pinMode(7,OUTPUT);
Serial.begin(9600);

}

void loop() {
  int LDR = analogRead(A0); //A0 LDR Olarak Tanımlandı
  Serial.println(LDR);
  delay(50);
}

//byFat1h
