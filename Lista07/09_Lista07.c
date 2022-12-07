/*9. Crie um programa que contenha um array contendo 5 elementos inteiros. Leia esse array do
teclado e imprima o endereço das posições contendo valores pares.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array[5], j, *i;
    int *finalArray = &array[5];

    for(j = 0; j < 5; j++){
        printf("Insira os valores do vetor: \n");
        scanf("%d", &array[j]);
    }
    printf("\n");
       for(i = array; i < finalArray; i++){

        if(*i % 2 == 0){
        printf("Valor: %d, Endereco: %p\n", *i, i);
        }
    }      
}
