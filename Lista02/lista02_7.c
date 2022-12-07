//7

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    float num1, num2;

    printf("Entre com o primeiro número:\n");
    scanf("%f", &num1);
    printf("Entre com o segundo número:\n");
    scanf("%f", &num2);
  

    if (num1 > num2){
        printf("O número %0.2f é maior do que o %0.2f\n", num1, num2);
    } 
    else if (num2 > num1) {
        printf("O número %0.2f é maior do que o %0.2f\n", num2, num1);
    }
    else {
    printf("O primeiro e o segundo número são iguais.\n");
    }

return 0;
}