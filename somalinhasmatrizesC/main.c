#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, m, n;
    double soma=0;

    printf("Digite o numero de linhas da matriz\n");
    scanf("%d", &m);
    printf("Digite o numero de colunas da matriz\n");
    scanf("%d", &n);

    double mat[m][n];
    double vet[m];

    for (i=0;i<m;i++){
            printf("digite os elementos da %da linha\n",i+1);
        for (j=0;j<n;j++){
            scanf("%lf", &mat[i][j]);
            soma+=mat[i][j];
        }
        vet[i]=soma;
        soma=0;
    }

    printf("vetor gerado: ");
    for (i=0;i<m;i++){
        printf("%lf\n", vet[i]);

    }


    return 0;
}
