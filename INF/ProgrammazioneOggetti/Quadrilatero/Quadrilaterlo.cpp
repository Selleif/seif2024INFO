//Abdelhalim Seif 4^H
#include "Quadrilatero.h"
#include <iostream>

// Costruttore generico
Quadrilatero::Quadrilatero(double lato1, double lato2, double lato3, double lato4) {
    this->lato1 = lato1;
    this->lato2 = lato2;
    this->lato3 = lato3;
    this->lato4 = lato4;
}

// Costruttore per rettangolo
Quadrilatero::Quadrilatero(double lato1, double lato2) {
    this->lato1 = lato1;
    this->lato2 = lato2;
    this->lato3 = lato1;
    this->lato4 = lato2;
}

// Calcola il perimetro
double Quadrilatero::Perimetro() {
    return lato1 + lato2 + lato3 + lato4;
}

// Stampa i lati
void Quadrilatero::getLati(){
    std::cout << "Primo lato:    " << lato1 << std::endl;
    std::cout << "Secondo lato:  " << lato2 << std::endl;
    std::cout << "Terzo lato:    " << lato3 << std::endl;
    std::cout << "Quarto lato:   " << lato4 << std::endl;
}

// Imposta i lati
void Quadrilatero::setLati(double lato1, double lato2, double lato3, double lato4) {
    this->lato1 = lato1;
    this->lato2 = lato2;
    this->lato3 = lato3;
    this->lato4 = lato4;
}