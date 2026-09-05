#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a, b, resposta;
    int acertos = 0;

    srand(time(NULL));

    for (int i = 1; i <= 5; i++) {
        a = rand() % 100 + 1;
        b = rand() % 100 + 1;

        printf("\nQuestao %d\n", i);
        printf("Qual e a soma de %d + %d? ", a, b);
        scanf("%d", &resposta);

        printf("Resposta correta: %d\n", a + b);

        if (resposta == a + b) {
            printf("Acertou!\n");
            acertos++;
        } else {
            printf("Errou!\n");
        }
    }

    printf("\nVoce acertou %d de 5 questoes.\n", acertos);

    return 0;
}
