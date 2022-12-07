/*5. Elaborar um programa que leia dois valores inteiros (A e B). Em seguida faça uma função que
retorne a soma do dobro dos dois numeros lidos. A função deverá armazenar o dobro de A na
propria variável A e o dobro de B na própria variável B.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


int soma(int a, int b, int aux) {

int *ptrA, *ptrB, soma; 

ptrA = &a;
ptrB = &b;

*ptrA = a*a;
*ptrB = b*b;

soma = *ptrA + *ptrB;

return soma;
}

int main(void) {

  int a , b, aux;

  printf("Entre o valor de A e B inteiros: \n");
  scanf("%d %d", &a, &b);
   
  printf("O valor de A eh: %d.\nO valor de B eh %d.\n", a, b);

  printf("A soma do dobro de a e de b é: %d", soma(a, b, aux));
return 0;
}