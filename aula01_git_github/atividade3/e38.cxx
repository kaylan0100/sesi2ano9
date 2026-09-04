#include <stdio.h>

int main() {
    float salario, novoSalario;

    scanf("%f", &salario);

    novoSalario = salario + (salario * 0.25);

    printf("%.2f", novoSalario);

    return 0;
}
