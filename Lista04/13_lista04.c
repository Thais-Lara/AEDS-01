//13

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

void mostra(char digito){

if (digito >= 'A' && digito <= 'Z')
    {

        printf("Maiúsculo.");
    }
    else if (digito >= 'a' && digito <= 'z')
    {
        printf("Minúsculo.");
    }
    else if (digito >= '0' && digito <= '9')
    {
        printf("Dígito.");
    }
    else
    {
        printf("Outro caractere.");
    }
  
}

int main(void)
{
    
    char digito;

    printf("Escreva 1 dígito:\n");
    scanf("%c", &digito);

    mostra(digito);

return 0;
}
