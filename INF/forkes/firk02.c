//Abdelhalim seif 4^h es 2
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

// Funzione per far lampeggiare il LED
void lampeggia_led(int led, double intervallo, const char *colore) {
    for (int i = 0; i < 10; i++) {
        printf("LED %s acceso\n", colore);
        usleep(intervallo * 1000000); // usleep prende intervallo in microsecondi
        printf("LED %s spento\n", colore);
        usleep(intervallo * 1000000);
    }
}

int main() {
    int led = 0;
    char comando;

    while (1) {
        printf("Inserisci comando (v: verde, r: rosso, g: giallo, q: esci): ");
        scanf(" %c", &comando);

        if (comando == 'q') {
            printf("Chiusura del programma.\n");
            break;
        }

        pid_t pid = fork();

        if (pid < 0) {
            perror("Errore durante la creazione del processo figlio");
            return 1;
        }

        if (pid == 0) {
            // Processo figlio
            switch (comando) {
                case 'v':
                    led = 1;
                    lampeggia_led(led, 0.3, "verde");
                    break;
                case 'r':
                    led = 2;
                    lampeggia_led(led, 0.7, "rosso");
                    break;
                case 'g':
                    led = 3;
                    lampeggia_led(led, 1.2, "giallo");
                    break;
                default:
                    printf("Comando non riconosciuto.\n");
                    break;
            }
            exit(0); // Termina il processo figlio
        } else {
            // Processo padre
            wait(NULL); // Attende che il processo figlio termini
        }
    }

    return 0;
}
