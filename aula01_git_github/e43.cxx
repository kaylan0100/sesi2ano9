#include <stdio.h>

int main() {
    float total, desconto, parcela, comissaoVista, comissaoParcelada;

    scanf("%f", &total);

    desconto = total - (total * 0.10);
    parcela = total / 3;
    comissaoVista = desconto * 0.05;
    comissaoParcelada = total * 0.05;

    printf("A vista: %.2f\n", desconto);
    printf("Parcelas: %.2f\n", parcela);
    printf("Comissao a vista: %.2f\n", comissaoVista);
    printf("Comissao parcelada: %.2f", comissaoParcelada);

    return 0;
}