#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void preencherMatriz(int* m, int n) {
    for (int j = 0; j < n; j++){
        printf("\n");
    for (int i = 0; i < n; i++) {
       
            *(m + i) = rand() % 100;  
        }
    }
    }


int somadiagonal(int* m, int n) {
    int soma = 0;
    for (int i = 0; i < n; i++) {
        soma += *(m + i);  
    }
    return soma;
}

void imprimirMatriz(int* m, int n) {
    for (int i = 0; i < n; i++) {
        printf("\n");
        for (int j = 0; j < n; j++) {
            printf("%d ", *(m + j));
        }
    
    }
}

int main() {
    int n;

    printf("Digite o tamanho da matriz (N x N): ");
    scanf("%d", &n);
    int* m = (int*)malloc(n * n * sizeof(int));
    if (m == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    srand(time(NULL));
    preencherMatriz(m, n);
    printf("Matriz gerada:\n");
    imprimirMatriz(m, n);

    int soma = somadiagonal(m, n);
    if (soma % 2 == 0) {
        printf("A soma da diagonal principal é %d e é PAR.\n", soma);
    } else {
        printf("A soma da diagonal principal é %d e é ÍMPAR.\n", soma);
    }


    return 0;
}
