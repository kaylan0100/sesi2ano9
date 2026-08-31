#include <stdio.h>

int main() {
    float aposta1, aposta2, aposta3, premio;
    float total, ganho1, ganho2, ganho3;

    scanf("%f", &aposta1);
    scanf("%f", &aposta2);
    scanf("%f", &aposta3);
    scanf("%f", &premio);

    total = aposta1 + aposta2 + aposta3;

    ganho1 = premio * aposta1 / total;
    ganho2 = premio * aposta2 / total;
    ganho3 = premio * aposta3 / total;

    printf("Amigo 1: %.2f\n", ganho1);
    printf("Amigo 2: %.2f\n", ganho2);
    printf("Amigo 3: %.2f", ganho3);

    return 0;
}
