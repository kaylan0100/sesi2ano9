#include <stdio.h>

int main() {
    int idade, anoAtual, anoNascimento;

    scanf("%d", &idade);
    scanf("%d", &anoAtual);

    anoNascimento = anoAtual - idade;

    printf("%d", anoNascimento);

    return 0;
}