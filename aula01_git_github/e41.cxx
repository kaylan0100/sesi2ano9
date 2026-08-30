#include <stdio.h>

int main() {
    float valorHora, salario;
    int horas;

    scanf("%f", &valorHora);
    scanf("%d", &horas);

    salario = valorHora * horas;
    salario = salario + (salario * 0.10);

    printf("%.2f", salario);

    return 0;
}