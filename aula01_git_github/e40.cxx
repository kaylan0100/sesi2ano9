#include <stdio.h>

int main() {
    int dias;
    float salarioBruto, salarioLiquido;

    scanf("%d", &dias);

    salarioBruto = dias * 30;
    salarioLiquido = salarioBruto - (salarioBruto * 0.08);

    printf("%.2f", salarioLiquido);

    return 0;
}