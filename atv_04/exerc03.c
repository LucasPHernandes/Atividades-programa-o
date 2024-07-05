


#include <stdio.h>

int main() {
    float x, y, z;
    printf("Digite um numero inteiro: ");
    scanf("%f", &x);
    printf("Digite um numero inteiro: ");
    scanf("%f", &y);
    printf("Digite um numero inteiro: ");
    scanf("%f", &z);

    if ((x+y) > z) {
        printf("A soma entre %.2f e %.2f e maior que %.2f", x, y, z);
    } else {
        printf("A soma entre %.2f e %.2f e menor que %.2f", x, y, z);
    }
    
}