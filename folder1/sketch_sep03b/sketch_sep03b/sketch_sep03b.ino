void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LED_BUILTIN, OUTPUT); 
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("LED ON");
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000);

  Serial.println("LED OFF");
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}
