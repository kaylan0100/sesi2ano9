#include <stdio.h>

int main() {
    float numero, quadrado;

    scanf("%f", &numero);

    quadrado = numero * numero;

    printf("%.2f", quadrado);

    return 0;
}