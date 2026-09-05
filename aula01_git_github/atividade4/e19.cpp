#include <stdio.h>

int main() {
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if ((n % 3 == 0) != (n % 5 == 0))
        printf("Divisivel por 3 ou por 5, mas nao pelos dois\n");
    else
        printf("Nao atende a condicao\n");

    return 0;
}
