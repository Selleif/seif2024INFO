//Abdelhalim seif elsin 4^h
  
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 10  // Numero di record

// Definizione della struttura Studente
typedef struct {
    char cognome[50];
    int voti[5];  // massimo 5 voti
    int num_voti;
} Studente;

// Funzione per scrivere un file con N record
void scrivi_file() {
    FILE *file = fopen("studenti.dat", "wb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }

    Studente s;
    for (int i = 0; i < N; i++) {
        printf("Inserisci il cognome dello studente %d: ", i + 1);
        scanf("%s", s.cognome);
        printf("Inserisci il numero di voti per %s: ", s.cognome);
        scanf("%d", &s.num_voti);
        printf("Inserisci i voti (massimo 5): ");
        for (int j = 0; j < s.num_voti; j++) {
            scanf("%d", &s.voti[j]);
        }

        fwrite(&s, sizeof(Studente), 1, file);
    }

    fclose(file);
}

// Funzione per leggere e stampare il contenuto del file
void leggi_file() {
    FILE *file = fopen("studenti.dat", "rb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }

    Studente s;
    while (fread(&s, sizeof(Studente), 1, file)) {
        printf("\nCognome: %s\n", s.cognome);
        printf("Voti: ");
        for (int i = 0; i < s.num_voti; i++) {
            printf("%d ", s.voti[i]);
        }
        printf("\n");
    }

    fclose(file);
}

// Funzione per contare le occorrenze di uno studente con un determinato cognome
int conta_studente(char *cognome_ricerca) {
    FILE *file = fopen("studenti.dat", "rb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return -1;  // Errore
    }

    Studente s;
    int count = 0;
    while (fread(&s, sizeof(Studente), 1, file)) {
        if (strcmp(s.cognome, cognome_ricerca) == 0) {
            count++;
        }
    }

    fclose(file);
    return count;
}

// Funzione per visualizzare le informazioni di ogni studente
void stampa_informazioni_studente() {
    FILE *file = fopen("studenti.dat", "rb");
    if (file == NULL) {
        printf("Errore nell'apertura del file!\n");
        return;
    }

    Studente s;
    while (fread(&s, sizeof(Studente), 1, file)) {
        int max_voto = s.voti[0], min_voto = s.voti[0];
        int somma = 0;

        // Calcola la somma dei voti, il voto m  assimo e il minimo
        for (int i = 0; i < s.num_voti; i++) {
            if (s.voti[i] > max_voto) max_voto = s.voti[i];
            if (s.voti[i] < min_voto) min_voto = s.voti[i];
            somma += s.voti[i];
        }

        // Calcola la media dei voti
        float media = (float)somma / s.num_voti;

        // Stampa i dati
        printf("\nCognome: %s\n", s.cognome);
        printf("Media voti: %.2f\n", media);
        printf("Voto massimo: %d\n", max_voto);
        printf("Voto minimo: %d\n", min_voto);
    }

    fclose(file);
}

// Funzione main che richiama le altre funzioni
int main() {
    // Scrivere i dati nel file
    scrivi_file();

    // Leggere e stampare i dati dal file
    printf("\nDati letti dal file:\n");
    leggi_file();

    // Contare gli studenti con un cognome specifico
    char cognome_ricerca[50];
    printf("\nInserisci il cognome da cercare: ");
    scanf("%s", cognome_ricerca);
    int occorrenze = conta_studente(cognome_ricerca);
    printf("\nLo studente con il cognome %s appare %d volte.\n", cognome_ricerca, occorrenze);

    // Stampare informazioni complete degli studenti
    printf("\nInformazioni complete degli studenti:\n");
    stampa_informazioni_studente();

    return 0;
}
