/*6. 
Fazer um método recursivo que receba um número inteiro n 
e imprima os n primeiros múltiplos de 5.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int exercicio06(int n){
    int resp = 0;
   if (n == 0){
    return 0;
   }
   else if (n == 1) {
       printf("%d X %d = 5\n", 5, n);
     
    return 5;    
   } else {
        resp = 5 + exercicio06(n - 1);
        printf("%d X %d = %d\n", 5, n, resp);
   }
return resp;
}

int main (void) {

    int n;

    printf("Digite a quantidade n de multiplos de 5: ");
    scanf("%d", &n);

    printf("Os %d primeiros numeros multiplos de 5 sao:\n", n);
    exercicio06(n);
}