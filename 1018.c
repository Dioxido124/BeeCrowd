//Leia um valor inteiro. A seguir, calcule o menor número de notas possíveis (cédulas) no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2 e 1. A seguir mostre o valor lido e a relação de notas necessárias.

#include<stdio.h>

int main(){

    int n, valorO;
    
    int c100, c50, c20, c10, c5, c2, c1;

    scanf("%d", &n);
    valorO = n;

    c100 = n/100;
    n = n % 100;
    c50 = n/50;
    n = n % 50;
    c20 = n/20;
    n = n % 20;
    c10 = n/10;
    n = n % 10;
    c5 = n/5;
    n = n % 5;
    c2 = n/2;
    n = n % 2;
    c1 = n/1;
    n = n % 1;

    printf("%d\n", valorO);

    printf("%d nota(s) de R$ 100,00\n", c100);
    printf("%d nota(s) de R$ 50,00\n", c50);
    printf("%d nota(s) de R$ 20,00\n", c20);
    printf("%d nota(s) de R$ 10,00\n", c10);
    printf("%d nota(s) de R$ 5,00\n", c5);
    printf("%d nota(s) de R$ 2,00\n", c2);
    printf("%d nota(s) de R$ 1,00\n", c1);


    return 0;
}