#include <stdio.h>

int main() {
    float valor, final;
    char estado[3];

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado (MG, SP, RJ ou MS): ");
    scanf("%s", estado);

    if (estado[0] == 'M' && estado[1] == 'G')
        final = valor * 1.07;
    else if (estado[0] == 'S' && estado[1] == 'P')
        final = valor * 1.12;
    else if (estado[0] == 'R' && estado[1] == 'J')
        final = valor * 1.15;
    else if (estado[0] == 'M' && estado[1] == 'S')
        final = valor * 1.08;
    else {
        printf("Estado invalido\n");
        return 0;
    }

    printf("Preco final: R$ %.2f\n", final);

    return 0;
}
