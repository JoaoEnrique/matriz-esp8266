const int leds[] = {
  23, // led1 - fio azul1
  22, // led2 - fio verde1
  21, // led3 - fio branco1
  19, // led4 - fio roxo1
  18, // led5 - fio cinza
  5,  // led6 - fio marron
  4,  // led7 - fio vermelho
  2,  // led8 - fio amarelo
  15, // led9 - fio laranja
  26, // led10 - fio roxo2
  25, // led11 - fio laranja2
  32, // led12 - fio verde2 (atenção que repete, deveria ser diferente)
  33   // led13 - fio azul2
};

const int tempoDesligado = 500; //tempo entre cada número
const int tempoLigado = 1000; //tempo que cada número fica ligado


void setup() {
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
    numeroZero();
    delay(tempoLigado);
    desligarTudoComTempo();
    
    numeroUm();
    delay(tempoLigado);
    desligarTudoComTempo();
    
    numeroDois();
    delay(tempoLigado);
    desligarTudoComTempo();
 
    numeroTres();
    delay(tempoLigado);
    desligarTudoComTempo();
    
    numeroQuatro();
    delay(tempoLigado);
    desligarTudoComTempo();

}

void desligarTudo(){
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    digitalWrite(leds[i], LOW);
  }
}

void desligarTudoComTempo(){
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    digitalWrite(leds[i], LOW);
  }

  delay(tempoDesligado);
}


void ligarCima() {
  digitalWrite(leds[0], HIGH);
  digitalWrite(leds[1], HIGH);
  digitalWrite(leds[2], HIGH);
}

void ligarBaixo() {
  digitalWrite(leds[10], HIGH);
  digitalWrite(leds[11], HIGH);
  digitalWrite(leds[12], HIGH);
}

void ligarEsquerdaCima() {
  digitalWrite(leds[0], HIGH);
  digitalWrite(leds[3], HIGH);
  digitalWrite(leds[5], HIGH);
}

void ligarDireitaCima() {
  digitalWrite(leds[2], HIGH);
  digitalWrite(leds[4], HIGH);
  digitalWrite(leds[7], HIGH);
}

void ligarDireitaBaixo() {
  digitalWrite(leds[5], HIGH);
  digitalWrite(leds[8], HIGH);
  digitalWrite(leds[10], HIGH);
}

void ligarEsquerdaBaixo() {
  digitalWrite(leds[7], HIGH);
  digitalWrite(leds[9], HIGH);
  digitalWrite(leds[12], HIGH);
}

void ligarEsquerda() {
  digitalWrite(leds[0], HIGH);
  digitalWrite(leds[3], HIGH);
  digitalWrite(leds[5], HIGH);
  digitalWrite(leds[8], HIGH);
  digitalWrite(leds[10], HIGH);
}

void ligarDireita() {
  digitalWrite(leds[2], HIGH);
  digitalWrite(leds[4], HIGH);
  digitalWrite(leds[7], HIGH);
  digitalWrite(leds[9], HIGH);
  digitalWrite(leds[12], HIGH);
}

void ligarMeio() {
  digitalWrite(leds[4], HIGH);
  digitalWrite(leds[5], HIGH);
  digitalWrite(leds[6], HIGH);
}

void numeroZero() {
  desligarTudo();
  ligarCima();
  ligarBaixo();
  ligarDireitaCima();
  ligarDireitaBaixo();
  ligarEsquerdaCima();
  ligarEsquerdaBaixo();
}

void numeroUm() {
  desligarTudo();
  ligarDireita();
}

void numeroDois() {
  desligarTudo();
  ligarCima();
  ligarBaixo();
  ligarDireitaCima();
  ligarDireitaBaixo();
  ligarMeio();
}


void numeroTres() {
  desligarTudo();
  ligarCima();
  ligarBaixo();
  ligarDireita();
  ligarMeio();
}


void numeroQuatro() {
  desligarTudo();
  ligarDireita();
  ligarMeio();
  ligarEsquerdaCima();
}
