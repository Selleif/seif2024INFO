#ifndef QUADRATO_H
#define QUADRATO_H

#include "Rettangolo.h"

//Classe Quadrato sotto classe di Quadrilatero
class Quadrato : public Rettangolo{

public:

    //Costruttore
    Quadrato(double lato);

    //Metodi calcolatori
    double Perimetro();
    double Area();
    double Diagonale();

    //Metodo stampa
    void stampa();
};

#endif