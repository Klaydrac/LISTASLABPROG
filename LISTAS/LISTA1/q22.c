#include <stdio.h>
int main() {
    int n, centena, dezena, unidade;
    printf("Digite um número de três dígitos: ");
    scanf("%d", &n);

    centena = n / 100;       
    dezena = (n / 10) % 10;   
    unidade = n % 10;

     unidade * 100 + dezena * 10 + centena;

    // Exibe o número invertido
    printf("Número invertido: %d\n",  unidade * 100 + dezena * 10 + centena);

    return 0;
}
