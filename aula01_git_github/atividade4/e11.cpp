#include <stdio.h>

int main() {
    int n, soma = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido\n");
        return 0;
    }

    while (n > 0) {
        soma += n % 10;
        n /= 10;
    }

    printf("Soma dos algarismos: %d\n", soma);

    return 0;
}
