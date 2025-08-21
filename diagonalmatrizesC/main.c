#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, n, ctn=0;

    printf("digite a ordem da matriz quadrada\n");
    scanf("%d", &n);

    int mat[n][n];

    for (i=0;i<n;i++){
        for (j=0; j<n;j++){
            printf("elemento [%d, %d]", i, j);
            scanf("%d", &mat[i][j]);
            if (mat[i][j]<0){
                ctn++;
            }
        }
    }
    printf("diagonal principal: ");
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            if (i==j){
                printf("%d ", mat[i][j]);
            }
        }
    }
    printf("quantidade de numeros negativos: %d", ctn);
    return 0;
}
