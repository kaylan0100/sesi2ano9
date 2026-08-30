#include <stdio.h>

int main() {
    int hora, minuto, segundo, duracao;
    int totalSegundos;

    scanf("%d", &hora);
    scanf("%d", &minuto);
    scanf("%d", &segundo);
    scanf("%d", &duracao);

    totalSegundos = hora * 3600 + minuto * 60 + segundo + duracao;

    hora = (totalSegundos / 3600) % 24;
    minuto = (totalSegundos % 3600) / 60;
    segundo = totalSegundos % 60;

    printf("%02d:%02d:%02d", hora, minuto, segundo);

    return 0;
}