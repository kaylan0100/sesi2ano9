#include <stdio.h>

int main() {
    int numero;

    scanf("%d", &numero);

    printf("%d\n", numero / 1000);
    printf("%d\n", (numero / 100) % 10);
    printf("%d\n", (numero / 10) % 10);
    printf("%d", numero % 10);

    return 0;
}
