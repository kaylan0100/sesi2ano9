#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasNoMes;
    int bissexto;

    printf("Digite dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    bissexto = (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0));

    if (mes < 1 || mes > 12) {
        printf("Data invalida\n");
        return 0;
    }

    if (mes == 2)
        diasNoMes = bissexto ? 29 : 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        diasNoMes = 30;
    else
        diasNoMes = 31;

    if (dia >= 1 && dia <= diasNoMes)
        printf("Data valida\n");
    else
        printf("Data invalida\n");

    return 0;
}
