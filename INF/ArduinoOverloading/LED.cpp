#include "LED.h"
#include <Arduino.h>

// Costruttore
LED::LED(int p) {
  pin = p;
  pinMode(pin, OUTPUT);
  stato = false;
}

// Accendi il LED
void LED::accendi() {
  digitalWrite(pin, HIGH);
  stato = true;
}

void LED::accendi(int durata) {
  digitalWrite(pin, HIGH);
  delay(durata);
  digitalWrite(pin, LOW);
  stato = false;
}

// Spegni il LED
void LED::spegni() {
  digitalWrite(pin, LOW);
  stato = false;
}

// Spegni il LED dopo un determinato periodo di tempo
void LED::spegni(int ritardo) {
  delay(ritardo);
  spegni();
}

// Inverti lo stato del LED
void LED::inverti() {
  stato = !stato;
  digitalWrite(pin, stato ? HIGH : LOW);
}

// Fai lampeggiare il LED un certo numero di volte
void LED::inverti(int nLampeggi) {
  for (int i = 0; i < nLampeggi; i++) {
    inverti();
    delay(100);
  }
}

// Fai lampeggiare il LED un certo numero di volte con durata personalizzata
void LED::lampeggio(int numero, int durata) {
  for (int i = 0; i < numero; i++) {
    accendi();
    delay(durata);
    spegni();
    delay(durata);
  }
}

//*************************Metodi test*************************//

void LED::test1() {
  lampeggio(10, 150);
}

void LED::test2(){
  accendi(3000);
  spegni();
}

void LED::test3(){
  delay(1000);
  accendi();
  delay(500);
  spegni();
  inverti();
}

void LED::test4(){
  for(int i=0; i<5; i++){
    accendi();
    delay(1000);
    spegni();
  }
}