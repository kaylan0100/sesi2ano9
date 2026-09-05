#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (baseMaior <= 0 || baseMenor <= 0) {
        printf("Bases invalidas\n");
        return 0;
    }

    area = ((baseMaior + baseMenor) * altura) / 2;

    printf("Area: %.2f\n", area);

    return 0;
}
