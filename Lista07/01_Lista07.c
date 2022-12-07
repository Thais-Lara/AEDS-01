/*1. Escreva um programa que declare um inteiro, um real e um char, e ponteiros para inteiro, real,
e char. Associe as variáveis aos ponteiros (use &). Modifique os valores de cada variável usando
os ponteiros. Imprima os valores das variáveis antes e após a modificação.*/

#include <stdio.h>
#include <stdlib.h>


int main(void){

  int inteiro = 10;
  float real = 5.0;
  char caractere = 'a';

  printf("Inicial: \n");
  printf("Inteiro: %d, Real: %f, Char: %c\n", inteiro, real, caractere);

  int *pI = &inteiro;
  float *pR = &real;
  char *pC = &caractere;

  *pI = 5;
  *pR = 8.5;
  *pC = 't';

  printf("Alterado: \n");
  printf("Inteiro: %d, Real: %f, Char: %c", *pI, *pR, *pC);

return 0;
}
