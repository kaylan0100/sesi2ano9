#include <stdio.h>

int main() {
    float kelvin, celsius;

    scanf("%f", &kelvin);

    celsius = kelvin - 273.15;

    printf("%.2f", celsius);

    return 0;
}
