//9

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

  int lado1, lado2, lado3, lado11, lado22, lado33;

  printf("Insira o valor dos lados de um triângulo:\n");
  scanf("%d %d %d", &lado1, &lado2, &lado3);
  
  
  lado11 = pow(lado1, 2);
  lado22 = pow(lado2, 2);
  lado33 = pow(lado3, 2);

  if(lado11 < (lado22 + lado33) && lado22 < (lado11 + lado33) && lado33 < (lado22 + lado11)) {
    printf("Angulo ocutângulo.\n");
  } else if(lado11 == (lado22 + lado33) || lado22 == (lado11 + lado33) || lado33 == (lado22 + lado11)) {
    printf("Angulo retângulo.\n");
  } else if(lado11 > (lado22 + lado33) && lado22 > (lado11 + lado33) && lado33 > (lado22 + lado11)) {
    printf("Angulo obtusângulo.\n");
  }
  return 0;
}