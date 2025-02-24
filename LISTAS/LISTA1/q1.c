#include <stdio.h>
int main() {
    int n;
    printf("Entre com o valor: ");
    scanf("%d", &n);
// %x exibe Hexa e %o exibe em Octal
    printf("Hexadecimal: %X\n", n);
    printf("Octal: %o\n", n);

    return 0;
}
