//Abdelhalim Seif 4^H

#include <stdio.h>
#include <string.h>
#define N 4

typedef struct data{
    int giorno;
    char mese[20];
    int anno;
}data;

typedef struct persona{ 
    char cognome[20];
    data nascita;
    int voti[N];
}persona;

int main(){
    persona pippo, topolino;
    int anni, media;
    int somma_voti = 0;

    printf("inserisci il cognome: ");
    scanf("%s", pippo.cognome);
    printf("inserisci il giorno di nascita: ");
    scanf("%d", &pippo.nascita.giorno);
    printf("inserisci il mese di nascita: ");
    scanf("%s", pippo.nascita.mese);
    printf("inserisci anno di nascita: ");
    scanf("%d", &pippo.nascita.anno);
    printf("inserisci %d voti: ", N);
    for(int i=0; i<N; i++){
        scanf("%d", &pippo.voti[i]);
        somma_voti += pippo.voti[i];
    }
    printf("il cognome dello studente e': %s\n", pippo.cognome);
    printf("il giorno di nascita dello studente e': %d\n", pippo.nascita.giorno);
    printf("il mese di nascita dello studente e': %s\n", pippo.nascita.mese);
    printf("l'anno di nascita dello studente e': %d\n", pippo.nascita.anno);
    
    for(int i=0; i<N; i++){
        printf("%d\t", pippo.voti[i]);
    }
    printf("\n");
    
    anni = 2025-pippo.nascita.anno;
    printf("eta = %d\n", anni);
    
    media = somma_voti / N;
    printf("la media dei voti e': %d\n", media);
}