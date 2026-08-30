#include <stdio.h>

int main() {
    float metrosCubicos, litros;

    scanf("%f", &metrosCubicos);

    litros = 1000 * metrosCubicos;

    printf("%.2f", litros);

    return 0;
}
