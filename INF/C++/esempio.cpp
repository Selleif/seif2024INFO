#include <iostream>
#include <cmath>
using namespace std;

class Rettangolo {
private:
    double base;
    double altezza;

public:
    // Costruttore che pone a zero base e altezza
    Rettangolo() : base(0), altezza(0) {}

    // Costruttore con 1 parametro: base = altezza = parametro
    Rettangolo(double parametro) : base(parametro), altezza(parametro) {}

    // Costruttore con 2 parametri: base = 1° parametro, altezza = 2° parametro
    Rettangolo(double base, double altezza) : base(base), altezza(altezza) {}

    // Distruttore
    ~Rettangolo() {
        cout << "Hai chiamato il distruttore" << endl;
    }

    // Metodi set e get per base
    void setBase(double base) {
        this->base = base;
    }

    double getBase() const {
        return base;
    }

    // Metodi set e get per altezza
    void setAltezza(double altezza) {
        this->altezza = altezza;
    }

    double getAltezza() const {
        return altezza;
    }

    // Metodo per calcolare il perimetro
    double calcolaPerimetro() const {
        return 2 * (base + altezza);
    }

    // Metodo per calcolare l'area
    double calcolaArea() const {
        return base * altezza;
    }

    // Metodo per calcolare la diagonale
    double calcolaDiagonale() const {
        return sqrt((base * base) + (altezza * altezza));
    }
};

int main() { 
// Creazione di oggetti Rettangolo usando i diversi costruttori 
Rettangolo r1; // Utilizza il costruttore predefinito 
Rettangolo r2(5); // Utilizza il costruttore con un parametro 
Rettangolo r3(3, 4); // Utilizza il costruttore con due parametri 


// Imposta base e altezza per l'oggetto r1 
r1.setBase(2); r1.setAltezza(3); 

// Visualizza base, altezza, perimetro, area e diagonale di r1
cout << "Base r1: " << r1.getBase() << endl; 
cout << "Altezza r1: " << r1.getAltezza() << endl;
cout << "Perimetro r1: " << r1.calcolaPerimetro() << endl;
cout << "Area r1: " << r1.calcolaArea() << endl;
cout << "Diagonale r1: " << r1.calcolaDiagonale() << endl;

// Visualizza base, altezza, perimetro, area e diagonale di r2 
cout << "Base r2: " << r2.getBase() << endl;
cout << "Altezza r2: " << r2.getAltezza() << endl;
cout << "Perimetro r2: " << r2.calcolaPerimetro() << endl;
cout << "Area r2: " << r2.calcolaArea() << endl;
cout << "Diagonale r2: " << r2.calcolaDiagonale() << endl;

// Visualizza base, altezza, perimetro, area e diagonale di r3
cout << "Base r3: " << r3.getBase() << endl;
cout << "Altezza r3: " << r3.getAltezza() << endl;
cout << "Perimetro r3: " << r3.calcolaPerimetro() << endl;
cout << "Area r3: " << r3.calcolaArea() << endl;
cout << "Diagonale r3: " << r3.calcolaDiagonale() << endl;

return 0;

}