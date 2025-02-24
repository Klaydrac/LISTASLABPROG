#include <stdio.h>
int main() {
    int diastrabalhados;
    float diaria = 50.25, salariobruto, gratificacao = 0, salarioliquido;
    printf("Digite o número de dias trabalhados: ");
    scanf("%d", &diastrabalhados);
    salariobruto = diastrabalhados * diaria;

    if (diastrabalhados > 20) {
        gratificacao = 0.30 * salariobruto; 
    } else if (diastrabalhados > 10 && diastrabalhados < 20) {
        gratificacao = 0.20 * salariobruto;
    }
    salariobruto = salariobruto + gratificacao;
    salarioliquido = salariobruto - (0.10 * salariobruto);

    printf("Salário líquido a ser pago: R$ %.2f\n", salarioliquido);

    return 0;
}
