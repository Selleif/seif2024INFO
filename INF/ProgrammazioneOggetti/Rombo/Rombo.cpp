//Abdelhalim Seif 4^H
#include "Rombo.h"

// Costruttore che chiama il costruttore della superclasse Quadrilatero
Rombo::Rombo(double lato, double d1, double d2) : Quadrilatero(lato, lato, lato, lato) {
    diagonale1 = d1;
    diagonale2 = d2;
}

// Override del metodo per calcolare il perimetro
double Rombo::Perimetro() {
    return 4 * lato1; // Tutti i lati sono uguali
}

// Metodo per calcolare l'area del rombo
double Rombo::calcolaArea() {
    return (diagonale1 * diagonale2) / 2;
}

// Metodo per calcolare la diagonale (non necessaria, già fornita)
double Rombo::calcolaDiagonale() {
    // Per un rombo, la diagonale può essere calcolata usando il teorema di Pitagora
    return sqrt((diagonale1 * diagonale1) + (diagonale2 * diagonale2));
}