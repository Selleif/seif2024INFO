#include <iostream>
#include "Rettangolo.h"

int main() {
    Rettangolo rettangolo1;
    Rettangolo rettangolo2(14);
    Rettangolo rettangolo3(20,10);

    rettangolo1.stampa();
    rettangolo2.stampa();
    rettangolo3.stampa();

    rettangolo1.calcolaArea();
    rettangolo1.setAltezza(4);

    return 0;
}