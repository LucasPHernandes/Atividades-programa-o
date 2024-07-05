


#include <stdio.h>

int main() {
    int numeros[3], temp;
    printf("Digite um numero inteiro: ");
    scanf("%i", &numeros[0]);
    printf("Digite um numero inteiro: ");
    scanf("%i", &numeros[1]);
    printf("Digite um numero inteiro: ");
    scanf("%i", &numeros[2]);

    for (int i = 0; i < 3; i++)
    {
        if (!(numeros[i] != numeros[i+1]))
        {
            printf("Dois ou mais numeros sao iguais.");
            return 0;
        } else {
            for (int i = 0; i < 2; i++) {
                for (int j = i + 1; j < 3; j++) {
                    if (numeros[i] > numeros[j]) {
                        // Troca dos valores
                        temp = numeros[i];
                        numeros[i] = numeros[j];
                        numeros[j] = temp;
                    }
                }
            }
            
        }
    }
    printf("Os números em ordem crescente são: %d, %d, %d\n", numeros[0], numeros[1], numeros[2]);    
    
    return 0;
}