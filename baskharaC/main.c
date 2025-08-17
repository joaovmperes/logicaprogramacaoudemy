#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2;

    printf("digite o coeficiente a: \n");
    scanf("%lf", &a);
    printf("digite o coeficiente b: \n");
    scanf("%lf", &b);
    printf("digite o coeficiente c: \n");
    scanf("%lf", &c);

    if (b*b-4*a*c<0) {
        printf("nao possui raiz real\n");
    }
    else{
        x1= (-b+ sqrt(b*b-4*a*c))/(2*a);
        x2= (-b- sqrt(b*b-4*a*c))/(2*a);
        printf("as raizes da equacao sao %lf e %lf", x1, x2);

    }


return 0;
}
