#include <stdio.h>
#include <math.h>

int main()
{
    double base, altura, area, diagonal, perimetro;

    printf("base do retangulo: \n");
    scanf("%lf", &base);
    printf("altura do retangulo: \n");
    scanf("%lf", &altura);

    area= base * altura;
    perimetro= 2*base + 2*altura;
    diagonal= sqrt(base * base + altura*altura);

    printf("area : %lf\n", area);
    printf("perimetro: %lf\n", perimetro);
    printf("diagonal: %lf\n", diagonal);
















    return 0;
}
