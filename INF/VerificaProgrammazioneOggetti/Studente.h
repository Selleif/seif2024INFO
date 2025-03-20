#include <iostream>
#include "Studente.h"

int main() {
    // Creazione dei due oggetti
    Studente studente1;
    Studente studente2(10, "Rossi");

    // Impostazione dei voti
    studente1.setVoti(7);  // Tutti i voti a 7
    studente2.setVoti(9);  // Tutti i voti a 9

    // Invocazione dei metodi
    std::cout << "Studente 1 - Cognome: " << studente1.getCognome() << ", Matricola: " << studente1.getMatricola() << std::endl;
    std::cout << "Studente 2 - Cognome: " << studente2.getCognome() << ", Matricola: " << studente2.getMatricola() << std::endl;

    std::cout << "Media voti studente 1: " << studente1.MediaVoti() << std::endl;
    std::cout << "Media voti studente 2: " << studente2.MediaVoti() << std::endl;

    std::cout << "Voto massimo studente 1: " << studente1.VotoMaggiore() << std::endl;
    std::cout << "Voto massimo studente 2: " << studente2.VotoMaggiore() << std::endl;

    // Confronto tra i due studenti
    Studente miglioreMedia = (studente1.MediaVoti() > studente2.MediaVoti()) ? studente1 : studente2;
    Studente miglioreVoto = (studente1.VotoMaggiore() > studente2.VotoMaggiore()) ? studente1 : studente2;

    std::cout << "Studente con media voti più alta: " << miglioreMedia.getCognome() << std::endl;
    std::cout << "Studente con voto più alto: " << miglioreVoto.getCognome() << std::endl;

    return 0;
}