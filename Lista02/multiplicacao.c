#include <stdio.h>

int multi(int num, int vezes){
  int resp = 0;
  if(vezes > 0){
    resp = num + multi(num, vezes-1);
  }
  return resp;
}


int main(void) {
  int num1, num2;
  printf("insira um número:");
  scanf("%d %d", &num1, &num2);

  printf("Resultado: %d", multi(num1, num2));

  return 0;
}