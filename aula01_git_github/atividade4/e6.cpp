#include <stdio.h>

int main() {
    int a, b, diferenca;

    printf("Digite dois numeros: ");
    scanf("%d %d", &a, &b);

    if (a > b) {
        diferenca = a - b;
        printf("Maior: %d\n", a);
    } else {
        diferenca = b - a;
        printf("Maior: %d\n", b);
    }

    printf("Diferenca: %d\n", diferenca);

    return 0;
}
