#include <stdio.h>

int main() {
    float comprimento, largura, precoMetro;
    float perimetro, custo;

    scanf("%f", &comprimento);
    scanf("%f", &largura);
    scanf("%f", &precoMetro);

    perimetro = 2 * comprimento + 2 * largura;

    custo = perimetro * precoMetro;

    printf("Custo total: %.2f", custo);

    return 0;
}