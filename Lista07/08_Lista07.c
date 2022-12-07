/*8. Crie um programa que contenha um array de inteiros contendo 5 elementos. Utilizando apenas
aritmetica de ponteiros, leia esse array do teclado e imprima o dobro de cada valor lido.*/

#include <stdio.h>
#include <stdlib.h>

int main(void){

    int array[5], j, *i;
    int *finalArray = &array[5];

    for(j = 0; j < 5; j++){
        printf("Digite os valores do vetor:\n");
        scanf("%d", &array[j]);
    }
    printf("\n");
    for(i = array; i < finalArray; i++){
        printf("%d\n", (*i)*2);
    }
return 0;
}