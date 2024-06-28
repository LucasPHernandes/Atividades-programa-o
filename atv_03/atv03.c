
// Faça um programa que leia a velocidade de um veículo em Km/H e calcule e imprima a velocidade em m/s.

#include <stdio.h>

int main() {
    float vel;

    printf("Valor em Km/H: ");
    scanf("%f", &vel);

    printf("%.2f Km/H equivale a %.2f m/s", vel, (vel / 3.6));

}