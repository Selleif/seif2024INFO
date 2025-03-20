//Abdelhalim Seif 4^H
#ifndef ROMBO_H
#define ROMBO_H

#include "Quadrilatero.h"
#include <cmath>

class Rombo : public Quadrilatero {
private:
    double diagonale1, diagonale2;

public:
    // Costruttore che chiama il costruttore della superclasse
    Rombo(double lato, double d1, double d2);

    // Override del metodo per calcolare il perimetro
    double Perimetro();

    // Metodo per calcolare l'area del rombo
    double calcolaArea();

    // Metodo per calcolare la diagonale (non serve per un rombo)
    double calcolaDiagonale();
};

#endif