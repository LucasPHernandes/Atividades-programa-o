

// Escreva um programa em C que leia uma temperatura em Fahrenheit e a apresente convertida em graus Celsius. Fórmula de conversão: C = (F - 32) * (5 / 9).

#include <stdio.h>

int main() {
    float F, C;

    printf("Digite a temperatura em Fahrenheit para converte-la para graus Celsius: ");
    scanf("%f", &F);

    C = ((F - 32) * (5.0 / 9.0));

    printf("%.2f equivale a %.2f graus Celsius.", F, C);
}