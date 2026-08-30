#include <stdio.h>

int main() {
    float radianos, graus;

    scanf("%f", &radianos);

    graus = radianos * 180 / 3.14;

    printf("%.2f", graus);

    return 0;
}