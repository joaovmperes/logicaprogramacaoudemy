#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, i, temp, soma=0;


    printf("digite dois numeros\n");
    scanf("%d", &x);
    scanf("%d", &y);

    if (x>y){
        temp=x;
        x=y;
        y=temp;
    }
    for (i=x+1; i<y; i++){
        if (i%2==1);
            soma+=i;
        }

    printf("soma dos impares entre os numeros digitados: %d", soma);
    return 0;
}
