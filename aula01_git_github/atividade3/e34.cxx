#include <stdio.h>

int main() {
    float raio, area;

    scanf("%f", &raio);

    area = 3.141592 * raio * raio;

    printf("%.2f", area);

    return 0;
}
