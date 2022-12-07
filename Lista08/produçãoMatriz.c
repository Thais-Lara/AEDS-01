#include <stdio.h>
#include <stdlib.h>

int main(void) {

  int matriz[7][3], dia, semana;

  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 7; j++){
      printf("Entre com o valor da produção do Dia%d, Semana%d\n", i+1, j+1);
      scanf("%d", &matriz[i][j]);
    }
  }

  
  for(int i = 0; i < 3; i++){
    printf("|\t");
    for(int j = 0; j < 7; j++){
      printf("Produção do Dia%d, Semana%d\n", i+1, j+1);
      printf("|");
      printf("%d\t", matriz[i][j]);
      printf("|\n");
    }
  }
  
  
  return 0;
}