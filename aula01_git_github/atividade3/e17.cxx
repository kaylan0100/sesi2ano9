#include <stdio.h>

int main() {
    float centimetros, polegadas;

    scanf("%f", &centimetros);

    polegadas = centimetros / 2.54;

    printf("%.2f", polegadas);

    return 0;
}
