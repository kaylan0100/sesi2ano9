#include <stdio.h>

int main() {
    float altura, raio, volume;

    scanf("%f", &altura);
    scanf("%f", &raio);

    volume = 3.141592 * raio * raio * altura;

    printf("%.2f", volume);

    return 0;
}
