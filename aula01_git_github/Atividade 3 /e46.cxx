#include <stdio.h>

int main() {
    int numero, centena, dezena, unidade, invertido;

    scanf("%d", &numero);

    centena = numero / 100;
    dezena = (numero / 10) % 10;
    unidade = numero % 10;

    invertido = unidade * 100 + dezena * 10 + centena;

    printf("%d", invertido);

    return 0;
}
