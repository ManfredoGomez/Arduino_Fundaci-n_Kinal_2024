/*
   Fundacion Kinal
   Centro educativo tecnico laboral Kinal
   Quinto perito
   Quinto electronica
   Codigo Tecnico: EB5AM / EB5AV 
   Curso: Taller de electronica digital y reparacion de computadoras I
   Proyecto: Entradas y salidas digitales - contador ascedente/descendente
   Dev: Profe. Alejandro Lopez Navas
   Fecha: 17 de abril
   link de la simulacion: 
*/
// Definición de la estructura y creación de los productos
struct expendedora_de_dulces {
  char nombres_producto[100];
  long precios_de_producto;
};

expendedora_de_dulces productos[4] = {
  {"Dorito", 50},
  {"Tortichip", 123},
  {"Gomitas ", 100},
  {"M&M", 40}
};

// Definimos los botones
#define BOTON_AVANZAR 2
#define BOTON_RETROCESO 3

byte contador = 0;

void setup() {
  Serial.begin(9600);
  pinMode(13,INPUT);
  pinMode(BOTON_AVANZAR, OUTPUT);
  pinMode(BOTON_RETROCESO, OUTPUT);
}

void loop() {
  if(BOTON_AVANZAR,HIGH);
  digitalWrite(13,LOW);
  delay(1000);
digitalWrite(13,HIGH);
  delay(1000);
  while (digitalRead(BOTON_AVANZAR) == HIGH) {
    delay(1000); // Debounce para evitar lecturas múltiples
    contador = (contador + 1) % 4; // Avanza al siguiente producto

    // Imprime la información del producto seleccionado
    Serial.println("Producto seleccionado:");
    Serial.println("Nombre: " + String(productos[contador].nombres_producto));
    Serial.println("Cantidad: " + String(productos[contador].precios_de_producto));
  }

  while (digitalRead(BOTON_RETROCESO) == HIGH) 
    delay(1000); // Debounce para evitar lecturas múltiples
    contador = (contador - 1 + 4) % 4; // Retrocede al producto anterior

    // Imprime la información del producto seleccionado
    Serial.println("Producto seleccionado:");
    Serial.println("Nombre: " + String(productos[contador].nombres_producto));
    Serial.println("Cantidad: " + String(productos[contador].precios_de_producto));
    delay(1000);
      
  }
