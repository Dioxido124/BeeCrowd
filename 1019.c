//Leia um valor inteiro, que é o tempo de duração em segundos de um determinado evento em uma fábrica, e informe-o expresso no formato horas:minutos:segundos.

#include<stdio.h>

int main(){

    int n, h, min, seg;
    scanf("%d", &n);

    h = n/3600;
    min = (n - h*3600)/60;
    seg = (n - 3600*h-min*60);

    printf("%d:%d:%d\n", h, min, seg);


    return 0;
}