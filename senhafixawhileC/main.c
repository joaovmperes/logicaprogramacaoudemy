#include <stdio.h>
#include <stdlib.h>

int main()
{
    int senha;

    printf("Digite a senha\n");
    scanf("%d", &senha);

    if (senha!=2002){
        while (senha!=2002){
            printf("senha invalida! digite novamente\n");
            scanf("%d%", &senha);
        }

    }

    printf("acesso permitido");

    return 0;
}
