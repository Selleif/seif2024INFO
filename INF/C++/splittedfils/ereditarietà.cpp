#include "Quadrato.h"

Quadrato::Quadrato(double lato): Rettangolo(lato, lato) {}

double Quadrato::Perimetro() {
    return L1*4;
}

double Quadrato::Area() {
    return L1 * L1;
}

double Quadrato::Diagonale() {
    return sqrt(L1 * L1 + L1 * L1);
}

void Quadrato::stampa() {
    std::cout<<"[             VALORI DEL QUADRATO           ]"<<std::endl;
    std::cout<<"---------------------------------------------"<<std::endl;
    std::cout << "Il valore del lato e':        " << L1 << std::endl;
    std::cout << "Il valore del perimetro e':   " << Perimetro() << std::endl;
    std::cout << "Il valore dell'area e':       " << Area() << std::endl;
    std::cout << "Il valore della diagonale e': " << Diagonale() << std::endl << std::endl;
}