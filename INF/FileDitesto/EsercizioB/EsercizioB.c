//Abdelhalim Seif Eldin 4^h
#include <stdio.h>
int main() {
    FILE* nomiTxt;
    FILE* nomi2Txt;
    char ch;
    // Apri il file nomi.txt in modalità lettura
    nomiTxt = fopen("nomi.txt", "r");
    if (nomiTxt == NULL) {
        printf("Errore nell'apertura del file nomi.txt\n");
        return 1;
    }
    // Apri (o crea) il file nomi2.TXT in modalità scrittura
    nomi2Txt = fopen("nomi2.txt", "w");
    if (nomi2Txt == NULL) {
        printf("Errore nell'apertura del file nomi2.TXT.\n");
        fclose(nomiTxt);
        return 1;
    }
    // Leggi carattere per carattere e converti in maiuscolo se è una lettera minuscola
    while ((ch = fgetc(nomiTxt)) != EOF) {
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - 32;  // Converte il carattere in maiuscolo
        }
        fputc(ch, nomi2Txt);  // Scrivi il carattere nel file nomi2.TXT
    }
    // Chiudi entrambi i file
    fclose(nomiTxt);
    fclose(nomi2Txt);
    printf("Conversione completata. I nomi sono stati scritti in NOMI2.TXT.\n");
    return 0;
}