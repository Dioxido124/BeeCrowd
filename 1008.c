#include<stdio.h>

int main(){
    int NUMBER, H;
    double VALORH, SALARIO;

    scanf("%d", &NUMBER);
    scanf("%d", &H);
    scanf("%lf", &VALORH);

    SALARIO = VALORH*H;

    printf("NUMBER = %d\n", NUMBER);
    printf("SALARY = U$ %.2lf\n", SALARIO);

    return 0;
}