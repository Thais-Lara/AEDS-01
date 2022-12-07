//2

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    int numero;

    printf("Entre com um numero inteiro:\n");
    scanf("%d", &numero);
   

    if (numero % 7 == 0){
        printf("O número %d é divisível por 7.\n", numero);
    } 
    else{
    printf("O número %d não é divisível por 7.\n", numero);
    }
return 0;
}
