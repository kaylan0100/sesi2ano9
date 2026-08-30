#include <stdio.h>

int main() {
    float reais, cotacao, dolares;

    scanf("%f", &reais);
    scanf("%f", &cotacao);

    dolares = reais / cotacao;

    printf("%.2f", dolares);

    return 0;
}