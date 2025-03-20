//Abdelhalim Seif 4^H

#include <stdio.h>
#include <string.h>
#define MAX 5

// Definizione della struttura Persona
typedef struct {
    char nome[50];
    char cognome[50];
    int voto;
} Persona;

// Funzione per caricare l'array di record
void carica(Persona St[]) {
    for (int i = 0; i < MAX; i++) {
        printf("Inserisci i dati per lo studente %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", St[i].nome);
        printf("Cognome: ");
        scanf("%s", St[i].cognome);
        printf("Voto: ");
        scanf("%d", &St[i].voto);
        printf("\n");
    }
}

// Funzione per stampare tutti i record
void stampa(Persona St[]) {
    printf("\nElenco degli studenti:\n");
    for (int i = 0; i < MAX; i++) {
        printf("Studente %d: Nome = %s, Cognome = %s, Voto = %d\n", 
               i + 1, St[i].nome, St[i].cognome, St[i].voto);
    }
}

// Funzione per visualizzare la media dello studente con un dato cognome
int visualizzaMedia(Persona St[], char cog[]) {
    int somma = 0, count = 0;
    for (int i = 0; i < MAX; i++) {
        if (strcmp(St[i].cognome, cog) == 0) {
            somma += St[i].voto;
            count++;
        }
    }
    if (count > 0) {
        printf("La media dei voti per il cognome %s è %.2f\n", cog, (float)somma / count);
        return 1;
    } else {
        printf("Studente con cognome %s non trovato.\n", cog);
        return -1;
    }
}

// Funzione per trovare il voto massimo
int votoMassimo(Persona St[]) {
    int max = St[0].voto;
    for (int i = 1; i < MAX; i++) {
        if (St[i].voto > max) {
            max = St[i].voto;
        }
    }
    return max;
}

// Funzione per trovare l'indice del voto massimo
int indiceVotoMassimo(Persona St[]) {
    int max = St[0].voto;
    int trovato = 0;
    for (int i = 1; i < MAX; i++) {
        if (St[i].voto > max) {
            max = St[i].voto;
            trovato = i;
        }
    }
    return trovato;
}

int main() {

    Persona St[MAX];
    char cognome[50];
    
    // Chiamata alla funzione carica per riempire l'array
    carica(St);
    
    // Chiamata alla funzione stampa per visualizzare tutti i record
    stampa(St);
    
    // Chiedere un cognome e visualizzare la media
    printf("Inserisci il cognome per visualizzare la media: ");
    scanf("%s", cognome);
    visualizzaMedia(St, cognome);
    
    // Visualizzare il voto massimo
    int maxVoto = votoMassimo(St);
    printf("Il voto massimo tra tutti gli studenti è: %d\n", maxVoto);
    
    // Visualizzare il cognome dello studente con il voto massimo
    int indice = indiceVotoMassimo(St);
    printf("Lo studente con il voto massimo è %s, %s\n", St[indice].nome, St[indice].cognome);
    
    return 0;
}
