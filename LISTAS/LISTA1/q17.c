#include <stdio.h>
#define pi 3.14
int main() {
    float r;
    printf("Digite o valor do raio: ");
    scanf("%f", &r);
    printf("Diâmetro: %.2f\n", 2 * r);
    printf("Circunferência: %.2f\n", 2 * pi * r);
    printf("Área: %.2f\n", pi * r * r);

    return 0;
}
