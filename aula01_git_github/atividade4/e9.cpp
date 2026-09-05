#include <stdio.h>

int main() {
    float salario, prestacao;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao: ");
    scanf("%f", &prestacao);

    if (prestacao > salario * 0.20)
        printf("Emprestimo nao concedido\n");
    else
        printf("Emprestimo concedido\n");

    return 0;
}
