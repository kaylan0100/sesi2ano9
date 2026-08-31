#include <stdio.h>

int main() {
    float valor, desconto;

    scanf("%f", &valor);

    desconto = valor - (valor * 0.12);

    printf("%.2f", desconto);

    return 0;
}
