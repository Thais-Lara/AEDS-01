/*12. Crie uma função que receba como parâmetro um array e o imprima. Não utilize índices para
percorrer o array, apenas aritmética de ponteiros.*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int impressaoAritmetica(int *array){
    printf("Valores do array:\n");
    int *i;
    int *finalArray = &array[TAM];
    for(i = array + 1; i <= finalArray; i++){ //O +1 é para andar uma casa no endereço do array e não imprimir o indice 0
        printf("%d\t", *i);
    }
}

int main(void){

    int array[TAM], j;
    *array = 0;

    for(j = 1; j <= TAM; j++){
        printf("Escreva o valor %d:\n", j);
        scanf("%d", &array[j]);
    }

    impressaoAritmetica(array);

}