#include <stdio.h>

int main() {
    float kg, libras;

    scanf("%f", &kg);

    libras = kg / 0.45;

    printf("%.2f", libras);

    return 0;
}
