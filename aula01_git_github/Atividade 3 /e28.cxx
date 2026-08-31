#include <stdio.h>

int main() {
    float a, b, c, resultado;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);

    resultado = a * a + b * b + c * c;

    printf("%.2f", resultado);

    return 0;
}
