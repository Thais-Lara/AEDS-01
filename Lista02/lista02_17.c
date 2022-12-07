#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

char verifica(char nome1, char nome2){
char resp;
  if(strlen(nome1) == strlen(nome2)){
    printf("Os nomes são iguais.");
  } else {
    printf("Os nomes não são iguais.");
  }

return resp;
}
int main (void){
    char nome1[20];
    char nome2[20];

    printf("Insira o primeiro nome:\n");
    scanf("%s", nome1);
    printf("Insira o segundo nome:\n");
    scanf("%s", nome2);

    verifica(nome1, nome2);  
return 0;  
}