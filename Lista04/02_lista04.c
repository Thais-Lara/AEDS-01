//2

#include <stdlib.h>
#include <stdio.h>

int main(void) {

  int atual, anterior1 = 1 , anterior2 = 1, termos, i;

  printf("Entre com o número de termos:\n");
  scanf("%d", &termos);

  printf("%d\t%d\t", anterior1, anterior2);

  for(i = 2 ; i <= termos; i++){

    atual = anterior1 + anterior2;
    printf("%d\t", atual);

    anterior1 = anterior2;
    anterior2 = atual;   
  }
  return 0;
}