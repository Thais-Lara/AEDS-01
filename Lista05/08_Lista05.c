#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include <windows.h> 

//8. 


int fatorial(int num, int fat){

  for(int i = 1; i <= num; i++) {
   
    fat = fat  * i;
    printf(" x %d ", i); 
  }
 printf(" = %d\t", fat); 
return fat;
}


int exercicio08(){

int num = 0, fat = 1;

printf("Insira o valor do número fatorial: ");
scanf("%d", &num);

printf("\n%d! é igual a: %d", num, fatorial(num, fat));

}

int main(void) {

exercicio08();

}