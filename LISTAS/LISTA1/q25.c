#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main(){
    float x1, y1, x2, y2, dist;
    printf("Digite as coordenadas do primeiro ponto: ");
    scanf("%f %f", &x1, &y1);
    printf("Digite as coordenadas do segundo ponto: ");
    scanf("%f %f", &x2, &y2);
   dist = sqrt(pow(x2 - x1,2) + pow(y2 - y1,2));
    printf("A distância entre os pontos é: %.2f\n",  dist);

    return 0;
}
