#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void limpar_entrada()
{
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main()
{
    int idade1, idade2;
    char nome1[50], nome2[50];
    double media= (idade1+idade2)/2;

    printf("dados da primeira pessoa\n");
    printf("nome: ");
    fgets(nome1, 50, stdin);
    strtok(nome1, "\n");

    printf("idade: ");
    scanf("%d", &idade1);
    limpar_entrada();
    printf("dados da segunda pessoa\n");
    printf("nome: ");
    fgets(nome2, 50, stdin);

    printf("idade: ");
    scanf("%d", &idade2);
    limpar_entrada();

    media= (double) (idade1+idade2)/2;

    printf("a idade media de %s e %s sera: %lf", nome1, nome2, media);











           return 0;

}
