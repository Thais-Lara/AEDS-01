//16

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
    int num, quadrado, cubo;

    printf("Entre com 1 numero reais:\n");
    scanf("%d", &num); 


    if (num % 2 == 0)
    {
        quadrado = sqrt(num);
        printf("Resultado: %d", quadrado);
    } 
    else {
        cubo = cbrt(num);
        printf("Resultado: %d", cubo);
    }
return 0;
}