#include <stdio.h>

int main() {
    float metrosQuadrados, hectares;

    scanf("%f", &metrosQuadrados);

    hectares = metrosQuadrados * 0.0001;

    printf("%.4f", hectares);

    return 0;
}