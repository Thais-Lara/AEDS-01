#include <stdio.h>
#include <stdlib.h>

//4

#define LINHAS 3
#define COLUNAS 3


int main(void){

    int matrix[LINHAS][COLUNAS], vet1[LINHAS], vet2[LINHAS], matrixAux[LINHAS][COLUNAS], aux;


    for (int i = 0; i < LINHAS; i++){
        for(int j = 0; j < COLUNAS; j++){

            printf("\nEntre com 100(CEM) valores: \nboa sorte\n");
            scanf("%d", &matrix[i][j]);

        }
    }


    printf("Matriz:\n");
    for (int i = 0; i < LINHAS; i++){
        printf("|\t");
        for(int j = 0; j < COLUNAS; j++){

            printf("%d\t", matrix[i][j]);

        }
        printf("|\n");
    }

    /*Troca linha 2 com a linha 8*/
    for(int j = 0; j < COLUNAS; j++){

        aux = matrix[0][j];
        matrix[0][j] = matrix[2][j];
        matrix[2][j] = aux;

    }
    printf("\nMatriz depois da troca:\n");
    for (int i = 0; i < LINHAS; i++){
        printf("|\t");
        for(int j = 0; j < COLUNAS; j++){
            
            printf("%d\t", matrix[i][j]);

        }
        printf("|\n");
    }

    /* Diagonal Principal (opção 2)
    
    printf("\nDiagonal Principal:\n");
    int j = 0;
    for(int i = 0; i < LINHAS; i++){
        printf("|\t");
     
        printf("%d\t", matrix[i][i]);
        
        printf("|\n");
    } */

    /* Diagonal Principal */

    printf("\nDiagonal Principal:\n");
    for(int i = 0; i < LINHAS; i++){
        printf("|\t");
        for(int j = 0; j < COLUNAS; j++){

            if(i == j || j == i){
                vet1[i] = matrix[i][j];
                printf("%d\t", matrix[i][j]);
            } else{
                printf("x\t");
            }
        }
         printf("|\n");
    }


    /* Diagonal Secundária */
   
    printf("\nDiagonal secundaria:\n");
    for (int i = 0; i < LINHAS; i++){
        printf("|\t");
        for(int j = 0; j < COLUNAS; j++){

            if(i+j == 2){
                vet2[i] = matrix[i][j];
                printf("%d\t", matrix[i][j]);
            } else {
                printf("x\t");
            }
        }
        printf("|\n");
    }

    /*Troca Diagonais*/

        /* Diagonal Principal depois da troca*/

    printf("\nDiagonal Principal depois da troca:\n");
    for(int i = 0; i < LINHAS; i++){
        printf("|\t");
        for(int j = 0; j < COLUNAS; j++){

            if(i == j || j == i){
                matrix[i][j] = vet2[i];
                printf("%d\t", matrix[i][j]);
            } else{
                printf("x\t");
            }
        }
         printf("|\n");
    }


    /* Diagonal Secundária depois da troca */
   
    printf("\nDiagonal secundaria depois da troca:\n");
    for (int i = 0; i < LINHAS; i++){
        printf("|\t");
        for(int j = 0; j < COLUNAS; j++){

            if(i+j == 2){
                matrix[i][j] = vet1[i];
                printf("%d\t", matrix[i][j]);
            } else {
                printf("x\t");
            }
        }
        printf("|\n");
    }
    
}