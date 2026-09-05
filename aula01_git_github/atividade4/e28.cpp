#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z, opcao;
    float media;

    printf("Digite tres numeros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    if (x <= 0 || y <= 0 || z <= 0) {
        printf("Numeros invalidos\n");
        return 0;
    }

    printf("1 - Geometrica\n");
    printf("2 - Ponderada\n");
    printf("3 - Harmonica\n");
    printf("4 - Aritmetica\n");

    printf("Escolha: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            media = cbrt(x * y * z);
            printf("Media geometrica: %.2f\n", media);
            break;

        case 2:
            media = (x + 2 * y + 3 * z) / 6.0;
            printf("Media ponderada: %.2f\n", media);
            break;

        case 3:
            media = 1.0 / (1.0/x + 1.0/y + 1.0/z);
            printf("Media harmonica: %.2f\n", media);
            break;

        case 4:
            media = (x + y + z) / 3.0;
            printf("Media aritmetica: %.2f\n", media);
            break;

        default:
            printf("Opcao invalida\n");
    }

    return 0;
}
