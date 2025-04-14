const led1 = 5 //D1 fio azul1
const led2 = 4 //D2 fio verde1
const led3 = 0 //D3 fio branco1  
const led4 = 2 1 //D4 fio roxo1 
const led5 = 14
const led6 = 12 //fio laranja1
const led7 = 12
const led8 = 12
const led9 = 12
const led10 = 12 //fio roxo2
const led11 = 12 //fio laranja2
const led12 = 12 //fio verde2
const led13 = 12 //fio azul2

// leds que ligam juntos
//led1, led2, led3 - cima
//led11, led12, led13 - baixo

void setup() {

}

void loop() {
    numeroZero();
    delay(1000);

    numeroUm();
    delay(1000);

    numeroDois();
    delay(1000);
}

void ligarCima(){
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led13, HIGH);
}


void ligarBaixo(){
    digitalWrite(led11, HIGH);
    digitalWrite(led12, HIGH);
    digitalWrite(led13, HIGH);
}

void ligarDireitaCima(){
    digitalWrite(led1, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
}

void ligarEsquerdaCima(){
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led8, HIGH);
}

void ligarDireitaBaixo(){
    digitalWrite(led6, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led11, HIGH);
}

void ligarEsquerdaBaixo(){
    digitalWrite(led8, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led13, HIGH);
}

void ligarEsquerda(){
    digitalWrite(led1, HIGH);
    digitalWrite(led4, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led9, HIGH);
    digitalWrite(led11, HIGH);
}
void ligarDireita(){
    digitalWrite(led3, HIGH);
    digitalWrite(led5, HIGH);
    digitalWrite(led8, HIGH);
    digitalWrite(led10, HIGH);
    digitalWrite(led13, HIGH);
}
void ligarMeio(){
    digitalWrite(led5, HIGH);
    digitalWrite(led6, HIGH);
    digitalWrite(led7, HIGH);
}



void numeroZero(){
  ligarCima();
  ligarBaixo();
  ligarDireitaCima();
  ligarDireitaBaixo();
  ligarEsquerdaCima();
  ligarDireitaBaixo();
}

void numeroUm(){
  ligarEsquerda();
}

void numeroDois(){
  ligarCima();
  ligarBaixo();
  ligarEsquerdaCima();
  ligarDireitaBaixo();
  ligarMeio();
}
