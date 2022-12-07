//19

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {

  char caractere;
  int raio, lado, areaT, areaC, areaH, diagonal;

  printf("Insira os caracteres T, Q ou H:\n");
  scanf("%c", &caractere);
  

  caractere = toupper(caractere);
 
  if(caractere == 'T'){
    printf("Insira o valor do raio:\n");
    scanf("%d", &raio);
    lado = raio*sqrt(3);
    areaT = pow(lado, 2)*sqrt(3)/4;
    printf("A area do triângulo é = %d\n", areaT);
  } else if(caractere == 'Q'){
    printf("Insira o valor do raio:\n");
    scanf("%d", &raio);
    diagonal = 2*raio;
    areaC = pow(diagonal, 2)/2;
    printf("A area do quadrado é = %d\n", areaC);
  } else if(caractere == 'H') {
    printf("Insira o valor do raio:\n");
    scanf("%d", &raio);
    areaH = 3*pow(raio, 2)*sqrt(3)/2;
    printf("A area do hexágono é = %d\n", areaH);
  } else {
    printf("Caractere inválido.\n");
  }

 return 0;
}