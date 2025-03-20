#ifndef SWITCH.h
#define SWITCH.h

class SWITCH {
private:
  int pin;

public:
  // Costruttore
  SWITCH(int pin);

  /**
  * @brief Verifica la pressione del pulsante
  * @param Numero di lampeggi
  */
  bool press();
};

#endif