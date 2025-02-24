#include <stdio.h>
#include <stdlib.h>  
#include <time.h> 

float calcmedia(int* v, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += *(v+i);
    }
    return (float)soma / tamanho;
}

float calcmediana(int* v, int tamanho) {
    for (int i = 0; i < tamanho - 1; i++) {
        for (int j = i + 1; j < tamanho; j++) {
            if (*(v+i) > *(v+j)) {
                int temp = *(v+i);
                *(v+i) = *(v+j);
                *(v+j) = temp;
            }
        }
    }
    
    if (tamanho % 2 != 0) {
        return (float)*(v + (tamanho / 2));
    } else {
        return (float)(*(v+((tamanho - 1) / 2)) + *(v+((tamanho / 2) / 2)));
    }
}

int calcmoda(int* v, int tamanho) {
    int limitecont = 0;
    int moda = *v;
    
    for (int i = 0; i < tamanho; i++) {
        int contador = 0;
        
        for (int j = 0; j < tamanho; j++) {
            if (*(v+i) == *(v+j)) {
                contador++;
            }
        }

        if (contador > limitecont) {
            limitecont = contador;
            moda = *(v+i);
        }
    }
    return moda;
}

int main(int argc, char* argv[]) {
    int tamanho;

    if (argc != 2) {
        printf("Use:  <quantidade de elementos>\n");
        return 1;
    }

    tamanho = atoi(argv[1]);

    if (tamanho <= 0) {
        printf("A quantidade de elementos deve ser um número positivo.\n");
        return 1;
    }

    // Aloca dinamicamente um vetor de inteiros
    int* v = (int*)malloc(tamanho * sizeof(int));
    if (v == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    srand(time(NULL));

    printf("Vetor gerado com números aleatórios:\n");
    for (int i = 0; i < tamanho; i++) {
        *(v+i) = rand() % 100 + 1;  
        printf("Elemento %d: %d\n", i + 1, *(v+i));
    }

    float media = calcmedia(v, tamanho);
    printf("\nMédia: %.2f\n", media);

    float mediana = calcmediana(v, tamanho);
    printf("Mediana: %.2f\n", mediana);

    int moda = calcmoda(v, tamanho);
    printf("Moda: %d\n", moda);



    return 0;
}
