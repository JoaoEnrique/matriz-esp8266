0 <br>
<img width="300" src="https://github.com/user-attachments/assets/6b7fe647-58bd-4c95-bc3d-cc27022ec86f"/>

1 <br>
<img width="300" src="https://github.com/user-attachments/assets/c0515ec6-cfb1-431d-b80b-ec1e8a1853e4"/>

2 <br>
<img width="300" src="https://github.com/user-attachments/assets/49a85923-c606-427e-bf66-32aaa8faf92f"/>


```c++
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
```

```c++
void setup() {
  for (int i = 0; i < sizeof(leds) / sizeof(leds[0]); i++) {
    pinMode(leds[i], OUTPUT);
  }
}

void loop() {
    numeroZero();
    delay(1000);
    
    numeroUm();
    delay(1000);

    numeroDois();
    delay(1000);
}
