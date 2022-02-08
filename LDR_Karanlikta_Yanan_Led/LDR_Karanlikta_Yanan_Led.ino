//Karanlıkta Yanan Led
void setup() {
pinMode(7,OUTPUT);
}

void loop() {
  int LDR = analogRead(A0); //A0'a LDR bağlı A0 LDR olarak tanımlandı

  delay(50);
  if (LDR > 600){     //600 olunca led yancak
    digitalWrite(7,1);
    }
  if (LDR < 300){    //300 olunca söncek
    digitalWrite(7,0);
    }
}
//byFat1h
