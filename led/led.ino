#define LED_VERMELHO 2
#define LED_VERDE 3
#define LED_AMARELO 4

#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500

void setup() {
  Serial.begin(9600);
  iniciarPortas();
}

void loop() {
  piscarLed(LED_VERMELHO);
  piscarLed(LED_VERDE);
  piscarLed(LED_AMARELO);
}

void iniciarPortas() {
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
}

void piscarLed(int porta) {
 digitalWrite(porta, HIGH);
 delay(UM_SEGUNDO);
 digitalWrite(porta, LOW);   
 delay(MEIO_SEGUNDO);
}
