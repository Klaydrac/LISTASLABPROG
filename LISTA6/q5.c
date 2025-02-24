#include <stdio.h>
#include <stdlib.h>
#include <time.h>
float somavetores(float *v,int tamanho){


float soma = 0.0;
for(int i = 0; i< tamanho; i++){
    soma += *(v+i);
}
return soma;
}
int main(int argc,char *argv[]){
    if(argc != 2){
        printf(" Use da seguinte forma: %s <tamanho do vetor>",argv[0]);
    }
    int tamanho = atoi(argv[1]);
    float *v = (float*)malloc( tamanho * sizeof(float*));
    if(v == NULL){
        puts("Erro ao alocar memoria");
        exit(1);
    }
  srand(time(NULL));
  for(int i = 0; i < tamanho; i++){
    *(v+i) = (float)(rand() % 100) / 10.0;
    printf(" Elemento %d = %.2f \n ",i, *(v+i));
  }
  float soma = somavetores(v,tamanho);
  printf("\n A soma de todos os elementos do vetor é: %.2f\n",soma);
return 0;
}