//8

#include <sdtlib.h>
#include <stdio.h>

int main(void) {

  int lado1, lado2, lado3;

  printf("Insira os 3 lados do triângulo: \n");
  scanf("%d %d %d", &lado1, &lado2, &lado3);
 
  if(lado1 == lado2 && lado2 == lado3){
    printf("Esse triângulo é equilatero.\n");
  } else if (lado1 != lado2 && lado2 != lado3 && lado3 != lado1) {
    printf("Esse triângulo é escaleno.\n");
  }

  if(lado1 == lado2 || lado2 == lado3 || lado3 == lado1){
    if (lado2 != lado3 || lado1 != lado3 || lado1 != lado2 ) {
      printf("Esse triângulo é isosceles.\n");
    }

  }

  return 0;
}