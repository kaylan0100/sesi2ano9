#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma de 2 numeros\n");
    printf("2 - Diferenca entre 2 numeros\n");
    printf("3 - Produto entre 2 numeros\n");
    printf("4 - Divisao entre 2 numeros\n");

    printf("Escolha a opcao: ");
    scanf("%d", &opcao);

    if (opcao < 1 || opcao > 4) {
        printf("Opcao invalida\n");
        return 0;
    }

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;

        case 2:
            if (a > b)
                printf("Resultado: %.2f\n", a - b);
            else
                printf("Resultado: %.2f\n", b - a);
            break;

        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;

        case 4:
            if (b == 0)
                printf("Denominador nao pode ser zero\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
    }

    return 0;
}
