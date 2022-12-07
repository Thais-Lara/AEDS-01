//17

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char meunome[20];
    char seunome[20];

    strcpy(meunome, "thais");

    printf("Insira seu nome:\n");
    scanf("%s", seunome);

    meunome[0] = tolower(meunome[0]);
    seunome[0] = tolower(seunome[0]);

    if (strcmp(meunome, seunome) == 0)
    {
        printf("Os nomes são iguais.");
    }
    else
    {
        printf("Os nomes não são iguais.");
    }
    printf("%s %s", meunome, seunome);

return 0;
}