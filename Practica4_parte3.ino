/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 3
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
   
*/

// Definición del pin del interruptor
int interruptorPin1 = 2;
int interruptorPin2 = 3;
int interruptorPin3 = 4;
int interruptorPin4 = 5;

int LD1 = A0; //Inicio de auto Fantastico
int LD2 = A1; //Inicio de auto Fantastico
int LD3 = A2; //Inicio de auto Fantastico
int LD4 = A3; //Inicio de auto Fantastico
int V1 = 500; //Velocidad de los Leds

int A = 6; //DISPLEY
int B = 7; //DISPLEY
int C = 8; //DISPLEY
int D = 9; //DISPLEY
int E = 10; //DISPLEY
int F = 11; //DISPLEY
int G = 12; //DISPLEY
int V2 = 2000; 
int V3 = (250); //Velocidad de despedida 
void setup() {
  Serial.begin(9600);
  // Configurar el pin del interruptor como entrada
  pinMode(interruptorPin1, INPUT);
  pinMode(interruptorPin2, INPUT);
  pinMode(interruptorPin3, INPUT);
  pinMode(interruptorPin4, INPUT);
}

void loop() {
  // Verificar si se presionó el interruptor
  if (digitalRead(interruptorPin1) == LOW) {
    // Imprimir el mensaje en el monitor serial
    Serial.println("Practica No. 4 - [Manfredo Gomez]");
        delay(2000);
  }
  if(digitalRead(interruptorPin2)== LOW){
  digitalWrite(LD1,HIGH);
  delay(V1);
  digitalWrite(LD1,LOW);
  delay(V1);
  digitalWrite(LD2,HIGH);
  delay(V1);
  digitalWrite(LD2,LOW);
  delay(V1);
  digitalWrite(LD3,HIGH);
  delay(V1);
  digitalWrite(LD3,LOW);
  delay(V1);
  digitalWrite(LD4,HIGH);
  delay(V1);
  digitalWrite(LD4,LOW);
  delay(V1),
    
  digitalWrite(LD4,HIGH);
  delay(V1);
  digitalWrite(LD4,LOW);
  delay(V1);
  digitalWrite(LD3,HIGH);
  delay(V1);
  digitalWrite(LD3,LOW);
  delay(V1);
  digitalWrite(LD2,HIGH);
  delay(V1);
  digitalWrite(LD2,LOW);
  delay(V1),
  digitalWrite(LD1,HIGH);
  delay(V1);
  digitalWrite(LD1,LOW);
  delay(V1);
  }
  if(digitalRead(interruptorPin3)== LOW){
    //C
    delay(V2);
    digitalWrite(A,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    delay(V2);
    digitalWrite(A,LOW);
    digitalWrite(F,LOW);
    digitalWrite(E,LOW);
    digitalWrite(D,LOW);
    //U
    delay(V2);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(B,HIGH);
    delay(V2);
    digitalWrite(F,LOW);
    digitalWrite(E,LOW);
    digitalWrite(D,LOW);
    digitalWrite(C,LOW);
    digitalWrite(B,LOW);
    //A
    delay(V2);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(G,HIGH);
    delay(V2);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(G,LOW);
    //T
    delay(V2);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(D,HIGH);
    digitalWrite(G,HIGH);
    delay(V2);
    digitalWrite(F,LOW);
    digitalWrite(E,LOW);
    digitalWrite(D,LOW);
    digitalWrite(G,LOW);
    //R
    delay(V2);
    digitalWrite(F,HIGH);
    digitalWrite(E,HIGH);
    digitalWrite(G,HIGH);
    delay(V2);
    digitalWrite(F,LOW);
    digitalWrite(E,LOW);
    digitalWrite(G,LOW);
   //O
        delay(V2);
    digitalWrite(E,HIGH);
    digitalWrite(F,HIGH);
    digitalWrite(A,HIGH);
    digitalWrite(B,HIGH);
    digitalWrite(C,HIGH);
    digitalWrite(D,HIGH);
    delay(V2);
    digitalWrite(E,LOW);
    digitalWrite(F,LOW);
    digitalWrite(A,LOW);
    digitalWrite(B,LOW);
    digitalWrite(C,LOW);
    digitalWrite(D,LOW);

}
if ((digitalRead(interruptorPin1) == LOW && digitalRead(interruptorPin3) == LOW) ||
    (digitalRead(interruptorPin2) == LOW && digitalRead(interruptorPin4) == LOW)) {
    Serial.println("Gracias por su atencion");
    delay(V3); // Velocidad de despedida
}
}
