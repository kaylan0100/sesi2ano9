#include <stdio.h>

int main() {
    int idade, tempo;

    printf("Digite a idade: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico: ");
    scanf("%d", &tempo);

    if (idade >= 65 || tempo >= 30 || (idade >= 60 && tempo >= 25))
        printf("Pode se aposentar\n");
    else
        printf("Nao pode se aposentar\n");

    return 0;
}
