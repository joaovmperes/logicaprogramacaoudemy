#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hfinal, hinicial;

    printf("digite a hora inicial\n");
    scanf("%d", &hinicial);
    printf("digite a hora final\n");
    scanf("%d", &hfinal);

    if (hfinal>hinicial) {
        printf("duracao: %d", hfinal-hinicial);
    }
    else {
        printf("duracao: %d", 24-hinicial + hfinal);
    }



    return 0;
}
