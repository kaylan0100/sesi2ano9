#include <stdio.h>

int main() {
    float celsius, kelvin;

    scanf("%f", &celsius);

    kelvin = celsius + 273.15;

    printf("%.2f", kelvin);

    return 0;
}