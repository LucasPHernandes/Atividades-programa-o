#include <stdio.h>

int main() {
    float n1, n2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    media = (n1 + n2) / 2;

    if (media >= 0.0 && media <= 4.9) {
        printf("Conceito: Insuficiente");
    } 
    if (media >= 5.0 && media <= 6.4) {
        printf("Conceito: Regular");
    }
    if (media >= 6.5 && media <= 8.4) {
        printf("Conceito: Bom");
    }
    if (media >= 8.5 && media <= 10.0) {
        printf("Conceito: Regular");
    }

    return 0;
    
}