#include <stdio.h>

int main() {
    float fahrenheit, celsius;

    scanf("%f", &fahrenheit);

    celsius = 5.0 * (fahrenheit - 32.0) / 9.0;

    printf("%.2f", celsius);

    return 0;
}