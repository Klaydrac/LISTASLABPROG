#include <stdio.h>
int main() {
    int x, y,memoria;
    printf("Digite o valor de x: ");
    scanf("%d", &x);
    printf("Digite o valor de y: ");
    scanf("%d", &y);
    printf("\nAntes da troca:\n x = %d\n y = %d\n", x, y);
    
    memoria = x;
    x = y;
    y = memoria;

    printf("\nApós a troca:\n x = %d\n y = %d\n", x, y);

    return 0;
}
