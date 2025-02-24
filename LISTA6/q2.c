#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int *encontrarmenor(int * v,int tamanho){
int *menor = v;
for(int i = 0; i < tamanho; i++){
    if(*(v+i) < *menor){
   menor = v + i;
    }
}
return menor;
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
    int *menorelemento = encontrarmenor(v, tamanho);
    printf("\no menor elemento é %d e o endereço é [%p] \n",*menorelemento,&menorelemento);

}