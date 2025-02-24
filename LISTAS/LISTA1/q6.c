#include <stdio.h>
int main(){
    int horas, minutos, segundos;
    printf("Quantas horas?: ");
    scanf("%d", &horas);
    printf("Quantos minutos?: ");
    scanf("%d", &minutos);
    printf("quantos segundos?: ");
    scanf("%d", &segundos);
    printf("Total de segundos: %d\n",  (horas * 3600) + (minutos * 60) + segundos);

    return 0;
}
