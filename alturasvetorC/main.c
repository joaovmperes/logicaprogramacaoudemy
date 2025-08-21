#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

void ler_texto(char *buffer, int length) {
 fgets(buffer, length, stdin);
 strtok(buffer, "\n");
}

int main()
{
    int i, n, ctu=0;
    double soma=0;
    printf("quantidade de pessoas a terem dados digitados: \n");
    scanf("%d", &n);

    char nomes[n][50];
    int idades[n];
    double alturas[n];

    for (i=0;i<n;i++){
        printf("digite dados da %da pessoa: \n",i+1);

        printf("nome: ");
        limpar_entrada();
        ler_texto(nomes[i], 50);

        printf(" idade: ");
        scanf("%d", &idades[i]);
        if (idades[i]<16){
            ctu++;
        }

        printf(" altura: ");
        scanf("%lf", &alturas[i]);
        soma+=alturas[i];

    }
    printf("\n altura media: %lf\n", soma/n );
    printf("percentual de menores de 16 anos: %lf\n", ((double)ctu/n)*100);
    for (i=0;i<n;i++){
        if (idades[i]<16){
        printf("%s\n", nomes[i]);
        }
    }
    return 0;
}
