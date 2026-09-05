#include <stdio.h>

int main() {
    float altura, peso;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);

    if (sexo == 'M' || sexo == 'm')
        peso = (72.7 * altura) - 58;
    else if (sexo == 'F' || sexo == 'f')
        peso = (62.1 * altura) - 44.7;
    else {
        printf("Sexo invalido\n");
        return 0;
    }

    printf("Peso ideal: %.2f kg\n", peso);

    return 0;
}
