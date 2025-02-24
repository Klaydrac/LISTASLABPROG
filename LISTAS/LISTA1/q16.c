#include <stdio.h>
#include <stdlib.h>
int main() {
    int n = 0;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("O valor absoluto de %d é: %d\n", n, abs(n));

    return 0;
}