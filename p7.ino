void setup() {
  //rojo
pinMode(2,OUTPUT); 
//verde
pinMode(3,OUTPUT);
//azul
pinMode(4,OUTPUT);

//peaton rojo
pinMode(5,OUTPUT);
//peaton verde
pinMode(6,OUTPUT);

//boton de cambio
pinMode(7,INPUT);
}   

int time(int y){
   int valor= analogRead(A0);
  if(valor<=200){
    switch(y){
      case 1: return 5000;
      case 2: return 500;
    }
  }
  else if(valor<=400){
    switch(y){
      case 1: return 4000;
      case 2: return 400;
    }
  }
  else if(valor<=600){
    switch(y){
      case 1: return 3000;
      case 2: return 300;
    }
  }
  else if(valor<=800){
    switch(y){
      case 1: return 2000;
      case 2: return 200;
    }
  }
  else{
    switch(y){
      case 1: return 1000;
      case 2: return 100;
    }
  }
  
}

void cambios(){
 //cambio
 digitalWrite(3,LOW);
 digitalWrite(4,HIGH);
 
delay(time(1));

 //pase peaton
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);

 digitalWrite(6,HIGH);
 digitalWrite(2,HIGH);
 delay(time(1));
//cambio de luz
digitalWrite(2,LOW);
digitalWrite(4,HIGH);

digitalWrite(6,LOW);
 delay(time(2));
 digitalWrite(6,HIGH);
 delay(time(2));
 digitalWrite(6,LOW);
 delay(time(2));
 digitalWrite(6,HIGH);
 delay(time(2));
 digitalWrite(6,LOW);
 delay(time(2));

//pse auto
 digitalWrite(2,LOW);
 digitalWrite(3,LOW);
 digitalWrite(4,LOW);
 digitalWrite(5,LOW);
 digitalWrite(6,LOW);
  
}
//------------------------------------ //Semaforo //------------------------------------
void loop()  
{      
  if(digitalRead(7)){
    cambios();   
  }
  else{
 digitalWrite(3,HIGH);
 digitalWrite(5,HIGH);
  }
 
 
}

