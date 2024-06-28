
// Escreva um programa que receba dois números reais, faça uma divisão entre eles e mostre na tela o divisor, o dividendo, o quociente e o resto da divisão.

#include <stdio.h>

int main() {
    int x,y;
    float div;

    printf("Digite o dividendo: ");
    scanf("%i", &x);
    printf("Digite o divisor: ");
    scanf("%i", &y);


    printf("O divisor e: %i", y);
    printf("\nO dividendo e: %i", x);

    printf("\nO resto da divisao e: %.2f", (float)(x % y));
    printf("\nO quociente da divisao e: %.2f",  ((float)x / (float)y));
    
    

}