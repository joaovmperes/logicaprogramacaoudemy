#include <stdio.h>
#include <stdlib.h>

int main()
{
    double glicose;

    printf("Digite a medida da glicose :\n");
    scanf("%lf", &glicose);

    if (glicose<=100) {
        printf("qtd normal");
    }
    else if (glicose>100 && glicose<=140){
        printf("qtd elevada");
    }
    else {
        printf("diabetes");
    }


    return 0;
}
