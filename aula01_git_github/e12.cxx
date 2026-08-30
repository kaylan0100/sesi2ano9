#include <stdio.h>

int main() {
    float milhas, km;

    scanf("%f", &milhas);

    km = 1.61 * milhas;

    printf("%.2f", km);

    return 0;
}