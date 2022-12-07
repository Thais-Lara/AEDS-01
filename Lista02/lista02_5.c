//5

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void) {

  int coefA1, coefA2, coefB1, coefB2, ind1, ind2, detV, detX, detY, solucaoX, solucaoY;

  printf("Insira o valor dos dois coeficientes a:\n");
  scanf("%d %d", &coefA1, &coefA2);
  printf("Insira o valor dos dois coeficientes b:\n");
  scanf("%d %d", &coefB1, &coefB2);
  printf("Insira o valor dos dois coeficientes independentes:\n");
  scanf("%d %d", &ind1, &ind2);
  
  //Determinantes das variáveis
  detV = (coefA1*coefB2) - (coefB1*coefA2);
  //Determinantes de X
  detX = (ind1*coefB2) - (ind2*coefB1);
  //Determinantes de Y
  detY = (ind2*coefA1) - (ind1*coefA2);

  solucaoX = detX/detV;
  solucaoY = detY/detV;

  printf("As soluções são: X = %d e Y = %d\n", solucaoX, solucaoY);

  return 0;
}