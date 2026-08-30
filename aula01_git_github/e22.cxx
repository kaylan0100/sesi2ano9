#include <stdio.h>

int main() {
    float jardas, metros;

    scanf("%f", &jardas);

    metros = 0.91 * jardas;

    printf("%.2f", metros);

    return 0;
}