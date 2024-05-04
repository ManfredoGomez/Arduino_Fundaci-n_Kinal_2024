/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 2
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
   
*/

//LED CONECTADAS
int LD1 = 2;
int LD2 = 3;
int LD3 = 4;
int LD4 = 5;
int LD5 = 6;
//SWICH CONECTADOS
int SW1 = 8;
int SW2 = 9;
//Velocidad
int V1 = 250;
int V2 = 500;
 
void setup()
{
  Serial.begin(9600);
  //Led en entrada 
  pinMode(LD1,OUTPUT);  
  pinMode(LD2,OUTPUT);
  pinMode(LD3,OUTPUT);
  pinMode(LD4,OUTPUT);
  pinMode(LD5,OUTPUT);
  //SWICH en salida
  pinMode(SW1,INPUT);
  pinMode(SW2,INPUT);
}
 
void loop()
{
  //Secuencia 1
  if(digitalRead(SW1)== HIGH){
  Serial.println("Rapides_1");
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
  digitalWrite(LD5,HIGH);
  delay(V1);
  Serial.println("Fin");
  digitalWrite(LD5,LOW);
  delay(V1);
    
      digitalWrite(LD5,HIGH);
  delay(V1);
  digitalWrite(LD5,LOW);
  delay(V1);
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
    Serial.println("Fin");
  digitalWrite(LD1,LOW);
  delay(V1);

  }
  // Secuencia 2
    if(digitalRead(SW2)== HIGH){
  Serial.println("Rapides_2");
  digitalWrite(LD1,HIGH);
  delay(V2);
  digitalWrite(LD1,LOW);
  delay(V2);
  digitalWrite(LD2,HIGH);
  delay(V2);
  digitalWrite(LD2,LOW);
  delay(V2);
  digitalWrite(LD3,HIGH);
  delay(V2);
  digitalWrite(LD3,LOW);
  delay(V2);
  digitalWrite(LD4,HIGH);
  delay(V2);
  digitalWrite(LD4,LOW);
  delay(V2),
  digitalWrite(LD5,HIGH);
  delay(V2);
  Serial.println("Fin");
  digitalWrite(LD5,LOW);
      delay(V2);
      
        Serial.println("Rapides_2");
  digitalWrite(LD5,HIGH);
  delay(V2);
  digitalWrite(LD5,LOW);
  delay(V2);
  digitalWrite(LD4,HIGH);
  delay(V2);
  digitalWrite(LD4,LOW);
  delay(V2);
  digitalWrite(LD3,HIGH);
  delay(V2);
  digitalWrite(LD3,LOW);
  delay(V2);
  digitalWrite(LD2,HIGH);
  delay(V2);
  digitalWrite(LD2,LOW);
  delay(V2),
  digitalWrite(LD1,HIGH);
  delay(V2);
  Serial.println("Fin");
  digitalWrite(LD1,LOW);
      delay(V2);

  }
}
