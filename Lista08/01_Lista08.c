#include <stdlib.h>
#include <stdio.h>

//1

#define COLUNAS 3
#define LINHAS 4

void clrscr()
{
    system("cls@|| clear");
}

int main(void)
{

    int matrix[LINHAS][COLUNAS], maiorNum, menorNum, pLinha, pColuna;
    int media = 0;
    int soma = 0;

    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            printf("Insira o valor da linha %d e coluna %d: \n", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }


    int maior = 0;
    for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {

            if (matrix[i][j] > maior)
            {
                maior = matrix[i][j];    
            }

            int menor;
            if(i == 0 && j == 0){
                menor = matrix[i][j];
            }
            if(matrix[i][j] < menor){
                menor = matrix[i][j];    
            }
            maiorNum = maior;
            menorNum = menor;
            pLinha = i +1;
            pColuna = j +1;
        }  
    }
    printf("O maior numero eh o %d - linha %d, coluna %d\n", maiorNum, pLinha, pColuna);
    printf("O menor numero eh o %d - linha %d, coluna %d\n", menorNum, pLinha, pColuna);

      for (int i = 0; i < LINHAS; i++)
    {
        for (int j = 0; j < COLUNAS; j++)
        {
            soma = soma + matrix[i][j];
        }
    }

    printf("A media eh %d\n", media = soma/(LINHAS*COLUNAS));


    for (int i = 0; i < LINHAS; i++) {
        printf("|\t");
        for (int j = 0; j < COLUNAS; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("|\n");
    }
    
    return 0;
}