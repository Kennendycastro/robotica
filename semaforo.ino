// Implementação de um semaforo de pedestre em Arduino

int vermelhoC = 13;
int verdeC = 12;
int amareloC = 11;

// pedestre
int vermelhoP = 7;
int verdeP = 5;

//botão do pedestre

int botP = 2;

void setup() {
  // Definido o fucionamento dos pinos
  pinMode(vermelhoC, OUTPUT);
  pinMode(verdeC, OUTPUT);
  pinMode(amareloC, OUTPUT);

  pinMode(vermelhoP,OUTPUT);
  pinMode(verdeP, OUTPUT);
  pinMode(botP,INPUT_PULLUP);
 
}


void loop() {
  // controlando o semaforo
  digitalWrite(verdeC, HIGH);
  delay(1000);
  digitalWrite(verdeC,LOW);

  digitalWrite(amareloC,HIGH);
  delay(1000);
  digitalWrite(amareloC,LOW);

  digitalWrite(vermelhoC,HIGH);
  delay(1000);
  digitalWrite(vermelhoC,LOW);
  digitalWrite(vermelhoP, HIGH);
  
  //Lendo o estado do butão
  if(digitalRead(botP) == LOW){
    digitalWrite(amareloC,HIGH);
    delay(1000);
    digitalWrite(amareloC,LOW);
    
    digitalWrite(vermelhoC,HIGH);
    delay(1000);
    digitalWrite(vermelhoC,LOW);

    digitalWrite(vermelhoP, LOW);
    digitalWrite(verdeP, HIGH);
    delay(3000);
    digitalWrite(verdeP,LOW);
    digitalWrite(vermelhoP, HIGH);    
  }












}
