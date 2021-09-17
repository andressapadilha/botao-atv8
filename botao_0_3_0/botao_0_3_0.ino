// --> Apelidos <--

#define led 7
#define botao1 8
#define botao2 9
#define botao3 10


// A função de setup é executada uma vez quando você pressiona reset ou liga a placa
// inicializar o pino digital colocado como uma SAÍDA.

void setup() {

  //Led
  pinMode(led, OUTPUT);

  //Botão 1
  pinMode(botao1, INPUT_PULLUP);

  //Botão 2
  pinMode(botao2, INPUT_PULLUP);

  //Botão 3
  pinMode(botao3, INPUT_PULLUP);

}

// A função loop executa repetidamente de forma infinita
void loop() {
  //Botão 1
  if (digitalRead(botao1) == LOW) {


    for (int i = 0; i < 6; i++) {
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(500);
    }
  }
  //Botão 2
  if (digitalRead(botao2) == LOW) {


    for (int i = 0; i < 12; i++) {
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(500);
    }
  }

  //Botão 3
  if (digitalRead(botao3) == LOW) {


    for (int i = 0; i < 18; i++) {
      digitalWrite(led, HIGH);
      delay(1000);
      digitalWrite(led, LOW);
      delay(500);
    }
  }
}
