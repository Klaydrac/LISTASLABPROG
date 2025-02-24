#include <stdio.h>
int main() {
    float valorhora, horastrabalhadas, salariobruto, desconto, salarioliquido;
    float percentualinss;
    printf("Digite o valor da hora aula (R$): ");
    scanf("%f", &valorhora);
    printf("Digite o número de horas trabalhadas no mês: ");
    scanf("%f", &horastrabalhadas);
    printf("Digite o percentual de desconto do INSS em porcentagem: ");
    scanf("%f", &percentualinss);

    salariobruto = valorhora * horastrabalhadas;
    desconto = (percentualinss / 100) * salariobruto;
    salarioliquido = salariobruto - desconto;


    printf("\nSalário Bruto: R$ %.2f\n", salariobruto);
    printf("Desconto do INSS: R$ %.2f\n", desconto);
    printf("Salário Líquido: R$ %.2f\n", salarioliquido);

    return 0;
}
