#include <stdio.h>

int main() {
    int segundos, horas, minutos;

    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d horas\n", horas);
    printf("%d minutos\n", minutos);
    printf("%d segundos", segundos);

    return 0;
}