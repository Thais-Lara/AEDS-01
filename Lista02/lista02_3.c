//3

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    float num1, num2, num3;

    printf("Entre com três números reais:\n");
    scanf("%f\n%f\n%f", &num1, &num2, &num3);
   

    if (num1 > 0 && num2 > 0 && num3 > 0){
        printf("Os números %0.2f, %0.2f e %0.2f podem ser lados de um triângulo.\n", num1, num2, num3);
    } 
    else{
    printf("Os tres números não podem ser lados de um triângulo.\n");
    }
return 0;
}