#include <stdio.h>

int main() {
    float peso, altura, imc;

    printf("Digite o peso: ");
    scanf("%f", &peso);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    if (altura <= 0) {
        printf("Altura invalida\n");
        return 0;
    }

    imc = peso / (altura * altura);

    printf("IMC: %.2f\n", imc);

    if (imc < 18.5)
        printf("Abaixo do peso\n");
    else if (imc < 25)
        printf("Saudavel\n");
    else if (imc < 30)
        printf("Peso em excesso\n");
    else if (imc < 35)
        printf("Obesidade Grau I\n");
    else if (imc < 40)
        printf("Obesidade Grau II (severa)\n");
    else
        printf("Obesidade Grau III (morbida)\n");

    return 0;
}
