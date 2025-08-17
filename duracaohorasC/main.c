#include <stdio.h>
#include <stdlib.h>

int main()
{
    int segundos;
    printf("escreva a duracao em segundos\n");
    scanf("%d", &segundos);

    printf("%d : %d : %d", (segundos-segundos%3600)/3600, (segundos%3600)/60,segundos%3600%60);






    return 0;
}
