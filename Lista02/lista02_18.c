//18

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>


int main (void){
    int num1, num2, lado1, lado2, areaC, areaC2, areaQ, raio, raio2, areaCoroa;
   

    printf("Insira o primeiro número inteiro:\n");
    scanf("%d", &num1);
    printf("Insira o segundo número inteiro:\n");
    scanf("%d", &num2);
  
  if(num1 == 1 || num1 == 2 && num2 == 1 || num2 == 2) {
    printf("Insira o lado 1 do retângulo:\n");
    scanf("%d", &lado1);
    printf("Insira o lado 2 do retângulo:\n");
    scanf("%d", &lado2);

    areaC = 3.14*pow(sqrt(pow(lado1, 2) + pow(lado2, 2)/2), 2);
    printf("A área de um circulo circunscrito em um retângulo é: %d", areaC);
  } else if (num1 == 3 || num1 == 4 || num1 == 5 && num2 == 3 || num2 == 4 ||num2 == 5) {
    printf("Insira o lado raido do círculo:\n");
    scanf("%d", &raio);

    lado1 = raio*sqrt(2);
    lado2 = lado1;
    areaQ = lado1*lado2;
    printf("A área do quadrado circuscrito na circunferência é: %d", areaQ);
  } else {
    printf("Insira o lado do quadrado:\n");
    scanf("%d", &lado1);

    raio = lado1*sqrt(2)/2;
    areaC = 3.14*pow(raio, 2); //circulo circunscrito no quadrado
    raio2 = lado1/2;
    areaC2 = 3.14*pow(raio2, 2); //circulo inscrito no quadrado
    areaCoroa = areaC - areaC2;

    printf("A área da coroa circular é: %d", areaCoroa);
  }
return 0;  
}