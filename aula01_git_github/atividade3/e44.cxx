#include <stdio.h>

int main() {
    float alturaDegrau, alturaDesejada;
    int degraus;

    scanf("%f", &alturaDegrau);
    scanf("%f", &alturaDesejada);

    degraus = alturaDesejada / alturaDegrau;

    printf("%d", degraus);

    return 0;
}
