#include <stdio.h>

int main() {
    float total = 780000;
    float primeiro, segundo, terceiro;

    primeiro = total * 0.46;
    segundo = total * 0.32;
    terceiro = total - primeiro - segundo;

    printf("Primeiro: %.2f\n", primeiro);
    printf("Segundo: %.2f\n", segundo);
    printf("Terceiro: %.2f", terceiro);

    return 0;
}