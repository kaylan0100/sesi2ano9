#include <stdio.h>

int main() {
    float preco, aumento, novoPreco;

    printf("Digite o preco antigo: ");
    scanf("%f", &preco);

    if (preco <= 50)
        aumento = 0.05;
    else if (preco <= 100)
        aumento = 0.10;
    else
        aumento = 0.15;

    novoPreco = preco + preco * aumento;

    printf("Novo preco: R$ %.2f\n", novoPreco);

    if (novoPreco <= 80)
        printf("Barato\n");
    else if (novoPreco <= 120)
        printf("Normal\n");
    else if (novoPreco <= 200)
        printf("Caro\n");
    else
        printf("Muito caro\n");

    return 0;
}
