#include <stdio.h>

int main() {
    int op;
    printf("\nCódigo\tLanche\t\t\t\tPreço\n-------------------------------------------------\n10\tXis Completo\t\t\tR$12,00\n11\tXis Bacon\t\t\tR$16,50\n12\tXis de Coracao de Boi\t\tR$14,00\n13\tXis de Charque\t\t\tR$14,50\n14\tXis de Ovelha\t\t\tR$20,90\n15\tXis de Linguica Campeira\tR$18,00\n");

    printf("\nDigite um codigo: ");
    scanf("%i", &op);

    switch (op)
    {
    case 10:
        printf("Voce pagara R$12,00");
        break;
    
    case 11:
        printf("Voce pagara R$16,50");
        break;
    
    case 12:
        printf("Voce pagara R$14,00");
        break;

    case 13:
        printf("Voce pagara R$14,50");
        break;

    case 14:
        printf("Voce pagara R$20,90");
        break;

    case 15:
        printf("Voce pagara R$18,00");
        break;

    default:
        printf("Opcao nao reconhecida...");
        break;
    
    }   

    return 0;
    
}