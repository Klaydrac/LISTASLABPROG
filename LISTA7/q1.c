#include <stdio.h>

struct aluno {
    float n1;
    float n2;
    float media;
};

int main() {
    struct aluno al;
    printf("Digite a primeira nota: ");
    scanf("%f", &al.n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &al.n2);
    al.media = (al.n1 + al.n2) / 2;
    printf("\nNotas do aluno:\n");
    printf("Nota 1: %.2f\n", al.n1);
    printf("Nota 2: %.2f\n", al.n2);
    printf("Média: %.2f\n", al.media);

    return 0;
}
