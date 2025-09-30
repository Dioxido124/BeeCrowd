#include<stdio.h>

int main(){

    char nome [30] = "";
    double FIXO, VENDAS, TOTAL;

    scanf("%s", &nome);
    scanf("%lf", &FIXO);
    scanf("%lf", &VENDAS);

    TOTAL = FIXO + (VENDAS*0.15);

    printf("TOTAL = R$ %.2lf\n", TOTAL);


    return 0;
}