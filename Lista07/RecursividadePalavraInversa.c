/*Impressão das palavras digitadas ao contrário*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Imprimir a mesma palavra de forma recursiva
void printMesma(char palavra[], int posicao){ 

    if (posicao < strlen(palavra)){
        printf("%c", palavra[posicao]);
        printMesma(palavra, posicao + 1);
    }
}

//Imprimir a palavra ao contrário de forma recursiva
void printRec(char palavra[], int posicao){ 

    if (posicao < strlen(palavra)){
        printRec(palavra, posicao +1);
        printf("%c", palavra[posicao]);     
    }
}


int main(void){

    char palavra[20];

    printf ("Entre com uma palavra: \n");
    scanf ("%s", &palavra);

    printf("Mesma: \n");
    printMesma(palavra, 0);

    printf("\nInversa: \n");
    printRec(palavra, 0);

return 0;
}