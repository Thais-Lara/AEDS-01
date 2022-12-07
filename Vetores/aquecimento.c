#include <stdio.h>
#include <stdlib.h>
//Considerando 5 x 3 = 15
//da mesma forma que 15 = 3 + 3 + 3 + 3 + 3 (O três 5 vezes)
//Portanto 15/3:
//(((((15-3)-3)-3)-3)-3) = 5
//count é o contador


int divisao(int m, int n){
    int count = 0;
    for(int i = 0; i < m; i += n){
        
        count ++;
    }
return count;
}



int main(void){

  int m, n;

  printf("Insira o valor do dividendo: ");
  scanf("%d", &m);
  printf("Insira o valor do divisor: ");
  scanf("%d", &n);

  printf("Resposta: %d", divisao(m, n));
}
