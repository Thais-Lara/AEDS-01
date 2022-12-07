#include <stdio.h>
#include <stdlib.h>

char printRec(char *palavra, int i) { //ou palavra[]

    if(i<strlen(palavra)){
    printRec(palavra, i + 1);
    printf("%c", palavra[i]);
    }
}


int main() {

    char palavra[20];

    printf("Escreva uma palavra: \n");
    scanf("%s", palavra);

    printRec(palavra, 0);
    printf("\n");

}