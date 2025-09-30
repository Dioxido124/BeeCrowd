//Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

#include<stdio.h>
#include<math.h> // Ainda precisamos de round()

int main(){

    double n; // Variável para ler o valor de ponto flutuante
    int totalCentavos; // Variável para fazer TODOS os cálculos
    int c100, c50, c20, c10, c5, c2; // Notas
    int m100, m50, m25, m10, m5, m1; // Moedas (m100 é R$ 1.00)

    // 1. LEITURA E CONVERSÃO
    scanf("%lf", &n); // Corrigido: usa %lf e double
    
    // Converte para centavos e usa round() para garantir a precisão
    totalCentavos = (int) round(n * 100.0);

    // 2. CÁLCULOS COM INTEIROS
    
    // NOTAS (Usando totalCentavos e MÓDULO %)
    c100 = totalCentavos / 10000;
    totalCentavos %= 10000;
    c50 = totalCentavos / 5000;
    totalCentavos %= 5000;
    c20 = totalCentavos / 2000;
    totalCentavos %= 2000;
    c10 = totalCentavos / 1000;
    totalCentavos %= 1000;
    c5 = totalCentavos / 500;
    totalCentavos %= 500;
    c2 = totalCentavos / 200;
    totalCentavos %= 200;

    // MOEDAS (R$ 1.00 é 100 centavos)
    m100 = totalCentavos / 100; // Moeda de R$ 1.00
    totalCentavos %= 100;
    m50 = totalCentavos / 50;
    totalCentavos %= 50;
    m25 = totalCentavos / 25;
    totalCentavos %= 25;
    m10 = totalCentavos / 10;
    totalCentavos %= 10;
    m5 = totalCentavos / 5;
    totalCentavos %= 5;
    m1 = totalCentavos / 1; 

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", c100);
    printf("%d nota(s) de R$ 50.00\n", c50);
    printf("%d nota(s) de R$ 20.00\n", c20);
    printf("%d nota(s) de R$ 10.00\n", c10);
    printf("%d nota(s) de R$ 5.00\n", c5);
    printf("%d nota(s) de R$ 2.00\n", c2);

    // MOEDAS:
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", m100);
    printf("%d moeda(s) de R$ 0.50\n", m50);
    printf("%d moeda(s) de R$ 0.25\n", m25);
    printf("%d moeda(s) de R$ 0.10\n", m10);
    printf("%d moeda(s) de R$ 0.05\n", m5);
    printf("%d moeda(s) de R$ 0.01\n", m1);

    return 0;
}