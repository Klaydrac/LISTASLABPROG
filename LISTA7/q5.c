#include <stdio.h>
//Não se pode criar uma estrutura dentro da outra, mas se pode adicionar um elemento pertecente a uma estrutura dentro de outra.
struct professor {
    char nome[100];
    char departamento[50];
    int id;
};


struct disciplina {
    char nome[100];
    int codigo;
    struct professor prof;
};
int main(){



    return 0;
}