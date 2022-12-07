//11

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float num1, num2, maior, menor;

    printf("Insira o primeiro número:\n");
    scanf("%f", &num1);
    printf("Insira o segundo número:\n");
    scanf("%f", &num2);

    if (num1 > num2)
    {
        maior = num1;
        menor = num2;
        printf("O número %0.2f é maior e o %0.2f é o menor.\n", maior, menor);
   
    } else if (num2 > num1)
        {
            maior = num2;
            menor = num1;
            printf("O número %0.2f é maior e o %0.2f é o menor.\n", maior, menor);
        } 
        else
        {
            printf("Os dois números são iguais.\n");
        } 

    return 0;
}