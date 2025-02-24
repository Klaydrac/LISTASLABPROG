#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

float calculo(int* x, int* y, int tamanho){
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma += pow(*(x + i) - *(y + i), 2);
    }
    return sqrt(soma / tamanho);
}
int main(int argc, char* argv[]) {
    int tamanho;

    if (argc != 2) {
        printf("Use: <quantidade de elementos>\n");
        return 1;
    }
    tamanho = atoi(argv[1]);

    if (tamanho <= 0) {
        printf("A quantidade de elementos deve ser um número positivo.\n");
        return 1;
    }
    int* x = (int*)malloc(tamanho * sizeof(int));
    int* y = (int*)malloc(tamanho * sizeof(int));
    
    if (x == NULL || y == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }
    srand(time(NULL));

    printf("Vetor x: ");
    for (int i = 0; i < tamanho; i++) {
        *(x + i) = rand() % 100 ;
        printf("%d ", *(x + i));
    }
    printf("\n");

    printf("Vetor y: ");
    for (int i = 0; i < tamanho; i++) {
        *(y + i) = rand() % 100;
        printf("%d ", *(y + i));
    }
    printf("\n");
    float resultado = calculo(x, y, tamanho);
    printf("\nresultado: %.2f\n", resultado);
    return 0;
}
