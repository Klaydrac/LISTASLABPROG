#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void geravetor(int* x, int* y, int n, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        *(x + i) = rand() % n;  
        *(y + i) = rand() % n;  
    }
}

void zeramatriz(int* m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            *(m + i * n + j) = 0;
        } 
    }
}
void calcularconco(int* x, int* y, int* m, int n, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        int xi = *(x + i);  
        int yi = *(y + i); 
        *(m + xi * n + yi) += 1; 
    }
}
void imprimirMatriz(int* m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(m + i * n + j)); 
        }
        printf("\n");
    }
}

int main() {
    int n, tamanho;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("Digite o tamanho dos vetores: ");
    scanf("%d", &tamanho);
    int* x = (int*)malloc(tamanho * sizeof(int));
    int* y = (int*)malloc(tamanho * sizeof(int));
    int* m = (int*)malloc(n * n * sizeof(int));  
    srand(time(NULL));
    geravetor(x, y, n, tamanho);
    zeramatriz(m, n);
    calcularconco(x, y, m, n, tamanho);
    printf("Matriz de concorrências:\n");
    imprimirMatriz(m, n);
    return 0;
}
