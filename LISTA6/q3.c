#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void *encontrarmenor(int * v,int tamanho, int **menor, int **maior){
 *menor = v;
 *maior = v;
for(int i = 0; i < tamanho; i++){
    if(*(v+i) < **menor){
   *menor = v + i;
    }
    if(*(v+i) > **maior){
       *maior = v + i;
    }
}
}
int main(int argc,char *argv[]){
    if(argc != 2){
        printf(" Use da seguinte forma: %s <tamanho do vetor>",argv[0]);
    }
    int tamanho = atoi(argv[1]);
    int *v = (int*)malloc( tamanho * sizeof(int*));
    if(v == NULL){
        puts("Erro ao alocar memoria");
        exit(1);
    }
  srand(time(NULL));
  for(int i = 0; i < tamanho; i++){
    *(v+i) = rand() % 50;
    printf(" Elemento %d = %d \n ",i, *(v+i));
  }
  int *maior;
  int *menor;
 encontrarmenor(v, tamanho, &menor,&maior);
    printf("\no menor elemento é %d e o endereço é [%p] \n",*menor,&menor);
    printf("\no maior elemento é %d e o seu endereço é [%p]\n",*maior,&maior);
return 0;
}