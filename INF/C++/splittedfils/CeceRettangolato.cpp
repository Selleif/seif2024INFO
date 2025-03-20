#include <iostream>
#include <cmath>
#include "Rettangolo.h"


//Costruttori
Rettangolo::Rettangolo(){
    base = 0;
    altezza = 0;
    numeroOggetto=1;
}

Rettangolo::Rettangolo(double lato){
    base = lato;
    altezza = lato;
    numeroOggetto=2;
}

Rettangolo::Rettangolo(double base, double altezza){
    this->altezza = altezza;
    this->base = base;
    numeroOggetto=3;
}



// Distruttore
Rettangolo::~Rettangolo() {std::cout << "Hai chiamato il distruttore" << std::endl;}


// Metodi setter
void Rettangolo::setBase(double base)       {this->base = base;}
void Rettangolo::setAltezza(double altezza) {this->altezza = altezza;}


// Metodi getter
double Rettangolo::getBase()     {return base;}
double Rettangolo::getAltezza()  {return altezza;}
double Rettangolo::getPerimetro(){return Rettangolo::calcolaPerimetro();}
double Rettangolo::getArea()     {return Rettangolo::calcolaArea();}
double Rettangolo::getDiagonale(){return Rettangolo::calcolaDiagonale();}


// Metodi di calcolo
double Rettangolo::calcolaPerimetro() {return 2 * (base + altezza);}
double Rettangolo::calcolaArea()      {return base * altezza;}
double Rettangolo::calcolaDiagonale() {return sqrt(base * base + altezza * altezza);}

//Metodo stampa informazioni
void Rettangolo::stampa() {
    std::cout <<"*************RETTANGOLO NUMERO " << numeroOggetto << "**************" <<std::endl;
    std::cout <<"Base:      " << getBase() << std::endl;
    std::cout <<"Altezza:   " << getAltezza() << std::endl;
    std::cout <<"Perimetro: " << getPerimetro() << std::endl;
    std::cout <<"Area:      " << getArea() << std::endl;
    std::cout <<"Diagonale: " << getDiagonale() << std::endl;
    std::cout <<"********************************************" << std::endl;
    std::cout << std::endl;
}