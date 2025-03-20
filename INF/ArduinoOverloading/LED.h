#ifndef LED_H
#define LED_H

class LED {
private:
  int pin;
  bool stato;

public:
  // Costruttore
  LED(int pin);

  // Metodi accensione
  void accendi();
  /**
  * @brief Accendi il LED per un determinato periodo di tempo e poi spegnilo
  * @param Durata tempo in ms
  */
  void accendi(int durata);

  // Metodi spegnimento
  void spegni();
  /**
  * @brief Spegne il led dopo un certo periodo di tempo
  * @param Durata tempo in ms
  */
  void spegni(int ritardo);

  // Metodi inverti
  void inverti();
  /**
  * @brief Inverte lo stato del led un certo numero di volte
  * @param Numero di lampeggi
  */
  void inverti(int nLampeggi);

  // Metodo lampeggio
  /**
  * @brief Fa lampeggiare il led un certo numero di volte con un intervallo 
  * @param quante volte far lampeggiare il led
  * @param durata tempo in ms
  */
  void lampeggio(int numero, int durata);

  // Metodi test
  void test1();
  void test2();
  void test3();
  void test4();
};

#endif