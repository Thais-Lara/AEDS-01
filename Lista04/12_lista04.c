//12

#include <stdio.h>
#include <stdlib.h>

/*12. Seja a sequência da questão anterior, mostre somente os elementos maiores que a e menores que
b, onde a e b são lidos do teclado.*/

void mostrar(int nVezes, int a, int b){

    for(int i = 0; i <= nVezes; i++){

        if(i >= 0 && i % 2 == 1 ){
        
            if((i % 3 == 0 && i % 5 == 0) || i % 7 == 0){
                    if(i > a && i < b ){
                        printf("%d\t", i);
                    }       
            }
        }  
    }
}

int main(void) {
  
  int nVezes, a, b;

  printf("Insira a quantidade de elementos a serem mostradas:\n");
  scanf("%d", &nVezes);
  printf("Insira o valor de a:\n");
  scanf("%d", &a);
  printf("Insira o valor de b:\n");
  scanf("%d", &b);


  mostrar(nVezes, a, b);

  return 0;
}