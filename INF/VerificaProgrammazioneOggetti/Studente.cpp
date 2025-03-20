#ifndef STUDENTE_H
#define STUDENTE_H

#include <iostream>
#include <string>
#include <algorithm>

class Studente {
private:
    int matricola;
    std::string cognome;
    int voti[8];

public:
    // Costruttori
    Studente();
    Studente(int matricola);
    Studente(int matricola, std::string cognome);
    Studente(int matricola, std::string cognome, int voto);

    // Distruttore
    ~Studente();

    // Metodi get e set
    int getMatricola() const;
    void setMatricola(int matricola);
    std::string getCognome() const;
    void setCognome(std::string cognome);
    void setVoti(int voto = 6);

    // Metodi richiesti
    int VotoMaggiore() const;
    double MediaVoti() const;
};

#endif
