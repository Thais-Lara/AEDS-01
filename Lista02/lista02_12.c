//12

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char char1, char2;

    printf("Escreva 2 caracteres:\n");
    scanf("%c %c", &char1, &char2);

    if (tolower(char1) < tolower(char2))
    {
        printf("%c\t%c", char1, char2);
    } else  {
        printf("%c\t%c", char2, char1);
    }
return 0;
}