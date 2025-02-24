#include <stdio.h>
#define QUANTIDADEALUNOS 3
struct aluno {
    float n1;
    float n2;
    float media;
};
void calcmedia(struct aluno* al) {
    al->media = (al->n1 + al->n2) / 2;
};

int main() {
    struct aluno als[3];

    // Leitura das notas dos alunos
    for (int i = 0; i < 3; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Digite a primeira nota: ");
        scanf("%f", &als[i].n1);
        printf("Digite a segunda nota: ");
        scanf("%f", &als[i].n2);
        calcmedia(&als[i]);
    }
    for (int i = 0; i < QUANTIDADEALUNOS; i++) {
        printf("\nNotas do Aluno %d:\n", i + 1);
        printf("Nota 1: %.2f\n", als[i].n1);
        printf("Nota 2: %.2f\n", als[i].n2);
        printf("Média: %.2f\n", als[i].media);
    }

    return 0;
}
