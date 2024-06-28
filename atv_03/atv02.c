
// Escreva um programa que leia dois valores para duas variáveis (x e y) do tipo float. O programa deve conter uma variável (result) do tipo int para receber um valor booleano que deve ser apresentada no final da execução. Utilize a expressão result = (x != y) e observe a saída do programa.

#include <stdio.h>

int main() {

    float x,y;
    int result;

    printf("Digite um valor: ");
    scanf("%f", &x);
    printf("Digite um segundo valor: ");
    scanf("%f", &y);


    result = (x != y);
    printf("Valor de result: %i", result);

}


// Obs: result funciona como uma operação booleana definida peloa igualdade ou não dos valores de (x,y);