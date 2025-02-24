#include <stdio.h>

int main() {
    float altura;
    char sexo;
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);
    printf("Digite o sexo M = Masc, F = Femin: ");
    // Espaço antes do C para remover possivel buffer
    scanf(" %c", &sexo); 
    if (sexo == 'M' || sexo == 'm') { 
        printf("Peso ideal para homem: %.2f kg\n", (72.7 * altura - 58));
    } else if (sexo == 'F' || sexo == 'f') {
        printf("Peso ideal para mulher: %.2f kg\n", (62.1 * altura - 44.7));
    } else {
        printf("Engraçadinho, não existe este sexo\n");
    }

    return 0;
}
