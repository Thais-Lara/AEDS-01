//4

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b, x;

    printf("Entre com o coeficiente angular:\n");
    scanf("%f", &a);
    printf("Entre com o coeficiente linear:\n");
    scanf("%f", &b);
   
    x = -b/a;
    
    printf("A raiz dessa função é: %0.2f\n", x);
    
return 0;
}