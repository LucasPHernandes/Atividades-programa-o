
// Faça um programa que:
// a) Obtenha o valor para a variável HT (horas trabalhadas no mês); 
// b) Obtenha o valor para a variável VH (valor da hora trabalhada); 
// c) Obtenha o valor para a variável PD (percentual de desconto); 
// d) Calcule o salário bruto [SB = HT * VH];
// e) Calcule o total de desconto [TD = (PD / 100) * SB];
// f) Calcule o salário líquido [SL = SB - TD];
// Apresente os valores de horas trabalhadas, salário bruto, desconto e salário líquido.

#include <stdio.h>

int main() {
    float HT, VH, PD;

    printf("horas trabalhadas no mês: ");
    scanf("%f", &HT);
    printf("valor da hora trabalhada: ");
    scanf("%f", &VH);
    printf("percentual de desconto: ");
    scanf("%f", &PD);

    // printf("");

    printf("\nSalario bruto: %.2f", (HT*VH));
    printf("\nTotal descontado: %.2f", ((PD / 100) * (HT*VH)));
    printf("\nSalario Liquido: %.2f", ((HT*VH) - ((PD / 100) * (HT*VH))));
}