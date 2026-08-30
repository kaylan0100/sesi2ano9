#include <stdio.h>

int main() {
    float acres, metrosQuadrados;

    scanf("%f", &acres);

    metrosQuadrados = acres * 4048.58;

    printf("%.2f", metrosQuadrados);

    return 0;
}