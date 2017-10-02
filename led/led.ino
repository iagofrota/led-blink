#define LED_VERMELHO 2
#define LED_VERDE 3
#define LED_AMARELO 4

#define UM_SEGUNDO 1000
#define MEIO_SEGUNDO 500

#define TAMANHO_SEQUENCIA 4

int sequenciaLuzes[TAMANHO_SEQUENCIA];

void setup() {
  Serial.begin(9600);
  iniciarPortas();
  iniciarJogo();
}

void loop() {
  int numRand = gerarNumRand();
  Serial.println(numRand);
    piscarLed(numRand);
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

void iniciarJogo() {
  sequenciaLuzes[0] = LED_VERMELHO;
  sequenciaLuzes[1] = LED_AMARELO;
  sequenciaLuzes[2] = LED_VERDE;
}

int gerarNumRand() {
  return (int) random(2, 5);
}

