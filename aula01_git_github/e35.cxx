#include <stdio.h>
#include <math.h>

int main() {
    float a, b, hipotenusa;

    scanf("%f", &a);
    scanf("%f", &b);

    hipotenusa = sqrt(a * a + b * b);

    printf("%.2f", hipotenusa);

    return 0;
}