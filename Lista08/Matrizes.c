#include <stdlib.h>
#include <stdio.h>
#define TAM 3

void clrscr()
{
    system("@cls|| clear");

}
/*
* Faca um programa que preencha
* uma matriz 10X10 pelo usuario e mostre o numero de
* elementos maiores que 15 e menores que 25.?
*/

int main(){
    int matrix[TAM][TAM];
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            printf("Entre  com o elemento  linha %d coluna %d: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int count = 0;
    for (int i = 0; i < TAM; i++)
    {
        for (int j = 0; j < TAM; j++)
        {
            if (matrix[i][j] > 15 && matrix[i][j] < 25)
                count++;
        }
    }
    clrscr();
    for (int i = 0; i < TAM; i++) {
        printf("|\t");
        for (int j = 0; j < TAM; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("|\n");
    }
    printf("\nA  quantidade  de  elementos  maior  que 15 e menor  que 25 eh: %d \n", count);
    return 0;
}