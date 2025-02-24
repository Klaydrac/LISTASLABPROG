#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preencherMatriz(int* m, int lin, int col) {
    for (int i = 0; i < lin * col; i++) {
    
         *(m + i) = rand() % 100;  
    }
}

void binarizarMatriz(int* m, int* s, int lin, int col, int t) {
    for (int i = 0; i < lin * col; i++) {
       
            *(s+i) = (*(m + i) > t) ? 1 : 0;
        
    }
}

void imprimirMatriz(int* m, int lin, int col) {
    for (int i = 0; i < lin * col; i++) {
            printf("%3d ", *(m + i));
        }
        printf("\n");
    
}

int main() {
    int lin, col, t;

    printf("Digite o número de linhas da matriz: ");
    scanf("%d", &lin);
    printf("Digite o número de colunas da matriz: ");
    scanf("%d", &col);
    printf("Digite o limiar t: ");
    scanf("%d", &t);

    int* m = (int*)malloc(lin * col * sizeof(int));
    int* s = (int*)malloc(lin * col * sizeof(int));

    if (m == NULL || s == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand(time(NULL));

    preencherMatriz(m, lin, col);

    binarizarMatriz(m, s, lin, col, t);

    printf("\nMatriz M (original):\n");
    imprimirMatriz(m, lin, col);

    printf("\nMatriz S (binária):\n");
    imprimirMatriz(s, lin, col);

    return 0;
}
