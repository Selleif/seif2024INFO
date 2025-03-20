//Abdelhalim Seif 4^H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#define N 4

typedef struct data {
    int giorno;
    char mese[20];
    int anno;
} data;

typedef struct persona {
    char cognome[20];
    data nascita;
    int voti[N];
} persona;

int main() {
    persona pippo, topolino;
    int anni, media;
    int somma_voti = 0;

    // Inserimento dati per il primo record (pippo)
    printf("inserisci il cognome: ");
    scanf("%s", pippo.cognome);
    printf("inserisci il giorno di nascita: ");
    scanf("%d", &pippo.nascita.giorno);
    printf("inserisci il mese di nascita: ");
    scanf("%s", pippo.nascita.mese);
    printf("inserisci anno di nascita: ");
    scanf("%d", &pippo.nascita.anno);
    printf("inserisci %d voti: ", N);
    for (int i = 0; i < N; i++) {
        scanf("%d", &pippo.voti[i]);
        somma_voti += pippo.voti[i];
    }

    // Stampa dei dati del primo record
    printf("il cognome dello studente e': %s\n", pippo.cognome);
    printf("il giorno di nascita dello studente e': %d\n", pippo.nascita.giorno);
    printf("il mese di nascita dello studente e': %s\n", pippo.nascita.mese);
    printf("l'anno di nascita dello studente e': %d\n", pippo.nascita.anno);

    // Stampa dei voti
    for (int i = 0; i < N; i++) {
        printf("%d\t", pippo.voti[i]);
    }
    printf("\n");

    // Calcolo e stampa dell'età nel 2025
    anni = 2025 - pippo.nascita.anno;
    printf("eta = %d\n", anni);

    // Calcolo e stampa della media dei voti
    media = somma_voti / N;
    printf("la media dei voti e': %d\n", media);

    //Secondo record (topolino) ---

    //Mettere “Rossi” nel campo cognome
    strcpy(topolino.cognome, "Rossi");

    //Copiare la data di nascita del 1° record nel 2°
    topolino.nascita = pippo.nascita;

    //Inserire voti con la funzione random
    srand(time(NULL));  // Inizializza il generatore di numeri casuali
    int somma_voti_topolino = 0;
    for (int i = 0; i < N; i++) {
        topolino.voti[i] = rand() % 11;  // Voti casuali tra 0 e 10
        somma_voti_topolino += topolino.voti[i];
    }

    //Stampare tutti i campi del secondo record
    printf("\n\nDettagli del secondo studente (Rossi):\n");
    printf("il cognome dello studente e': %s\n", topolino.cognome);
    printf("il giorno di nascita dello studente e': %d\n", topolino.nascita.giorno);
    printf("il mese di nascita dello studente e': %s\n", topolino.nascita.mese);
    printf("l'anno di nascita dello studente e': %d\n", topolino.nascita.anno);

    // Stampa dei voti casuali generati
    for (int i = 0; i < N; i++) {
        printf("%d\t", topolino.voti[i]);
    }
    printf("\n");

    // Calcolo e stampa dell'età di topolino nel 2025
    anni = 2025 - topolino.nascita.anno;
    printf("eta = %d\n", anni);

    // Calcolo e stampa della media dei voti di topolino
    media = somma_voti_topolino / N;
    printf("la media dei voti di topolino e': %d\n", media);

    return 0;
}
