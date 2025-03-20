//Abdelhalim Seif 4^H
#include "Rettangolo.h"
#include <cmath>

// Costruttore
Rettangolo::Rettangolo(double base, double altezza, std::string col)
    : Quadrilatero(base, altezza, base, altezza) {  
    colore = col;
}

// Override del metodo per il perimetro
double Rettangolo::Perimetro() {
    return 2 * (lato1 + lato2);
}

// Metodo per calcolare l'area
double Rettangolo::calcolaArea() {
    return lato1 * lato2;
}

// Metodo per calcolare la diagonale
double Rettangolo::calcolaDiagonale() {
    return sqrt((lato1 * lato1) + (lato2 * lato2));
}

// Metodo per ottenere il colore
std::string Rettangolo::getColore() {
    return colore;
}

// Metodo per impostare il colore
void Rettangolo::setColore(std::string nuovoColore) {
    colore = nuovoColore;
}

// Metodo per chiamare il perimetro della superclasse
double Rettangolo::PerimetroSuperclasse() {
    return Quadrilatero::Perimetro();
}