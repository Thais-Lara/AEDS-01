//15

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1;

    printf("Entre com 1 numero reais:\n");
    scanf("%f", &num1); 


    if (num1 > 0)
    {
        printf("%0.2f é maior que zero.", num1);
    } else if (num1 < 0)  {
        printf("%0.2f é menor que zero.", num1);
    }
    else {
        printf("%0.2f é igual a zero.", num1);
    }
return 0;
}