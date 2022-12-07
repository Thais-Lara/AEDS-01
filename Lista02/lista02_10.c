//10

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int dia, mes, ano;

    printf("Insira o dia, mes e ano:\n");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes < 12 && mes > 0)
    {
        if (ano % 4 == 0 && ano % 100 >= 1 || ano % 400 == 0)
        {
            printf("O ano %d é bissexto.\n", ano);
        }
        else
        {
            printf("O ano %d não é bissexto.\n", ano);
        }
    } else {
        printf("Mês inválido.\n");
    }

    return 0;
}