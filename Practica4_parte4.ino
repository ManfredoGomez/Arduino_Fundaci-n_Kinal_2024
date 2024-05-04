/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico:EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Parte 4
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 3 de Mayo
   
*/

int i = 0;
int a = 99;
  int SWAC = 2; 
  int SWDE = 3;
void setup()
{
  Serial.begin(9600);
pinMode(SWAC,INPUT);
  pinMode(SWDE,INPUT);
  Serial.println("Inicio para el conteo");
}
 
void loop()
{
  if(digitalRead (SWAC) == HIGH&&i<=99){
    Serial.println(i);
    i = i+1;
    delay (500);
    if(i>=100){
      i=0;
    }
  }
if(digitalRead (SWDE) == HIGH&&i>=0){
    Serial.println(i);
    i = i-1;
    delay (500);
    if(i<=0){
      i=99;
   }
}
}
