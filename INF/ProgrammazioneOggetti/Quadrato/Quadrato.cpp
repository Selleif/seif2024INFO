//Abdelhalim Seif 4^H
#include "Quadrato.h"

// Costruttore che chiama il costruttore della superclasse Quadrilatero
Quadrato::Quadrato(double lato) : Quadrilatero(lato, lato, lato, lato) {}

// Override del metodo per calcolare il perimetro
double Quadrato::Perimetro() {
    return 4 * lato1;
}

// Override del metodo per calcolare l'area
double Quadrato::calcolaArea() {
    return lato1 * lato1;
}

// Override del metodo per calcolare la diagonale
double Quadrato::calcolaDiagonale() {
    return lato1 * sqrt(2);
}