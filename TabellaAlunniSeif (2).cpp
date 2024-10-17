//ABDELHALIM SEIF ELDIN 4^H TABELLA ESRCIZIO C

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

#define DIM_COGN 50
#define NUM_VOTI 4
#define NUM_STUD 2

typedef struct Data {
    int giorno;
    int mese;
    int anno;
} Data;

typedef struct Studente {
    char nome[30];
    char cognome[DIM_COGN];
    Data dataNascita;  // Cambiato il nome della variabile per maggiore chiarezza
    int voti[NUM_VOTI];
} Studente;

void caricaTab(Studente t[]);
void stampaTab(Studente t[]);
int ricercaCogn(Studente t[], char cog[]);
int stampaMedia(Studente t[]);
int studenti10(Studente t[]);
void stampaMaiuscola(Studente t[]);

int main() {

    srand(time(NULL));
    Studente studente[NUM_STUD]; // Corretta la dichiarazione dell'array con il tipo Studente
    caricaTab(studente);
	stampaTab(studente);
	studenti10(studente);

	char TrovaCognome[30];
	printf("Insersic il cognome da cercare: \n");
	scanf("%s", TrovaCognome);
	int trovato = ricercaCogn(studente, TrovaCognome);
	
	if(trovato == 1){
		printf("cognome %s trovato!\n", TrovaCognome);
	}else{
		printf("Cognome non trovato\n");
	}
	
	int MediePositive = stampaMedia(studente);
	printf("Le medie positive sono:  %d\n", MediePositive);
}

void caricaTab(Studente t[]){
	for(int i = 0; i < NUM_STUD; i++){
		printf("Inserisci il tuo nome e cognome: ");
		scanf("%s %s", t[i].nome, t[i].cognome );
		printf("Inserisci la tua data di nascita: ");
		scanf("%d %d %d", &t[i].dataNascita.anno, &t[i].dataNascita.mese, &t[i].dataNascita.giorno);
		printf("Inserisci i tuoi voti: ");
		for(int j = 0; j < NUM_VOTI; j++){
			scanf("%d", &t[i].voti[j]);
		}
	}
}

void stampaTab(Studente t[]){
    printf("---------------------------------------------------------------\n");
    printf("COGNOME                        NOME                       DATA                   VOTI\n");
    
    for(int i = 0; i < NUM_STUD; i++){
        // Stampa nome, cognome e data di nascita dello studente
        printf("%s                      %s                     %d/%d/%d             %d\n", 
            t[i].cognome, t[i].nome, 
            t[i].dataNascita.giorno, t[i].dataNascita.mese, t[i].dataNascita.anno, 
            t[i].voti[0]); // Il primo voto

        // Stampa i voti rimanenti
        for(int j = 1; j < NUM_VOTI; j++) {
            printf("                                                                                 %d\n", t[i].voti[j]);
        }
        
        printf("---------------------------------------------------------------\n");    
    }
}


int ricercaCogn(Studente t[], char cog[]) {
    for (int i = 0; i < NUM_STUD; i++) {
        if (strcmp(t[i].cognome, cog) == 0) {
            return 1; // Trovato
        }
    }
    return 0; // Non trovato
}

int stampaMedia(Studente t[]) {
    int MediaPos = 0;
    for (int i = 0; i < NUM_STUD; i++) { // Modificato per iterare sugli studenti
        int somma = 0; // Inizializza somma a zero
        for (int j = 0; j < NUM_VOTI; j++) {
            somma += t[i].voti[j];
        }
        int media = somma / NUM_VOTI;
        if (media >= 6) {
            MediaPos++;
        }
    }
    return MediaPos;
}

int studenti10(Studente t[]){
	  int cont = 0;
	  for(int i = 0; i < NUM_STUD; i++){
	  	for(int j = 0; j < NUM_VOTI; j++){
	  		if(t[i].voti[j] == 10){
	  			cont++;
			  }
		  }
	  }
	  return cont;
}
