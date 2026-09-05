#include <stdio.h>

int main() {
    float salario, reajuste, salarioFinal;
    int tempo;
    float bonus = 0;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    printf("Digite o tempo de servico em anos: ");
    scanf("%d", &tempo);

    if (salario <= 500)
        reajuste = 0.25;
    else if (salario <= 1000)
        reajuste = 0.20;
    else if (salario <= 1500)
        reajuste = 0.15;
    else if (salario <= 2000)
        reajuste = 0.20;
    else
        reajuste = 0;

    if (tempo < 1)
        bonus = 0;
    else if (tempo <= 3)
        bonus = 100;
    else if (tempo <= 6)
        bonus = 200;
    else if (tempo <= 10)
        bonus = 300;
    else
        bonus = 500;

    salarioFinal = salario + salario * reajuste + bonus;

    if (reajuste == 0 && bonus == 0)
        printf("Funcionario nao tem direito a aumento\n");
    else
        printf("Salario final: R$ %.2f\n", salarioFinal);

    return 0;
}
