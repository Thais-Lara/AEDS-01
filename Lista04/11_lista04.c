//11

#include <stdio.h>
#include <stdlib.h>

/*11. Faça um programa que mostre na tela os n primeiros elementos da sequência anterior que forem
divisíveis por três AND múltiplos de cinco OR divisíveis por sete*/

void mostrar(int nVezes){

    for(int i = 0; i<= nVezes; i++){

        if(i >= 0 && i % 2 == 1 ){
        
            if((i % 3 == 0 && i % 5 == 0) || i % 7 == 0){
                printf("%d\t", i);
            }
        } 
    }
}

int main(void) {
  
  int nVezes;

  printf("Insira a quantidade de elementos a serem mostradas:\n");
  scanf("%d", &nVezes);

  mostrar(nVezes);

  return 0;
}