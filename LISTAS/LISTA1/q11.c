#include <stdio.h>
int main() {
    int n1, n2;
    printf("Qual o primeiro número? : ");
    scanf("%d", &n1);
    printf("Qual o segundo número? : ");
    scanf("%d", &n2);
    printf("Soma: %d\n", n1 + n2);
    printf("Produto: %d\n", n1 * n2);
    printf("Diferença: %d\n", n1 - n2);
    printf("Divisao: %.2f\n", ((float)n1) / n2);
    printf("Resto da divisão: %d\n", n1 % n2);

    return 0;
}
