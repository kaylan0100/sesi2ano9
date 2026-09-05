#include <stdio.h>

int main() {
    int opcao;
    float a, b;

    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    printf("Escolha: ");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &a, &b);

    switch (opcao) {
        case 1:
            printf("Resultado: %.2f\n", a + b);
            break;
        case 2:
            printf("Resultado: %.2f\n", a - b);
            break;
        case 3:
            printf("Resultado: %.2f\n", a * b);
            break;
        case 4:
            if (b == 0)
                printf("Nao e possivel dividir por zero\n");
            else
                printf("Resultado: %.2f\n", a / b);
            break;
        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
