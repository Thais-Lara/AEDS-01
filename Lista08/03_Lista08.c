#include <stdlib.h>
#include <stdio.h>

//3

void matriz(int linha, int coluna){

    int matrizA[linha][coluna], matrizT[linha][coluna], aux;

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("Insira os valores da matriz: \n");
            scanf("%d", &matrizA[i][j]);
        }
    }

    /* Matriz A */
    printf("Matriz:\n");
    for (int i = 0; i < linha; i++) {
        printf("|\t");
        for (int j = 0; j < coluna; j++) {
            printf("%d\t", matrizA[i][j]);
        }
        printf("|\n");
    }

    /* Matriz T */

    for (int i = 0; i < linha; i++) {
        
        for (int j = i + 1; j < coluna; j++) {
            aux = matrizA[i][j];
            matrizA[i][j] = matrizA[j][i]; //Troca o da linha pelo da coluna
            matrizA[j][i] = aux; //Troca o da coluna pelo da linha
        }
        
    }

    /* Transposição */

    for (int i = 0; i < linha; i++) {
      
        for (int j = 0; j < coluna; j++) {

            matrizT[i][j] = matrizA[i][j];   
        }
    }

    printf("Matriz Transposta:\n");
    for (int i = 0; i < linha; i++) {
        printf("|\t");
        for (int j = 0; j < coluna; j++) {
            
            printf("%d\t", matrizT[i][j]);   
        }
        printf("|\n");
    }
}


int main(void){

    int i, j, linha, coluna;

    printf("Insira quantas linhas a matriz deve ter: \n");
    scanf("%d", &linha);
    printf("Insira quantas colunas a matriz deve ter: \n");
    scanf("%d", &coluna);

    matriz(linha, coluna);

}