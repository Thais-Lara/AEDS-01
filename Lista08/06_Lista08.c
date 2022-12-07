#include <stdio.h>
#include <stdlib.h>

//6

#define LIN 3
#define COL 6

int main(void){

    int matrix[LIN][COL], soma, soma2 = 0, soma4 = 0, media2, media4, soma12[COL];

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            printf("Entre com 18 valores:\n");
            scanf("%d", &matrix[i][j]);
        }
    }
    /* Imprimindo a matrix */
    for(int i = 0; i < LIN; i++){
        printf("|\t");
        for(int j = 0; j < COL; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("|\n");
    }



    /* Soma das colunas ÍMPARES */
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            
            if(j % 2 == 1){
                soma += matrix[i][j];
            }
        }
    }
    printf("A soma das colunas impares eh: %d\n", soma);


    /* Media Aritmética coluna 2 e 4*/
    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){
            
           if(j == 2){
               soma2 += matrix[i][j];
           }
           if(j == 4){
               soma4 += matrix[i][j];
           }
        }
    }
    printf("A media da linha 2 eh: %d\n", soma2/LIN);
    printf("A media da linha 4 eh: %d\n", soma4/LIN);

    /* Coluna 6 = coluna 1 + coluna 2 */

    for(int i = 0; i < LIN; i++){
        for(int j = 0; j < COL; j++){         
            
            soma12[j] = matrix[i][1] + matrix[i][0]; 
            matrix[i][5] = soma12[j];    
        }
    }

    /* Imprimindo a matrix depois da soma */
    
    printf("\nMatriz Coluna 6 = coluna 1 + coluna 2:\n");
    for(int i = 0; i < LIN; i++){
        printf("|\t");
        for(int j = 0; j < COL; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("|\n");
    }


}

