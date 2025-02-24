#include <stdio.h>
int main() {
    int tempo, h, min, s;
    printf("Digite o tempo em segundos: ");
    scanf("%d", &tempo); 
    h = tempo / 3600;
    min = (tempo % 3600) / 60;
    s = tempo % 60;   
    printf("%d segundos equivalem a %d horas, %d minutos e %d segundos.\n", tempo, h, min, s);

    return 0;
}
