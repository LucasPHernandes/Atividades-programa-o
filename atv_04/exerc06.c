#include <stdio.h>

int main() {
    int n1, n2;
    printf("Digite um numero: ");
    scanf("%i", &n1);
    printf("Digite um numero ");
    scanf("%i", &n2);


    if (n1 % n2 == 0) {
        printf("Os numeros sao multiplos");
    } 
    else {
        printf("Nao sao multiplos");
    }
    return 0;
    
}