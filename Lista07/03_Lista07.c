/*3. Faça um programa que leia 2 valores inteiros e chame uma função que receba estas 2 variáveis e
troque o seu conteúdo, ou seja, esta função é chamada passando duas variáveis A e B por exemplo
e, após a execução da função, A conterá o valor de B e B terá o valor de A.*/

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



printf("O valor de A eh: %d. E o valor de B eh %d.", *ptrA, *ptrB);
return 0;
}

int main(void){

  int lA, lB, aux;

  printf("Entre o valor de A e B inteiros: ");
  scanf("%d %d", &lA, &lB);
   
  printf("O valor de A eh: %d. E o valor de B eh %d.\n",lA, lB);

  printf("Depois da chamada da funcao: \n");
  troca(lA, lB, aux);

}