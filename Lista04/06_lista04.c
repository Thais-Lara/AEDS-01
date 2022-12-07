//6

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int conversao(char mensagem[], int k) {
  int resp = 0;
 for (int i = 0; i <= strlen(mensagem); i++){
   char letra = mensagem[i];
   
   printf("\t%c", letra + k);
  }
return resp;
}

int main(void) {

  int k;
  char mensagem[30];

  printf("Insira uma mensagem: ");
  scanf("%s", mensagem);
  
  printf("insira o valor de k: ");
  scanf("%d", &k);

  conversao(mensagem, k);
  
  return 0;
}