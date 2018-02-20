int boton=3;
unsigned long tiempoCambio;
int estado = LOW;
int tiempoTotal = 6000;
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
 pinMode(7,OUTPUT); // Inicializa el pin 7 led verde
 pinMode(4,OUTPUT); // Inicializa el pin 4 led amarillo
 pinMode(2,OUTPUT); // Inicializa el pin 2 led rojo
 pinMode(5,OUTPUT); // Inicializa el pin 5 led verde peatonal
 pinMode(6,OUTPUT); // Inicializa el pin 6 led rojo peatonal
 Serial.begin(9600);
 pinMode(boton,OUTPUT);//inicializa el boton en pin 3
 digitalWrite(7,HIGH);
 digitalWrite(6,HIGH);
}
//------------------------------------
//Función cíclica
//------------------------------------
void loop() // Esta función se mantiene ejecutando
{ // cuando est energizado el Arduino
if(digitalRead(boton))
  CambioSemaforo();
 
}
  void CambioSemaforo(){
  int valor = analogRead(A0);
 digitalWrite(7,HIGH); // Enciende el LED
 delay(valor+1000); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(7,LOW); // Apaga el LED
 delay(valor+100); // Temporiza un segundo (1s = 1000ms)
  Serial.println(valor);


  digitalWrite(7,HIGH); // Enciende el LED
 delay(valor+400); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(7,LOW); // Apaga el LED
 delay(valor+100);
 Serial.println(valor);

digitalWrite(7,HIGH); // Enciende el LED
 delay(valor+400); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(7,LOW); // Apaga el LED
 delay(valor+100);

 Serial.println(valor);
 
digitalWrite(4,HIGH); // Enciende el LED
 delay(valor+600); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(4,LOW); // Apaga el LED
 delay(valor+100);

 Serial.println(valor);
 
 digitalWrite(2,HIGH); // Enciende el LED
 //delay(1000); // Temporiza un segundo (1s = 1000ms)
// digitalWrite(2,LOW); // Apaga el LED
 //delay(100);

 Serial.println(valor);

digitalWrite(6,LOW); // Apaga el LED
 //delay(100);

 Serial.println(valor);
 
 digitalWrite(5,HIGH); // verde peatonal
 delay(valor+2000); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(5,LOW); // Apaga el LED
 delay(valor+100);


 Serial.println(valor);

 digitalWrite(5,HIGH); // Enciende el LED
 delay(valor+400); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(5,LOW); // Apaga el LED
 delay(valor+100);

 Serial.println(valor);

digitalWrite(5,HIGH); // Enciende el LED
 delay(valor+400); // Temporiza un segundo (1s = 1000ms)
 digitalWrite(5,LOW); // Apaga el LED
 delay(valor+100);

 Serial.println(valor);

digitalWrite(2,LOW); // Apaga el LED rojo
 
 digitalWrite(6,HIGH); // Enciende el LED
 //delay(1000); // Temporiza un segundo (1s = 1000ms)
// digitalWrite(6,LOW); // Apaga el LED
 //delay(100);
 Serial.println(valor);
  digitalWrite(7,HIGH); 
  }
 


