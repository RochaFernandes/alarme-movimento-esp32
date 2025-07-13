
#define PIR_PIN 13
#define BUZZER_PIN 12

const int ledPin = 15;


void setup() {
  pinMode(PIR_PIN, INPUT);
  pinMode(BUZZER_PIN, OUTPUT);
  pinMode(ledPin, OUTPUT);


}

void loop() {
  int movimento = digitalRead(PIR_PIN);

  if (movimento == HIGH){
    digitalWrite(BUZZER_PIN, HIGH);
    digitalWrite(ledPin, HIGH);
    delay(3000);
    digitalWrite(BUZZER_PIN, LOW);
    digitalWrite(ledPin, LOW);
  }


  delay(100);
}
