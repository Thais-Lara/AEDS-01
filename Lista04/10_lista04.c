//10

#include <stdio.h>
#include <stdlib.h>

//Faça um programa que mostre na tela os n primeiros elementos da sequência 1, 3, 5, 7, 9,...
void mostrar(int nVezes){


    for(int i = 0; i <= nVezes; i++){
        
        if(i >= 0 && i % 2 == 1 ){
        
        printf("%d\t", i);
        
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