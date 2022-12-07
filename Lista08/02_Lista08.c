#include <stdlib.h>
#include <stdio.h>

//2

#define TAM 4



int main(void){

    int matrix[TAM][TAM], somaTotal;

    for(int i = 0; i < TAM; i++){
        for(int j = 0; j < TAM; j++){

            printf("Insira os valores da matriz: \n");
            scanf("%d", &matrix[i][j]);
        }
    }
    /* Soma */
    int soma = 0;
    for(int i = 0; i < TAM; i++){
        printf("|\t");
        for(int j = 0; j < TAM; j++){
            
            if(i == j || j == i || (i > j)){
                soma += matrix[i][j];
                printf("%d\t", matrix[i][j]);
               
            } else{
                printf("x\t");
            } 
            somaTotal = soma;
            
        }
        printf("|\n");
    } 
    printf("Soma: %d\t", somaTotal);

    printf("\n");
    printf("\n");

    /* Diagonal */

     for(int i = 0; i < TAM; i++){
        printf("|\t");
        for(int j = 0; j < TAM; j++){

            if(i == j || j == i){
                printf("%d\t", matrix[i][j]);
            } else{
                printf("x\t");
            }
        }
         printf("|\n");
    }
return 0;
}