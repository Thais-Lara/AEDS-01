/*6. Crie um programa que contenha uma função que permita passar por parâmetro dois numeros
inteiros A e B. A função deverá calcular a soma entre estes dois números e armazenar o resultado
na variável A. Esta função não deverá possuir retorno, mas deverá modificar o valor do primeiro
parâmetro. Imprima os valores de A e B na função principal.*/

#include <stdio.h>
#include <stdlib.h>

void soma(int a, int b){

  int *ptA, *ptB, aux;

  ptA = &a;
  ptB = &b;

  a = *ptA + *ptB;
 
 printf("A soma dos dois valores eh: %d\n", a);
}

int main(void){

  int a, b;

  printf("Insira o valos de A: ");
  scanf("%d", &a);
  printf("Insira o valos de B: ");
  scanf("%d", &b);

  soma(a, b);
}