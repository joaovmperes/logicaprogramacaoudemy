#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, fat=1;

    printf("Digite o numero cujo fatorial sera calculado\n");
    scanf("%d", &n);

    for(i=n; i>0; i--){
        fat*=i;

    }
    printf("%d fatorial= %d",n, fat);



    return 0;
}
