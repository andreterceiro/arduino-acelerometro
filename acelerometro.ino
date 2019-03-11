void setup() {
  Serial.begin(9600);
  pinMode(A5, INPUT);
}

void loop() {
   double teta = analogRead(A5);
   Serial.println(teta);
   delay(300);
}
