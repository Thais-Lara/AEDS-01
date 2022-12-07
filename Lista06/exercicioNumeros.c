#include <stdio.h>
#include <stdlib.h>

char printRec(int *numero, int i) { 

    if(i<strlen(numero)){
    printRec(numero, i + 1);
    printf("%c", numero[i]);
    }
}


int main() {

    int numero;

    printf("Escreva um numero: \n");
    scanf("%d", numero);

    printRec(numero, 0);
    printf("\n");

}