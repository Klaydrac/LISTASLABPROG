#include <stdio.h>
int main() {
    float cotacao, reais;
    printf("Digite a cotação do dólar : ");
    scanf("%f", &cotacao);
    printf("Quantos reais deseja converter? : ");
    scanf("%f", &reais);
    printf("O valor de R$ %.2f em dólares é: $ %.2f\n", reais,  reais / cotacao);

    return 0;
}
