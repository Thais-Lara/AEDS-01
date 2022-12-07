#include <stdlib.h>
#include <stdio.h>

//9

int main(void) {
  int inteiro = 1;
  float real = 2.5;

  printf("Insira um número inteiro menor que 10:\n");
  scanf("%d", &inteiro);
  printf("Insira um número real menor que 10:\n");
  scanf("%f", &real);

  do{

    printf("Inteiro: %d\n", inteiro);
    printf("Real: %.2f\n", real);
    inteiro--;
    inteiro--;
    real++;

  } while(inteiro <= 10 && real <= 10);
  

  return 0;
}