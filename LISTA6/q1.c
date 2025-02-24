#include <stdio.h>
#include <stdlib.h>
void calculo(int x,int y, int op){
    if (op == 1){

        printf( "%d",x+y);
    
        }
        else if(op == 2){
            printf("%d",x*y);
        }
   
};
int main(int argc,char *argv[]){

    int n1;
    int n2; 
    int op; 
    if(argc != 4){
        printf("Use a seguinte formatação: <numero1> <numero2> <operação>");
        exit(0);
    }
    n1 = atoi(argv[1]);
    n2 = atoi(argv[2]);
    op = atoi(argv[3]);
    calculo(n1,n2,op);
    return 0;
}