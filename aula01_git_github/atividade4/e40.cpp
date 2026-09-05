#include <stdio.h>

int main() {
    float fabrica, distribuidor, impostos, consumidor;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &fabrica);

    if (fabrica <= 12000) {
        distribuidor = fabrica * 0.05;
        impostos = 0;
    }
    else if (fabrica <= 25000) {
        distribuidor = fabrica * 0.10;
        impostos = fabrica * 0.15;
    }
    else {
        distribuidor = fabrica * 0.15;
        impostos = fabrica * 0.20;
    }

    consumidor = fabrica + distribuidor + impostos;

    printf("Custo ao consumidor: R$ %.2f\n", consumidor);

    return 0;
}
