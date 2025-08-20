#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;
    double soma=0;
    printf("digite o numero de elementos do vetor\n");
    scanf("%d", &n);

    double vet[n];

    for (i=0;i<n;i++){
        printf("digite um numero");
        scanf("%lf", &vet[i]);
        soma+=vet[i];
    }
    printf("numeros digitados: ");
    for (i=0;i<n;i++){
        printf("%lf, ",vet[i]);
    }
    printf("\n");
    printf("soma: %lf\n", soma);
    printf("media: %lf\n",soma/n);


    return 0;
}
