#ifndef RETTANGOLO_H
#define RETTANGOLO_H

#include <iostream>
#include <cmath>

class Rettangolo {
    private:

        //Attributi dell'oggetto
        double base;
        double altezza;
        int numeroOggetto = 0;

    public:


        //Costruttori
        Rettangolo();
        Rettangolo(double lato);
        Rettangolo(double base, double altezza);

        //Distruttore
        ~Rettangolo();

        //Metodi set
        void setBase(double base);
        void setAltezza(double altezza);

        //Metodi calcolo
        double calcolaPerimetro();
        double calcolaArea();
        double calcolaDiagonale();

        //Metodi get
        double getBase();
        double getAltezza();
        double getPerimetro();
        double getArea();
        double getDiagonale();

        //Metodo stampa informazioni
        void stampa();
};

#endif // RETTANGOLO_H