#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}


int main()
{
    int i, n, qtdc=0, qtdr=0, qtds=0, qtd;
    char tipo;

    printf("digite a quantidade de casos\n");
    scanf("%d", &n);

    for (i=0;i<n;i++){

        printf("quantidade de cobaias: \n");
        scanf("%d", &qtd);
        limpar_entrada();
        printf("tipo da cobaia (c/r/s): \n");
        scanf("%c", &tipo);
        if (tipo=='c'){
            qtdc+=qtd;
        }
        else if (tipo=='r'){
            qtdr+=qtd;
        }
        else if (tipo=='s'){
            qtds+=qtd;
        }
        else {
            printf("tipo invalido\n");
        }
    }

        printf("RELATORIO FINAL\n");
        printf("total de cobaias: %d\n", qtdc+qtdr+qtds);
        printf("total de coelhos: %d\n", qtdc);
        printf("total de ratos: %d\n", qtdr);
        printf("total de sapos: %d\n ", qtds);
        printf("percentual de coelhos: %.2lf\n", ((double)qtdc/(qtdc+qtdr+qtds))*100);
        printf("percentual de ratos: %.2lf\n", ((double)qtdr/(qtdc+qtdr+qtds))*100);
        printf("percentual de sapos: %.2lf \n", ((double)qtds/(qtdc+qtdr+qtds))*100);


    return 0;

}
