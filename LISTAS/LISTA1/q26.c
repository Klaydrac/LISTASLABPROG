#include <stdio.h>
#include <math.h>
int main() {
    float n1, n2, n3, ma, mg;
    printf("Digite o primeiro número: ");
    scanf("%f", &n1);
    printf("Digite o segundo número: ");
    scanf("%f", &n2);
    printf("Digite o terceiro número: ");
    scanf("%f", &n3);

    ma = (n1 + n2 + n3) / 3;
    mg = pow(n1 * n2 * n3, 1.0 / 3.0);

    printf("Média Aritmética: %.2f\n", ma);
    printf("Média Geométrica: %.2f\n", mg);

    return 0;
}
