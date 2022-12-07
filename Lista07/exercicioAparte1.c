#include <stdio.h>

int quadrado(int a, int m){
  int resp;

  if (m == 0){
    return 1;
  } else{
    resp = a * quadrado(a, m-1);
  }
return resp;
}


int cubo(int a, int n){
  int resp;

  if (n == 0){
    return 1;
  } else{
    resp = a * cubo(a, n-1);
  }
return resp;
}


int main(void) {

  int a, n = 3, m = 2;

  printf("Insira um número inteiro\n");
  scanf("%d", &a);

  printf("O cubo de a é igual a: %d\n", cubo(a, n));
  printf("O quadrado de a é igual a: %d\n", quadrado(a, m));

  return 0;
}