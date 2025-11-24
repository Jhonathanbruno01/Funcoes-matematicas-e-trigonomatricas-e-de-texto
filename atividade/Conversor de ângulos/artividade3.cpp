void setup() {
  Serial.begin(9600);
  Serial.println("Digite valores de X e Y separados por espaço (ex: 3 4):");
}

void loop() {
  if (Serial.available() > 0) {
    
    // Lê a linha inteira digitada
    String input = Serial.readStringUntil('\n');

    // Converte para dois valores (X e Y)
    float x = input.substring(0, input.indexOf(' ')).toFloat();
    float y = input.substring(input.indexOf(' ') + 1).toFloat();

    // Calcula o ângulo
    float anguloRad = atan2(y, x);
    float anguloGraus = anguloRad * 180.0 / PI;

    Serial.print("Angulo calculado: ");
    Serial.print(anguloGraus);
    Serial.println(" graus");
    
    Serial.println("\nDigite novos valores:");
  }
}
