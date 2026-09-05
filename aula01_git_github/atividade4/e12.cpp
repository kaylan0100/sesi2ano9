#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Numero invalido\n");
    else
        printf("Logaritmo: %.2f\n", log(n));

    return 0;
}
