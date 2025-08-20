#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n;

    printf("digite a quantidade de numeros a serem digitados (max 10): \n");
    scanf("%d", &n);
    if (n>10){
        printf("valor invalido\n");
    }
    else {
        int vet[n];
        for (i=0;i<n;i++){
            printf("digite um numero: \n");
            scanf("%d", &vet[i]);
        }
        printf("numeros negativos: \n");
        for (i=0;i<n;i++){
            if (vet[i]<0){
                printf("%d\n",vet[i]);
            }
        }
    }

    return 0;
}
