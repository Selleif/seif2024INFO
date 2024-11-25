//Abdelhalim Seif Eldin 4^H
#include <stdio.h>

int main() {
    FILE* testo;
     char ch;

    testo = fopen("text.txt", "r");
    if(testo != NULL){
        printf("apertura file riuscita :)\n");
    }else {
        printf("apertura file non riusicta :(\n");
        return 1;
    }

    while(!feof(testo)){
        if(ch != EOF){
            printf("%c", ch);
        }
    }

    fclose(testo);
    return 0;
}