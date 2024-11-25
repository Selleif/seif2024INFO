//Abdelhalim Seif Eldin 4^H esercizio 6 Novembre

#include <stdio.h>   // Includo la libreria per la gestione di input/output (printf, scanf, fopen, etc.)
#include <stdlib.h>  // Includo la libreria per la gestione delle funzioni di allocazione dinamica della memoria e generazione di numeri casuali (rand)
#include <time.h>    // Includo la libreria per la gestione del tempo, necessaria per l'inizializzazione del generatore di numeri casuali

#define NUM_STUD 2   // Definisco la costante NUM_STUD che rappresenta il numero di studenti (2 in questo caso)
#define NUM_VOTI 5   // Definisco la costante NUM_VOTI che rappresenta il numero di voti per ciascun studente

// Definizione di una struttura Studente che contiene:
// - nome: una stringa di massimo 20 caratteri per il nome dello studente
// - cognome: una stringa di massimo 20 caratteri per il cognome dello studente
// - voti: un array di interi che contiene i voti dell'alunno (5 in questo caso)
typedef struct {
    char nome[20];
    char cognome[20];
    int voti[NUM_VOTI];
} Studente;

// Dichiarazione delle funzioni
void Carica(Studente buffer[], FILE *fileptr);  // Funzione per caricare i dati degli studenti nel file
void Stampa(Studente buffer[], FILE *fileptr);  // Funzione per stampare i dati degli studenti letti dal file

int main(int argc, char* argv[]) {
    srand(time(NULL));  // Inizializzo il generatore di numeri casuali con il valore restituito dalla funzione time(NULL), per garantire che i numeri siano diversi ad ogni esecuzione

    // Apre il file "file.txt" in modalità binaria scrittura ("wb")
    FILE *fileptr = fopen("file.txt", "wb");

    // Crea un array di strutture Studente, che contiene i dati di NUM_STUD studenti
    Studente buffer[NUM_STUD];

    // Chiamata alla funzione Carica per caricare i dati nel buffer e scriverli nel file
    Carica(buffer, fileptr);

    // Chiude il file dopo aver scritto i dati
    fclose(fileptr);

    // Riapre il file in modalità binaria lettura ("rb")
    fileptr = fopen("file.txt", "rb");

    // Chiamata alla funzione Stampa per leggere i dati dal file e stamparli a video
    Stampa(buffer, fileptr);

    // Chiude il file dopo aver letto i dati
    fclose(fileptr);

    return 0;  // Termina correttamente il programma
}

// Funzione per caricare i dati degli studenti nel file
void Carica(Studente buffer[], FILE *fileptr) {
    // Ciclo per ogni studente (fino a NUM_STUD)
    for (int i = 0; i < NUM_STUD; i++) {
        // Chiede all'utente di inserire nome e cognome dello studente
        printf("Inserisci nome e cognome dello studente: ");
        scanf("%s %s", buffer[i].nome, buffer[i].cognome);  // Legge il nome e il cognome

        // Genera casualmente i voti per ciascun studente
        for (int j = 0; j < NUM_VOTI; j++) {
            // Genera un voto casuale compreso tra 0 e 10
            buffer[i].voti[j] = rand() % 11;  
            // Stampa ogni voto generato
            printf("Voto %d: %d\n", j + 1, buffer[i].voti[j]);
        }

        // Scrive i dati dello studente nel file in formato binario
        fwrite(&buffer[i], sizeof(Studente), 1, fileptr);
    }
}

// Funzione per stampare i dati degli studenti letti dal file
void Stampa(Studente buffer[], FILE *fileptr) {

    // Ciclo per stampare i dati di ogni studente
    for (int i = 0; i < NUM_STUD; i++) {
        // Legge dal file i dati degli studenti e li memorizza nel buffer
        fread(&buffer, sizeof(Studente), 1, fileptr);
        int somma = 0;           // Variabile per calcolare la somma dei voti
        int votoMax = buffer[i].voti[0]; // Imposto il primo voto come massimo iniziale
        int votoMin = buffer[i].voti[0]; // Imposto il primo voto come minimo iniziale

        // Calcolo la somma dei voti, il voto massimo e il voto minimo
        for (int j = 0; j < NUM_VOTI; j++) {
            somma += buffer[i].voti[j];    // Sommo il voto
            if (buffer[i].voti[j] > votoMax) {  // Trovo il voto massimo
                votoMax = buffer[i].voti[j];
            }
            if (buffer[i].voti[j] < votoMin) {  // Trovo il voto minimo
                votoMin = buffer[i].voti[j];
            }
        }

        // Calcolo la media dei voti
        float media = (float)somma / NUM_VOTI;

        // Stampa una linea di separazione per formattare l'output
        printf("\n+---------------------------------------------------------+\n");

        // Stampa il nome, cognome, media, voto massimo e minimo dello studente
        printf(" Nome e cognome :     %s %s                               \n", buffer[i].nome, buffer[i].cognome);
        printf(" Media dei voti:      %.2f                               \n", media);
        printf(" Voto più alto:       %d                                 \n", votoMax);
        printf(" Voto più basso:      %d                                 \n", votoMin);

        // Stampa i voti dell'alunno
        printf(" Voti dell'alunno:    ");
        for (int j = 0; j < NUM_VOTI; j++) {
            printf("%d ", buffer[i].voti[j]);  // Stampa ogni voto
        }
        printf("\n+---------------------------------------------------------+\n");
    }
}
