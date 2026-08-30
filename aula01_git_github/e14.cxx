#include <stdio.h>

int main() {
    float graus, radianos;

    scanf("%f", &graus);

    radianos = graus * 3.14 / 180;

    printf("%.2f", radianos);

    return 0;
}