#include "LED.h"
#include "SWITCH.h"

// Creazione di oggetti LED
LED led4(7);
LED led3(9);
LED led2(11);
LED led1(13);

// Creazione di oggetti SWITCH
SWITCH switch4(6);
SWITCH switch3(8);
SWITCH switch2(10);
SWITCH switch1(12);

void setup() {
  // Inizializzazione degli oggetti già gestita nei costruttori
}

void loop() {
  if (switch1.press()) {
    led1.test1();
  }

  if (switch2.press()) {
    led2.test2();
  }

  if (switch3.press()) {
    led3.test3();
  }

  if (switch4.press()) {
    led4.test4();
  }
}