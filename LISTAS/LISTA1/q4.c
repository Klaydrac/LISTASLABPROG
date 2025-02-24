#include <stdio.h>
int main(){
    float nconta, ntotal;
    printf("Entre com o valor da conta do restaurante: R$ ");
    scanf("%f", &nconta);
    ntotal = nconta + (nconta * 0.10);
    printf("Valor total a ser pago (com 10%% de taxa para o garçom): R$ %.2f\n", ntotal);

    return 0;
}