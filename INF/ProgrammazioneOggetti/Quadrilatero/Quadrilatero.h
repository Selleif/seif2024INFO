//Abdelhalim Seif 4^H
#ifndef QUADRILATERO_H
#define QUADRILATERO_H

#include <iostream>

class Quadrilatero {
protected:
    double lato1, lato2, lato3, lato4;

public:
    // Costruttori
    Quadrilatero(double lato1, double lato2, double lato3, double lato4);
    Quadrilatero(double lato1, double lato2);

    // Metodi calcolatori
    double Perimetro();

    // Get
    void getLati();

    // Set
    void setLati(double lato1 = 1, double lato2 = 2, double lato3 = 3, double lato4 = 4);
};

#endif