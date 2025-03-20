//Abdelhalikm Seif Eldin 4^H esercizio A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <unistd.h>  // Per fork()
#include <sys/wait.h>  // Per wait()

int main() {
    // Variabili per i cateti del triangolo rettangolo
    int cateto1 = 3;
    int cateto2 = 4;

    // Crea il processo figlio
    pid_t pid = fork();

    if (pid < 0) {
        // Se fork fallisce
        perror("Errore durante la creazione del processo figlio");
        return 1;
    }

    if (pid == 0) {
        // Processo figlio
        // Calcolo e stampa del perimetro
        double perimetro = cateto1 + cateto2 + sqrt(cateto1 * cateto1 + cateto2 * cateto2);
        printf("Perimetro del triangolo: %.2f\n", perimetro);
    } else {
        // Processo padre
        // Calcolo e stampa dell'area
        double area = (cateto1 * cateto2) / 2.0;
        printf("Area del triangolo: %.2f\n", area);

        // Attende che il processo figlio termini
        wait(NULL);
    }

    return 0;
}
