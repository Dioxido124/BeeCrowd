#include<stdio.h>

int main(){
    int a, b;
    
    scanf("%d", &a);
    scanf("%d", &b);

    float PROD = a*b;

    printf("PROD = %.2f", PROD);

    return 0;
}