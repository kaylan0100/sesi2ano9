#include <stdio.h>

int main() {
    float hectares, metrosQuadrados;

    scanf("%f", &hectares);

    metrosQuadrados = hectares * 10000;

    printf("%.2f", metrosQuadrados);

    return 0;
}
