#include <stdio.h>

int main() {
    float km, milhas;

    scanf("%f", &km);

    milhas = km / 1.61;

    printf("%.2f", milhas);

    return 0;
}
