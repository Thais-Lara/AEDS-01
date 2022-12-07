/*7. Crie um programa que contenha um array de float contendo 10 elementos. Imprima o endereço
de cada posição desse array.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main (void){

    float array[TAM], *ptArray;

    ptArray = array;

    for(int i = 0; i < TAM; i++){
        printf("Endereco %d: %d\n", i, (int)&ptArray[i]);
    }
return 0;
}