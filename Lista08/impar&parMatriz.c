#include <stdio.h>
#include <stdlib.h>

#define TAM 3


int main(void) {

  int matriz[TAM][TAM], countPar = 0, countImpar = 0;

  for(int i = 0; i < TAM; i++){
    for(int j = 0; j < TAM; j++){
      
    printf("Entre com o valor da linha %d coluna %d\n", i+1, j+1);
    scanf("%d", &matriz[i][j]);
    }
  }
  for(int i = 0; i < TAM; i++){
    
    printf("|\t");
    for(int j = 0; j < TAM; j++){

        if(matriz[i][j] % 2 == 0){
        countPar++;
        } else {
        countImpar++;
        }  
        printf("|\n");
    }
  }
  printf("%d pares, %d impares", countPar, countImpar);
   
  return 0;
}
