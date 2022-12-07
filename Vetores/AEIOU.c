#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int qtsVogais(char palavra[]){
  int resp = 0;
 for (int i = 0; i <= strlen(palavra); i++){
        char letra = tolower(palavra[i]);
        if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u'){
            resp++;
        }
    }

return resp;
}

int main(void) {
  char palavra[20];
  printf("Entre com uma palavra\n");
  scanf("%s", palavra);

  printf("Quantidade de vogais: %d\n", qtsVogais(palavra));
  
  return 0;
}