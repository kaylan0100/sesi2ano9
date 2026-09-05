#include <stdio.h>

int main() {
    int horaEntrada, minutoEntrada;
    int horaSaida, minutoSaida;
    int entrada, saida, minutos, horas;
    float preco = 0;

    printf("Digite a hora e minuto de entrada: ");
    scanf("%d %d", &horaEntrada, &minutoEntrada);

    printf("Digite a hora e minuto de saida: ");
    scanf("%d %d", &horaSaida, &minutoSaida);

    entrada = horaEntrada * 60 + minutoEntrada;
    saida = horaSaida * 60 + minutoSaida;

    if (saida < entrada)
        saida += 24 * 60;

    minutos = saida - entrada;

    horas = (minutos + 59) / 60;

    if (horas <= 2)
        preco = horas * 1.00;
    else if (horas <= 4)
        preco = 2.00 + (horas - 2) * 1.40;
    else
        preco = 2.00 + 2 * 1.40 + (horas - 4) * 2.00;

    printf("Preco: R$ %.2f\n", preco);

    return 0;
}
