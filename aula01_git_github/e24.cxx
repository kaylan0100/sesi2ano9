#include <stdio.h>

int main() {
    float metrosQuadrados, acres;

    scanf("%f", &metrosQuadrados);

    acres = metrosQuadrados * 0.000247;

    printf("%.4f", acres);

    return 0;
}