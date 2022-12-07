//1

#include <stdlib.h>
#include <stdio.h>

int main (void) {
    int dendo, sor, dif, divi;

    printf("Entre com o dividendo:\n");
    scanf("%d", &dendo);
    printf("Entre com o divisor:\n");
    scanf("%d", &sor);

    dif = dendo - sor;
    printf("A diferença é: %d\n", dif);


    if (sor != 0){
        divi = dendo/sor;
        printf("A divisão é igual a: %d\n", divi);
    } 
    else{
    printf("Nenhum número pode ser dividido por 0.\n");
   
    }
return 0;
}