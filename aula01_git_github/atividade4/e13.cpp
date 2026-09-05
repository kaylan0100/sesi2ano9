#include <stdio.h>

int main() {
    float n1, n2, n3, media;

    printf("Digite as tres notas: ");
    scanf("%f %f %f", &n1, &n2, &n3);

    media = (n1 + n2 + 2 * n3) / 4;

    printf("Media: %.2f\n", media);

    if (media >= 60)
        printf("Aprovado\n");
    else
        printf("Reprovado\n");

    return 0;
}
