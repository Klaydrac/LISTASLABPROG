#include <stdio.h>
int main() {
    int n1, n2;
    printf("Digite o primeiro número: ");
    scanf("%d", &n1);
    printf("Digite o segundo número: ");
    scanf("%d", &n2);
    printf("O número %d %s múltiplo de %d.\n", n1, (n1 % n2 == 0) ? "é" : "não é", n2);

    return 0;
}
