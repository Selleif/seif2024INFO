//Abdelhalim Seif 4^H
#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include "Quadrilatero.h"
#include <string>

class Rettangolo : public Quadrilatero {
private:
    std::string colore;

public:
    // Costruttore
    Rettangolo(double base, double altezza, std::string col);

    // Override del metodo per il perimetro
    double Perimetro();

    // Metodi della sottoclasse
    double calcolaArea();
    double calcolaDiagonale();

    // Metodi getter e setter per il colore
    std::string getColore();
    void setColore(std::string nuovoColore);

    // Metodo per chiamare il perimetro della superclasse
    double PerimetroSuperclasse();
};

#endif