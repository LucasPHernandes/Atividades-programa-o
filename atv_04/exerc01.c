


#include <stdio.h>

int main() {
    int n = 0;
    printf("Digite um numero inteiro: ");
    scanf("%i", &n);

    if (n <= 10) {
        printf("F1");
    } 
    if (n > 10 && n <= 100) {
        printf("F2");
    }
    if (n > 100) {
        printf("F3");
    }
    
}