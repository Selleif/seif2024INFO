//Abdelhalim Seif 4^H
#ifndef QUADRATO_H
#define QUADRATO_H

#include "Quadrilatero.h"
#include <cmath>

class Quadrato : public Quadrilatero {
public:
    // Costruttore che chiama la superclasse
    Quadrato(double lato);

    // Override dei metodi
    double Perimetro();
    double calcolaArea();
    double calcolaDiagonale();
};

#endif