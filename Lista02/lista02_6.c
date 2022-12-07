//6

#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (void) {
    float a, b, c, delta, x1, x2;

    printf("Entre com o coeficiente a:\n");
    scanf("%f", &a);
    printf("Entre com o coeficiente b:\n");
    scanf("%f", &b);
    printf("Entre com o coeficiente c:\n");
    scanf("%f", &c);

    delta = pow(b, 2) - 4*a*c;
    x1 = -(b) + sqrt(delta)/2*a;
    x2 = -(b) - sqrt(delta)/2*a;

    if (delta < 0){
        printf("As raízes imaginárias são:\nx'=%0.9f, x''=%0.9f \n", x1, x2);
    } 
    else {
        printf("A(s) raiz(es) reais da função é(são):\nx'=%0.2f, x''=%0.2f \n", x1, x2);
    }

return 0;
}