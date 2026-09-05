#include <stdio.h>

int main() {
    float km, litros, consumo;

    printf("Digite a distancia em km: ");
    scanf("%f", &km);

    printf("Digite os litros consumidos: ");
    scanf("%f", &litros);

    if (litros <= 0) {
        printf("Quantidade de litros invalida\n");
        return 0;
    }

    consumo = km / litros;

    printf("Consumo: %.2f km/l\n", consumo);

    if (consumo < 8)
        printf("Venda o carro!\n");
    else if (consumo <= 14)
        printf("Economico!\n");
    else
        printf("Super economico!\n");

    return 0;
}
