//Leia um valor inteiro correspondente à idade de uma pessoa em dias e informe-a em anos, meses e dias
//Obs.: apenas para facilitar o cálculo, considere todo ano com 365 dias e todo mês com 30 dias. Nos casos de teste nunca haverá uma situação que permite 12 meses e alguns dias, como 360, 363 ou 364. Este é apenas um exercício com objetivo de testar raciocínio matemático simples.

#include<stdio.h>

int main(){

    int n, ano, mes, dias;

    scanf("%d", &n);

    ano = n/365;
    n = n%365;
    mes = n/30;
    n = n%30;
    dias = n/1;


    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", mes);
    printf("%d dia(s)\n", dias);

    return 0;
}