//7

#include <stdlib.h>
#include <stdio.h>

int main(void) {

  int atual, anterior1 = 1 , anterior2 = 1, termo, i;

  printf("Entre com o n-ésimo termo:\n");
  scanf("%d", &termo); 

  for(i = 2 ; i <= termo; i++){

    atual = anterior1 + anterior2;
    anterior1 = anterior2;
    anterior2 = atual;
       
  }

  printf("O %dº termo de uma sequência de Fribonacci é: %d\t", termo, atual);
  return 0;
}