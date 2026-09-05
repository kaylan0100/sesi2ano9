#include <stdio.h>
#include <math.h>

int main() {
    float n;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n >= 0)
        printf("Raiz quadrada: %.2f\n", sqrt(n));
    else
        printf("Numero invalido\n");

    return 0;
}
