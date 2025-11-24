void setup() {
  Serial.begin(9600);
  Serial.println("Inicio da leitura...");
}

void loop() {

  Serial.println("Realizando 3 leituras...");

  int leitura1 = analogRead(A0);
  delay(1000);

  int leitura2 = analogRead(A0);
  delay(1000);

  int leitura3 = analogRead(A0);
  delay(1000);

  // cálculo da média
  float media = (leitura1 + leitura2 + leitura3) / 3.0;

  // raiz da média
  float raiz = sqrt(media);

  // valor quadrado da média
  float quadrado = pow(media, 2);

  // resultado
  Serial.println("\n--- resultado da conta ---");

  Serial.print("Leituras: ");
  Serial.print(leitura1); Serial.print(", ");
  Serial.print(leitura2); Serial.print(", ");
  Serial.println(leitura3);

  Serial.print("Média: ");
  Serial.println(media);

  Serial.print("Média arredondada (round): ");
  Serial.println(round(media));

  Serial.print("Média sem arredondar (float): ");
  Serial.println((float)media);

  Serial.print("Média arredondada para cima (ceil): ");
  Serial.println(ceil(media));

  Serial.print("Raiz quadrada arredondada para cima (ceil): ");
  Serial.println(ceil(raiz));

  Serial.print("Valor ao quadrado da média (pow): ");
  Serial.println(quadrado);

  Serial.println("-----------------------------\n");

  delay(2000);
}
