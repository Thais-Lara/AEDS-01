//5

#include <stdlib.h>
#include <stdio.h>

int main(void) {
  int num, i;

  printf("Insira um número:\n");
  scanf("%d", &num);


  for(i = 0; i<=num; i++){
    if(i % 5 == 0){
      
      printf("\t%d eh multiplo de 5\n", i);

    } else {
      printf("X");
    }
  }
  
  return 0;
}