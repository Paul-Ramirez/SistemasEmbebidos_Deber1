/*
 * DEBER N°1
 * CAPITULO II: PUERTOS DIGITALES
 * OBJETIVO: Realizar cuatro diferentes juegos de seis luces led con 4 switch. 
 * AUTOR: Ramirez Paul
 * FECHA: 23/11/2020
 */

const int led1=5;
const int led2=6;
const int led3=7;
const int led4=8;
const int led5=9;
const int led6=10;
const int sw1=2;
const int sw2=3;
const int sw3=4;
const int sw4=11;
int i=0;
int j=0;
int k = 0;
int l=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  pinMode(led5,OUTPUT);
  pinMode(led6,OUTPUT);
  pinMode(sw1,INPUT);
  pinMode(sw2,INPUT);
  pinMode(sw3,INPUT);
  pinMode(sw4,INPUT);
}

void loop() {
  //Switch 1 - encendido de números pares
  if(digitalRead(sw1)==LOW){
    //Ciclo while para 10 repeticiones
    while(i<=9){
      i++;
      digitalWrite(led2,HIGH);
      digitalWrite(led4,HIGH);
      digitalWrite(led6,HIGH);
      delay(400);
      digitalWrite(led2,LOW);
      digitalWrite(led4,LOW);
      digitalWrite(led6,LOW);
      delay(400);
    }
  }else{
    i=0;
    digitalWrite(led2,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led6,LOW);
  }
  

  //Switch 2 - Encendido de números impares
  if(digitalRead(sw2)==LOW){
    //Ciclo while para 10 repeticiones
    while(j<=9){ 
      j++;
      digitalWrite(led1,HIGH);
      digitalWrite(led3,HIGH);
      digitalWrite(led5,HIGH);
      delay(400);
      digitalWrite(led1,LOW);
      digitalWrite(led3,LOW);
      digitalWrite(led5,LOW);
      delay(400);
    }
  }else{
    j=0;
    digitalWrite(led1,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led5,LOW);
  }

  //Switch 3 - encendido secuencial
  if(digitalRead(sw3)==LOW){
    //Ciclo while para 4 repeticiones
    while(k<4){
      k++;
      digitalWrite(led1,HIGH);
      delay(200);
      digitalWrite(led1,LOW);
      delay(200);
      digitalWrite(led2,HIGH);
      delay(200);
      digitalWrite(led2,LOW);
      delay(200);
      digitalWrite(led3,HIGH);
      delay(200);
      digitalWrite(led3,LOW);
      delay(200);
      digitalWrite(led4,HIGH);
      delay(200);
      digitalWrite(led4,LOW);
      delay(200);
      digitalWrite(led5,HIGH);
      delay(200);
      digitalWrite(led5,LOW);
      delay(200);
      digitalWrite(led6,HIGH);
      delay(200);
      digitalWrite(led6,LOW);
      delay(200);
    } 
  }else{
    k=0;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }

  //Switch 4 - Secuencia de encendido en pares hacia el centro
  if(digitalRead(sw4)==LOW){
    //Ciclo while para 4 repeticiones
    while(l<4){
      l++;
      digitalWrite(led1,HIGH);
      digitalWrite(led6, HIGH);
      delay(400);
      digitalWrite(led1,LOW);
      digitalWrite(led6, LOW);
      delay(400);
      digitalWrite(led2,HIGH);
      digitalWrite(led5, HIGH);
      delay(400);
      digitalWrite(led2,LOW);
      digitalWrite(led5, LOW);
      delay(400);
      digitalWrite(led3,HIGH);
      digitalWrite(led4, HIGH);
      delay(400);
      digitalWrite(led3,LOW);
      digitalWrite(led4, LOW);
      delay(400);
    }
  }else{
    l=0;
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
    digitalWrite(led3,LOW);
    digitalWrite(led4,LOW);
    digitalWrite(led5,LOW);
    digitalWrite(led6,LOW);
  }
  
}
