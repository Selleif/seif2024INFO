//Abdelhalim Seif Eldin 4^H esercizio 7 Novembre ventunesimosecolo anno del terzo decennio del primo lustro 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define NUM_STUD 2
#define NUM_VOTI 5

typedef struct {
    char nome[20];
    char cognome[20];
    int voti[NUM_VOTI];
} Studente;

void Carica(FILE *fileptr);
void Stampa(FILE *fileptr);
int RicercaCognome(FILE *fileptr, char cogn[]);
void StampaInformazioni(FILE *fileptr);

int main() {
    srand(time(NULL));
    
    FILE *fileptr = fopen("Studenti.txt", "wb");
    Carica(fileptr);
    fclose(fileptr);

    fileptr = fopen("Studenti.txt", "rb");
    Stampa(fileptr);
    fclose(fileptr);

    return 0;
}

void Carica(FILE *fileptr) {
    for (int i = 0; i < NUM_STUD; i++) {
        Studente buffer;
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", buffer.nome, buffer.cognome);

        for (int j = 0; j < NUM_VOTI; j++) {
            buffer.voti[j] = rand() % 11;
            printf("Voto %d: %d\n", j + 1, buffer.voti[j]);
        }

        fwrite(&buffer, sizeof(Studente), 1, fileptr);
    }
}

void Stampa(FILE *fileptr) {
    Studente buffer;
    printf("\n+---------------------------------------------------------+\n");
    
    while (fread(&buffer, sizeof(Studente), 1, fileptr) == 1) {
        printf("Nome e cognome  : %s %s\n", buffer.nome, buffer.cognome);
        printf("Voti dell'alunno: ");
        
        for (int j = 0; j < NUM_VOTI; j++) {
            printf("%d ", buffer.voti[j]);
        }
        printf("\n+---------------------------------------------------------+\n");
    }
}