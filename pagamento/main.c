#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    double valorhora;
    int horatotal;
    char nome[50];


    printf("digite o nome\n");

    fgets(nome, 50, stdin);
    strtok(nome, "\n");

    printf("valor por hora\n");
    scanf("%lf", &valorhora);

    printf("total de horas trabalhadas:\n");
    scanf("%d", &horatotal);

    printf("o pagamento total de %s sera de %lf", nome, horatotal*valorhora);



    return 0;
}
