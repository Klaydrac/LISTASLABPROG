#include <stdio.h>
int main(){
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("O número %d é %s\n", n, (n % 2 == 0) ? "par" : "ímpar");
    return 0;
}