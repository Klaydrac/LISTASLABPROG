#include <stdio.h>
int main() {
    int n;
    printf("Digite um numero inteiro: ");
    scanf("%d", &n);
    printf("O sucessor de %d é: %d\n", n, n + 1);
    printf("O antecessor de %d é: %d\n", n, n - 1);

    return 0;
}