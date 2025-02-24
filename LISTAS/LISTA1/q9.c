#include <stdio.h>
int main() {
    float comprimento, largura, altura;
    printf("Qual o comprimento da caixa? ");
    scanf("%f", &comprimento);
    printf("Qual a largura da caixa? ");
    scanf("%f", &largura);
    printf("Qual a altura da caixa? ");
    scanf("%f", &altura);
    printf("O volume da caixa retangular é: %.2f\n", (comprimento * largura * altura));

    return 0;
}
