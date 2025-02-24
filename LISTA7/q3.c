#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct Vetor {
    int* elementos;    
    int qtd;     
    float media;        
};

float calcularMedia(int* vetor, int qtd) {
    int soma = 0;
    for (int i = 0; i < qtd; i++) {
        soma += vetor[i];  
    }
    return (float)soma / qtd;  
}

int main() {
    int n;
    printf("Digite a quantidade de elementos no vetor: ");
    scanf("%d", &n);
    int* vetor = (int*)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;  
    }
    srand(time(NULL));
    for (int i = 0; i < n; i++) {
        vetor[i] = rand() % 101;  
    }
    struct Vetor v;
    v.elementos = vetor;
    v.qtd = n;
    v.media = calcularMedia(vetor, n);
    printf("\nElementos do vetor: ");
    for (int i = 0; i < v.qtd; i++) {
        printf("%d ", v.elementos[i]);
    }
    printf("\n");
    printf("Média dos elementos: %.2f\n", v.media);
    return 0;
}
