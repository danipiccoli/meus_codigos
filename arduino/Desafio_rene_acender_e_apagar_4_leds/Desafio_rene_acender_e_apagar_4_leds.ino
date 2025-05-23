// Define os pinos dos LEDs
int leds[] = {9, 8, 5, 4};

void setup() {
  // Define todos os pinos como saída
  for (int i = 0; i < 4; i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
  // 1. Acende um LED por vez (sequencial)
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], HIGH);  // Acende o LED atual
    delay(50);                   // Espera 0.5s
    digitalWrite(leds[i], LOW);   // Apaga o LED atual
  }

  delay(50);  // Pausa antes de acender todos

  // 2. Acende todos os LEDs juntos
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], HIGH);
  }

  delay(50);  // Mantém todos acesos por 1s

  // 3. Apaga todos os LEDs juntos
  for (int i = 0; i < 4; i++) {
    digitalWrite(leds[i], LOW);
  }

  delay(50);  // Espera antes de repetir tudo
}
