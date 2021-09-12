/*   Botao_0_3_0

      Devemos colocar função em 3 botões, aonde:
      - Botão 1 - Ao ser pressionado o Led deverá piscar 6 vezes
      - Botão 2 - Ao ser pressionado o Led deverá piscar 12 vezes
      - Botão 3 - Ao ser pressionado o Led deverá piscar 18 vezes

      Componentes:

      - Arduino Uno CP2102
      - 1 Led Verde
      - 3 Push Buttons
      - Resistor de 270Ω
      - Jumpers diversos

      Conexão Arduino:

      - Led Verde (7)  - Jumper Marrom
      - Botão 1   (8)  - Jumper Roxo
      - Botão 2   (9)  - Jumper Vermelho
      - Botão 3   (10) - Jumper Azul

      Versão

      0.0.0 --> Acrescentando o cabeçalho
      0.1.0 --> Colocando #define para cada botão e led
      0.2.0 --> Colocar o pinMode para o Led
                Colocar o pinMode para os botões 1, 2 e 3

      0.3.0 --> Colocar o loop com if e for com os 3 botões




      11/09/2021
      Andressa Mikaela Padilha
*/


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
