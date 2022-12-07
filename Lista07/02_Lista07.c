/*2. Escreva um programa que contenha duas variáveis inteiras. Leia essas variáveis do teclado. Em
seguida, compare seus endereços e exiba o conteúdo do maior endereço.*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){

  int num1, num2;

  printf("Entre com dois números inteiros: ");
  scanf("%d %d", &num1, &num2);

  if(&num1 > &num2){
    printf("O primeiro número possui o maior endereço: %p", &num1);
  } else if(&num2 > &num1) {
    printf("O primeiro segundo possui o maior endereço: %p", &num2);
  }
}