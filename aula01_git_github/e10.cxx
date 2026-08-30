#include <stdio.h>

int main() {
    float kmh, ms;

    scanf("%f", &kmh);

    ms = kmh / 3.6;

    printf("%.2f", ms);

    return 0;
}