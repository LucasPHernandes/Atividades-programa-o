#include <stdio.h>

int main() {
    float n1, n2;
    printf("Digite um numero: ");
    scanf("%f", &n1);
    printf("Digite um numero ");
    scanf("%f", &n2);


    if (n1 == n2) {
        printf("Os numeros sao iguais");
    } 
    else {
        if (n1 > n2)
        {
            printf("O maior numero e %.2f e o menor e $.2f", n1, n2);
        } else {
            printf("O maior numero e %.2f e o menor e $.2f", n2, n1);
        }
        
    }
    return 0;
    
}