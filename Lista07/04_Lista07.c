/*4. Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores
de entrada e retorne o maior valor na primeira variável e o menor valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int troca(int lA, int lB, int aux) {

int *ptrA, *ptrB; 

ptrA = &lA;
aux = lA;
ptrB = &lB;

*ptrA = lB;
*ptrB = aux;

return 0;
}

int maiorMenor(int lA, int lB) {

int *ptA, *ptB, aux;

    ptA = &lA;
    ptB = &lB;

  if (*ptA > *ptB) {
        lA = *ptA;
        printf("O maior valor eh: %d.\n", lA);
        printf("O valor de A eh: %d.\n", lA);
        if (*ptB < *ptA){
        lB = *ptB;
        printf("O menor valor eh: %d.\n", lB);
        printf("O valor de B eh: %d.\n", lB);
    }

    if (*ptB > *ptA) {

        troca(lA, lB, aux);
        printf("O maior valor eh: %d.\n",  *ptB);
        printf("O valor de A eh: %d.\n", *ptB);
        
        if (*ptA < *ptB){  
        printf("O menor valor eh: %d.\n", *ptA);
          printf("O valor de B eh: %d.\n", *ptA);
        } 
    }
  }  else {
    printf("Os valores de A e B são iguais.");
  }
  
return 0;
}

int main(void) {

  int lA, lB;

  printf("Entre o valor de A e B inteiros: \n");
  scanf("%d %d", &lA, &lB);
   
  printf("O valor de A eh: %d. E o valor de B eh %d.\n",lA, lB);

  printf("Depois da chamada da funcao: \n");
  maiorMenor(lA, lB);
return 0;
}