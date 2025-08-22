#include <stdio.h>
#include <stdlib.h>


int digitos_iguais(long long int cpf){
    int ref= cpf/10000000000;
    for (int i=0; i<11;i++){
        int digito_atual=cpf %10;
        if (digito_atual!= ref){
            return 0;
        }
        cpf=cpf/10;
    }
        return 1;



}
int main()
{
    long long int cpf, d0, d1, d2, d3, d4, d5, d6, d7, d8, d9, d10;


    printf("insira o cpf (se o primeiro digito for 0, nao o inclua) \n");
    scanf("%lli",&cpf);

    d0= cpf/10000000000;
    d10=cpf%10;
    d9= cpf/10%10;
    d8=cpf/100%10;
    d7=cpf/1000%10;
    d6=cpf/10000%10;
    d5=cpf/100000%10;
    d4=cpf/1000000%10;
    d3=cpf/10000000%10;
    d2=cpf/100000000%10;
    d1=cpf/1000000000%10;



    if (((11-(10*d0+9*d1+8*d2+7*d3+6*d4+5*d5+4*d6+3*d7+2*d8)%11))%10!=d9||(11-(11*d0+10*d1+9*d2+8*d3+7*d4+6*d5+5*d6+4*d7+3*d8+2*d9)%11)%10!=d10 ||cpf>99999999999 ||digitos_iguais(cpf)){
        printf("cpf invalido");
    }
    else {
        printf("cpf valido");
    }


    return 0;
}
