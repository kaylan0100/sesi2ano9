#include <stdio.h>

int main() {
    float salarioBase, salarioFinal;

    scanf("%f", &salarioBase);

    salarioFinal = salarioBase + (salarioBase * 0.05) - (salarioBase * 0.07);

    printf("%.2f", salarioFinal);

    return 0;
}
