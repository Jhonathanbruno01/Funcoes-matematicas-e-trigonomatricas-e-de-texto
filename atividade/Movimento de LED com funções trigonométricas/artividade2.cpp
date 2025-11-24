int led = 9;      // pino PWM
float angulo = 0; // ângulo usado no cálculo do seno

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {

  // O seno varia de -1 a +1
  // Multiplicar por 127.5 gera um alcance de 0 a 255
  float valor = sin(angulo) * 127.5 + 127.5;

  analogWrite(led, (int)valor);  // envia brilho PWM ao LED

  angulo += 0.05; // valor menor torna a respiração mais suave

  // reinicia o ciclo depois de 2π
  if (angulo > TWO_PI) {
    angulo = 0;
  }

  delay(20);  // controla a velocidade; menor = movimento mais rápido
}
