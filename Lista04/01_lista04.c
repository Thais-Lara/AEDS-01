//1

#include <stdio.h>

int main(void) {
  int somaNumero, numero;

  do {
  printf("Insira um números inteiros maiores que 0 e digite 0 para somar:\n");
  scanf("%d", &numero);
  somaNumero = somaNumero + numero;
  } while(numero > 0 || numero != 0);

  if(numero == 0){
  printf("A soma de todos os números inteiros é: %d", somaNumero);
  }
  return 0;
}