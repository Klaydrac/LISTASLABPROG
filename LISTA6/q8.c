#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


float calcmse(int* x, int* y, int tamanho) {
    float soma = 0.0;

   
    for (int i = 0; i < tamanho; i++) {
        soma += pow(*(x + i) - *(y + i), 2); 
    }

    return sqrt(soma / tamanho);
}

float calcmae(int* x, int* y, int tamanho) {
    float soma = 0.0;

    for (int i = 0; i < tamanho; i++) {
        soma += fabs(*(x + i) - *(y + i));
    }

    return soma / tamanho;  
}
float calcerro(float (*erroFunc)(int*, int*, int), int* x, int* y, int tamanho) {
    return erroFunc(x, y, tamanho); 
}

int main(int argc, char* argv[]) {
    int tamanho;

    if (argc != 2) {
        printf("Uso: %s <quantidade de elementos>\n", argv[0]);
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
        *(y + i) = rand() % 100 ;  
        printf("%d ", *(y + i));
    }
    printf("\n");
    float (*erroFunc)(int*, int*, int) = NULL;
    //aqui pode trocar pro mae se quiser
    erroFunc = calcmse;  
    float erro = calcerro(erroFunc, x, y, tamanho);
    printf("\nErro calculado: %.2f\n", erro);
    return 0;
}
