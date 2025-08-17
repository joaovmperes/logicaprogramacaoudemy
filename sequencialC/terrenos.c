#include <stdio.h>
#include <string.h>

int main()
{
    double largura, comprimento, precom;

    printf("digite o valor do comprimento\n");
    scanf("%lf", &comprimento);

    printf("digite o valor da largura\n");
    scanf("%lf", &largura);

    printf("digite o valor do metro quadrado\n");
    scanf("%lf", &precom);

    printf("area do terreno: %.2lf\n", largura*comprimento);
    printf("preco total do terreno: %.2lf\n", largura*comprimento*precom);










    return 0;
}
