//13

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
    char palavra1[20], palavra2[20];

    printf("Escreva 2 palavras de até 20 caracteres:\n");
    scanf("%s %s", palavra1, palavra2); //não precisa do & quando o char é vetor

    //Sobre o srtcomp:
    //Se a primeira string for menor que a segunda, retorna -1;
    //Se a primeira string for maior que a segunda, retorna 1;
    //Se ambas tiverem valores iguais, retorna 0;
    
    if (strcmp(palavra1, palavra2) < 0)
    {
        printf("%s\t%s", palavra1, palavra2);
    } else  {
        printf("%s\t%s", palavra2, palavra1);
    }
return 0;
}