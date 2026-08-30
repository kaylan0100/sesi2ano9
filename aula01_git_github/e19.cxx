#include <stdio.h>

int main() {
    float litros, metrosCubicos;

    scanf("%f", &litros);

    metrosCubicos = litros / 1000;

    printf("%.2f", metrosCubicos);

    return 0;
}