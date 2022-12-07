#include <stdio.h>
#include <stdlib.h>

int printRec(char palavra){

    for(int i = 0; i < strlen(palavra); i++) {

       char resp = tolower(palavra[i]);
    }
return resp;
}


int main(){

    char palavra[20];

    printf("Entre com uma palavra: ");
    scanf("%s", palavra);

    
    printf("%d\n", printRec(palavra));
    return 0;
}