#include <stdio.h>
int main(){
    float c, f;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = (9 * c + 160) / 5;

    printf("Temperatura em Fahrenheit: %.2f\n", f);

    return 0;
}
