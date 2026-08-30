#include <stdio.h>
#include <math.h>

int main() {
    float x, y, distancia;

    scanf("%f", &x);
    scanf("%f", &y);

    distancia = sqrt(x * x + y * y);

    printf("%.2f", distancia);

    return 0;
}