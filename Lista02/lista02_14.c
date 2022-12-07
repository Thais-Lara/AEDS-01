//13

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float num1, num2, div;

    printf("Entre com 2 numeros reais:\n");
    scanf("%f %f", &num1, &num2); 

   div = num1 / num2; 

    if (num2 != 0)
    {
        printf("%0.2f", div);
    } else  {
        printf("Não existe divisão por 0");
    }
return 0;
}