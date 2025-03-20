#include "SWITCH.h"
#include <Arduino.h>

// Costruttore
SWITCH::SWITCH(int pin) {
  this->pin = pin;
  pinMode(pin, INPUT_PULLUP);
}

// Metodo per verificare la pressione del pulsante
bool SWITCH::press() {
  return digitalRead(pin) == LOW;
}