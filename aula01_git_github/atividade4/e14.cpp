#include <stdio.h>

int main() {
    float lab, avaliacao, exame, media;

    printf("Digite a nota do laboratorio: ");
    scanf("%f", &lab);

    printf("Digite a nota da avaliacao: ");
    scanf("%f", &avaliacao);

    printf("Digite a nota do exame: ");
    scanf("%f", &exame);

    if (lab < 0 || lab > 10 || avaliacao < 0 || avaliacao > 10 ||
        exame < 0 || exame > 10) {
        printf("Nota invalida\n");
        return 0;
    }

    media = (lab * 2 + avaliacao * 3 + exame * 5) / 10;

    printf("Media: %.2f\n", media);

    if (media < 3)
        printf("Reprovado\n");
    else if (media < 5)
        printf("Recuperacao\n");
    else
        printf("Aprovado\n");

    return 0;
}
