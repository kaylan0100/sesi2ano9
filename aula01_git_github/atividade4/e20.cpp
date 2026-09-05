#include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os tres lados: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a <= 0 || b <= 0 || c <= 0 ||
        a >= b + c || b >= a + c || c >= a + b) {
        printf("Nao formam um triangulo\n");
    }
    else if (a == b && b == c) {
        printf("Triangulo equilatero\n");
    }
    else if (a == b || a == c || b == c) {
        printf("Triangulo isosceles\n");
    }
    else {
        printf("Triangulo escaleno\n");
    }

    return 0;
}
