#include <stdio.h>

int main() {
    float lado, area;

    scanf("%f", &lado);

    area = lado * lado;

    printf("%.2f", area);

    return 0;
}