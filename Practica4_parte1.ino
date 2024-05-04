/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 1
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
   
*/

// Definir los pines de los interruptores
int switches[3] = {6, 7, 8};

#define PIN_A 2
#define PIN_B 3
#define PIN_C 4
#define PIN_D 5

void setup() {
   Serial.begin(9600);
  for (int i = 0; i < 3; i++) {
    pinMode(switches[i], INPUT);
  }

  pinMode(PIN_A, OUTPUT);
  pinMode(PIN_B, OUTPUT);
  pinMode(PIN_C, OUTPUT);
  pinMode(PIN_D, OUTPUT);
}

void loop() {
  // Leer el estado de los interruptores
  int delayTime = 500;   // Valor por defecto
  for (int i = 0; i < 3; i++) {
    if (digitalRead(switches[i]) == LOW) {
      delayTime = 1000 * (i + 1);  // 1, 2 o 3 segundos
      break;
    }
  }

  // Realizar el conteo ascendente de 0 a 9
  for (int i = 0; i <= 9; i++) {
    // Mostrar el número en el display de 7 segmentos
    digitalWrite(PIN_A, bitRead(i, 0));
    digitalWrite(PIN_B, bitRead(i, 1));
    digitalWrite(PIN_C, bitRead(i, 2));
    digitalWrite(PIN_D, bitRead(i, 3));
    
    delay(delayTime);
  }
}
