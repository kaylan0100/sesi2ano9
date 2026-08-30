#include <stdio.h>

int main() {
    float polegadas, centimetros;

    scanf("%f", &polegadas);

    centimetros = polegadas * 2.54;

    printf("%.2f", centimetros);

    return 0;
}