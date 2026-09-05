#include <stdio.h>

int main() {
    float nota;
    int faltas;

    printf("Digite a nota: ");
    scanf("%f", &nota);

    printf("Digite o numero de faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0)
        printf("Conceito: %c\n", faltas > 20 ? 'B' : 'A');
    else if (nota >= 7.5)
        printf("Conceito: %c\n", faltas > 20 ? 'C' : 'B');
    else if (nota >= 5.0)
        printf("Conceito: %c\n", faltas > 20 ? 'D' : 'C');
    else if (nota >= 4.0)
        printf("Conceito: %c\n", faltas > 20 ? 'E' : 'D');
    else
        printf("Conceito: E\n");

    return 0;
}
