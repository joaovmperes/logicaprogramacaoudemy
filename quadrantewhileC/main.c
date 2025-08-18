#include <stdio.h>
#include <stdlib.h>

int main()
{
    double x=1, y=1;

    while (x!=0 && y!=0){
        printf("digite o valor de x\n");
        scanf("%lf", &x);
        printf("digite o valor de y\n");
        scanf("%lf", &y);

        if (x>0 && y>0){
            printf("1 quadrante\n");
        }
        else if (x<0 && y>0){
            printf("2 quadrante\n");
        }
        else if (x<0 && y<0){
            printf("3 quadrante\n");
        }
        else {
            printf("4 quadrante\n");
        }
    }

    return 0;
}
