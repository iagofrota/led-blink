#define LED_VERMELHO 2

void setup() {
  iniciarPortas();
}

void loop() {
  piscarLed(LED_VERMELHO);
}

void iniciarPortas() {
  pinMode(LED_VERMELHO, OUTPUT);
}

void piscarLed(int porta) {
 digitalWrite(porta, HIGH);
 delay(1000);
 digitalWrite(porta, LOW);   
 delay(500);
}
