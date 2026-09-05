#include <stdio.h>

int main() {
    int dia, mes, ano;
    int diasNoMes;
    const int anoAtual = 2008;
    int bissexto;

    printf("Digite dia, mes e ano: ");
    scanf("%d %d %d", &dia, &mes, &ano);

    if (mes <= 0 || mes >= 13 || ano > anoAtual) {
        printf("Data invalida\n");
        return 0;
    }

    bissexto = (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0));

    if (mes == 2)
        diasNoMes = bissexto ? 29 : 28;
    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        diasNoMes = 30;
    else
        diasNoMes = 31;

    if (dia > 0 && dia <= diasNoMes)
        printf("Data valida\n");
    else
        printf("Data invalida\n");

    return 0;
}
